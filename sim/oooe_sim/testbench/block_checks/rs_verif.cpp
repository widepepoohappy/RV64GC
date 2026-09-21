#include <bit>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <string>

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

void rs_checks(Vooo_extension *top, int ARCHBITWIDTH) {

    int WIDTHS_o[8] = {32,1,32,1,32,12,1,1};    
    string labels_o[8] = {"Tag1", "Valid1", "Tag2", "Valid2", "Rd", "Imm", "is_imm", "Entry_free"};
    //INPUT
    
    
    uint32_t* rs_in = top->rootp->ooo_extension__DOT__RS_in;
    auto rs_in_extracted = rs_entry_extract_all(rs_in, NRALUOP);
    log_set_prefix("GENERIC RS_U");
    
    log_info() << endl;
    for( int i = 0; i < RS_DEPTH; i ++) {
	    log_info() << "RES station [" << i << "] input -> ";
	    print_rs_entry(rs_in_extracted[i]);
	    //log_info() << endl;
	    //j["rs_mem_content"].update({"entry["+to_string(i)+"]", to_string(mem_extracted[i])});
    }

    log_set_prefix("RS__4___u");

    if ( TESTING_INPUT ) {
    uint32_t* res_in = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__Res_in;
    auto extracted_Res_in= rs_entry_extract(res_in);
    log_info() << "Reserve station res_in: ";
    print_rs_entry(extracted_Res_in);
    //log_info() << endl;

    uint32_t res_Entry_ready_o = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__Entry_ready_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Entry_ready_o: " << res_Entry_ready_o << " -> ";
    print_bits(res_Entry_ready_o);
    log_info() << endl;

    uint32_t res_Entry_Idx_slot_o = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__Entry_Idx_slot_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Entry_Idx_slot_o: " << res_Entry_Idx_slot_o << " -> ";
    print_bits(res_Entry_Idx_slot_o);
    log_info() << endl;
    
    uint32_t res_Rs_id_o = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__Rs_id_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Rs_id_o: " << res_Rs_id_o << " -> ";
    print_bits(res_Rs_id_o);
    log_info() << endl;
    }
    
    if ( TESTING_MEM_COMPONENTS ) {
	// _MEM_COMPONENTS
	uint32_t* rs_mem = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__RS_entry;
	auto mem_extracted = rs_entry_extract_all(rs_mem, RS_DEPTH);
	for( int i = 0; i < RS_DEPTH; i ++) {
	    log_info() << "Memory component [" << i << "] -> ";
	    print_rs_entry(mem_extracted[i]);
	    //log_info() << endl;
	    //j["rs_mem_content"].update({"entry["+to_string(i)+"]", to_string(mem_extracted[i])});
	}
    }

    if ( TESTING_INTERNAL ) {
   
    
    uint32_t we_valid = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__we_valid;
    uint32_t extracted_we_valid = extract_bits(we_valid, 0, 32);
    log_info() << "Reserve station valid write enable: " << extracted_we_valid << " -> ";
    print_bits(extracted_we_valid);
    log_info() << endl;

   // uint32_t* rs_valid_in = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__RES_Tag_valid_in;
    uint32_t rs_valid_in = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__Tag_valid_in;
    uint32_t extracted_rs_valid_in = extract_bits(rs_valid_in, 0, 32);
    log_info() << "Reserve station valid in content: " << extracted_rs_valid_in << " -> ";
    print_bits(extracted_rs_valid_in);
    log_info() << endl;

    uint32_t tmp = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__tmp;
    uint32_t extracted_tmp = extract_bits(tmp, 0, 16);
    log_info() << "Reserve station tmp: " << extracted_tmp << " -> ";
    print_bits(extracted_tmp);
    log_info() << endl;

    //// priority encoder
    uint32_t idx_slot = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__Idx_RS_slot;
    log_info() << "value for index: " << idx_slot << endl;
    uint32_t rst_ni = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__rst_ni;
    log_info() << "rst_ni: " << rst_ni << endl;
    
    uint32_t res_PE_ALU_dispatch_in = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__PE_ALU_dispatch_in;
    log_info() << "Reserve station res_PE_ALU_dispatch_in: " << res_PE_ALU_dispatch_in << endl;

    }

    log_set_prefix("RS__5___u");

    if ( TESTING_INPUT ) {
    uint32_t* res_in = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__Res_in;
    auto extracted_Res_in= rs_entry_extract(res_in);
    log_info() << "Reserve station res_in: ";
    print_rs_entry(extracted_Res_in);
    //log_info() << endl;

    uint32_t res_Entry_ready_o = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__Entry_ready_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Entry_ready_o: " << res_Entry_ready_o << " -> ";
    print_bits(res_Entry_ready_o);
    log_info() << endl;

    uint32_t res_Entry_Idx_slot_o = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__Entry_Idx_slot_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Entry_Idx_slot_o: " << res_Entry_Idx_slot_o << " -> ";
    print_bits(res_Entry_Idx_slot_o);
    log_info() << endl;
    
    uint32_t res_Rs_id_o = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__Rs_id_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Rs_id_o: " << res_Rs_id_o << " -> ";
    print_bits(res_Rs_id_o);
    log_info() << endl;
    }
    
    if ( TESTING_MEM_COMPONENTS ) {
	// _MEM_COMPONENTS
	uint32_t* rs_mem = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__RS_entry;
	auto mem_extracted = rs_entry_extract_all(rs_mem, RS_DEPTH);
	for( int i = 0; i < RS_DEPTH; i ++) {
	    log_info() << "Memory component [" << i << "] -> ";
	    print_rs_entry(mem_extracted[i]);
	    //log_info() << endl;
	    //j["rs_mem_content"].update({"entry["+to_string(i)+"]", to_string(mem_extracted[i])});
	}
    }

    if ( TESTING_INTERNAL ) {
   
    
    uint32_t we_valid = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__we_valid;
    uint32_t extracted_we_valid = extract_bits(we_valid, 0, 32);
    log_info() << "Reserve station valid write enable: " << extracted_we_valid << " -> ";
    print_bits(extracted_we_valid);
    log_info() << endl;

   // uint32_t* rs_valid_in = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__RES_Tag_valid_in;
    uint32_t rs_valid_in = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__Tag_valid_in;
    uint32_t extracted_rs_valid_in = extract_bits(rs_valid_in, 0, 32);
    log_info() << "Reserve station valid in content: " << extracted_rs_valid_in << " -> ";
    print_bits(extracted_rs_valid_in);
    log_info() << endl;

    uint32_t tmp = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__tmp;
    uint32_t extracted_tmp = extract_bits(tmp, 0, 16);
    log_info() << "Reserve station tmp: " << extracted_tmp << " -> ";
    print_bits(extracted_tmp);
    log_info() << endl;

    //// priority encoder
    uint32_t idx_slot = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__Idx_RS_slot;
    log_info() << "value for index: " << idx_slot << endl;
    uint32_t rst_ni = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__rst_ni;
    log_info() << "rst_ni: " << rst_ni << endl;
    
    uint32_t res_PE_ALU_dispatch_in = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__PE_ALU_dispatch_in;
    log_info() << "Reserve station res_PE_ALU_dispatch_in: " << res_PE_ALU_dispatch_in << endl;

    log_set_prefix("RS__6___u");
    }

    if ( TESTING_INPUT ) {
    uint32_t* res_in = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__Res_in;
    auto extracted_Res_in= rs_entry_extract(res_in);
    log_info() << "Reserve station res_in: ";
    print_rs_entry(extracted_Res_in);
    //log_info() << endl;

    uint32_t res_Entry_ready_o = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__Entry_ready_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Entry_ready_o: " << res_Entry_ready_o << " -> ";
    print_bits(res_Entry_ready_o);
    log_info() << endl;

    uint32_t res_Entry_Idx_slot_o = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__Entry_Idx_slot_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Entry_Idx_slot_o: " << res_Entry_Idx_slot_o << " -> ";
    print_bits(res_Entry_Idx_slot_o);
    log_info() << endl;
    
    uint32_t res_Rs_id_o = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__Rs_id_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Rs_id_o: " << res_Rs_id_o << " -> ";
    print_bits(res_Rs_id_o);
    log_info() << endl;
    }
    
    if ( TESTING_MEM_COMPONENTS ) {
	// _MEM_COMPONENTS
	uint32_t* rs_mem = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__RS_entry;
	auto mem_extracted = rs_entry_extract_all(rs_mem, RS_DEPTH);
	for( int i = 0; i < RS_DEPTH; i ++) {
	    log_info() << "Memory component [" << i << "] -> ";
	    print_rs_entry(mem_extracted[i]);
	    //log_info() << endl;
	    //j["rs_mem_content"].update({"entry["+to_string(i)+"]", to_string(mem_extracted[i])});
	}
    }

    if ( TESTING_INTERNAL ) {
   
    
    uint32_t we_valid = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__we_valid;
    uint32_t extracted_we_valid = extract_bits(we_valid, 0, 32);
    log_info() << "Reserve station valid write enable: " << extracted_we_valid << " -> ";
    print_bits(extracted_we_valid);
    log_info() << endl;

   // uint32_t* rs_valid_in = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__RES_Tag_valid_in;
    uint32_t rs_valid_in = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__Tag_valid_in;
    uint32_t extracted_rs_valid_in = extract_bits(rs_valid_in, 0, 32);
    log_info() << "Reserve station valid in content: " << extracted_rs_valid_in << " -> ";
    print_bits(extracted_rs_valid_in);
    log_info() << endl;

    uint32_t tmp = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__tmp;
    uint32_t extracted_tmp = extract_bits(tmp, 0, 16);
    log_info() << "Reserve station tmp: " << extracted_tmp << " -> ";
    print_bits(extracted_tmp);
    log_info() << endl;

    //// priority encoder
    uint32_t idx_slot = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__Idx_RS_slot;
    log_info() << "value for index: " << idx_slot << endl;
    uint32_t rst_ni = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__rst_ni;
    log_info() << "rst_ni: " << rst_ni << endl;
    
    uint32_t res_PE_ALU_dispatch_in = top->rootp->ooo_extension__DOT__genblk1__BRA__6__KET____DOT__reserve_station_u__DOT__PE_ALU_dispatch_in;
    log_info() << "Reserve station res_PE_ALU_dispatch_in: " << res_PE_ALU_dispatch_in << endl;

    log_set_prefix("RS__7___u");
    }
    if ( TESTING_INPUT ) {
    uint32_t* res_in = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__Res_in;
    auto extracted_Res_in= rs_entry_extract(res_in);
    log_info() << "Reserve station res_in: ";
    print_rs_entry(extracted_Res_in);
    //log_info() << endl;

    uint32_t res_Entry_ready_o = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__Entry_ready_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Entry_ready_o: " << res_Entry_ready_o << " -> ";
    print_bits(res_Entry_ready_o);
    log_info() << endl;

    uint32_t res_Entry_Idx_slot_o = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__Entry_Idx_slot_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Entry_Idx_slot_o: " << res_Entry_Idx_slot_o << " -> ";
    print_bits(res_Entry_Idx_slot_o);
    log_info() << endl;
    
    uint32_t res_Rs_id_o = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__Rs_id_o;
    //uint64_t extracted_res_Entry_Idx_slot_o = partsel_wide64(res_Entry_Idx_slot_o, 0, 64);
    log_info() << "Reserve station res_Rs_id_o: " << res_Rs_id_o << " -> ";
    print_bits(res_Rs_id_o);
    log_info() << endl;
    }
    
    if ( TESTING_MEM_COMPONENTS ) {
	// _MEM_COMPONENTS
	uint32_t* rs_mem = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__RS_entry;
	auto mem_extracted = rs_entry_extract_all(rs_mem, RS_DEPTH);
	for( int i = 0; i < RS_DEPTH; i ++) {
	    log_info() << "Memory component [" << i << "] -> ";
	    print_rs_entry(mem_extracted[i]);
	    //log_info() << endl;
	    //j["rs_mem_content"].update({"entry["+to_string(i)+"]", to_string(mem_extracted[i])});
	}
    }

    if ( TESTING_INTERNAL ) {
   
    
    uint32_t we_valid = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__we_valid;
    uint32_t extracted_we_valid = extract_bits(we_valid, 0, 32);
    log_info() << "Reserve station valid write enable: " << extracted_we_valid << " -> ";
    print_bits(extracted_we_valid);
    log_info() << endl;

   // uint32_t* rs_valid_in = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__RES_Tag_valid_in;
    uint32_t rs_valid_in = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__Tag_valid_in;
    uint32_t extracted_rs_valid_in = extract_bits(rs_valid_in, 0, 32);
    log_info() << "Reserve station valid in content: " << extracted_rs_valid_in << " -> ";
    print_bits(extracted_rs_valid_in);
    log_info() << endl;

    uint32_t tmp = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__tmp;
    uint32_t extracted_tmp = extract_bits(tmp, 0, 16);
    log_info() << "Reserve station tmp: " << extracted_tmp << " -> ";
    print_bits(extracted_tmp);
    log_info() << endl;

    //// priority encoder
    uint32_t idx_slot = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__Idx_RS_slot;
    log_info() << "value for index: " << idx_slot << endl;
    uint32_t rst_ni = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__rst_ni;
    log_info() << "rst_ni: " << rst_ni << endl;
    
    uint32_t res_PE_ALU_dispatch_in = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__PE_ALU_dispatch_in;
    log_info() << "Reserve station res_PE_ALU_dispatch_in: " << res_PE_ALU_dispatch_in << endl;

    } 

    if ( TESTING_OUTPUT ) {
    
    //OUTPUT
    //uint32_t res_out_idx = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__Idx_RS_dispatch;
    //log_info() << "Reserve station output index: " << res_out_idx << endl;
    //uint32_t res_out_idx_valid = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__Dispatch_Idx_valid;
    //log_info() << "Reserve station res_out_idx_valid: " << res_out_idx_valid << endl;

    //uint32_t* res_out = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__Res_o;
    //auto extracted_Res_out= rs_entry_extract(res_out);
    //log_info() << "Reserve station output content: ";
    //print_rs_entry(extracted_Res_out);

    //uint32_t res_Entry_ready_o = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__Entry_ready_o;
    //log_info() << "Reserve station res_Entry_ready_o: " << res_Entry_ready_o << endl;

    uint32_t* RS_out = top->rootp->ooo_extension__DOT__RS_out;
    auto RS_out_extracted = rs_entry_extract_all(RS_out, NRALUOP);
    log_set_prefix("GENERIC RS_U");
    
    uint8_t Entry_ready_0 = top->rootp->ooo_extension__DOT__genblk1__BRA__0__KET____DOT__reserve_station_u__DOT__Entry_ready;
    uint8_t Entry_ready_1 = top->rootp->ooo_extension__DOT__genblk1__BRA__1__KET____DOT__reserve_station_u__DOT__Entry_ready;
    uint8_t Entry_ready_2 = top->rootp->ooo_extension__DOT__genblk1__BRA__2__KET____DOT__reserve_station_u__DOT__Entry_ready;
    uint8_t Entry_ready_3 = top->rootp->ooo_extension__DOT__genblk1__BRA__3__KET____DOT__reserve_station_u__DOT__Entry_ready;
    uint8_t Entry_ready_4 = top->rootp->ooo_extension__DOT__genblk1__BRA__4__KET____DOT__reserve_station_u__DOT__Entry_ready;
    uint8_t Entry_ready_5 = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__Entry_ready;
    uint8_t Entry_ready_6 = top->rootp->ooo_extension__DOT__genblk1__BRA__5__KET____DOT__reserve_station_u__DOT__Entry_ready;
    uint8_t Entry_ready_7 = top->rootp->ooo_extension__DOT__genblk1__BRA__7__KET____DOT__reserve_station_u__DOT__Entry_ready;
   
    log_info() << "Entry ready 0: ";
    print_bits(Entry_ready_0);
    log_info() << endl;
    log_info() << "Entry ready 1: ";
    print_bits(Entry_ready_1);
    log_info() << endl;
    log_info() << "Entry ready 2: ";
    print_bits(Entry_ready_2);
    log_info() << endl;
    log_info() << "Entry ready 3: ";
    print_bits(Entry_ready_3);
    log_info() << endl;
    log_info() << "Entry ready 4: ";
    print_bits(Entry_ready_4);
    log_info() << endl;
    log_info() << "Entry ready 5: ";
    print_bits(Entry_ready_5);
    log_info() << endl;
    log_info() << "Entry ready 6: ";
    print_bits(Entry_ready_6);
    log_info() << endl;
    log_info() << "Entry ready 7: ";
    print_bits(Entry_ready_7);
    log_info() << endl;
    
    

    log_info() << endl;
    for( int i = 0; i < RS_DEPTH; i ++) {
	    log_info() << "RES station [" << i << "] output -> ";
	    print_rs_entry(RS_out_extracted[i]);
	    //log_info() << endl;
	    //j["rs_mem_content"].update({"entry["+to_string(i)+"]", to_string(mem_extracted[i])});
	}
    
    }
}

