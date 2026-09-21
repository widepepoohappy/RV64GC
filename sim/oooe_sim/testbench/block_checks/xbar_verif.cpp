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

void xbar_checks(Vooo_extension *top) {
    log_set_prefix("XBAR_U");

    if ( TESTING_INPUT ) {
	log_warn() << "TESTING INPUT" << endl;
	uint32_t* XBAR_data_in = top->rootp->ooo_extension__DOT__XBAR_data_in;
	for ( int i = 0 ; i < NRALUOP*2; i++) {
	    uint32_t extracted_XBAR_data_in = partsel_wide64(XBAR_data_in, 32*i , 32);
	    log_info() << "XBAR extracted_XBAR_data_in: " << i << " value of: " << extracted_XBAR_data_in << " -> ";
	    print_bits(extracted_XBAR_data_in);
	    log_info() << endl;
	}
	    log_info() << endl;
	    
	uint32_t* XBAR_sel_in = top->rootp->ooo_extension__DOT__XBAR_sel_in;
	for ( int i = 0 ; i < NRALUOP*2; i++) {
	    uint16_t extracted_XBAR_sel_in = partsel_wide64(XBAR_sel_in, NRALUOP*2*i , NRALUOP*2);
	    log_info() << "XBAR extracted_XBAR_sel_in: " << i << " value of: " << extracted_XBAR_sel_in << " -> ";
	    print_bits(extracted_XBAR_sel_in);
	    log_info() << endl;
	}
	    log_info() << endl;
    }

    if ( TESTING_OUTPUT ) {
	log_warn() << "TESTING  OUTPUT" << endl;

	uint32_t* XBAR_data_o = top->rootp->ooo_extension__DOT__XBAR_data_o;
	for ( int i = 0 ; i < NRALUOP*2; i++) {
	    uint32_t extracted_XBAR_data_o = partsel_wide64(XBAR_data_o, 32*i , 32);
	    log_info() << "XBAR extracted_XBAR_data_o: " << i << " value of: " << extracted_XBAR_data_o << " -> ";
	    print_bits(extracted_XBAR_data_o);
	    log_info() << endl;
	}
	    log_info() << endl;

	uint32_t XBAR_valid_o = top->rootp->ooo_extension__DOT__XBAR_valid_o;
	//for ( int i = 0 ; i < NRALUOP*2; i++) {
	    uint32_t extracted_XBAR_valid_o = extract_bits(XBAR_valid_o, 0 , 32);
	    log_info() << "XBAR extracted_XBAR_valid_o: " << " value of: " << extracted_XBAR_valid_o << " -> ";
	    print_bits(extracted_XBAR_valid_o);
	    log_info() << endl;
	}
	    log_info() << endl;
	    
    //}
}
