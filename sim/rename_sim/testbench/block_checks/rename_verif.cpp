#include <bit>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cmath>

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
#define RS_ENTRY_WIDTH 112
#endif

#ifndef PRF_DEPTH 
#define PRF_DEPTH 32
#endif

#ifndef ADRR_WIDTH
#define ADRR_WIDTH std::log2(PRF_DEPTH)
#endif


#ifndef RAT_T_WIDTH
#define RAT_T_WIDTH 33
#endif

#define DEBUG 0
using namespace std;

#ifndef TB_OVERRIDE_TESTING_PARAMS
#define TESTING_INPUT 1
#define TESTING_INTERNAL 1
#define TESTING_MEM_COMPONENTS 1 
#define TESTING_OUTPUT 1
#endif


void rename_checks(Vrn_stage *top) {
    log_set_prefix("FREE_LIST");
   
    if( TESTING_INTERNAL ) {
   
	
	print_wide32(top->rootp->rn_stage__DOT__free_list_u__DOT__free_list_arr, 1, PRF_DEPTH, 0, "free_list_arr", PRF_DEPTH);
	cout << "TEST" << endl;
	print_wide32(top->rootp->rn_stage__DOT__free_list_u__DOT__free_list_arr_in, 1, PRF_DEPTH, 0, "free_list_arr_in", PRF_DEPTH);


	uint32_t* FL_content_to_arb = top->rootp->rn_stage__DOT__free_list_u__DOT__FL_content_to_arb;
	for ( int i = 0 ; i < N_UOP_CYCLE; i++) {
	    //log_info() << "  PRF_entry "<< i <<" : " << PRF_entry[i] << endl;
	    int32_t extracted_FL_content_to_arb = partsel_wide64(FL_content_to_arb, PRF_DEPTH*i , PRF_DEPTH);
	    log_info() << "extracted_FL_content_to_arb: " << i << " value of: " << extracted_FL_content_to_arb << " -> ";
	    print_bits(extracted_FL_content_to_arb);
	    log_info() << endl;
	}

	print_wide64(top->rootp->rn_stage__DOT__free_list_u__DOT__arbitring_mask, N_UOP_CYCLE, PRF_DEPTH, 0, "arbitring_mask", PRF_DEPTH);

	
	print_wide32(top->rootp->rn_stage__DOT__FL_pull_req_i, 1, 4, 0, "pull_req_i", 4);
	print_wide32(top->rootp->rn_stage__DOT__free_list_u__DOT__FL_content_arbitered_idx, N_UOP_CYCLE, ADRR_WIDTH, 0, "FL_content_arbitered_idx", ADRR_WIDTH);

    }

    uint32_t rn_out = top->rootp->rn_stage__DOT__Rd_rn_o;
    for ( int i = 0 ; i < N_UOP_CYCLE; i++) {
	//log_info() << "  PRF_entry "<< i <<" : " << PRF_entry[i] << endl;
      	int32_t extracted_rn_out = extract_bits(rn_out, ADRR_WIDTH*i , ADRR_WIDTH);
	log_info() << "rn_out: " << i << " value of: " << extracted_rn_out;
	//print_bits(extracted_read_data_o);
	log_info() << endl;
    }
    log_info() << endl;
	
    log_set_prefix("FRONT RM");
    print_wide32(top->rootp->rn_stage__DOT__FRMuop_write_addr_in, N_UOP_CYCLE, ADRR_WIDTH, 0, "FRMuop_write_addr_in", ADRR_WIDTH);
    print_wide32(top->rootp->rn_stage__DOT__FRMuop_write_data_in, N_UOP_CYCLE, ADRR_WIDTH, 0, "FRMuop_write_data_in", ADRR_WIDTH);

    
    print_wide64(top->rootp->rn_stage__DOT__FRMuop_u__DOT__PRF_entry, PRF_DEPTH, ADRR_WIDTH, 0, "FRM mem entry ", ADRR_WIDTH + 1);
    
}
