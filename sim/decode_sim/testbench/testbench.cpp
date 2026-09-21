// tb_main.cpp
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vblob_decoder.h"
#include "Vblob_decoder___024root.h"
#include <vpi_user.h>					     
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

// tb libraries
#include <fstream>
#include <random>
#include <iostream>
#include <bitset>
#include <cmath>
#include "../../verilator_utils.h"
#include "../../logger.cpp"
#include "../../libs/file_utils.hpp"
#include "../../tb_utils.h"
#include "../../rv_utils.cpp"
#include "block_checks/block_verif.h"

#define BUNIT 16
#define PRF_DEPTH 32
#define ARCHBITWIDTH std::log2(PRF_DEPTH) 

// How many 16 bit instruction we can decode per cycle
#define INSTR_PARALLELISM 8

#define VCD false
#define NUM_CYCLES 5
#define MAIN_DEBUG 1
// Tempo simulazione (unità arbitrarie)
static vluint64_t sim_time = 0;
using namespace eventio;
using namespace std;

void tick(Vblob_decoder* top, VerilatedVcdC* tfp, int clock_cycle) {
    // fronte basso
    top->clk_i = 0;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    if (MAIN_DEBUG) std::cout << endl << "˙˙⋅.˳˳.⋅˙˙⋅.˳˳.⋅ clk tick " << clock_cycle << " ˙˙⋅.˳˳.⋅˙˙⋅.˳˳.⋅ " << endl << endl ;
    // fronte alto
    top->clk_i = 1;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
}

