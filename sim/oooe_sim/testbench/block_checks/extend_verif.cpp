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


void extend_checks(Vooo_extension *top) {
    log_set_prefix("EXTEND_U");

    if ( TESTING_INPUT ) {
	
	log_warn() << "TESTING INPUT" << endl;
	
	uint32_t* Immext_in = top->rootp->ooo_extension__DOT__EXT_immsrc_in;
	for ( int i = 0 ; i < NRALUOP; i++) {
	    //uint32_t extracted_PE_A_input = partsel_wide64(PE_A_input, 32*i , 32);
	    uint32_t extracted_Immext_in = partsel_wide64(Immext_in, 32*i , 32);
	    log_info() << " extracted_Immext_in: " << i << " value of: " << extracted_Immext_in << " -> ";
	    print_bits(extracted_Immext_in);
	    log_info() << endl;
	}
	log_info() << endl;

    }

    if ( TESTING_OUTPUT ) {
	
	log_warn() << "TESTING OUTPUT" << endl;
	
	uint32_t* Immext_o = top->rootp->ooo_extension__DOT__EXT_immext_o;
	for ( int i = 0 ; i < NRALUOP; i++) {
	    //uint32_t extracted_PE_A_input = partsel_wide64(PE_A_input, 32*i , 32);
	    uint32_t extracted_Immext_o = partsel_wide64(Immext_o, 32*i , 32);
	    log_info() << " extracted_Immext_o: " << i << " value of: " << extracted_Immext_o << " -> ";
	    print_bits(extracted_Immext_o);
	    log_info() << endl;
	}
	log_info() << endl;

    }
}
