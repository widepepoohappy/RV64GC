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
#define TT_ENTRIES 20
#endif

#define DEBUG 0
using namespace std;

#define TESTING_INPUT 1
#define TESTING_INTERNAL 1
#define TESTING_OUTPUT 1
#define DEBUG 0

void validgenerator_checks(Vooo_extension *top, int ARCHBITWIDTH) {
    log_set_prefix("VG_U");

    if ( TESTING_INPUT ) {
	log_warn() << "TESTING INPUT" << endl;
	uint32_t* VG_Clos_pkg_in = top->rootp->ooo_extension__DOT__RES_valid_generator_u__DOT__Clos_pkg_in;
	for ( int i = 0 ; i < TT_ENTRIES; i++) { 
	    uint64_t extracted_VG_Clos_pkg_in = partsel_wide64(VG_Clos_pkg_in, 10*i , 10);
	    log_info() << "VG extracted_VG_Clos_pkg_in: " << i << " value of: " << extracted_VG_Clos_pkg_in << " -> ";
	    print_bits(extracted_VG_Clos_pkg_in);
	    log_info() << endl;
	}
	    log_info() << endl;

	//uint32_t reg_ready_in = top->rootp->ooo_extension__DOT__RES_valid_generator_u__DOT__reg_ready_in;
	//uint32_t extracted_reg_ready_in = extract_bits(reg_ready_in, 0 , NRALUOP*2);
	//    log_info() << "VG extracted_reg_ready_in value of: " << extracted_reg_ready_in << " -> ";
	//    print_bits(extracted_reg_ready_in);
	//    log_info() << endl;


//	uint32_t* encoded_tile_in = top->rootp->ooo_extension__DOT__RES_valid_generator_u__DOT__encoded_tile_in;
//	for ( int i = 0 ; i < NRALUOP*2; i++) { 
//	    uint8_t extracted_encoded_tile_in = partsel_wide64(encoded_tile_in, 8*i , 8);
//	    log_info() << "VG extracted_encoded_tile_in " << i << " value of: " << extracted_encoded_tile_in << " -> ";
//	    print_bits(extracted_encoded_tile_in);
//	    log_info() << endl;
//	}

    }
    if ( TESTING_INTERNAL ) {
	log_warn() << "TESTING INTERNAL" << endl;
	uint32_t VG_res_id_TT = top->rootp->ooo_extension__DOT__RES_valid_generator_u__DOT__res_id_TT;
	for ( int i = 0 ; i < TT_ENTRIES; i++) { 
	    uint16_t extracted_VG_res_id_TT = extract_bits(VG_res_id_TT, 3*i , 3);
	    log_info() << "VG extracted_VG_res_id_TT " << i << " value of: " << extracted_VG_res_id_TT << " -> ";
	    print_bits(extracted_VG_res_id_TT);
	    log_info() << endl;
	}
	    log_info() << endl;

	uint32_t VG_tile_within_res_TT = top->rootp->ooo_extension__DOT__RES_valid_generator_u__DOT__tile_within_res_TT;
	//uint32_t VG_tile_within_res_TT = top->rootp->ooo_extension__DOT__RES_valid_generator_u__DOT__unnamedblk1__DOT__tile_within_res_TT;
	for ( int i = 0 ; i < TT_ENTRIES; i++) { 
	    uint16_t extracted_VG_tile_within_res_TT = extract_bits(VG_tile_within_res_TT, 2*i , 2);
	    log_info() << "VG extracted_VG_tile_within_res_TT: " << i << " value of: " << extracted_VG_tile_within_res_TT << " -> ";
	    print_bits(extracted_VG_tile_within_res_TT);
	    log_info() << endl;
	}
	    log_info() << endl;

	//uint32_t VG_res_id_Bypass = top->rootp->ooo_extension__DOT__RES_valid_generator_u__DOT__res_id_Bypass;
	//for ( int i = 0 ; i < TT_ENTRIES; i++) { 
	//    uint16_t extracted_VG_res_id_Bypass = extract_bits(VG_res_id_Bypass, 3*i , 3);
	//    log_info() << "VG extracted_VG_res_id_Bypass " << i << " value of: " << extracted_VG_res_id_Bypass << " -> ";
	//    print_bits(extracted_VG_res_id_Bypass);
	//    log_info() << endl;
	//}
	//    log_info() << endl;

	//uint32_t VG_tile_within_res_Bypass = top->rootp->ooo_extension__DOT__RES_valid_generator_u__DOT__tile_within_res_Bypass;
	////uint32_t VG_tile_within_res_Bypass = top->rootp->ooo_extension__DOT__RES_valid_generator_u__DOT__unnamedblk1__DOT__tile_within_res_Bypass;
	//for ( int i = 0 ; i < TT_ENTRIES; i++) { 
	//    uint16_t extracted_VG_tile_within_res_Bypass = extract_bits(VG_tile_within_res_Bypass, 2*i , 2);
	//    log_info() << "VG extracted_VG_tile_within_res_Bypass: " << i << " value of: " << extracted_VG_tile_within_res_Bypass << " -> ";
	//    print_bits(extracted_VG_tile_within_res_Bypass);
	//    log_info() << endl;
	//}
	//    log_info() << endl;

    }

	
//	uint32_t* VG_tile_within_res_TT = top->rootp->ooo_extension__DOT__RES_valid_generator_u__tile_within_res_TT;
//	for ( int i = 0 ; i < TT_ENTRIES; i++) { 
//	    uint64_t extracted_VG_tile_within_res_TT = partsel_wide64(VG_tile_within_res_TT, 8*i , 8);
//	    log_info() << "VG extracted_VG_tile_within_res_TT: " << i << " value of: " << extracted_VG_tile_within_res_TT << " -> ";
//	    print_bits(extracted_VG_tile_within_res_TT);
//	    log_info() << endl;
//	}
//	    log_info() << endl;
	if ( TESTING_OUTPUT ) {
	uint32_t* VG_Rs_valid_o = top->rootp->ooo_extension__DOT__RES_valid_generator_u__DOT__Rs_valid_o;
	for ( int i = 0 ; i < NRALUOP; i++) { 
	    uint16_t extracted_VG_Rs_valid_o = partsel_wide64(VG_Rs_valid_o, 16*i , 16);
	    log_info() << "VG extracted_VG_Rs_valid_o: " << i << " value of: " << extracted_VG_Rs_valid_o << " -> ";
	    print_bits(extracted_VG_Rs_valid_o);
	    log_info() << endl;
	}
	    log_info() << endl;
    }

    
}

