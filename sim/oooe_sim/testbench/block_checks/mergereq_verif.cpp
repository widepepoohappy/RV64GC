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

void mergereq_checks(Vooo_extension *top) {
    log_set_prefix("MREQ_U");

    
    if ( TESTING_INPUT ) {
	log_warn() << "TESTING INPUT" << endl;
	uint32_t* MREQ_payload_in = top->rootp->ooo_extension__DOT__MERGE_payload_in;
	for ( int i = 0 ; i < NRALUOP*2; i++) { 
	    uint64_t extracted_MREQ_payload_in = partsel_wide64(MREQ_payload_in, 32*i , 32);
	    log_info() << "MREQ extracted_MREQ_payload_in: " << i << " value of: " << extracted_MREQ_payload_in << " -> ";
	    print_bits(extracted_MREQ_payload_in);
	    log_info() << endl;
	}
	    log_info() << endl;

    }
    
    uint16_t payload_valid_in = top->rootp->ooo_extension__DOT__MERGE_requests_u__DOT__payload_valid_in;
    int16_t extract_payload_valid_in = extract_bits(payload_valid_in, 0 , 16);
    	log_info() << "payload_valid_in value of: " << extract_payload_valid_in << " -> ";
	print_bits(extract_payload_valid_in);
	log_info() << endl;

    uint16_t MREQ_payload_in = top->rootp->ooo_extension__DOT__MERGE_requests_u__DOT__valid_mask;
    int16_t extract_MREQ_payload_in = extract_bits(MREQ_payload_in, 0 , 16);
    	log_info() << "MREQ_payload_in value of: " << extract_MREQ_payload_in << " -> ";
	print_bits(extract_MREQ_payload_in);
	log_info() << endl;


    uint16_t valid_int = top->rootp->ooo_extension__DOT__MERGE_requests_u__DOT__valid_int;
    int16_t extract_valid_int = extract_bits(valid_int, 0 , 16);
    	log_info() << "extract_valid_int " << extract_valid_int << " -> ";
	print_bits(extract_valid_int);
	log_info() << endl;

	
    if ( TESTING_OUTPUT) {

	log_warn() << "TESTING OUTPUT" << endl;
	uint32_t* MREQ_payload_o = top->rootp->ooo_extension__DOT__MERGE_payload_o;
	for ( int i = 0 ; i < NRALUOP*2; i++) { 
	    uint64_t extracted_MREQ_payload_o = partsel_wide64(MREQ_payload_o, 32*i , 32);
	    log_info() << "MREQ extracted_MREQ_payload_o: " << i << " value of: " << extracted_MREQ_payload_o << " -> ";
	    print_bits(extracted_MREQ_payload_o);
	    log_info() << endl;
	}
	    log_info() << endl;

	uint32_t* MREQ_regview = top->rootp->ooo_extension__DOT__MERGE_reg_view_o;
	for ( int i = 0 ; i < NRALUOP*2; i++) { 
	    uint16_t extracted_MREQ_regview = partsel_wide64(MREQ_regview, NRALUOP*2*i , NRALUOP*2);
	    log_info() << "MREQ extracted_MREQ_regview: " << i << " value of: " << extracted_MREQ_regview << " -> ";
	    print_bits(extracted_MREQ_regview);
	    log_info() << endl;
	}
	    log_info() << endl;

    }
}
