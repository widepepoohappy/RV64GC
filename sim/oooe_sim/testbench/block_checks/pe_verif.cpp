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

void pe_checks(Vooo_extension *top) {
    log_set_prefix("PE_U");

    if ( TESTING_INPUT ) {
	
	log_warn() << "TESTING INPUT" << endl;
	uint32_t* PE_A_input = top->rootp->ooo_extension__DOT__ALU_operandA;
	for ( int i = 0 ; i < NRALUOP; i++) {
	    //uint32_t extracted_PE_A_input = partsel_wide64(PE_A_input, 32*i , 32);
	    uint32_t extracted_PE_A_input = partsel_wide64(PE_A_input, 32*i , 32);
	    log_info() << "PE extracted_PE_A_input: " << i << " value of: " << extracted_PE_A_input << " -> ";
	    print_bits(extracted_PE_A_input);
	    log_info() << endl;
	}
	log_info() << endl;


	uint32_t* PE_B_input = top->rootp->ooo_extension__DOT__ALU_operandB;
	for ( int i = 0 ; i < NRALUOP; i++) {
	    //uint32_t extracted_PE_B_input = partsel_wide64(PE_B_input, 32*i , 32);
	    uint32_t extracted_PE_B_input = partsel_wide64(PE_B_input, 32*i , 32);
	    log_info() << "PE extracted_PE_B_input: " << i << " value of: " << extracted_PE_B_input << " -> ";
	    print_bits(extracted_PE_B_input);
	    log_info() << endl;
	}
	log_info() << endl;

	uint32_t* PE_Rd_in_input = top->rootp->ooo_extension__DOT__PE_Rd_in;
	for ( int i = 0 ; i < NRALUOP; i++) {
	    //uint32_t extracted_PE_Rd_in_input = partsel_wide64(PE_Rd_in_input, 32*i , 32);
	    uint32_t extracted_PE_Rd_in_input = partsel_wide64(PE_Rd_in_input, 32*i , 32);
	    log_info() << "PE extracted_PE_Rd_in_input: " << i << " value of: " << extracted_PE_Rd_in_input << " -> ";
	    print_bits(extracted_PE_Rd_in_input);
	    log_info() << endl;
	}
	log_info() << endl;
    }

    if ( TESTING_OUTPUT ) {


    log_warn() << "TESTING OUTPUT" << endl;
	uint32_t* ALUResult = top->rootp->ooo_extension__DOT__ALUResult;
	for ( int i = 0 ; i < NRALUOP; i++) {
	    uint32_t extracted_ALUResult = partsel_wide64(ALUResult, 32*i , 32);
	    log_info() << "PE extracted_ALUResult: " << i << " value of: " << extracted_ALUResult << " -> ";
	    print_bits(extracted_ALUResult);
	    log_info() << endl;
	}
	    log_info() << endl;


	uint32_t* Rd_out = top->rootp->ooo_extension__DOT__PE_Rd_out;
	for ( int i = 0 ; i < NRALUOP; i++) {
	    uint32_t extracted_Rd_out = partsel_wide64(Rd_out, 32*i , 32);
	    log_info() << "PE extracted_Rd_out: " << i << " value of: " << extracted_Rd_out << " -> ";
	    print_bits(extracted_Rd_out);
	    log_info() << endl;
	}
	log_info() << endl;

    }


}






