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


void blob_decoder_verif(Vblob_decoder *top) {
    log_set_prefix("BLOB_DECODER");
    
    print_wide32(top->rootp->blob_decoder__DOT__h, 1, 8, 0, "_h", 8);
    
}
