#include <bit>
#include <cstdint>
#include <iostream>

#ifndef NRALUOP
#define NRALUOP 8
#define ALUcontrol_N std::log2(NRALUOP)
#endif

#ifndef N_UOP_CYCLE
#define N_UOP_CYCLE 4
#endif

#define DEBUG 0
using namespace std;

#define TESTING_INPUT 1
#define TESTING_INTERNAL 1
#define TESTING_OUTPUT 1

void uOp_router_check_output (int ARCHBITWIDTH , Vooo_extension *top) {
    log_set_prefix("UOP_ROUTER");
    
    //INPUT
    // Assumiamo che il bus 1024-bit sia esposto come array di uint32_t
    //const uint32_t sel = top->ALUControl_in; // controlla nell'header .h 
    if ( TESTING_INPUT ) {
	const uint32_t sel = top->rootp->ooo_extension__DOT__ALUControl; 
	for (int i = 0; i < N_UOP_CYCLE; i++) {
	    log_info() << "ALUControl[" << i <<"]: " << extract_bits(sel, ALUcontrol_N*i, ALUcontrol_N)  << endl; 
	}
	const uint32_t uop_Router_res_entry_idx_in = top->rootp->ooo_extension__DOT__Router_res_entry_idx_in; 
	for (int i = 0; i < NRALUOP; i++) {
	    log_info() << "uop_Router_res_entry_idx_in[" << i <<"]: " << extract_bits(uop_Router_res_entry_idx_in, 3*i, 3)  << endl; 
	}
    }
    //OUTPUT				 
    if ( TESTING_OUTPUT ) {
	const uint32_t* bus1 = top->rootp->ooo_extension__DOT__Router_rs1_directed_o; 
	const uint32_t* bus2 = top->rootp->ooo_extension__DOT__Router_rs2_directed_o;
	for (int i = 0; i < (NRALUOP * N_UOP_CYCLE); ++i) {
	    const int base = ARCHBITWIDTH * i;

	    // Estrai fino a 64 bit per confronto/stampa
	    const uint64_t extracted1 = partsel_wide64(bus1, base, ARCHBITWIDTH);
	    const uint64_t extracted2 = partsel_wide64(bus2, base, ARCHBITWIDTH);
	    for (int j = 0 ; j < N_UOP_CYCLE; j ++ ) {
		if (int(extracted1) == int(top->Rs1_in[j])) {
		    log_info() << "Rs1_origin: " << int(top->Rs1_in[j])
			      << ", Router_rs1_directed_o: " << extracted1
			      << " found match at exit: " 
			      << (i / N_UOP_CYCLE)
			      << " prallelism: "
			      << j 
			      << "\n";
		}
		if (int(extracted2) == int(top->Rs2_in[j])) {
		    log_info() << "Rs1_origin: " << int(top->Rs2_in[j])
			      << ", Router_rs2_directed_o: " << extracted2
			      << " found match at exit: " 
			      << (i / N_UOP_CYCLE)
			      << " prallelism: "
			      << j 
			      << "\n";
		}
	    }
	    
	    if (DEBUG) {
	    cout << "[ DEBUG ] Router_rs1_directed_o just to check: " << extracted1 
		 << " trying to check exit: " 
		 << (i / N_UOP_CYCLE) 
		 << " (extracted1) " 
		 << top->Rs1_in[i/NRALUOP]
		 << " RS1 INPUT "
		 << endl;
	    }
	}
	const uint32_t uop_Router_res_entry_idx_directed_o = top->rootp->ooo_extension__DOT__Router_res_entry_idx_directed_o; 
	for (int i = 0; i < NRALUOP; i++) {
	    log_info() << "uop_Router_res_entry_idx_directed_o[" << i <<"]: " << extract_bits(uop_Router_res_entry_idx_directed_o, 3*i, 3)  << " -> "; 
	    print_bits(extract_bits(uop_Router_res_entry_idx_directed_o, 3*i, 3));
	    log_info() << endl;
	}
	
    }
}
