#include <bit>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

#ifndef NRALUOP
#define NRALUOP 8
#define ALUcontrol_N std::log2(NRALUOP)
#endif

#ifndef N_UOP_CYCLE
#define N_UOP_CYCLE 4
#endif

#ifndef RS_DEPTH 
#define RS_DEPTH 8
#endif

#ifndef RS_ENTRY_WIDTH
#define RS_ENTRY_WIDTH 80
#endif

#ifndef RAT_T_WIDTH
#define RAT_T_WIDTH 33
#endif

#define DEBUG 0
using namespace std;

#define TESTING_INPUT 1
#define TESTING_INTERNAL 1
#define TESTING_OUTPUT 1
#define DEBUG 1

void encoder_checks(Vooo_extension *top, int ARCHBITWIDTH) {
    log_set_prefix("ENCODER_U");
    
    uint32_t* enc_Res_id_in = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__Res_id_in;
    


    if ( TESTING_INPUT ) {
	uint32_t* enc_Res_id_in = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__Res_id_in;
	for (int i = 0; i < NRALUOP; i++) {
	    uint32_t extracted_enc_enc_id_in = partsel_wide64(enc_Res_id_in, 32*i , 32);
	    log_info() << "Encoder  input: " << i << " enc_Res_id_in: " << extracted_enc_enc_id_in << " -> ";    
	    //print_bits(extracted_enc_enc_id_in);    
	    log_info() << endl;
	}

	uint32_t enc_Res_entry_idx_in = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__Res_entry_idx_in;
	for (int i = 0; i < NRALUOP; i++) {
	    uint32_t extracted_enc_Res_entry_idx_in = extract_bits(enc_Res_entry_idx_in, 3*i , 3);
	    log_info() << "Encoder  input: " << i << " enc_Res_entry_idx_in: " << extracted_enc_Res_entry_idx_in << " -> ";    
	    //print_bits(extracted_enc_Res_entry_idx_in);    
	    log_info() << endl;
	}

	uint32_t* enc_Rs1_in = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__Rs1_in;
	//uint64_t extracted_enc_Entry_Idx_slot_o = partsel_wide64(enc_Entry_Idx_slot_o, 0, 64);
	for (int i = 0; i < NRALUOP; i++) {
		uint32_t extracted_enc_Rs1_in = partsel_wide64(enc_Rs1_in, 32*i , 32);
	    if ( extracted_enc_Rs1_in != 0 ) {
		log_info() << "Encoder input: " << i << " extracted_enc_Rs1_in: " << extracted_enc_Rs1_in << " -> ";
		print_bits(extracted_enc_Rs1_in);
		log_info() << endl;
	    }
	}

	uint32_t* enc_Rs2_in = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__Rs2_in;
	for (int i = 0; i < NRALUOP; i++) {
	    uint32_t extracted_enc_Rs2_in = partsel_wide64(enc_Rs2_in, 32*i , 32);
	    if ( extracted_enc_Rs2_in != 0 ) {
		log_info() << "Encoder input: " << i << " extracted_enc_Res2_in: " << extracted_enc_Rs2_in << " -> ";
		print_bits(extracted_enc_Rs2_in);
		log_info() << endl;
	    }
	}     
    }
    if ( TESTING_INTERNAL ) { 
	uint32_t enc_RS1_VIEW_CONST = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__RS1_VIEW_CONST; 
	log_info() << "Encoder enc_RS1_VIEW_CONST " << enc_RS1_VIEW_CONST << " -> ";    
	print_bits(enc_RS1_VIEW_CONST);
	log_info() << endl;

	for(int i = 0 ; i < NRALUOP; i++) {
	    uint32_t enc_entry_id = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__entry_id;
	    uint16_t extracted_enc_entry_id  = extract_bits(enc_entry_id,i,1);
	    log_info() << "Encoder input: " << i << " enc_entry_id: " << extracted_enc_entry_id << " -> ";    
	    print_bits(extracted_enc_entry_id);
	    log_info() << endl;

	    uint32_t enc_upper_lower = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__upper_lower;
	    uint16_t extracted_enc_upper_lower  = extract_bits(enc_upper_lower,i,1);
	    log_info() << "Encoder input: " << i << " enc_upper_lower: " << extracted_enc_upper_lower << " -> ";    
	    print_bits(extracted_enc_upper_lower);
	    log_info() << endl;

	    uint32_t* enc_tmp = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__unnamedblk1__DOT__tmp;
	    uint16_t extracted_enc_tmp  = partsel_wide64(enc_tmp,i*32,32);
	    log_info() << "Encoder input: " << i << " extracted_enc_tmp: " << extracted_enc_tmp << " -> ";    
	    print_bits(extracted_enc_tmp);
	    log_info() << endl;
 
	    uint32_t enc_Rs1_tile_view = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__Rs1_tile_view;
	    uint16_t extracted_enc_Rs1_tile_view  = extract_bits(enc_Rs1_tile_view,4*i,4);
	    log_info() << "Encoder input: " << i << " enc_Rs1_tile_view: " << extracted_enc_Rs1_tile_view << " -> ";    
	    print_bits(extracted_enc_Rs1_tile_view);
	    log_info() << endl;
	    log_info() << endl;
	    uint32_t enc_Rs2_tile_view = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__Rs2_tile_view;
	    uint16_t extracted_enc_Rs2_tile_view  = extract_bits(enc_Rs2_tile_view,4*i,4);
	    log_info() << "Encoder input: " << i << " enc_Rs2_tile_view: " << extracted_enc_Rs2_tile_view << " -> ";    
	    print_bits(extracted_enc_Rs2_tile_view);
	    log_info() << endl;
	    log_info() << endl;
	}
    }

    if ( TESTING_OUTPUT ) {
	uint32_t* enc_Encoded_tile_o = top->rootp->ooo_extension__DOT__Tile_encoder_u__DOT__Encoded_tile_o;

    // Number of bytes in encoded tile
	for (int i = 0; i < NRALUOP*2; i++) {
	    uint64_t extracted_enc_Encoded_tile_o = partsel_wide64(enc_Encoded_tile_o, 42*i , 42);
	    log_info() << "Encoder  output: " << i << " enc_Res" << i%2 + 1<< "_encoded_tile_o: " << extracted_enc_Encoded_tile_o << " -> ";
	    print_bits(extracted_enc_Encoded_tile_o);
	    log_info() << endl;
	    log_info() << endl;
	}
    }
}
