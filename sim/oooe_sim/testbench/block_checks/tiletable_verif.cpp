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

void tiletable_checks(Vooo_extension *top, int ARCHBITWIDTH) {
    log_set_prefix("TILE_TABLE_U");

    if ( TESTING_INPUT ) {
	log_warn() << "TESTING INPUT" << endl;
	uint32_t* TT_Tile_entry_in = top->rootp->ooo_extension__DOT__TileTable_u__DOT__Tile_entry_in;
	for ( int i = 0 ; i < NRALUOP*2; i++) { 
	    uint64_t extracted_TT_Tile_entry_in = partsel_wide64(TT_Tile_entry_in, 42*i , 42);
	    log_info() << "TileTable Tile_entry: " << i << " value of: " << extracted_TT_Tile_entry_in << " -> ";
	    print_bits(extracted_TT_Tile_entry_in);
	    log_info() << endl;
	}
	for ( int i = 0 ; i < NRALUOP*2; i++) { 
	    uint64_t extracted_TT_Tile_entry_in_id = partsel_wide64(TT_Tile_entry_in, 42*i+9 , 32);
	    log_info() << "TileTable entry Rs ID: " << i << " value of: " << extracted_TT_Tile_entry_in_id << " -> ";
	    print_bits(extracted_TT_Tile_entry_in_id);
	    log_info() << endl;
	}
	    log_info() << endl;

	uint32_t* TT_Rd_in = top->rootp->ooo_extension__DOT__TileTable_u__DOT__Rd_in;
	for ( int i = 0 ; i < NRALUOP; i++) { 
	    uint64_t extracted_TT_Rd_in = partsel_wide64(TT_Rd_in, 32*i , 32);
	    log_info() << "TileTable extracted_TT_Rd_in: " << i << " value of: " << extracted_TT_Rd_in << " -> ";
	    print_bits(extracted_TT_Rd_in);
	    log_info() << endl;
	}
	    log_info() << endl;
    }

    if ( TESTING_INTERNAL ) {
	log_warn() << "TESTING INTERNAL" << endl;

	uint32_t* Tile_entry_in_internal = top->rootp->ooo_extension__DOT__TileTable_u__DOT__Tile_entry_in_internal;
	for ( int i = 0 ; i < NRALUOP; i++) { 
	    uint64_t extracted_Tile_entry_in_internal = partsel_wide64(Tile_entry_in_internal, 42*i , 42);
	    log_info() << "TileTable Tile_entry_in_internal: " << i << " value of: " << extracted_Tile_entry_in_internal << " -> ";
	    print_bits(extracted_Tile_entry_in_internal);
	    log_info() << endl;
	}

	uint32_t* TT_tile_mem_array = top->rootp->ooo_extension__DOT__TileTable_u__DOT__tile_mem_array;
	for ( int i = 0 ; i < TT_ENTRIES; i++) {
	    uint64_t extracted_TT_tile_mem_array = partsel_wide64(TT_tile_mem_array, 42*i , 42);
	    log_info() << "TileTable extracted_TT_tile_mem_array[" << i << "] value of: " << extracted_TT_tile_mem_array << " -> ";
	    print_bits(extracted_TT_tile_mem_array);
	    log_info() << endl;
	}
	    log_info() << endl;

	uint32_t* TT_rs_id = top->rootp->ooo_extension__DOT__TileTable_u__DOT__tile_mem_array;
	for ( int i = 0 ; i < TT_ENTRIES; i++) { 
	    uint64_t extracted_TT_rs_id = partsel_wide64(TT_rs_id, 42*i+9 , 32);
	    log_info() << "TileTable extracted_TT_rs_id: " << i << " value of: " << extracted_TT_rs_id << " -> ";
	    print_bits(extracted_TT_rs_id);
	    log_info() << endl;
	}
	    log_info() << endl;

	uint32_t* TT_content_arbitered_idx = top->rootp->ooo_extension__DOT__TileTable_u__DOT__TT_content_arbitered_idx;
	for ( int i = 0 ; i < NRALUOP; i++) {
	    uint64_t extracted_TT_content_arbitered_idx = partsel_wide64(TT_content_arbitered_idx, 4*i , 4);
	    log_info() << "TileTable extracted_TT_content_arbitered_idx[" << i << "] value of: " << extracted_TT_content_arbitered_idx << " -> ";
	    log_info() << endl;
	}

	//uint32_t* TT_content_to_arbiter_i = top->rootp->ooo_extension__DOT__TileTable_u__DOT__TT_content_to_arbiter_i;
	//for ( int i = 0 ; i < TT_ENTRIES; i++) {
	 //   uint64_t extracted_TT_content_to_arbiter_i = partsel_wide64(TT_content_to_arbiter_i, 42*i , 42);
	 //   log_info() << "TileTable extracted_TT_content_to_arbiter_i[" << i << "] value of: " << extracted_TT_content_to_arbiter_i << " -> ";
	//    print_bits(extracted_TT_content_to_arbiter_i);
	//    log_info() << endl;
	//}
	    log_info() << endl;
	//uint32_t* TT_arbitring_mask = top->rootp->ooo_extension__DOT__TileTable_u__DOT__arbitring_mask;
	//for ( int i = 0 ; i < NRALUOP; i++) {
	//    uint64_t extracted_TT_arbitring_mask = partsel_wide64(TT_arbitring_mask, TT_ENTRIES*i , TT_ENTRIES);
	//    log_info() << "TileTable extracted_TT_arbitring_mask[" << i << "] value of: " << extracted_TT_arbitring_mask << " -> ";
	//    print_bits(extracted_TT_arbitring_mask);
	//    log_info() << endl;
	//}
	//    log_info() << endl;
//	uint32_t* TT_arbitring_valid_i = top->rootp->ooo_extension__DOT__TileTable_u__DOT__TT_arbitring_valid_i;
//	for ( int i = 0 ; i < NRALUOP; i++) {
//		uint16_t extracted_TT_arbitring_valid_i = partsel_wide64(TT_arbitring_valid_i, TT_ENTRIES*i , TT_ENTRIES);
//		log_info() << "TileTable TT_arbitring_valid_i[" << i << "] value of: " << extracted_TT_arbitring_valid_i << " -> ";
//		print_bits(extracted_TT_arbitring_valid_i);
//	    log_info() << endl;
//	}
//	log_info() << endl;

//	uint32_t* TT_arb_sel = top->rootp->ooo_extension__DOT__TileTable_u__DOT__arb_sel;
//
//	for ( int i = 0 ; i < NRALUOP; i++) {
//	    uint16_t extracted_TT_arb_sel = partsel_wide64(TT_arb_sel, TT_ENTRIES*i , TT_ENTRIES);
//    	    log_info() << "TileTable extracted_TT_arb_sel[" << i << "] value of: " << extracted_TT_arb_sel << " -> ";
//	    print_bits(extracted_TT_arb_sel);
//	    log_info() << endl;
//	}
//	log_info() << endl;
	
	uint32_t* TT_entry_to_mem_match = top->rootp->ooo_extension__DOT__TileTable_u__DOT__TT_entry_to_mem_match;
	for ( int i = 0 ; i < TT_ENTRIES; i++) {
	    uint16_t extracted_TT_entry_to_mem_match = partsel_wide64(TT_entry_to_mem_match, TT_ENTRIES*i , TT_ENTRIES*2);
    	    log_info() << "TileTable TT_entry_to_mem_match[" << i << "] value of: " << extracted_TT_entry_to_mem_match << " -> ";
	    print_bits(extracted_TT_entry_to_mem_match);
	    log_info() << endl;
	}
	log_info() << endl;

//	uint32_t TT_entry_match = top->rootp->ooo_extension__DOT__TileTable_u__DOT__TT_entry_match;
//	uint16_t extracted_TT_entry_match = extract_bits(TT_entry_match, 0 , NRALUOP*2);
//	log_info() << "TileTable TT_entry_match value of: " << extracted_TT_entry_match << " -> ";
//	print_bits(extracted_TT_entry_match);
//	log_info() << endl;
//
//	log_info() << endl;

	uint32_t* TT_signal1_merge_i = top->rootp->ooo_extension__DOT__TileTable_u__DOT__signal1_merge_i;
	for ( int i = 0 ; i < TT_ENTRIES; i++) {
	    uint64_t extracted_TT_signal1_merge_i = partsel_wide64(TT_signal1_merge_i, 42*i , 42);
    	    log_info() << "TileTable extracted_TT_signal1_merge_i[" << i << "] value of: " << extracted_TT_signal1_merge_i << " -> ";
	    print_bits(extracted_TT_signal1_merge_i);
	    log_info() << endl;
	}
	log_info() << endl;

	uint32_t* TT_signal2_merge_i = top->rootp->ooo_extension__DOT__TileTable_u__DOT__signal2_merge_i;
	for ( int i = 0 ; i < TT_ENTRIES; i++) {
	    uint64_t extracted_TT_signal2_merge_i = partsel_wide64(TT_signal2_merge_i, 42*i , 42);
    	    log_info() << "TileTable extracted_TT_signal2_merge_i[" << i << "] value of: " << extracted_TT_signal2_merge_i << " -> ";
	    print_bits(extracted_TT_signal2_merge_i);
	    log_info() << endl;
	}
	log_info() << endl;
	
	uint32_t* TT_Merged_signal_o = top->rootp->ooo_extension__DOT__TileTable_u__DOT__Merged_signal_o;
	for ( int i = 0 ; i < TT_ENTRIES; i++) {
	    uint64_t extracted_TT_Merged_signal_o = partsel_wide64(TT_Merged_signal_o, 42*i , 42);
    	    log_info() << "TileTable extracted_TT_Merged_signal_o[" << i << "] value of: " << extracted_TT_Merged_signal_o << " -> ";
	    print_bits(extracted_TT_Merged_signal_o);
	    log_info() << endl;
	}
	log_info() << endl;

	//uint32_t TT_clear_mem_entry = top->rootp->ooo_extension__DOT__TileTable_u__DOT__clear_mem_entry;
	//for ( int i = 0 ; i < TT_ENTRIES; i++) {
	//    uint32_t extracted_TT_clear_mem_entry = extract_bits(TT_clear_mem_entry, i , 1);
    	//    log_info() << "TileTable extracted_TT_clear_mem_entry[" << i << "] value of: " << extracted_TT_clear_mem_entry << " -> ";
	//    print_bits(extracted_TT_clear_mem_entry);
	//    log_info() << endl;
	//}
	//log_info() << endl;

	log_warn() << "TESTING OUTPUT" << endl;

	uint32_t* TT_Clos_pkg_o = top->rootp->ooo_extension__DOT__TT_Clos_pkg_o;
	
	for ( int i = 0 ; i < TT_ENTRIES; i++) {
	    uint64_t extracted_TT_Clos_pkg_o = partsel_wide64(TT_Clos_pkg_o, 10*i, 10);
    	    log_info() << "TileTable extracted_TT_Clos_pkg_o[" << i << "] value of: " << extracted_TT_Clos_pkg_o << " -> ";
	    print_bits(extracted_TT_Clos_pkg_o);
	    log_info() << endl;
	}
	for ( int i = 0 ; i < TT_ENTRIES; i++) {
	    uint64_t extracted_tileptr = partsel_wide64(TT_Clos_pkg_o, 10*i+4, 2);
    	    log_info() << "TileTable tileptr out[" << i << "] value of: " << extracted_tileptr << " -> ";
	    print_bits(extracted_tileptr);
	    log_info() << endl;
	}
	log_info() << endl;

    }


}
