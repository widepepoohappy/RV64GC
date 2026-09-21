// tb_main.cpp
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vooo_extension.h"                  // gen_ierato da Verilator
#include "Vooo_extension___024root.h"  
#include "Vooo_extension__Syms.h"	     // spesso necessario per rootp/simboli
#include "Vooo_extension_ooo_extension.h"    // definizione dei membri "flattened"
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
#include "../../tb_utils.h"
#include "../../logger.cpp"
#include "../../libs/file_utils.hpp"
#include "block_checks/block_verif.h"

#define NRALUOP 8
#define N_UOP_CYCLE 4
#define ALUcontrol_N std::log2(NRALUOP)
#define ARCHBITWIDTH 32

#define VCD false
#define NUM_CYCLES 20
#define MAIN_DEBUG 1

#define TB_OVERRIDE_TESTING_PARAMS 1
#define TESTING_MEM_COMPONENTS 1
#define TESTING_INTERNAL 1

#define TESTING_UOPROUTER 0
#define TESTING_PISO 1
#define TESTING_RS 1
#define TESTING_ENCODER 0
#define TESTING_TILETABLE 0
#define TESTING_VALIDGENERATOR 0
#define TESTING_MERGEREQUESTS 1
#define TESTING_PRF 1
#define TESTING_XBAR 1
#define TESTING_FU_FIFO 1
#define TESTING_PE 0
#define TESTING_EXTEND 0

// Tempo simulazione (unità arbitrarie)
static vluint64_t sim_time = 0;
using namespace eventio;
using namespace std;

