#include <bit>
#include <cstdint>
#include <iostream>
#include "Vooo_extension_piso__N4_RB4.h"
#include <string>

#ifndef NRALUOP
#define NRALUOP 8
#define ALUcontrol_N std::log2(NRALUOP)
#endif

#ifndef N_UOP_CYCLE
#define N_UOP_CYCLE 4
#endif

#ifndef RS_ENTRY_WIDTH
#define RS_ENTRY_WIDTH 112
#endif

#ifndef RAT_T_WIDTH
#define RAT_T_WIDTH 33
#endif

#define DEBUG 0
using namespace std;


void piso_checks(Vooo_extension *top, int ARCHBITWIDTH) {

    log_set_prefix("PISO_RS__4__u");

    //INPUT
    log_warn() << "TESTING INPUT" << endl;
    auto* piso = top->__PVT__ooo_extension__DOT__genblk1__BRA__4__KET____DOT__PISO_RS_u;
    const uint32_t* bus_payload_in = piso->payload_in;
    const int sizeof_payload_in = sizeof(piso->payload_in);
    log_info() << "Size of payload: " << sizeof_payload_in << endl;
    const int num_of_entries = sizeof_payload_in*8/RS_ENTRY_WIDTH;	    // 80 is the number of bits present in a rs_entry_t type

    int cnt = 0;
    int WIDTHS[8] = {32,1,32,1,32,12,1,1};
    string labels[8] = {"Tag1", "Valid1", "Tag2", "Valid2", "Rd", "Imm", "is_imm", "Entry_free"};
    uint64_t vals[num_of_entries][8];
    for(int i = 0; i < num_of_entries; i++) {
	for(int j = 0; j < 8; j++) {
	    vals[i][j] = 0;
	    //log_info() << vals[i][j] << endl;
	}
    }
    int rel_base = 0;
    while (cnt < num_of_entries) {
	const int RS_ENTRY_BASE = RS_ENTRY_WIDTH * cnt;
	for (int i = 0; i < 8; i++) {
	    //log_info() << "Printing bits : "<< WIDTHS[i] << endl;
	    //log_info() << "Having offset of: " << rel_base + RS_ENTRY_BASE << endl;
	    vals[cnt][i] = partsel_wide64(bus_payload_in, RS_ENTRY_BASE + rel_base, WIDTHS[i]);	// EXTRACTING whole RAT_t
	    //print_bits(partsel_wide64(bus_payload_in, RS_ENTRY_BASE + rel_base, WIDTHS[i]));
	    rel_base = rel_base + WIDTHS[i]; 
	}
	rel_base = 0;
	cnt++;
    }
    for(int i = 0; i < num_of_entries; i++) {
	for(int j = 0; j < 8; j++) {
	    if(j==0) {
		log_info() << labels[j] << "= "  << vals[i][j] << ", ";
	    } else {
		cout << labels[j] << "= "  << vals[i][j] << ", ";
	    }
	}
	log_info() << endl;
    }
    
    // INTERMEDIATE FIFO SIGNALS
    log_warn() << "TESTING INTERNAL" << endl;
     
    int BASE_OFF[7] = {33,79};
    int INT_FIFO_BASE = 0;    
    const uint32_t* bus_RES_fifo_data_o = piso->RES_fifo_data_o;
    for(int i = 0; i < num_of_entries*2; i++) {
	const uint64_t extracted_bits_FIFO = partsel_wide64(bus_RES_fifo_data_o, INT_FIFO_BASE, 32);
	log_info() << "Printing intermediate output signal for internal FIFO: " << i/2 << " Rs" << i%2 + 1 << " value: " << extracted_bits_FIFO  << endl;
	//print_bits(extracted_bits_FIFO);
	INT_FIFO_BASE += BASE_OFF[i%2];

    }
    const uint32_t bus_rst_ni = piso->rst_ni;
    log_info() << "bus_rst_ni: " << bus_rst_ni << endl; 
    const uint32_t bus_payload_valid_in = piso->payload_valid_in;
    log_info() << "payload valid in: " << bus_payload_valid_in << " -> ";
    print_bits(bus_payload_valid_in);
    log_info() << endl;
    const uint32_t bus_next_stack_ptr = piso->next_stack_ptr;
    log_info() << "next stack pointer: " << bus_next_stack_ptr << endl; 
    const uint32_t bus_compacted_valid_in = piso->compacted_valid_in;
    log_info() << "compacted valid in: " << bus_compacted_valid_in << endl; 
    const uint32_t bus_curr_stack_ptr = piso->curr_stack_ptr;
    log_info() << "curr stack pointer: " << bus_curr_stack_ptr << " -> "; 
    print_bits(bus_curr_stack_ptr);
    log_info() << endl;
    //exit(0);
    const uint32_t bus_RES_fifo_ptr_output_sel = piso->RES_fifo_ptr_output_sel;
    log_info() << "bus_RES_fifo_ptr_output_sel: " << bus_RES_fifo_ptr_output_sel << " -> "; 
    print_bits(bus_RES_fifo_ptr_output_sel);
    log_info() << endl;

    //OUTPUT
    log_warn() << "TESTING OUTPUT" << endl;
    //
    const uint32_t* bus_payload_o = piso->payload_o;
    const int sizeof_payload_o = sizeof(piso->payload_o);
    //log_info() << "Size of payload: " << sizeof_payload_o << endl;
    const int num_of_entries_o = sizeof_payload_o*8/RS_ENTRY_WIDTH;	    // 80 is the number of bits present in a rs_entry_t type
    log_info() << "Num of entries present in the payload_o of PISO: " << num_of_entries_o << endl;

    int cnt_o = 0;
    int WIDTHS_o[8] = {32,1,32,1,32,12,1,1};    
    string labels_o[8] = {"Tag1", "Valid1", "Tag2", "Valid2","Rd", "Imm", "is_imm", "Entry_free"};
    uint64_t vals_o[num_of_entries_o][8];
    for(int i = 0; i < num_of_entries_o; i++) {
	for(int j = 0; j < 8; j++) {
	    vals_o[i][j] = 0;
	    //log_info() << vals_o[i][j] << endl;
	}
    }
    int rel_base_o = 0;
    while (cnt_o < num_of_entries_o) {
	const int RS_ENTRY_BASE = RS_ENTRY_WIDTH * cnt_o;
	for (int i = 0; i < 8; i++) {
	    //log_info() << "Printing bits : "<< WIDTHS_o[i] << endl;
	    //log_info() << "Having offset of: " << rel_base_o + RS_ENTRY_BASE << endl;
	    vals_o[cnt_o][i] = partsel_wide64(bus_payload_o, RS_ENTRY_BASE + rel_base_o, WIDTHS_o[i]);	// EXTRACTING whole RAT_t
	    //print_bits(partsel_wide64(bus_payload_o, RS_ENTRY_BASE + rel_base_o, WIDTHS_o[i]));
	    rel_base_o = rel_base_o + WIDTHS_o[i]; 
	}
	rel_base_o = 0;
	cnt_o++;
    }
    log_info() << "~~PISO OUTPUT~~" << endl;
    for(int i = 0; i < num_of_entries_o; i++) {
	for(int j = 0; j < 8; j++) {
	    if(j==0) {
		log_info() << labels_o[j] << "= "  << vals_o[i][j] << ", ";
	    } else {
		cout << labels_o[j] << "= "  << vals_o[i][j] << ", ";
	    }
	    //log_info() << "index : " <<i << " j :" << j << endl;
	}
	log_info() << endl;
    }
}
