#include <bit>
#include <cstdint>
#include <iostream>
#include "Vooo_extension_piso__N4_RB4.h"
#include <string>
#include <cmath>
#include <nlohmann/json.hpp>

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

void print_wide(const VlWide<16>& w, int W) {
    int words = (W + 31) / 32;
    int valid_bits_last = W % 32;
    uint32_t mask = valid_bits_last ? ((1u << valid_bits_last) - 1) : 0xFFFFFFFF;

    for (int i = words - 1; i >= 0; i--) {
        uint32_t v = w[i];
        if (i == words - 1)
            v &= mask;
        cout << dec << setw(8) << setfill('0') << v << "_";
    }
    cout << endl;
}

void prf_checks(Vooo_extension *top) {
    log_set_prefix("PRF_U");

    if ( TESTING_INPUT ) {
	log_warn() << "TESTING READ INPUT" << endl;
	uint32_t* read_reg_in = top->rootp->ooo_extension__DOT__PRF_u__DOT__read_reg_in;
	for ( int i = 0 ; i < NRALUOP*2; i++) {
	    uint64_t extracted_read_reg_in = partsel_wide64(read_reg_in, 32*i , 32);
	    log_info() << "PRF extracted_read_reg_in: " << i << " value of: " << extracted_read_reg_in << " -> ";
	    print_bits(extracted_read_reg_in);
	    log_info() << endl;
	}
	    log_info() << endl;

	log_warn() << "TESTING WRITE INPUT" << endl;
	uint32_t* write_reg_in = top->rootp->ooo_extension__DOT__PRF_write_addr_in;
	for ( int i = 0 ; i < NRALUOP; i++) {
	    uint64_t extracted_write_reg_in = partsel_wide64(write_reg_in, 32*i , 32);
	    log_info() << "PRF extracted_write_reg_in: " << i << " value of: " << extracted_write_reg_in << " -> ";
	    print_bits(extracted_write_reg_in);
	    log_info() << endl;
	}
	    log_info() << endl;
	uint32_t* write_data_in = top->rootp->ooo_extension__DOT__PRF_write_data_in;
	for ( int i = 0 ; i < NRALUOP; i++) {
	    uint64_t extracted_write_data_in = partsel_wide64(write_data_in, 32*i , 32);
	    log_info() << "PRF extracted_write_data_in: " << i << " value of: " << extracted_write_data_in << " -> ";
	    print_bits(extracted_write_data_in);
	    log_info() << endl;
	}
	    log_info() << endl;


	
	uint32_t* read_addr_valid_in = top->rootp->ooo_extension__DOT__PRF_read_addr_valid_in;
	for ( int i = 0 ; i < NRALUOP; i++) {
	    uint64_t extracted_read_addr_valid_in = partsel_wide64(read_addr_valid_in, 32*i , 32);
	    log_info() << "PRF extracted_read_addr_valid_in: " << i << " value of: " << extracted_read_addr_valid_in << " -> ";
	    print_bits(extracted_read_addr_valid_in);
	    log_info() << endl;
	}
	    log_info() << endl;


    }
    if ( TESTING_INTERNAL ) {
	


	log_warn() << "TESTING INTERNAL" << endl;
	uint32_t bypass = top->rootp->ooo_extension__DOT__PRF_u__DOT__bypass;
	for ( int j = 0 ; j < NRALUOP; j++) {
	    log_info() << "  bypass "<< j <<" : " << bypass << endl;
	    //uint32_t extracted_read_data_o = partsel_wide64(read_data_o, 32*j , 32);
	    //log_info() << "PRF extracted_read_data_o: " << i << " value of: " << extracted_read_data_o << " -> ";
	    //print_bits(extracted_read_data_o);
	    //log_info() << endl;
	}
	    log_info() << endl;

    	uint32_t* PRF_entry = top->rootp->ooo_extension__DOT__PRF_u__DOT__PRF_entry;
	for ( int i = 0 ; i < 32; i++) {
	    //log_info() << "  PRF_entry "<< i <<" : " << PRF_entry[i] << endl;
	    int32_t extracted_read_data_o = partsel_wide64(PRF_entry, 33*i , 32);
	    int32_t extracted_valid_entry = partsel_wide64(PRF_entry, 33*i+32 , 1);
	    log_info() << "PRF_entry: " << i << " value of: " << extracted_read_data_o << " valid: " << extracted_valid_entry;
	    //print_bits(extracted_read_data_o);
	    log_info() << endl;
	}
	    log_info() << endl;
	

    }
    if ( TESTING_OUTPUT ) {
	log_warn() << "TESTING OUTPUT" << endl;

	uint32_t data_valid_o = top->rootp->ooo_extension__DOT__PRF_u__DOT__data_valid_o;
	    //log_info() << " data_valid_o : " << data_valid_o << endl;
	    uint32_t extracted_data_valid_o = extract_bits(data_valid_o, 0 , NRALUOP*2);
	    log_info() << "PRF extracted_data_valid_o: value of: " << extracted_data_valid_o << " -> ";
	    print_bits(extracted_data_valid_o);
	    log_info() << endl;
	    log_info() << endl;

	 
	uint32_t* read_data_o = top->rootp->ooo_extension__DOT__PRF_u__DOT__read_data_o;

	for ( int j = 0 ; j < NRALUOP*2; j++) {
	    log_info() << " read data : " << read_data_o[j] << endl;
	    uint32_t extracted_read_data_o = partsel_wide64(read_data_o, 32*j , 32);
	    //log_info() << "PRF extracted_read_data_o: " << i << " value of: " << extracted_read_data_o << " -> ";
	    //print_bits(extracted_read_data_o);
	    //log_info() << endl;
	}
	    log_info() << endl;

	uint32_t read_valid_o = top->rootp->ooo_extension__DOT__PRF_u__DOT__read_valid_o;
	//log_info() << " data_valid_o : " << data_valid_o << endl;
	uint32_t extracted_read_valid_o = extract_bits(read_valid_o, 0 , NRALUOP*2);
	log_info() << "PRF read_valid_o: value of: " << extracted_read_valid_o << " -> ";
	print_bits(extracted_read_valid_o);
	log_info() << endl;
	log_info() << endl;

    }

}
