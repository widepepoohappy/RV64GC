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


void fetch_verif(Vfetch *top) {
    log_set_prefix("FETCH_U");
    //print_wide64(uint32_t* sign, int for_limit, int extract_bits, int base_off, string signal_name, int loop_base_off) 
    print_wide64(top->mem_r_data_i, 1, 128, 0, "mem_r_data_i ", 128);
    print_wide64(top->rootp->fetch__DOT__IF_fifo_data_in, 1, 128, 0, "IF_fifo_data_in ", 128);
    
    print_wide32(top->rootp->mem_ar_ready_i, 1, 1, 0, "mem_ar_ready_i", 1);
    print_wide32(top->rootp->fetch__DOT__PCCurr_o, 1, 64, 0, "pc_counter", 64);
    print_wide32(top->rootp->fetch__DOT__mem_ar_valid_o, 1, 1, 0, "mem ar valid o", 1);
    print_wide32(top->rootp->fetch__DOT__fetch_fsm_u__DOT__mem_ar_size_o, 1, 3, 0, "fetch__DOT__fetch_fsm_u__DOT__mem_ar_size_o", 1);
    //print_wide32(top->rootp->fetch__DOT__mem_r_resp_i, 1, 2, 0, "fetch__DOT__mem_r_resp_i", 2);
    print_wide32(top->rootp->fetch__DOT__IF_fifo_ready_o, 1, 1, 0, "IF fifo ready o ", 1);
    print_wide32(top->rootp->fetch__DOT__IF_fifo_ptr_o, 1, 1, 0, "IF_fifo_ptr_o ", 1);
    print_wide32(top->rootp->fetch__DOT__fetch_fsm_u__DOT__curr_state, 1, 1, 0, "fsm_u__DOT__curr_state ", 0);
    print_wide32(top->rootp->fetch__DOT__fetch_fsm_u__DOT__mem_r_last_i, 1, 1, 0, "fsm mem_r_last_i ", 0);
    print_wide32(top->rootp->fetch__DOT__mem_r_last_i, 1, 1, 0, "fetch__DOT__mem_r_last_i ", 0);
    print_wide32(top->rootp->fetch__DOT__fetch_fsm_u__DOT__mem_ar_ready_i, 1, 1, 0, "fetch__DOT__fetch_fsm_u__DOT__mem_ar_ready_i ", 0);
    print_wide64(top->istr_o, 1, 128, 0, "istr_o ", 128);
    
    
    log_info() << "Performing if condition: " << (top->rootp->fetch__DOT__fetch_fsm_u__DOT__mem_ar_ready_i & (top->rootp->fetch__DOT__IF_fifo_ptr_o < (top->rootp->fetch__DOT__fetch_fsm_u__DOT__PREFETCH_BUFF_DEPTH - top->rootp->fetch__DOT__fetch_fsm_u__DOT__BURST_LENGTH) || top->rootp->fetch__DOT__IF_fifo_ptr_o == (top->rootp->fetch__DOT__fetch_fsm_u__DOT__PREFETCH_BUFF_DEPTH - top->rootp->fetch__DOT__fetch_fsm_u__DOT__BURST_LENGTH))) << endl; 
    
}