int main(int argc, char** argv) {
    // Inizializza Verilator e parsing argomen_iti
    log_set_prefix("TOP");
    log_set_tag_colors(ansi::YELLOW,ansi::MAGENTA,ansi::RED,ansi::BLUE);
    Vblob_decoder* top = new Vblob_decoder;    
    json diz = json::object();

    auto rv_instr = load_elf("../program_test/rv_instr.txt");


    Verilated::commandArgs(argc, argv);

    // Abilita tracing VCD PRIMA di creare il modello
    Verilated::traceEverOn(true);

    // Crea istanza del modello
    top->eval();

    // Crea il file VCD
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, /*levels*/ 99);
    tfp->open("wave.vcd");

    // Reset iniziale
    top->rst_ni = 0;
    top->en_i    = 0;
    // Applica qualche ciclo di reset
    for (int i = 0; i < 4; ++i) {
       	tick(top, tfp, i);
	//rename_checks(top);
	
    }
    
    // Rilascia reset
    top->rst_ni = 1;
    // Fase di simulazione: abilita en_i e fai scorrere N cicli
    top->en_i = 1;

    int base = 0;
    int base1 = 0;
    int flag_comp = 0;
    bool place_holder = false;
    int idx = 0;
    
    // Stato tra cicli
    static bool carry_valid = false;
    static uint16_t carry_hi16 = 0;
    
    int istr_indx = 0;
    for (int cycle = 0; cycle < NUM_CYCLES; ++cycle) {  
	// azzera il buffer di input del ciclo (se necessario)
	for (int k = 0; k < INSTR_PARALLELISM/2; ++k) {
	    top->instr_i[k] = 0;
	}
	idx = 0;
	
	// Se dal ciclo precedente avevamo un high-half da riversare,
	// mettilo nel LOW half del primo word e segnala che il word è "mezzo pieno".
	if (carry_valid) {
	    top->instr_i[idx] = carry_hi16;       // LOW 16 bit
	    place_holder = 1;                      // indica: low half già occupata
	    carry_valid = false;                   // consumato
	} else {
	    place_holder = 0;                      // nessun prefill
	}   
	for(int i = 0; i < INSTR_PARALLELISM; i	++ ) {
	    //top->instr_i = top->instr_i | instr_i[i] << BUNIT*i;
	    cout << hex <<  to_uint(rv_instr[base + i][0]) << endl;
	    //print_wide32(top->instr_i[i], 1, 32, 0, "test", 32);
	}
	    
    	log_set_prefix("TOP");	
	for(int i = 0; i < INSTR_PARALLELISM; i	++ ) {
	    //top->instr_i = top->instr_i | instr_i[idx] << BUNIT*i;
	    for(int j = BUNIT; j < BUNIT*2; j++) {
		flag_comp |= to_uint(rv_instr[base + i][0]) & (0x1 << j);
	    }
	    cout << "flag_comp: "<< flag_comp << endl;
	    cout << "place_holder: "<< place_holder << endl;

	// This means that if flag != 0 the instr is not compressed
	    if(flag_comp == 0 && place_holder == 0) {
		top->instr_i[idx] = to_uint(rv_instr[base + i][0]);
		print_wide32(top->instr_i[idx], 1, 32, 0, "instr_i ", 32);
	    } else if (flag_comp == 0 && place_holder == 1) {
		top->instr_i[idx] = top->instr_i[idx] | (to_uint(rv_instr[base + i][0]) << BUNIT);
		print_wide32(top->instr_i[idx], 1, 32, 0, "instr_i ", 32);
		idx++;
	    } else if (flag_comp != 0 && place_holder == 1) {
		uint32_t val = static_cast<uint32_t>(to_uint(rv_instr[base + i][0]));
		uint16_t lo16 = static_cast<uint16_t>( val        & 0xFFFFu);
		uint16_t hi16 = static_cast<uint16_t>((val >> 16) & 0xFFFFu);

		// Completa il word corrente mettendo lo16 nei bit alti
		top->instr_i[idx] = (top->instr_i[idx] | (static_cast<uint32_t>(lo16) << BUNIT));
		print_wide32(top->instr_i[idx], 1, 32, 0, "instr_i ", 32);

		// Prossima parola (idx+1) DEVE ricevere hi16 nei bit bassi.
		// Ma potremmo non avere più spazio in questo ciclo.
		if (idx + 1 < (INSTR_PARALLELISM/2)) {
		    // c'è spazio: scriviamo subito
		    top->instr_i[idx + 1] = hi16;     // LOW half
		    place_holder = 0;                  // il nuovo word ha solo LOW half occupata (coerente col tuo toggle)
		    idx++;
		} else {
		    // NON c'è spazio: spilla nei registri carry per il ciclo successivo
		    carry_hi16 = hi16;
		    carry_valid = true;
		    place_holder = 0;  // chiudi il word corrente
		    idx++;             // abbiamo usato il word corrente
		    // opzionale: esci dal for interno perché il batch è pieno
		    break;
		}
	    }else if (flag_comp != 0 && place_holder == 0) {
		top->instr_i[idx] = (to_uint(rv_instr[base + i][0]));
		print_wide32(top->instr_i[idx], 1, 32, 0, "instr_i ", 32);
		place_holder = 1;
		idx++;
	    }
	    cout << "idx : " << idx << endl;
	    if ( idx > (INSTR_PARALLELISM/2 - 1) ) break;
    	    place_holder ^= 1;
	    flag_comp = 0;
	}
	cout << "Number of WORD processed: " << idx;
	idx = 0;
	tick(top, tfp, cycle);
	cout << "base: " << base1 << " INSTR_PARALLELISM: " <<  INSTR_PARALLELISM << " Place holder: " <<  int(place_holder^1) << " result : " << base1 + INSTR_PARALLELISM + int(place_holder) <<  endl;

	int step = INSTR_PARALLELISM + (carry_valid ? 0 : 1);
	
	base  += step;
	base1 += step;
	

	uint32_t* instr_i = top->rootp->instr_i; 
	print_wide64(instr_i, INSTR_PARALLELISM/2, 32, 0, "instr_i ", 32);
	blob_decoder_verif(top);
	
    }
    top->en_i = 0;
    for (int i = 0; i < 2; ++i) tick(top, tfp, i);

    tfp->close();
    delete tfp;
    top->final();
    delete top;

    return 0;
}



