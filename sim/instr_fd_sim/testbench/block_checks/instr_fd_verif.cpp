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

#ifndef INSTR_PARALLELISM
#define INSTR_PARALLELISM 8
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


void instr_fd_verif(Vinstr_fd *top) {
    log_set_prefix("INSTR_FD_U");
    //print_wide64(uint32_t* sign, int for_limit, int extract_bits, int base_off, string signal_name, int loop_base_off) 
    print_wide64(top->mem_r_data_i, 4, 32, 0, "mem_r_data_i ", 32);
    
    print_wide32(top->rootp->mem_ar_ready_i, 1, 1, 0, "mem_ar_ready_i", 1);
    print_wide64(top->rootp->instr_fd__DOT__FTCH_instr_o, 1, 128, 0, "FTCH_instr_o ", 128);
    print_wide32(top->rootp->instr_fd__DOT__blob_decoder_u__DOT__h, 1, 32, 0, "h ", 32);
    print_wide32(top->rootp->instr_fd__DOT__blob_decoder_u__DOT__h_parsed, 1, 30, 0, "h_parsed", 30);
    print_wide32(top->rootp->instr_fd__DOT__startup_o, 1, 1, 0, "startup_o", 1);
    print_wide32(top->rootp->instr_fd__DOT__blob_decoder_u__DOT__last_instr_minus1, 1, 16, 0, "half word minus 1", 16);
    
    print_wide32(top->rootp->instr_fd__DOT__blob_decoder_u__DOT__new_batch, 1, 1, 0, "new_batch", 1);
    uint32_t decoded_state = top->rootp->instr_fd__DOT__blob_decoder_u__DOT__decoded_state_o;
    
    cout << "Printing full status of decoded instr: " ;
    for( int i = 0; i < INSTR_PARALLELISM+1; i++) {
	int instr_decded = extract_bits(decoded_state, i*3+1, 2);
	int instr_valid = extract_bits(decoded_state, i*3, 1);
	if (instr_decded == 0 ) cout << "UNCOMPRESSED" << " " << instr_valid << ", ";
	if (instr_decded == 1 ) cout << "COMPRESSED" << " " << instr_valid << ", ";
	if (instr_decded == 2 ) cout << "MISALIGNED" << " " << instr_valid << ", ";
    }
    cout << endl;
    print_wide32(top->data_valid_o, 1, 1, 0, "data_valid_o", 1);
    print_wide32(top->rootp->instr_fd__DOT__blob_decoder_u__DOT__last_input_was_aligned, 1, 1, 0, "last_input_was_aligned", 1);
    print_wide32(top->rootp->instr_fd__DOT__blob_decoder_u__DOT__is_last_uncompressed, 1, 1, 0, "is_last_uncompressed", 1);
    print_wide32(top->rootp->instr_fd__DOT__blob_decoder_u__DOT__next_last_input_was_aligned, 1, 1, 0, "next_last_input_was_aligned", 1);
    print_wide64(top->rootp->instr_fd__DOT__BD_instr_o, 5, 32, 0, "isntr: BD_instr_o ", 32);
    for( int i = 0; i < INSTR_PARALLELISM+1; i++) {
	int instr_decded = extract_bits(decoded_state, i*3+1, 2);
	int instr_valid = extract_bits(decoded_state, i*3, 1);
	if (instr_decded == 0 && instr_valid) cout << "UNCOMPRESSED" << endl;
	if (instr_decded == 1 && instr_valid) cout << "COMPRESSED" << endl;
	if (instr_decded == 2 && instr_valid) cout << "MISALIGNED" << endl;
    }
    /* portion of sorting decoder after blob decoder */
    log_set_prefix("SORTING_DECODE_U");
    print_wide64(top->rootp->instr_fd__DOT__SD_instr_i, 5, 32, 0, "SD_instr_i ", 32);
    print_wide64(top->rootp->instr_fd__DOT__sorting_dcd_u__DOT__PIPO_stack_payload_in, 8, 32, 0, "PIPO data i ", 32);
    log_set_prefix("PIPO_U INPUT");
    cout << endl; 
    
    print_wide32(top->rootp->instr_fd__DOT__sorting_dcd_u__DOT__PIPO_DCD_u__DOT__payload_valid_in, 8, 1, 0, "payload valid in", 1);
       
    print_wide32(top->rootp->instr_fd__DOT__sorting_dcd_u__DOT__PIPO_DCD_u__DOT__compacted_valid_in, 8, 1, 0, "compacted valid in", 1);
    print_wide32(top->rootp->instr_fd__DOT__sorting_dcd_u__DOT__PIPO_DCD_u__DOT__curr_in_stack_ptr, 1, 16, 0, "curr in stack ptr ", 16);
    print_wide64(top->rootp->instr_fd__DOT__sorting_dcd_u__DOT__PIPO_DCD_u__DOT__RES_fifo_data_in, 9, 32, 0, "PIPO data i ", 32);
    
	

    log_set_prefix("PIPO_U OUTPUT");
    cout << endl; 
    print_wide32(top->rootp->instr_fd__DOT__sorting_dcd_u__DOT__PIPO_DCD_u__DOT__curr_out_stack_ptr, 1, 32, 0, "curr OUT stack ptr", 32);
    print_wide32(top->rootp->instr_fd__DOT__sorting_dcd_u__DOT__PIPO_DCD_u__DOT__RES_fifo_data_to_pop, 9, 1, 0, "fifo data to pop", 1);
    print_wide64(top->rootp->instr_fd__DOT__sorting_dcd_u__DOT__PIPO_DCD_u__DOT__RES_fifo_data_o, 9, 32, 0, "Internal FIFO outputs ", 32);

    
    print_wide32(top->rootp->instr_fd__DOT__sorting_dcd_u__DOT__PIPO_DCD_u__DOT__RES_fifo_valid_o, 9, 1, 0, "internal valid o", 32);
    print_wide64(top->rootp->instr_fd__DOT__sorting_dcd_u__DOT__PIPO_stack_payload_o, 4, 32, 0, "PIPO data o", 32);
    
    log_set_prefix("IBEX_U");
    cout << endl;
    print_wide64(top->rootp->instr_fd__DOT__IBEXcd_instr_i, 4, 32, 0, "IBEX instr i: ", 32);
    print_wide64(top->rootp->instr_fd__DOT__IBEXcd_instr_o, 4, 32, 0, "IBEX instr o: ", 32);
    print_wide32(top->rootp->instr_fd__DOT__illegal_instr_o, 4, 1, 0, "IBEX invalid instr o: ", 1);


    log_set_prefix("UOP_DECODER_0");
    cout << endl;

    cout << hex;
    print_wide32(top->rootp->instr_fd__DOT__genblk1__BRA__0__KET____DOT__uop_decompressor_u__DOT__instr_i, 1, 32, 0, "UOPDEC 0 instr i: ", 32);
    print_wide64(top->rootp->instr_fd__DOT__genblk1__BRA__0__KET____DOT__uop_decompressor_u__DOT__instr_o, 6, 32, 0, "UOPDEC 0 instr o: ", 32);
    
    
}