// Tick: gestisce fronti di clock e dump VCD
void tick(Vooo_extension* top, VerilatedVcdC* tfp, int clock_cycle) {
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

void print_arch_params () {
    std::cout << "[ INFO ] Printing architectures parameters --- " << std::endl;
    std::cout << "[ INFO ] NRALUOP: " << NRALUOP << std::endl;
    std::cout << "[ INFO ] N_UOP_CYCLE: " << N_UOP_CYCLE << std::endl;
    std::cout << "[ INFO ] ARCHBITWIDTH: " << ARCHBITWIDTH << std::endl;
    std::cout << "[ INFO ] ALUcontrol_N: " << ALUcontrol_N << std::endl;
}

int main(int argc, char** argv) {
    // Inizializza Verilator e parsing argomen_iti
    json diz = json::object();

    log_set_prefix("TOP");
    log_set_tag_colors(ansi::YELLOW,ansi::MAGENTA,ansi::RED,ansi::BLUE);
    Verilated::commandArgs(argc, argv);

    // Abilita tracing VCD PRIMA di creare il modello
    Verilated::traceEverOn(true);

    // Crea istanza del modello
    Vooo_extension* top = new Vooo_extension;
    top->eval();
    print_arch_params();

    // Crea il file VCD
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, /*levels*/ 99);
    tfp->open("wave.vcd");

    // Reset iniziale
    top->rst_ni = 0;
    top->en_i    = 0;
    // Applica qualche ciclo di reset
    for (int i = 0; i < 4; ++i) tick(top, tfp, i);
    
    // Rilascia reset
    top->rst_ni = 1;
    
    // Fase di simulazione: abilita en_i e fai scorrere N cicli
    top->en_i = 1;
    vector<int> Rs1_tmp;
    vector<int> Rs2_tmp;
    vector<int> Rd_tmp;
    for (int cycle = 0; cycle < NUM_CYCLES; ++cycle) {
	
	for ( int i = 0; i < N_UOP_CYCLE; i ++ ) {
	    Rs1_tmp.push_back(gen_rand_un(30, ARCHBITWIDTH, 0x3));
	    Rs2_tmp.push_back(gen_rand_un(30, ARCHBITWIDTH, 0x3));
	    Rd_tmp.push_back(gen_rand_un(30, ARCHBITWIDTH, 0x3));
	}
	Rs1_tmp = make_unique_integers(Rs1_tmp);
	Rs2_tmp = make_unique_integers(Rs2_tmp);
	Rd_tmp = make_unique_integers(Rd_tmp);

	// Assign FETCH PARALLELISM with random instructions
	// Input signals to assign:
	// ALUControl + OP + Imm_in + Rs + Rd
	top->ALUControl_in = 0;	
	for (int i = 0; i < N_UOP_CYCLE; i ++ ) top->Rd_in[i] = 1;
	for ( int i = 0; i < N_UOP_CYCLE; i ++ ) {
	  // Generating a TOT BITWIDTH number that's being shifted
	  // According to the PACKED struct of the signals
    	    top->ALUControl_in = top->ALUControl_in | ((i+4*(cycle%2)) << i*int(ALUcontrol_N));

	  
	    //uint32_t tmp_rs1 = gen_rand_un(31, ARCHBITWIDTH);
	    //top->Rs1_in[i] = top->Rs1_in[i] | tmp_rs1;
	    top->Rs1_in[i] = Rs1_tmp[i];
	    top->Rs2_in[i] = Rs2_tmp[i];
	    top->Rd_in[i] = Rd_tmp[i];

	    //uint32_t tmp_rs2 = gen_rand_un(31, ARCHBITWIDTH);
	    //top->Rs2_in[i] = top->Rs2_in[i] | tmp_rs2;
	    //top->Rd_in[i] = top->Rd_in[i] | gen_rand_un(31, ARCHBITWIDTH-1);

	}
	//top->ALUControl_in = 0;
	//top->op = 16;		// Setting is_imm for 1th operation to true
	//for ( int i = 0; i < N_UOP_CYCLE; i ++ ) {
	//    top->Rs1_in[i] = 20;
	//    top->Rs2_in[i] = 20;
	//    top->Rd_in[i] = 10;
	//    
	//}
	if( cycle == 0 ) {
	    top->Imm_in = 0;
	    for ( int i = 0; i < N_UOP_CYCLE; i ++ ) {
	      uint16_t tmp_imm = gen_rand_un(10, 12, 0x3);
	      uint64_t shift_tmp = static_cast<uint64_t>(tmp_imm) << (12*i);
	      log_warn() << "Printing tmp_imm: " << tmp_imm << endl;
	      top->Imm_in |= static_cast<uint64_t>(tmp_imm) << (12*i);
	      log_warn() << "Printing top->IMM_IN: " << extract_bits64(top->Imm_in, 12*i, 12);
	      log_warn() << endl;
	      top->Rs1_in[i] =  0;
	    }
	    top->op = 0;
	    for ( int i = 0; i < N_UOP_CYCLE; i ++ ) {
		top->op = top->op | 16 << 7*i;		// Setting is_imm for 1th operation to true
	    }
	}
	//if( cycle == 1 ) {
	//       top->op = 0;		// Setting is_imm for 1th operation to true
	//}
	//if( cycle == 2 ) {
	//    top->Rs1_in[0] =  10;
	//    top->Rd_in[0] = 10;
    	//    top->op = 16;		// Setting is_imm for 1th operation to true
	//    top->Imm_in = 2;
	//    
	//}
	//if( cycle == 3 ) {
	//    top->Rs1_in[0] =  10;
	//    top->Rs2_in[0] =  7;
	//    top->Rd_in[0] = 10;
    	//    top->op = 16;		// Setting is_imm for 1th operation to true
	//    
	//}
	if( cycle == 7 ) {
	    top->ALUControl_in = top->ALUControl_in & 0xFF8;
	    top->Rs1_in[0] =  0;
	    top->Imm_in = 2;
	    top->Rd_in[0] = 20;
    	    top->op = 16;		// Setting is_imm for 1th operation to true
	    
	}
//	} else {
  //  	    for ( int i = 1; i < N_UOP_CYCLE/2 + 1; i ++ ) {
//		top->Rs1_in[i] = i*2;
//		top->Rs2_in[i] = (i*2+1);
//	    }	    
//	}
        tick(top, tfp, cycle);
	
	log_info() << "[ INFO ] PRINTING SOURCE REGISTER RS1 FOR EACH UOP PARALLELISM" << std::endl;
    	print_rs1(top);
    	print_rs2(top);
	for ( int i = 0; i < N_UOP_CYCLE; i++) {
	    log_info() << "Rd: " << top->Rd_in[i] ;
	    log_info() << endl;
	}
	log_info() << endl;
	log_info() << "TOP op: " << top->op << " -> ";
        print_bits(top->op);
	log_info() << endl;
	log_info() << "TOP Imm: " << top->Imm_in << " -> ";
        print_bits(top->Imm_in);
	log_info() << endl;
	log_info() << "TOP ALU Control: " << top->ALUControl_in << " -> ";
        print_bits(top->ALUControl_in);
	log_info() << endl;
	
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	// TESTING UOP ROUTER
	if ( TESTING_UOPROUTER ) {
	    uOp_router_check_output(ARCHBITWIDTH, top);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	// TESTING PISO
	if ( TESTING_PISO ) { 
	    piso_checks(top, ARCHBITWIDTH);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	// TESTING RESERVE STATION
	if( TESTING_RS ) {
	    rs_checks(top, ARCHBITWIDTH);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	// TESTING ENCODER
	if (TESTING_ENCODER) {
	    encoder_checks(top, ARCHBITWIDTH);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	if (TESTING_TILETABLE) {
	    tiletable_checks(top, ARCHBITWIDTH);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	if (TESTING_VALIDGENERATOR) {
	    validgenerator_checks(top, ARCHBITWIDTH);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	if (TESTING_MERGEREQUESTS) {
	    mergereq_checks(top);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	if (TESTING_PRF) {
	    prf_checks(top);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	if (TESTING_XBAR) {
	    xbar_checks(top);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	if (TESTING_FU_FIFO) {
	    fufifo_checks(top);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	if (TESTING_PE) {
	    pe_checks(top);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	if (TESTING_EXTEND) {
	    extend_checks(top);
	}
	std::cout << "--------------------------------------------------------------------------------------" << endl;	

	for ( int i = 0; i < N_UOP_CYCLE; i ++ ) {
	    int alucontrol = extract_bits(top->ALUControl_in, ALUcontrol_N*i, ALUcontrol_N);
	    int is_imm = extract_bits(top->op, 7*i+4, 1);
	    int Imm = extract_bits64(top->Imm_in, 12*i, 12);
	    //diz["cycle"][to_string(cycle)].push_back({{"uOp"+to_string(i),{ {"Rs1", tmp_rs1},{"Rs2", tmp_rs2}, {"Rd", int(top->Rd_in[i])} }}});
	    diz["cycle"][to_string(cycle)].push_back({{"uOp"+to_string(i),{ {"Rs1", int(top->Rs1_in[i])},{"Rs2", int(top->Rs2_in[i])}, {"Rd", int(top->Rd_in[i])} }}});
	    diz["cycle"][to_string(cycle)][i]["uOp"+to_string(i)].update({{"alucontrol", alucontrol}, {"is_imm", is_imm}, {"Imm", Imm}});
	}
	uint32_t* PRF_entry = top->rootp->ooo_extension__DOT__PRF_u__DOT__PRF_entry;
	
	diz["cycle"][to_string(cycle)].push_back({{"PRF_Content", json::object()}});
	for( int i = 0; i < 32; i ++ ) {
	    uint32_t PRF_entry_val = partsel_wide64(PRF_entry, 33*i, 32);
	    diz["cycle"][to_string(int(cycle))][4]["PRF_Content"].update({{"PRF_entry["+to_string(i)+"]", to_string(int(PRF_entry_val))}});
	}

	if (cycle == NUM_CYCLES-1 ) {
	    std::cout << "[ END ] SIMULATION FINISHED [ END ]" << endl; 
	}
	
	Rs1_tmp.clear();
	Rs2_tmp.clear();
	Rd_tmp.clear();
    }

    // Spegni en_i per un po’
    top->en_i = 0;
    for (int i = 0; i < 2; ++i) tick(top, tfp, i);

    // Chiudi traccia e pulisci
    //cout << diz.dump(2) << endl;
    ofstream out("dumps/results.json");
    if (!out) {
	std::cerr << "Errore: impossibile aprire dumps/results.json per scrittura\n";
	return 1;
    }
    //cout << diz.dump(2) << endl;
    out << diz.dump(2) << endl;

    tfp->close();
    delete tfp;
    top->final();
    delete top;

    return 0;
}



