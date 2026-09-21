// tb_main.cpp
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vrn_stage.h"
#include "Vrn_stage___024root.h"
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
#include "block_checks/block_verif.h"

#define NRALUOP 8
#define N_UOP_CYCLE 4
#define ALUcontrol_N std::log2(NRALUOP)
#define PRF_DEPTH 32
#define ARCHBITWIDTH std::log2(PRF_DEPTH) 

#define VCD false
#define NUM_CYCLES 5
#define MAIN_DEBUG 1

// Tempo simulazione (unità arbitrarie)
static vluint64_t sim_time = 0;
using namespace eventio;
using namespace std;

void tick(Vrn_stage* top, VerilatedVcdC* tfp, int clock_cycle) {
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
    Vrn_stage* top = new Vrn_stage;    
    // Inizializza Verilator e parsing argomen_iti
    json diz = json::object();

    log_set_prefix("TOP");
    log_set_tag_colors(ansi::YELLOW,ansi::MAGENTA,ansi::RED,ansi::BLUE);
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
	rename_checks(top);
	
    }
    
    // Rilascia reset
    top->rst_ni = 1;
    // Fase di simulazione: abilita en_i e fai scorrere N cicli
    top->en_i = 1;
    vector<int> Rs1_tmp;
    vector<int> Rs2_tmp;
    vector<int> Rd_tmp;
    for (int cycle = 0; cycle < NUM_CYCLES; ++cycle) {    
	for ( int i = 0; i < N_UOP_CYCLE; i ++ ) {
	    Rs1_tmp.push_back(gen_rand_un(10, ARCHBITWIDTH, 0x3));
	    Rs2_tmp.push_back(gen_rand_un(10, ARCHBITWIDTH, 0x3));
	    Rd_tmp.push_back(gen_rand_un(10, ARCHBITWIDTH, 0x3));
	}
	Rs1_tmp = make_unique_integers(Rs1_tmp);
	Rs2_tmp = make_unique_integers(Rs2_tmp);
	Rd_tmp = make_unique_integers(Rd_tmp);
	
	for ( int i = 0; i < N_UOP_CYCLE; i++ ) {
	    //cout << "Using these registers for this test: " << endl;
	    //cout << "Rs1: " << Rs1_tmp[i] << endl;
	    //cout << "Rs2: " << Rs2_tmp[i] << endl;
	    //cout << "Rd: " << Rd_tmp[i] << endl;
	    top->Rs1_i = top->Rs1_i | Rs1_tmp[i] << int(i*ADRR_WIDTH);
	    top->Rs2_i = top->Rs2_i | Rs2_tmp[i] << int(i*ADRR_WIDTH);
	    top->Rd_i =top->Rd_i |  Rd_tmp[i] << int(i*ADRR_WIDTH);
	}
	tick(top, tfp, cycle);
	print_wide32(top->Rd_i, N_UOP_CYCLE, ADRR_WIDTH, 0, "Rd_i", ADRR_WIDTH); 
	


	rename_checks(top);

    }
    top->en_i = 0;
    for (int i = 0; i < 2; ++i) tick(top, tfp, i);

    tfp->close();
    delete tfp;
    top->final();
    delete top;

    return 0;
}



