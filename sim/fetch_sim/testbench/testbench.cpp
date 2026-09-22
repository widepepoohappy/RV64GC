// tb_main.cpp
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vfetch.h"
#include "Vfetch___024root.h"
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
#define NUM_CYCLES 10
#define MAIN_DEBUG 1
// Tempo simulazione (unità arbitrarie)
static vluint64_t sim_time = 0;
using namespace eventio;
using namespace std;

void tick(Vfetch* top, VerilatedVcdC* tfp, int clock_cycle) {
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


// Stampa utility
static void dump_bytes_hex(const std::vector<uint8_t>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << std::uppercase << std::hex << std::setw(2) << std::setfill('0')
                  << (unsigned)v[i];
    }
    std::cout << std::dec << '\n';
}

int main(int argc, char** argv) {
    // Inizializza Verilator e parsing argomen_iti
    log_set_prefix("TOP");
    log_set_tag_colors(ansi::YELLOW,ansi::MAGENTA,ansi::RED,ansi::BLUE);
    Vfetch* top = new Vfetch;    
    json diz = json::object();


    const std::string mem_path = "mem.txt"; // file generato da write_memory_file    
    auto rv_instr = load_elf("../program_test/rv_instr.txt");
    write_memory_file(rv_instr,
    	/*out_path=*/mem_path,
	/*bytes_per_line=*/16,
	/*token_bytes=*/0,
	/*endian=*/Endian::Little);


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
    top->rootp->mem_ar_ready_i = 1;
    top->pull_instr_rq_i = 1;
    // Applica qualche ciclo di reset
    for (int i = 0; i < 4; ++i) {
       	tick(top, tfp, i);
	//rename_checks(top);
    }
    
    // Rilascia reset
    top->rst_ni = 1;
    top->flush_i = 0;
    // Fase di simulazione: abilita en_i e fai scorrere N cicli
    top->en_i = 1;

    // ################### CUSTOM TESTBENCH BHEAVIOUR START ####################

    // mimick ready for mem

    int burst_length = 0;
    int pc_ptr = 0;
    int burst_size = 0;
    int offset = 0;
    bool last_one = 1;
    bool activate_last_i = 0;
    fetch_verif(top);
    
    for (int cycle = 0; cycle < NUM_CYCLES; ++cycle) {
    for ( int i = 0; i <4; i++ ) {
	top->mem_r_data_i[i] = 0;
    }
    //checking initial state
	log_info() << "Looking at offset: " << offset << endl;

	top->mem_r_valid_i = 0;
	if(!last_one) {
	    top->mem_r_valid_i = 1;
	    auto bytes0 = read_bytes_at_pc(mem_path, /*pc=*/pc_ptr+(offset*16), /*size_bytes=*/burst_size);
	    std::cout << "Bytes @0";
	    dump_bytes_hex(bytes0);

	    u128 bytes0_to_u128 = 0;
	    bytes0_to_u128 = pack_u8s_to_u128_be(bytes0);
	    cout << "Bytes: " << int(bytes0_to_u128) << endl;
	    for ( int i = 0; i < 16; i++ ) {
		int index = i/4;
		int bit_shift = i%4;
		top->mem_r_data_i[index] = top->mem_r_data_i[index] | (bytes0[i] << 8*bit_shift);
	    }
	    offset++;
	    if(offset == burst_length) {
		offset = 0;
		last_one = 1;
		activate_last_i = 1;
	    } 
	    if(offset == burst_length) {
	    }
	}


	auto pc_ptr = top->rootp->fetch__DOT__PCCurr_o;
	cout << "PC POINTER " << pc_ptr << endl;
	
	if (int(top->rootp->fetch__DOT__mem_ar_valid_o) == 1) {
	    last_one = 0;
	    burst_length = int(top->rootp->fetch__DOT__mem_ar_len_o);
	    pc_ptr = int(top->rootp->fetch__DOT__PCCurr_o);
	    burst_size = pow(2,int(top->rootp->fetch__DOT__mem_ar_size_o));
	}
	

	if (activate_last_i) {
	    cout << "settiing last to 1" << endl;
	    top->mem_r_last_i = 1;	    
	    activate_last_i = 0;
    	} else {
	    top->mem_r_last_i = 0;    
	}

	tick(top, tfp, cycle);
	fetch_verif(top);
	
		
    }
    
    // ################### CUSTOM TESTBENCH BHEAVIOUR END ####################
    
    top->en_i = 0;
    for (int i = 0; i < 2; ++i) tick(top, tfp, i);

    tfp->close();
    delete tfp;
    top->final();
    delete top;

    return 0;
}




