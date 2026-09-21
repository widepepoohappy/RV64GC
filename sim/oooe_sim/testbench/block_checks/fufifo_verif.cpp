#include <bit>
#include <cstdint>
#include <iostream>
#include "Vooo_extension_piso__N4_RB4.h"
#include <string>
#include <cmath>

#ifndef NRALUOP
#define NRALUOP 8
#define ALUcontrol_N std::log2(NRALUOP)
#endif

#ifndef N_UOP_CYCLE
#define N_UOP_CYCLE 4
#endif

#ifndef RS_ENTRY_WIDTH
#define RS_ENTRY_WIDTH 80
#endif

#ifndef RAT_T_WIDTH
#define RAT_T_WIDTH 33
#endif


#ifndef TT_ENTRIES
#define TT_ENTRIES 10
#endif

#define DEBUG 0
using namespace std;

#define TESTING_INPUT 1
#define TESTING_INTERNAL 1
#define TESTING_OUTPUT 1
#define DEBUG 0

void fufifo_checks(Vooo_extension *top) {
    log_set_prefix("FU_FIFO_U");

    if ( TESTING_INPUT ) {
	
	log_warn() << "TESTING INPUT" << endl;
	uint32_t* data_i = top->rootp->ooo_extension__DOT__PE_fifo_data_in;
	for ( int i = 0 ; i < NRALUOP*3; i++) {
	    uint32_t extracted_data_i = partsel_wide64(data_i, 32*i , 32);
	    log_info() << "FU_FIFO extracted_data_i: " << i << " value of: " << extracted_data_i << " -> ";
	    print_bits(extracted_data_i);
	    log_info() << endl;
	}
	    log_info() << endl;
    }

    if ( TESTING_OUTPUT ) {


    log_warn() << "TESTING OUTPUT" << endl;
	uint32_t* data_o = top->rootp->ooo_extension__DOT__PE_fifo_data_o;
	for ( int i = 0 ; i < NRALUOP*3; i++) {
	    uint32_t extracted_data_o = partsel_wide64(data_o, 32*i , 32);
	    log_info() << "FU_FIFO extracted_data_o: " << i << " value of: " << extracted_data_o << " -> ";
	    print_bits(extracted_data_o);
	    log_info() << endl;
	}
	    log_info() << endl;

	
	    	uint32_t rdy_o = top->rootp->ooo_extension__DOT__PE_fifo_rdy_o;
	    uint32_t extracted_rdy_o = extract_bits(rdy_o, 0, 32);
	    log_info() << "FU_FIFO extracted_rdy_o: "  << " value of: " << extracted_rdy_o << " -> ";
	    print_bits(extracted_rdy_o);
	    log_info() << endl;
	}
	    log_info() << endl;


}





