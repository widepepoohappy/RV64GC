// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VClos_NoC__Syms.h"


VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_init_sub__TOP__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+864,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+868,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+869,0,"ready_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+870,0,"sel_out_stage",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+871,0,"sel_inp_stage",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+872,0,"sel_inp_stage_stage",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declArray(c+873,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->declBus(c+879,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+880,0,"out_rdy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Clos_NoC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"N_INP_SWITCHES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"N_MID_SWITCHES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"N_OUT_SWITCHES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"N_OUT_SWITCH_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"SWITCH_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"OutSpillReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declArray(c+864,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+868,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+869,0,"ready_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+870,0,"sel_out_stage",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+871,0,"sel_inp_stage",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+872,0,"sel_inp_stage_stage",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declArray(c+873,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->declBus(c+879,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+880,0,"out_rdy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+19,0,"stg1_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->declArray(c+25,0,"stg2_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->declArray(c+31,0,"stg2_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 287,0);
    tracep->declArray(c+40,0,"stg3_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 287,0);
    tracep->declArray(c+49,0,"stg3_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 287,0);
    tracep->declBus(c+868,0,"stg1_valid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"stg1_valid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+59,0,"stg1_rdy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+869,0,"stg1_rdy_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"stg2_valid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+61,0,"stg2_valid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+62,0,"stg2_rdy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+63,0,"stg2_rdy_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+64,0,"stg3_valid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+65,0,"stg3_valid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1,0,"stg3_rdy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+66,0,"stg3_rdy_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+67,0,"do_not_connect_in_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"do_not_connect_mid_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"do_not_connect_out_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_inp_sw[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("input_xbar", VerilatedTracePrefixType::SCOPE_MODULE);
    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inp_sw[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("input_xbar", VerilatedTracePrefixType::SCOPE_MODULE);
    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_mid_sw[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("input_xbar", VerilatedTracePrefixType::SCOPE_MODULE);
    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_mid_sw[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("input_xbar", VerilatedTracePrefixType::SCOPE_MODULE);
    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_mid_sw[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("input_xbar", VerilatedTracePrefixType::SCOPE_MODULE);
    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_out_sw[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("input_xbar", VerilatedTracePrefixType::SCOPE_MODULE);
    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_out_sw[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("input_xbar", VerilatedTracePrefixType::SCOPE_MODULE);
    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_out_sw[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("input_xbar", VerilatedTracePrefixType::SCOPE_MODULE);
    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+982,0,"NumInp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"NumOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"OutSpillReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+986,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+988,0,"AxiVldMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"SelWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+989,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+884,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+886,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+887,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+71,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+74,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"inp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+77,0,"inp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+888,0,"out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->declBus(c+3,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+78,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("gen_inps[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+894,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inps[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+897,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+899,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+81,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+83,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+81,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+6,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+884,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+83,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+67,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+86,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+83,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+792,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+87,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+88,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+89,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+91,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+92,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+93,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+993,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+90,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+91,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+94,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+89,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+93,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+97,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+995,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+89,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+794,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+81,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+83,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+81,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+81,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+83,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+81,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+100,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+102,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+100,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+7,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+884,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+102,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+106,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+105,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+102,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+795,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+107,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+110,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+111,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+112,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+113,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+996,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+110,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+111,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+114,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+115,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+116,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+110,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+109,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+113,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+117,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+997,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+109,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+118,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+797,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+119,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+106,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+100,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+102,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+100,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+100,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+102,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+100,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+120,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+122,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+120,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+8,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+124,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+884,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+122,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+126,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+125,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+122,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+798,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+127,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+128,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+129,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+131,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+132,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+133,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+998,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+130,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+131,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+134,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+135,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+129,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+133,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+137,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+999,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+129,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+800,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+139,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+120,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+122,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+120,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+120,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+122,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+120,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+982,0,"NumInp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"NumOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"OutSpillReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+986,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+988,0,"AxiVldMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"SelWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+989,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+900,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+902,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+903,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+140,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+141,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+144,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+145,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+146,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"inp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+147,0,"inp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+904,0,"out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->declBus(c+10,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+148,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("gen_inps[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+910,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+911,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+912,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+149,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inps[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+913,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+915,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+150,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+151,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+153,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+151,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+13,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+155,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+900,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+153,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+157,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+156,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+153,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+801,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+158,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+159,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+160,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+161,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+162,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+163,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+164,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+161,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+162,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+165,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+166,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+167,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+161,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+160,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+164,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+168,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1001,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+160,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+169,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+802,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+803,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+170,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+151,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+153,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+151,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+151,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+153,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+151,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+171,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+173,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+171,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+14,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+175,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+900,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+173,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+177,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+176,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+173,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+804,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+178,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+181,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+182,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+183,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+184,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+181,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+182,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+185,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+186,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+187,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+181,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+180,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+184,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+188,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1003,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+180,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+806,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+190,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+177,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+171,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+173,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+171,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+171,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+173,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+171,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+191,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+193,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+191,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+15,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+195,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+900,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+193,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+197,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+196,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+193,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+807,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+198,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+199,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+200,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+201,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+202,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+203,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+204,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+201,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+202,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+205,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+206,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+207,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+201,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+204,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+208,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1005,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+200,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+209,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+809,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+210,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+197,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+191,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+193,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+191,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+191,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+193,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+191,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+982,0,"NumInp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"NumOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"OutSpillReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+986,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+988,0,"AxiVldMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"SelWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+989,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+211,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+916,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+213,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+214,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+215,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+218,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+219,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+220,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+221,0,"inp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+222,0,"inp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+223,0,"out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->declBus(c+229,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+230,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("gen_inps[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+83,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+917,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+231,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+232,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inps[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+153,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+918,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+233,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+234,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+235,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+237,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+235,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+239,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+240,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+211,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+237,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+68,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+241,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+237,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+810,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+242,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+243,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+244,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+245,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+247,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+248,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+245,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+246,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+249,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+250,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+251,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+245,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+244,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+248,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+252,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1007,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+244,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+253,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+812,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+254,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+235,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+237,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+235,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+235,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+237,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+235,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+255,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+257,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+255,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+259,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+260,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+211,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+257,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+262,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+261,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+257,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+813,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+263,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+264,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+265,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+266,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+267,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+268,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+269,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1008,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+266,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+267,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+270,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+271,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+272,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+266,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+265,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+269,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+273,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1009,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+265,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+274,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+814,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+815,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+275,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+262,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+255,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+257,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+255,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+255,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+257,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+255,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+276,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+278,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+276,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+280,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+281,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+211,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+278,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+283,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+282,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+278,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+816,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+284,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+285,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+286,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+287,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+288,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+289,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+290,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1010,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+287,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+288,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+291,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+292,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+293,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+287,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+286,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+290,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+294,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1011,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+286,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+295,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+817,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+818,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+296,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+283,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+276,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+278,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+276,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+276,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+278,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+276,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+982,0,"NumInp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"NumOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"OutSpillReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+986,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+988,0,"AxiVldMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"SelWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+989,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+297,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+919,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+299,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+300,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+301,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+304,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+305,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+307,0,"inp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+308,0,"inp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+309,0,"out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->declBus(c+315,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+316,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("gen_inps[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+102,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+920,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+317,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+318,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inps[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+173,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+921,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+319,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+320,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+321,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+323,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+321,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+325,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+297,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+323,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+328,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+327,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+323,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+819,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+329,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+330,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+331,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+332,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+333,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+334,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+335,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1012,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+332,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+333,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+336,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+337,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+338,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+332,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+331,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+335,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+339,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1013,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+331,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+340,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+820,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+821,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+341,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+328,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+321,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+323,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+321,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+321,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+323,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+321,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+342,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+344,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+342,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+346,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+347,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+297,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+344,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+348,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+349,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+348,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+344,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+822,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+350,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+351,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+352,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+353,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+354,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+355,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+356,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1014,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+353,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+354,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+357,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+358,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+359,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+353,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+352,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+356,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+360,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1015,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+352,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+823,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+824,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+362,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+349,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+342,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+344,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+342,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+342,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+344,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+342,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+363,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+365,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+363,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+367,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+368,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+297,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+365,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+369,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+370,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+369,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+365,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+825,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+371,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+372,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+373,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+374,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+375,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+376,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+377,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+375,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+378,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+379,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+380,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+374,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+373,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+377,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+381,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1017,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+373,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+382,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+826,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+827,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+383,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+370,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+363,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+365,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+363,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+363,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+365,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+363,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+982,0,"NumInp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"NumOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"OutSpillReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+986,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+988,0,"AxiVldMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"SelWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+989,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+384,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+922,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+386,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+387,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+388,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+391,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+392,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+393,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+394,0,"inp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+395,0,"inp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+396,0,"out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->declBus(c+402,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+403,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("gen_inps[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+122,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+923,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+404,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+405,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inps[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+193,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+924,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+406,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+407,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+408,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+410,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+408,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+412,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+413,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+384,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+410,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+415,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+414,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+410,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+828,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+416,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+417,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+418,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+419,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+420,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+421,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+422,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1018,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+419,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+420,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+423,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+424,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+425,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+419,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+418,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+422,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+426,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1019,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+418,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+427,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+829,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+830,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+415,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+408,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+410,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+408,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+408,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+410,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+408,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+429,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+431,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+429,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+433,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+434,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+384,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+431,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+436,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+435,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+431,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+831,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+437,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+438,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+439,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+440,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+441,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+442,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+443,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1020,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+440,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+441,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+444,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+445,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+446,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+440,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+439,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+443,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+447,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1021,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+439,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+448,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+833,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+449,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+436,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+429,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+431,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+429,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+429,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+431,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+429,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+450,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+452,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+450,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+991,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+454,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+455,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+384,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+452,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+456,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+457,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+456,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+452,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+834,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+458,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+459,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+461,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+462,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+463,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+464,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1022,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+461,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+462,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+465,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+466,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+467,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+461,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+987,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+460,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+992,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+464,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+987,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+994,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+468,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1023,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+460,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+836,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+470,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+457,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+450,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+452,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+450,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+450,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+452,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+450,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+983,0,"NumInp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"NumOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"OutSpillReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+986,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+988,0,"AxiVldMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"SelWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1024,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+471,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+925,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+474,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+475,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+476,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+479,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+480,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+481,0,"inp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+926,0,"inp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declArray(c+482,0,"out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 287,0);
    tracep->declBus(c+491,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+927,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("gen_inps[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+237,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+928,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+492,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+493,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inps[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+323,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+929,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+494,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+495,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inps[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+410,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+930,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+496,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+931,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+497,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+499,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+497,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+500,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+933,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+471,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+499,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+502,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+503,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+504,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+934,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+507,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+837,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+508,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+935,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+509,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+510,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+511,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+512,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+513,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+514,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1026,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+510,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+512,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+515,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+516,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+517,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+510,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+509,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+511,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+514,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+518,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+519,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+509,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+520,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+521,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+522,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+523,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+987,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_level[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1028,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+497,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+499,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+497,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+497,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+499,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+497,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+524,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+526,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+524,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+527,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+937,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+471,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+526,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+529,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+530,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+531,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+938,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+534,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+840,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+535,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+939,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+537,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+538,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+539,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+540,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+541,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1030,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+537,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+539,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+542,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+543,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+544,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+537,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+536,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+538,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+541,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+545,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+546,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+536,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+547,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+841,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+842,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+548,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+549,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+550,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+987,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_level[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1031,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+524,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+526,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+524,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+524,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+526,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+524,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+551,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+553,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+551,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+554,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+941,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+471,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+553,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+555,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+557,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+558,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+942,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+561,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+843,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+562,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+943,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+563,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+564,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+565,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+566,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+567,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+568,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1032,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+564,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+566,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+569,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+570,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+571,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+564,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+563,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+565,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+568,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+572,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+573,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+563,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+574,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+844,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+845,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+575,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+576,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+577,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+987,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_level[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1033,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+551,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+553,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+551,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+551,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+553,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+551,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+983,0,"NumInp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"NumOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"OutSpillReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+986,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+988,0,"AxiVldMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"SelWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1024,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+578,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+944,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+581,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+582,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+583,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+586,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+587,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+588,0,"inp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+945,0,"inp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declArray(c+589,0,"out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 287,0);
    tracep->declBus(c+598,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+946,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("gen_inps[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+257,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+947,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+599,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+600,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inps[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+344,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+948,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+601,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+602,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inps[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+431,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+949,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+603,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+950,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+604,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+606,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+604,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+607,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+952,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+578,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+606,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+608,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+609,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+610,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+611,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+953,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+614,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+846,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+615,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+954,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+616,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+617,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+618,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+619,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+620,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+621,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1034,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+617,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+619,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+622,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+623,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+624,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+617,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+616,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+618,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+621,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+625,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+626,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+616,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+627,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+848,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+628,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+629,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+630,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+987,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_level[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1035,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+604,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+606,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+604,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+604,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+606,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+604,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+631,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+633,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+631,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+634,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+956,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+578,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+633,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+635,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+636,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+637,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+638,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+957,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+641,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+849,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+642,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+958,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+643,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+644,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+645,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+646,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+647,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+648,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1036,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+644,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+646,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+649,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+650,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+651,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+644,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+643,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+645,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+648,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+652,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+653,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+643,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+654,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+851,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+655,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+656,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+657,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+987,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_level[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1037,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+631,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+633,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+631,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+631,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+633,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+631,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+658,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+660,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+658,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+661,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+960,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+578,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+660,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+662,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+664,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+665,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+961,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+668,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+852,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+669,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+962,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+670,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+671,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+672,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+673,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+674,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+675,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1038,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+671,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+673,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+676,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+677,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+678,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+671,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+670,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+672,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+675,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+679,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+680,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+670,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+681,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+853,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+854,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+682,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+683,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+684,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+987,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_level[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1039,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+658,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+660,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+658,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+658,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+660,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+658,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_init_sub__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+983,0,"NumInp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"NumOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"OutSpillReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+986,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+988,0,"AxiVldMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"SelWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1024,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+685,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+963,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+688,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+689,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+690,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+693,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+694,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+695,0,"inp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+964,0,"inp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declArray(c+696,0,"out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 287,0);
    tracep->declBus(c+705,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+965,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("gen_inps[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+278,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+966,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+706,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+707,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inps[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+365,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+967,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+708,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+709,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_inps[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_stream_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+982,0,"LOG_N_OUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+452,0,"inp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"inp_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+968,0,"oup_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+710,0,"oup_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+969,0,"oup_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+711,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+713,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+711,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+714,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+971,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+685,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+713,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+715,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+716,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+717,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+718,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+972,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+721,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+855,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+722,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+973,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+723,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+724,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+725,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+726,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+727,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+728,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1040,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+724,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+726,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+729,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+730,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+731,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+724,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+723,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+725,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+728,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+732,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+733,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+723,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+734,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+857,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+735,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+736,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+737,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+987,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_level[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1041,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+711,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+713,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+711,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+711,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+713,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+711,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+738,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+740,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+738,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+741,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+975,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+685,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+740,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+742,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+743,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+744,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+745,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+976,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+748,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+858,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+749,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+977,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+750,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+751,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+752,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+753,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+754,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+755,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+751,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+753,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+756,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+757,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+758,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+751,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+750,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+752,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+755,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+759,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+760,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+750,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+761,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+859,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+860,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+762,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+763,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+764,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+987,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_level[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1043,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+740,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+738,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+740,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+738,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+740,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+738,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+740,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+738,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_outs[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+765,0,"arb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+767,0,"arb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+978,0,"arb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+765,0,"spill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("i_rr_arb_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"NumIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+984,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"ExtPrio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"AxiVldRdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"LockIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+990,0,"FairArb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"rr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+768,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+979,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+685,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+767,0,"req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+978,0,"gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+769,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+770,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+771,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+772,0,"data_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+980,0,"gnt_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+775,0,"req_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+861,0,"rr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+776,0,"req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_int_rr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+981,0,"rr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_fair_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+777,0,"upper_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+778,0,"lower_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+779,0,"upper_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+780,0,"lower_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+781,0,"next_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+782,0,"upper_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1044,0,"lower_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_lzc_lower", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+778,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+780,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+783,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+784,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+785,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+778,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_lzc_upper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+982,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+777,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+779,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+782,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_lzc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"NumLevels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1027,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+786,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+787,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+777,0,"in_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_lock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+788,0,"lock_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+862,0,"lock_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+863,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+789,0,"req_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+790,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+987,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_levels[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_level[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+791,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+987,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_level[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1045,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"Idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"Idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spill_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+978,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+765,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+767,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+978,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+765,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("spill_register_flushable_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+990,0,"Bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+881,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+978,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+765,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+767,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+978,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+765,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VClos_NoC___024root__trace_init_top(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_init_top\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VClos_NoC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VClos_NoC___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VClos_NoC___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VClos_NoC___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VClos_NoC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VClos_NoC___024root__trace_register(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_register\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VClos_NoC___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VClos_NoC___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VClos_NoC___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VClos_NoC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VClos_NoC___024root__trace_const_0_sub_0(VClos_NoC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VClos_NoC___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_const_0\n"); );
    // Body
    VClos_NoC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VClos_NoC___024root*>(voidSelf);
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VClos_NoC___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VClos_NoC___024root__trace_const_0_sub_0(VClos_NoC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_const_0_sub_0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+982,(2U),32);
    bufp->fullIData(oldp+983,(3U),32);
    bufp->fullIData(oldp+984,(0x00000020U),32);
    bufp->fullBit(oldp+985,(0U));
    bufp->fullIData(oldp+986,(0U),32);
    bufp->fullIData(oldp+987,(1U),32);
    bufp->fullIData(oldp+988,(0xffffffffU),32);
    bufp->fullCData(oldp+989,(0U),3);
    bufp->fullBit(oldp+990,(1U));
    bufp->fullBit(oldp+991,(0U));
    bufp->fullBit(oldp+992,(1U));
    bufp->fullBit(oldp+993,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+994,(2U),2);
    bufp->fullCData(oldp+995,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                     << 1U))),2);
    bufp->fullBit(oldp+996,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+997,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                     << 1U))),2);
    bufp->fullBit(oldp+998,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+999,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                     << 1U))),2);
    bufp->fullBit(oldp+1000,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1001,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullBit(oldp+1002,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1003,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullBit(oldp+1004,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1005,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullBit(oldp+1006,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1007,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullBit(oldp+1008,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1009,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullBit(oldp+1010,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1011,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullBit(oldp+1012,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1013,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullBit(oldp+1014,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1015,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullBit(oldp+1016,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1017,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullBit(oldp+1018,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1019,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullBit(oldp+1020,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1021,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullBit(oldp+1022,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1023,((1U | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                      << 1U))),2);
    bufp->fullCData(oldp+1024,(0U),6);
    bufp->fullCData(oldp+1025,(0U),2);
    bufp->fullBit(oldp+1026,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+1027,(0x24U),6);
    bufp->fullBit(oldp+1028,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullIData(oldp+1029,(5U),32);
    bufp->fullBit(oldp+1030,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+1031,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+1032,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+1033,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+1034,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+1035,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+1036,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+1037,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+1038,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+1039,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+1040,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+1041,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+1042,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+1043,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+1044,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+1045,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
}

VL_ATTR_COLD void VClos_NoC___024root__trace_full_0_sub_0(VClos_NoC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VClos_NoC___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_full_0\n"); );
    // Body
    VClos_NoC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VClos_NoC___024root*>(voidSelf);
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VClos_NoC___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VClos_NoC___024root__trace_full_0_sub_0(VClos_NoC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_full_0_sub_0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<9>/*287:0*/ __Vtemp_3;
    VlWide<9>/*287:0*/ __Vtemp_5;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_7;
    VlWide<6>/*191:0*/ __Vtemp_8;
    VlWide<9>/*287:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<9>/*287:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<9>/*287:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<6>/*191:0*/ __Vtemp_25;
    VlWide<6>/*191:0*/ __Vtemp_26;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullSData(oldp+1,(vlSelfRef.Clos_NoC__DOT__stg3_rdy_i),9);
    bufp->fullCData(oldp+2,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                              << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))),6);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid),6);
    bufp->fullCData(oldp+4,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+5,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+6,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),2);
    bufp->fullCData(oldp+7,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                   >> 2U))),2);
    bufp->fullCData(oldp+8,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                   >> 4U))),2);
    bufp->fullCData(oldp+9,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                              << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))),6);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid),6);
    bufp->fullCData(oldp+11,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+12,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+13,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),2);
    bufp->fullCData(oldp+14,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                    >> 2U))),2);
    bufp->fullCData(oldp+15,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                    >> 4U))),2);
    bufp->fullCData(oldp+16,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.ready_i),3);
    bufp->fullCData(oldp+17,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4) 
                                    >> 3U))),3);
    bufp->fullCData(oldp+18,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT__stg3_rdy_i) 
                                    >> 6U))),3);
    __Vtemp_1[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.data_o[0U];
    __Vtemp_1[1U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.data_o[1U];
    __Vtemp_1[2U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.data_o[2U];
    __Vtemp_1[3U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.data_o[0U];
    __Vtemp_1[4U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.data_o[1U];
    __Vtemp_1[5U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.data_o[2U];
    bufp->fullWData(oldp+19,(__Vtemp_1),192);
    bufp->fullWData(oldp+25,(vlSelfRef.Clos_NoC__DOT__stg2_data_i),192);
    __Vtemp_3[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_o[0U];
    __Vtemp_3[1U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_o[1U];
    __Vtemp_3[2U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_o[2U];
    __Vtemp_3[3U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.data_o[0U];
    __Vtemp_3[4U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.data_o[1U];
    __Vtemp_3[5U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.data_o[2U];
    __Vtemp_3[6U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.data_o[0U];
    __Vtemp_3[7U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.data_o[1U];
    __Vtemp_3[8U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.data_o[2U];
    bufp->fullWData(oldp+31,(__Vtemp_3),288);
    bufp->fullWData(oldp+40,(vlSelfRef.Clos_NoC__DOT__stg3_data_i),288);
    __Vtemp_5[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_o[0U];
    __Vtemp_5[1U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_o[1U];
    __Vtemp_5[2U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_o[2U];
    __Vtemp_5[3U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.data_o[0U];
    __Vtemp_5[4U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.data_o[1U];
    __Vtemp_5[5U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.data_o[2U];
    __Vtemp_5[6U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.data_o[0U];
    __Vtemp_5[7U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.data_o[1U];
    __Vtemp_5[8U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.data_o[2U];
    bufp->fullWData(oldp+49,(__Vtemp_5),288);
    bufp->fullCData(oldp+58,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.valid_o) 
                               << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.valid_o))),6);
    bufp->fullCData(oldp+59,(vlSelfRef.Clos_NoC__DOT__stg1_rdy_i),6);
    bufp->fullCData(oldp+60,(vlSelfRef.Clos_NoC__DOT__stg2_valid_i),6);
    bufp->fullSData(oldp+61,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.valid_o) 
                               << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.valid_o) 
                                          << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.valid_o)))),9);
    bufp->fullSData(oldp+62,(vlSelfRef.Clos_NoC__DOT__stg2_rdy_i),9);
    bufp->fullCData(oldp+63,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.ready_o) 
                               << 4U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.ready_o) 
                                          << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.ready_o)))),6);
    bufp->fullSData(oldp+64,(vlSelfRef.Clos_NoC__DOT__stg3_valid_i),9);
    bufp->fullSData(oldp+65,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.valid_o) 
                               << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.valid_o) 
                                          << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.valid_o)))),9);
    bufp->fullSData(oldp+66,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.ready_o) 
                               << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.ready_o) 
                                          << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.ready_o)))),9);
    bufp->fullBit(oldp+67,(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx));
    bufp->fullBit(oldp+68,(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx));
    bufp->fullBit(oldp+69,((1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))));
    bufp->fullCData(oldp+70,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.ready_o),2);
    bufp->fullWData(oldp+71,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.data_o),96);
    bufp->fullCData(oldp+74,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.idx_o),3);
    bufp->fullCData(oldp+75,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.valid_o),3);
    bufp->fullCData(oldp+76,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.ready_i),3);
    bufp->fullCData(oldp+77,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                               << 5U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                           & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          << 4U) | 
                                         ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                            & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)) 
                                           << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))))),6);
    bufp->fullCData(oldp+78,((((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 5U) | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                           << 3U))) 
                              | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)) 
                                  << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                              & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)) 
                                             << 1U) 
                                            | ((~ (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))))),6);
    bufp->fullCData(oldp+79,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
    bufp->fullCData(oldp+80,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                               << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                           & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          << 1U) | 
                                         ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                          & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx))))),3);
    bufp->fullQData(oldp+81,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                               << 1U) | (QData)((IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)))),33);
    bufp->fullBit(oldp+83,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready));
    bufp->fullCData(oldp+85,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)) 
                               << 1U) | ((~ (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)) 
                                         & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullCData(oldp+87,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+88,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                   ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))
                                   : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+89,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                  >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+90,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U) | 
                              (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+91,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+92,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                  | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                     & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                        >> 1U))))));
    bufp->fullBit(oldp+93,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                     & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                        >> 1U))))));
    bufp->fullBit(oldp+94,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                     | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                        & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                           >> 1U)))))));
    bufp->fullCData(oldp+95,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                               << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               | ((1U 
                                                   <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                     >> 1U)))))),2);
    bufp->fullCData(oldp+96,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                               << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+97,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                               << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+98,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+99,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                              & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),2);
    bufp->fullQData(oldp+100,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+102,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready));
    bufp->fullCData(oldp+104,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+106,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+107,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+108,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+109,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+110,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+111,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+112,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+113,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+114,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+115,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+116,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+117,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+118,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+119,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                  >> 2U))),2);
    bufp->fullQData(oldp+120,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+122,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready));
    bufp->fullCData(oldp+124,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+125,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+126,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+127,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+128,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+129,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+130,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+131,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+132,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+133,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+134,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+135,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+136,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+137,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+138,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+139,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                  >> 4U))),2);
    bufp->fullCData(oldp+140,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.ready_o),2);
    bufp->fullWData(oldp+141,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.data_o),96);
    bufp->fullCData(oldp+144,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.idx_o),3);
    bufp->fullCData(oldp+145,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.valid_o),3);
    bufp->fullCData(oldp+146,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT__stg1_rdy_i) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+147,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 5U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                           << 4U) | 
                                          ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))))),6);
    bufp->fullCData(oldp+148,((((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                 << 5U) | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 3U))) 
                               | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)) 
                                   << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 1U) 
                                             | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))))),6);
    bufp->fullCData(oldp+149,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
    bufp->fullCData(oldp+150,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                           << 1U) | 
                                          ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                           & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))))),3);
    bufp->fullQData(oldp+151,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+153,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    bufp->fullBit(oldp+154,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready));
    bufp->fullCData(oldp+155,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+157,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+158,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+159,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+160,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+161,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+162,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+163,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+164,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+165,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+166,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+167,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+168,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+169,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+170,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),2);
    bufp->fullQData(oldp+171,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+173,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready));
    bufp->fullCData(oldp+175,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+177,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+178,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+179,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+180,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+181,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+182,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+183,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+184,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+185,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+186,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+187,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+188,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+189,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+190,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                  >> 2U))),2);
    bufp->fullQData(oldp+191,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+193,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    bufp->fullBit(oldp+194,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready));
    bufp->fullCData(oldp+195,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+197,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+198,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+199,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+200,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+201,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+202,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+203,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+204,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+205,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+206,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+207,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+208,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+209,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+210,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                  >> 4U))),2);
    bufp->fullQData(oldp+211,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i),64);
    bufp->fullCData(oldp+213,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.valid_i),2);
    bufp->fullCData(oldp+214,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.ready_o),2);
    bufp->fullWData(oldp+215,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_o),96);
    bufp->fullCData(oldp+218,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.idx_o),3);
    bufp->fullCData(oldp+219,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.valid_o),3);
    bufp->fullCData(oldp+220,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.ready_i),3);
    bufp->fullCData(oldp+221,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))),6);
    bufp->fullCData(oldp+222,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 5U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                           << 4U) | 
                                          ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                             & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx)) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))))),6);
    __Vtemp_6[0U] = (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i);
    __Vtemp_6[1U] = (IData)((vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i 
                             >> 0x00000020U));
    __Vtemp_6[2U] = (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i);
    __Vtemp_6[3U] = (IData)((vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i 
                             >> 0x00000020U));
    __Vtemp_6[4U] = (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i);
    __Vtemp_6[5U] = (IData)((vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i 
                             >> 0x00000020U));
    bufp->fullWData(oldp+223,(__Vtemp_6),192);
    bufp->fullCData(oldp+229,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid),6);
    bufp->fullCData(oldp+230,((((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                 << 5U) | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 3U))) 
                               | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)) 
                                   << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                               & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx)) 
                                              << 1U) 
                                             | ((~ (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx)) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))))),6);
    bufp->fullCData(oldp+231,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+232,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
    bufp->fullCData(oldp+233,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+234,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                           << 1U) | 
                                          ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                           & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx))))),3);
    bufp->fullQData(oldp+235,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx)))),33);
    bufp->fullBit(oldp+237,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    bufp->fullBit(oldp+238,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready));
    bufp->fullCData(oldp+239,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),2);
    bufp->fullCData(oldp+240,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                 & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx)) 
                                << 1U) | ((~ (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullCData(oldp+242,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+243,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+244,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+245,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+246,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+247,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+248,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+249,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+250,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+251,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+252,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+253,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+254,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),2);
    bufp->fullQData(oldp+255,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+257,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    bufp->fullBit(oldp+258,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready));
    bufp->fullCData(oldp+259,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+260,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+262,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+263,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+264,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+265,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+266,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+267,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+268,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+269,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+270,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+271,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+272,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+273,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+274,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+275,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                  >> 2U))),2);
    bufp->fullQData(oldp+276,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+278,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    bufp->fullBit(oldp+279,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready));
    bufp->fullCData(oldp+280,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+281,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+282,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+283,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+284,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+285,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+286,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+287,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+288,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+289,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+290,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+291,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+292,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+293,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+294,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+295,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+296,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                  >> 4U))),2);
    bufp->fullQData(oldp+297,((((QData)((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U])))),64);
    bufp->fullCData(oldp+299,((3U & ((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+300,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.ready_o),2);
    bufp->fullWData(oldp+301,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.data_o),96);
    bufp->fullCData(oldp+304,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.idx_o),3);
    bufp->fullCData(oldp+305,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.valid_o),3);
    bufp->fullCData(oldp+306,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_2) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+307,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))),6);
    bufp->fullCData(oldp+308,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 5U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                           << 4U) | 
                                          ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))))),6);
    __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))));
    __Vtemp_7[1U] = (IData)(((((QData)((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))) 
                             >> 0x00000020U));
    __Vtemp_7[2U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))));
    __Vtemp_7[3U] = (IData)(((((QData)((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))) 
                             >> 0x00000020U));
    __Vtemp_7[4U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))));
    __Vtemp_7[5U] = (IData)(((((QData)((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+309,(__Vtemp_7),192);
    bufp->fullCData(oldp+315,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid),6);
    bufp->fullCData(oldp+316,((((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                 << 5U) | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 3U))) 
                               | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)) 
                                   << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 1U) 
                                             | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))))),6);
    bufp->fullCData(oldp+317,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+318,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
    bufp->fullCData(oldp+319,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+320,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                           << 1U) | 
                                          ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                           & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))))),3);
    bufp->fullQData(oldp+321,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+323,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    bufp->fullBit(oldp+324,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready));
    bufp->fullCData(oldp+325,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),2);
    bufp->fullCData(oldp+326,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+327,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+328,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+329,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+330,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+331,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+332,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+333,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+334,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+335,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+336,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+337,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+338,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+339,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+340,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+341,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),2);
    bufp->fullQData(oldp+342,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+344,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    bufp->fullBit(oldp+345,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready));
    bufp->fullCData(oldp+346,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+347,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+348,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+349,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+350,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+351,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+352,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+353,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+354,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+355,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+356,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+357,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+358,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+359,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+360,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+361,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+362,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                  >> 2U))),2);
    bufp->fullQData(oldp+363,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+365,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    bufp->fullBit(oldp+366,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready));
    bufp->fullCData(oldp+367,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+368,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+369,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+370,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+371,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+372,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+373,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+374,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+375,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+376,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+377,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+378,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+379,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+380,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+381,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+382,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+383,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                  >> 4U))),2);
    bufp->fullQData(oldp+384,((((QData)((IData)(vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U])))),64);
    bufp->fullCData(oldp+386,((3U & ((IData)(vlSelfRef.Clos_NoC__DOT__stg2_valid_i) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+387,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.ready_o),2);
    bufp->fullWData(oldp+388,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.data_o),96);
    bufp->fullCData(oldp+391,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.idx_o),3);
    bufp->fullCData(oldp+392,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.valid_o),3);
    bufp->fullCData(oldp+393,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT__stg2_rdy_i) 
                                     >> 6U))),3);
    bufp->fullCData(oldp+394,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))),6);
    bufp->fullCData(oldp+395,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 5U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                           << 4U) | 
                                          ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))))),6);
    __Vtemp_8[0U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))));
    __Vtemp_8[1U] = (IData)(((((QData)((IData)(vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))) 
                             >> 0x00000020U));
    __Vtemp_8[2U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))));
    __Vtemp_8[3U] = (IData)(((((QData)((IData)(vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))) 
                             >> 0x00000020U));
    __Vtemp_8[4U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))));
    __Vtemp_8[5U] = (IData)(((((QData)((IData)(vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+396,(__Vtemp_8),192);
    bufp->fullCData(oldp+402,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid),6);
    bufp->fullCData(oldp+403,((((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                 << 5U) | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 3U))) 
                               | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)) 
                                   << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 1U) 
                                             | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))))),6);
    bufp->fullCData(oldp+404,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+405,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
    bufp->fullCData(oldp+406,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+407,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                           << 1U) | 
                                          ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                           & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))))),3);
    bufp->fullQData(oldp+408,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+410,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    bufp->fullBit(oldp+411,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready));
    bufp->fullCData(oldp+412,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),2);
    bufp->fullCData(oldp+413,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+414,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+415,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+416,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+417,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+418,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+419,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+420,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+421,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+422,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+423,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+424,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+425,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+426,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+427,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+428,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),2);
    bufp->fullQData(oldp+429,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+431,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    bufp->fullBit(oldp+432,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready));
    bufp->fullCData(oldp+433,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+434,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+435,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+436,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+437,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+438,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+439,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+440,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+441,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+442,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+443,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+444,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+445,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+446,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+447,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+448,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+449,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                  >> 2U))),2);
    bufp->fullQData(oldp+450,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
    bufp->fullBit(oldp+452,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    bufp->fullBit(oldp+453,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready));
    bufp->fullCData(oldp+454,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+455,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)))),2);
    bufp->fullIData(oldp+456,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullBit(oldp+457,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o));
    bufp->fullCData(oldp+458,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
    bufp->fullBit(oldp+459,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                    ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                       | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))
                                    : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
    bufp->fullCData(oldp+460,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                   >> 1U)) << 1U)),2);
    bufp->fullCData(oldp+461,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 1U)) << 1U) 
                               | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
    bufp->fullBit(oldp+462,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
    bufp->fullBit(oldp+463,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                   | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+464,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 1U))))));
    bufp->fullBit(oldp+465,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U)))))));
    bufp->fullCData(oldp+466,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                | ((1U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 1U)))))),2);
    bufp->fullCData(oldp+467,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
    bufp->fullCData(oldp+468,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                          & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+469,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+470,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid) 
                                  >> 4U))),2);
    bufp->fullWData(oldp+471,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i),96);
    bufp->fullCData(oldp+474,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.valid_i),3);
    bufp->fullCData(oldp+475,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.ready_o),3);
    bufp->fullWData(oldp+476,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_o),96);
    bufp->fullCData(oldp+479,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.idx_o),6);
    bufp->fullCData(oldp+480,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.valid_o),3);
    bufp->fullSData(oldp+481,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                           << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)))),9);
    __Vtemp_9[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[0U];
    __Vtemp_9[1U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[1U];
    __Vtemp_9[2U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[2U];
    __Vtemp_9[3U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[0U];
    __Vtemp_9[4U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[1U];
    __Vtemp_9[5U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[2U];
    __Vtemp_9[6U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[0U];
    __Vtemp_9[7U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[1U];
    __Vtemp_9[8U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[2U];
    bufp->fullWData(oldp+482,(__Vtemp_9),288);
    bufp->fullSData(oldp+491,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid),9);
    bufp->fullCData(oldp+492,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+493,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
    bufp->fullCData(oldp+494,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+495,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_1) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+496,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullQData(oldp+497,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
    bufp->fullBit(oldp+499,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    bufp->fullCData(oldp+500,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),3);
    bufp->fullIData(oldp+501,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullCData(oldp+502,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
    bufp->fullCData(oldp+503,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
    __Vtemp_10[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o;
    __Vtemp_10[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                   ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                   : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
    __Vtemp_10[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                    ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                    : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+504,(__Vtemp_10),96);
    bufp->fullCData(oldp+507,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid)))),3);
    bufp->fullCData(oldp+508,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
    bufp->fullCData(oldp+509,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                  << 1U))),3);
    bufp->fullCData(oldp+510,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
    bufp->fullCData(oldp+511,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+512,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
    bufp->fullCData(oldp+513,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 2U))) ? ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                   ? 1U
                                                   : 2U)
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
    bufp->fullBit(oldp+514,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullBit(oldp+515,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullCData(oldp+516,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+517,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((((1U 
                                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                    ? 0U
                                                    : 1U) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
    bufp->fullCData(oldp+518,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+519,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                  ? 1U
                                                  : 2U)))),8);
    bufp->fullBit(oldp+520,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+521,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),3);
    bufp->fullBit(oldp+522,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+523,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullQData(oldp+524,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
    bufp->fullBit(oldp+526,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    bufp->fullCData(oldp+527,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                     >> 3U))),3);
    bufp->fullIData(oldp+528,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullCData(oldp+529,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
    bufp->fullCData(oldp+530,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
    __Vtemp_11[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o;
    __Vtemp_11[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                   ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                   : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
    __Vtemp_11[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                    ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                    : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+531,(__Vtemp_11),96);
    bufp->fullCData(oldp+534,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid)))),3);
    bufp->fullCData(oldp+535,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
    bufp->fullCData(oldp+536,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                  << 1U))),3);
    bufp->fullCData(oldp+537,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
    bufp->fullCData(oldp+538,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+539,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
    bufp->fullCData(oldp+540,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 2U))) ? ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                   ? 1U
                                                   : 2U)
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
    bufp->fullBit(oldp+541,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullBit(oldp+542,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullCData(oldp+543,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+544,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((((1U 
                                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                    ? 0U
                                                    : 1U) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
    bufp->fullCData(oldp+545,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+546,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                  ? 1U
                                                  : 2U)))),8);
    bufp->fullBit(oldp+547,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+548,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                  >> 3U))),3);
    bufp->fullBit(oldp+549,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+550,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullQData(oldp+551,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
    bufp->fullBit(oldp+553,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    bufp->fullCData(oldp+554,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 6U))),3);
    bufp->fullIData(oldp+555,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullCData(oldp+556,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
    bufp->fullCData(oldp+557,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
    __Vtemp_12[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
    __Vtemp_12[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                   ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                   : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
    __Vtemp_12[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                    ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                    : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+558,(__Vtemp_12),96);
    bufp->fullCData(oldp+561,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid)))),3);
    bufp->fullCData(oldp+562,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
    bufp->fullCData(oldp+563,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                  << 1U))),3);
    bufp->fullCData(oldp+564,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
    bufp->fullCData(oldp+565,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+566,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
    bufp->fullCData(oldp+567,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 2U))) ? ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                   ? 1U
                                                   : 2U)
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
    bufp->fullBit(oldp+568,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullBit(oldp+569,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullCData(oldp+570,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+571,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((((1U 
                                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                    ? 0U
                                                    : 1U) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
    bufp->fullCData(oldp+572,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+573,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                  ? 1U
                                                  : 2U)))),8);
    bufp->fullBit(oldp+574,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+575,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                  >> 6U))),3);
    bufp->fullBit(oldp+576,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+577,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    __Vtemp_13[0U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
    __Vtemp_13[1U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
    __Vtemp_13[2U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
    bufp->fullWData(oldp+578,(__Vtemp_13),96);
    bufp->fullCData(oldp+581,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+582,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.ready_o),3);
    bufp->fullWData(oldp+583,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.data_o),96);
    bufp->fullCData(oldp+586,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.idx_o),6);
    bufp->fullCData(oldp+587,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.valid_o),3);
    bufp->fullSData(oldp+588,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                           << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)))),9);
    __Vtemp_15[0U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
    __Vtemp_15[1U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
    __Vtemp_15[2U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
    __Vtemp_15[3U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
    __Vtemp_15[4U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
    __Vtemp_15[5U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
    __Vtemp_15[6U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
    __Vtemp_15[7U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
    __Vtemp_15[8U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
    bufp->fullWData(oldp+589,(__Vtemp_15),288);
    bufp->fullSData(oldp+598,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid),9);
    bufp->fullCData(oldp+599,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+600,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
    bufp->fullCData(oldp+601,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+602,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_1) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+603,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullQData(oldp+604,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
    bufp->fullBit(oldp+606,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    bufp->fullCData(oldp+607,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),3);
    bufp->fullIData(oldp+608,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullCData(oldp+609,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
    bufp->fullCData(oldp+610,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
    __Vtemp_16[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o;
    __Vtemp_16[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                   ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                   : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
    __Vtemp_16[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                    ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                    : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+611,(__Vtemp_16),96);
    bufp->fullCData(oldp+614,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid)))),3);
    bufp->fullCData(oldp+615,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
    bufp->fullCData(oldp+616,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                  << 1U))),3);
    bufp->fullCData(oldp+617,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
    bufp->fullCData(oldp+618,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+619,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
    bufp->fullCData(oldp+620,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 2U))) ? ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                   ? 1U
                                                   : 2U)
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
    bufp->fullBit(oldp+621,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullBit(oldp+622,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullCData(oldp+623,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+624,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((((1U 
                                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                    ? 0U
                                                    : 1U) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
    bufp->fullCData(oldp+625,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+626,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                  ? 1U
                                                  : 2U)))),8);
    bufp->fullBit(oldp+627,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+628,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),3);
    bufp->fullBit(oldp+629,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+630,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullQData(oldp+631,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
    bufp->fullBit(oldp+633,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    bufp->fullCData(oldp+634,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                     >> 3U))),3);
    bufp->fullIData(oldp+635,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullCData(oldp+636,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
    bufp->fullCData(oldp+637,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
    __Vtemp_17[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o;
    __Vtemp_17[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                   ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                   : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
    __Vtemp_17[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                    ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                    : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+638,(__Vtemp_17),96);
    bufp->fullCData(oldp+641,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid)))),3);
    bufp->fullCData(oldp+642,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
    bufp->fullCData(oldp+643,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                  << 1U))),3);
    bufp->fullCData(oldp+644,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
    bufp->fullCData(oldp+645,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+646,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
    bufp->fullCData(oldp+647,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 2U))) ? ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                   ? 1U
                                                   : 2U)
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
    bufp->fullBit(oldp+648,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullBit(oldp+649,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullCData(oldp+650,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+651,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((((1U 
                                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                    ? 0U
                                                    : 1U) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
    bufp->fullCData(oldp+652,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+653,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                  ? 1U
                                                  : 2U)))),8);
    bufp->fullBit(oldp+654,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+655,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                  >> 3U))),3);
    bufp->fullBit(oldp+656,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+657,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullQData(oldp+658,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
    bufp->fullBit(oldp+660,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    bufp->fullCData(oldp+661,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 6U))),3);
    bufp->fullIData(oldp+662,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullCData(oldp+663,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
    bufp->fullCData(oldp+664,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
    __Vtemp_18[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
    __Vtemp_18[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                   ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                   : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
    __Vtemp_18[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                    ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                    : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+665,(__Vtemp_18),96);
    bufp->fullCData(oldp+668,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid)))),3);
    bufp->fullCData(oldp+669,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
    bufp->fullCData(oldp+670,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                  << 1U))),3);
    bufp->fullCData(oldp+671,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
    bufp->fullCData(oldp+672,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+673,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
    bufp->fullCData(oldp+674,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 2U))) ? ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                   ? 1U
                                                   : 2U)
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
    bufp->fullBit(oldp+675,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullBit(oldp+676,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullCData(oldp+677,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+678,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((((1U 
                                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                    ? 0U
                                                    : 1U) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
    bufp->fullCData(oldp+679,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+680,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                  ? 1U
                                                  : 2U)))),8);
    bufp->fullBit(oldp+681,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+682,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                  >> 6U))),3);
    bufp->fullBit(oldp+683,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+684,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    __Vtemp_19[0U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[6U];
    __Vtemp_19[1U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[7U];
    __Vtemp_19[2U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[8U];
    bufp->fullWData(oldp+685,(__Vtemp_19),96);
    bufp->fullCData(oldp+688,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT__stg3_valid_i) 
                                     >> 6U))),3);
    bufp->fullCData(oldp+689,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.ready_o),3);
    bufp->fullWData(oldp+690,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.data_o),96);
    bufp->fullCData(oldp+693,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.idx_o),6);
    bufp->fullCData(oldp+694,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.valid_o),3);
    bufp->fullSData(oldp+695,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                           << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)))),9);
    __Vtemp_21[0U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[6U];
    __Vtemp_21[1U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[7U];
    __Vtemp_21[2U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[8U];
    __Vtemp_21[3U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[6U];
    __Vtemp_21[4U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[7U];
    __Vtemp_21[5U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[8U];
    __Vtemp_21[6U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[6U];
    __Vtemp_21[7U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[7U];
    __Vtemp_21[8U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[8U];
    bufp->fullWData(oldp+696,(__Vtemp_21),288);
    bufp->fullSData(oldp+705,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid),9);
    bufp->fullCData(oldp+706,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+707,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
    bufp->fullCData(oldp+708,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullCData(oldp+709,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_1) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+710,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o),3);
    bufp->fullQData(oldp+711,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
    bufp->fullBit(oldp+713,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    bufp->fullCData(oldp+714,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),3);
    bufp->fullIData(oldp+715,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullCData(oldp+716,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
    bufp->fullCData(oldp+717,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
    __Vtemp_22[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o;
    __Vtemp_22[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                   ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                   : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
    __Vtemp_22[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                    ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                    : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+718,(__Vtemp_22),96);
    bufp->fullCData(oldp+721,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid)))),3);
    bufp->fullCData(oldp+722,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
    bufp->fullCData(oldp+723,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                  << 1U))),3);
    bufp->fullCData(oldp+724,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
    bufp->fullCData(oldp+725,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+726,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
    bufp->fullCData(oldp+727,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 2U))) ? ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                   ? 1U
                                                   : 2U)
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
    bufp->fullBit(oldp+728,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullBit(oldp+729,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullCData(oldp+730,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+731,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((((1U 
                                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                    ? 0U
                                                    : 1U) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
    bufp->fullCData(oldp+732,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+733,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                  ? 1U
                                                  : 2U)))),8);
    bufp->fullBit(oldp+734,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+735,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),3);
    bufp->fullBit(oldp+736,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+737,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullQData(oldp+738,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
    bufp->fullBit(oldp+740,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    bufp->fullCData(oldp+741,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                     >> 3U))),3);
    bufp->fullIData(oldp+742,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullCData(oldp+743,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
    bufp->fullCData(oldp+744,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
    __Vtemp_23[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o;
    __Vtemp_23[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                   ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                   : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
    __Vtemp_23[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                    ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                    : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+745,(__Vtemp_23),96);
    bufp->fullCData(oldp+748,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid)))),3);
    bufp->fullCData(oldp+749,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
    bufp->fullCData(oldp+750,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                  << 1U))),3);
    bufp->fullCData(oldp+751,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
    bufp->fullCData(oldp+752,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+753,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
    bufp->fullCData(oldp+754,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 2U))) ? ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                   ? 1U
                                                   : 2U)
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
    bufp->fullBit(oldp+755,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullBit(oldp+756,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullCData(oldp+757,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+758,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((((1U 
                                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                    ? 0U
                                                    : 1U) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
    bufp->fullCData(oldp+759,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+760,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                  ? 1U
                                                  : 2U)))),8);
    bufp->fullBit(oldp+761,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+762,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                  >> 3U))),3);
    bufp->fullBit(oldp+763,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+764,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullQData(oldp+765,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
    bufp->fullBit(oldp+767,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    bufp->fullCData(oldp+768,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 6U))),3);
    bufp->fullIData(oldp+769,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
    bufp->fullCData(oldp+770,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
    bufp->fullCData(oldp+771,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
    __Vtemp_24[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
    __Vtemp_24[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                   ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                   : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
    __Vtemp_24[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                    ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                                    : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+772,(__Vtemp_24),96);
    bufp->fullCData(oldp+775,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid)))),3);
    bufp->fullCData(oldp+776,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
    bufp->fullCData(oldp+777,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                  << 1U))),3);
    bufp->fullCData(oldp+778,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                    >> 2U)) << 2U) 
                               | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
    bufp->fullCData(oldp+779,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+780,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
    bufp->fullCData(oldp+781,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 2U))) ? ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                   ? 1U
                                                   : 2U)
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
    bufp->fullBit(oldp+782,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullBit(oldp+783,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 2U)))))));
    bufp->fullCData(oldp+784,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+785,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((((1U 
                                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                    ? 0U
                                                    : 1U) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
    bufp->fullCData(oldp+786,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                 << 3U) | (((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                             | ((2U 
                                                 > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+787,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                               << 6U) 
                                              | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                  ? 1U
                                                  : 2U)))),8);
    bufp->fullBit(oldp+788,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    bufp->fullCData(oldp+789,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid) 
                                  >> 6U))),3);
    bufp->fullBit(oldp+790,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+791,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+792,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+793,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+794,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+795,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+796,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+797,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+798,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+799,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+800,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+801,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+802,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+803,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+804,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+805,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+806,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+807,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+808,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+809,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+810,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+811,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+812,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+813,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+814,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+815,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+816,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+817,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+818,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+819,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+820,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+821,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+822,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+823,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+824,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+825,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+826,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+827,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+828,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+829,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+830,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+831,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+832,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+833,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullBit(oldp+834,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    bufp->fullBit(oldp+835,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+836,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
    bufp->fullCData(oldp+837,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
    bufp->fullBit(oldp+838,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+839,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
    bufp->fullCData(oldp+840,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
    bufp->fullBit(oldp+841,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+842,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
    bufp->fullCData(oldp+843,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
    bufp->fullBit(oldp+844,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+845,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
    bufp->fullCData(oldp+846,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
    bufp->fullBit(oldp+847,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+848,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
    bufp->fullCData(oldp+849,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
    bufp->fullBit(oldp+850,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+851,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
    bufp->fullCData(oldp+852,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
    bufp->fullBit(oldp+853,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+854,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
    bufp->fullCData(oldp+855,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
    bufp->fullBit(oldp+856,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+857,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
    bufp->fullCData(oldp+858,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
    bufp->fullBit(oldp+859,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+860,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
    bufp->fullCData(oldp+861,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
    bufp->fullBit(oldp+862,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
    bufp->fullCData(oldp+863,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
    bufp->fullWData(oldp+864,(vlSelfRef.data_in),128);
    bufp->fullCData(oldp+868,(vlSelfRef.valid_in),4);
    bufp->fullCData(oldp+869,(vlSelfRef.ready_out),4);
    bufp->fullIData(oldp+870,(vlSelfRef.sel_out_stage),18);
    bufp->fullCData(oldp+871,(vlSelfRef.sel_inp_stage),8);
    bufp->fullSData(oldp+872,(vlSelfRef.sel_inp_stage_stage),12);
    bufp->fullWData(oldp+873,(vlSelfRef.out_data),192);
    bufp->fullCData(oldp+879,(vlSelfRef.out_valid),6);
    bufp->fullSData(oldp+880,(vlSelfRef.out_rdy_i),9);
    bufp->fullBit(oldp+881,(vlSelfRef.clk_i));
    bufp->fullBit(oldp+882,(vlSelfRef.rst_ni));
    bufp->fullBit(oldp+883,(vlSelfRef.flush_i));
    bufp->fullQData(oldp+884,((((QData)((IData)(vlSelfRef.data_in[1U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.data_in[0U])))),64);
    bufp->fullCData(oldp+886,((0x0000000fU & (IData)(vlSelfRef.sel_inp_stage))),4);
    bufp->fullCData(oldp+887,((3U & (IData)(vlSelfRef.valid_in))),2);
    __Vtemp_25[0U] = (IData)((((QData)((IData)(vlSelfRef.data_in[1U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.data_in[0U]))));
    __Vtemp_25[1U] = (IData)(((((QData)((IData)(vlSelfRef.data_in[1U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.data_in[0U]))) 
                              >> 0x00000020U));
    __Vtemp_25[2U] = (IData)((((QData)((IData)(vlSelfRef.data_in[1U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.data_in[0U]))));
    __Vtemp_25[3U] = (IData)(((((QData)((IData)(vlSelfRef.data_in[1U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.data_in[0U]))) 
                              >> 0x00000020U));
    __Vtemp_25[4U] = (IData)((((QData)((IData)(vlSelfRef.data_in[1U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.data_in[0U]))));
    __Vtemp_25[5U] = (IData)(((((QData)((IData)(vlSelfRef.data_in[1U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.data_in[0U]))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+888,(__Vtemp_25),192);
    bufp->fullBit(oldp+894,((1U & (IData)(vlSelfRef.valid_in))));
    bufp->fullBit(oldp+895,(((2U >= (3U & (IData)(vlSelfRef.sel_inp_stage))) 
                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i) 
                                >> (3U & (IData)(vlSelfRef.sel_inp_stage))))));
    bufp->fullCData(oldp+896,((3U & (IData)(vlSelfRef.sel_inp_stage))),2);
    bufp->fullBit(oldp+897,((1U & ((IData)(vlSelfRef.valid_in) 
                                   >> 1U))));
    bufp->fullBit(oldp+898,(((2U >= (3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                           >> 2U))) 
                             & (((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                  << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                              & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             << 1U) 
                                            | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                               & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)))) 
                                >> (3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                          >> 2U))))));
    bufp->fullCData(oldp+899,((3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                     >> 2U))),2);
    bufp->fullQData(oldp+900,((((QData)((IData)(vlSelfRef.data_in[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.data_in[2U])))),64);
    bufp->fullCData(oldp+902,((0x0000000fU & ((IData)(vlSelfRef.sel_inp_stage) 
                                              >> 4U))),4);
    bufp->fullCData(oldp+903,((3U & ((IData)(vlSelfRef.valid_in) 
                                     >> 2U))),2);
    __Vtemp_26[0U] = (IData)((((QData)((IData)(vlSelfRef.data_in[3U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.data_in[2U]))));
    __Vtemp_26[1U] = (IData)(((((QData)((IData)(vlSelfRef.data_in[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.data_in[2U]))) 
                              >> 0x00000020U));
    __Vtemp_26[2U] = (IData)((((QData)((IData)(vlSelfRef.data_in[3U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.data_in[2U]))));
    __Vtemp_26[3U] = (IData)(((((QData)((IData)(vlSelfRef.data_in[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.data_in[2U]))) 
                              >> 0x00000020U));
    __Vtemp_26[4U] = (IData)((((QData)((IData)(vlSelfRef.data_in[3U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.data_in[2U]))));
    __Vtemp_26[5U] = (IData)(((((QData)((IData)(vlSelfRef.data_in[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.data_in[2U]))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+904,(__Vtemp_26),192);
    bufp->fullBit(oldp+910,((1U & ((IData)(vlSelfRef.valid_in) 
                                   >> 2U))));
    bufp->fullBit(oldp+911,(((2U >= (3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                           >> 4U))) 
                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i) 
                                >> (3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                          >> 4U))))));
    bufp->fullCData(oldp+912,((3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                     >> 4U))),2);
    bufp->fullBit(oldp+913,((1U & ((IData)(vlSelfRef.valid_in) 
                                   >> 3U))));
    bufp->fullBit(oldp+914,(((2U >= (3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                           >> 6U))) 
                             & (((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                  << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                              & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             << 1U) 
                                            | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))) 
                                >> (3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                          >> 6U))))));
    bufp->fullCData(oldp+915,((3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+916,((0x0000000fU & (IData)(vlSelfRef.sel_inp_stage_stage))),4);
    bufp->fullCData(oldp+917,((3U & (IData)(vlSelfRef.sel_inp_stage_stage))),2);
    bufp->fullCData(oldp+918,((3U & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+919,((0x0000000fU & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                              >> 4U))),4);
    bufp->fullCData(oldp+920,((3U & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+921,((3U & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+922,((0x0000000fU & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                              >> 8U))),4);
    bufp->fullCData(oldp+923,((3U & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                     >> 8U))),2);
    bufp->fullCData(oldp+924,((3U & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                     >> 0x0000000aU))),2);
    bufp->fullCData(oldp+925,((0x0000003fU & vlSelfRef.sel_out_stage)),6);
    bufp->fullSData(oldp+926,(((0xffffff00U & (((IData)(vlSelfRef.out_rdy_i) 
                                                << 2U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 8U))) 
                               | ((0xffffff80U & (((IData)(vlSelfRef.out_rdy_i) 
                                                   << 4U) 
                                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 7U))) 
                                  | ((((IData)(vlSelfRef.out_rdy_i) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                      << 6U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_1))))),9);
    bufp->fullSData(oldp+927,((((((0x0ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 4U) 
                                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                      << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                 << 6U) | (((0x3ffffffeU 
                                             & (((IData)(vlSelfRef.out_rdy_i) 
                                                 >> 2U) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                   << 1U))) 
                                            | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                           << 4U)) 
                               | (((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                     & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                                    << 3U) | (((IData)(vlSelfRef.out_rdy_i) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                              << 2U)) 
                                  | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                      << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))),9);
    bufp->fullCData(oldp+928,((3U & vlSelfRef.sel_out_stage)),2);
    bufp->fullCData(oldp+929,((3U & (vlSelfRef.sel_out_stage 
                                     >> 2U))),2);
    bufp->fullCData(oldp+930,((3U & (vlSelfRef.sel_out_stage 
                                     >> 4U))),2);
    bufp->fullCData(oldp+931,(((0x0ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 4U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | ((0x3ffffffeU & (((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 2U) 
                                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 1U))) 
                                  | ((IData)(vlSelfRef.out_rdy_i) 
                                     & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))),3);
    bufp->fullBit(oldp+932,((1U & (IData)(vlSelfRef.out_rdy_i))));
    bufp->fullCData(oldp+933,(((((IData)(vlSelfRef.out_rdy_i) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           << 1U) | 
                                          ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->fullCData(oldp+934,(((((IData)(vlSelfRef.out_rdy_i) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                << 2U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                           << 1U) | 
                                          (1U & (IData)(vlSelfRef.out_rdy_i))))),3);
    bufp->fullCData(oldp+935,((((IData)(vlSelfRef.out_rdy_i) 
                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                    | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 2U))) ? 
                                   ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                     ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->fullBit(oldp+936,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                   >> 3U))));
    bufp->fullCData(oldp+937,(((0x7ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 1U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->fullCData(oldp+938,(((0x7ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 1U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 3U))))),3);
    bufp->fullCData(oldp+939,(((((IData)(vlSelfRef.out_rdy_i) 
                                 >> 3U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                    | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 2U))) ? 
                                   ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                     ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->fullBit(oldp+940,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                   >> 6U))));
    bufp->fullCData(oldp+941,(((0x0ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 4U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->fullCData(oldp+942,(((0x0ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 4U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 6U))))),3);
    bufp->fullCData(oldp+943,(((((IData)(vlSelfRef.out_rdy_i) 
                                 >> 6U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                    | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 2U))) ? 
                                   ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                     ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->fullCData(oldp+944,((0x0000003fU & (vlSelfRef.sel_out_stage 
                                              >> 6U))),6);
    bufp->fullSData(oldp+945,(((0xffffff00U & (((IData)(vlSelfRef.out_rdy_i) 
                                                << 1U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 8U))) 
                               | ((0xffffff80U & (((IData)(vlSelfRef.out_rdy_i) 
                                                   << 3U) 
                                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 7U))) 
                                  | ((0xffffffc0U & 
                                      (((IData)(vlSelfRef.out_rdy_i) 
                                        << 5U) & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 6U))) 
                                     | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_1))))),9);
    bufp->fullSData(oldp+946,((((((0x07fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 5U) 
                                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                      << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                 << 6U) | (((0x1ffffffeU 
                                             & (((IData)(vlSelfRef.out_rdy_i) 
                                                 >> 3U) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                   << 1U))) 
                                            | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                           << 4U)) 
                               | (((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                     & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                                    << 3U) | (0xfffffffcU 
                                              & (((IData)(vlSelfRef.out_rdy_i) 
                                                  << 1U) 
                                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                    << 2U)))) 
                                  | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                      << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))),9);
    bufp->fullCData(oldp+947,((3U & (vlSelfRef.sel_out_stage 
                                     >> 6U))),2);
    bufp->fullCData(oldp+948,((3U & (vlSelfRef.sel_out_stage 
                                     >> 8U))),2);
    bufp->fullCData(oldp+949,((3U & (vlSelfRef.sel_out_stage 
                                     >> 0x0000000aU))),2);
    bufp->fullCData(oldp+950,(((0x07fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 5U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | ((0x1ffffffeU & (((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 3U) 
                                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 1U))) 
                                  | (((IData)(vlSelfRef.out_rdy_i) 
                                      >> 1U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))),3);
    bufp->fullBit(oldp+951,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                   >> 1U))));
    bufp->fullCData(oldp+952,(((0xfffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                << 1U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->fullCData(oldp+953,(((0xfffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                << 1U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 1U))))),3);
    bufp->fullCData(oldp+954,(((((IData)(vlSelfRef.out_rdy_i) 
                                 >> 1U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                    | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 2U))) ? 
                                   ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                     ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->fullBit(oldp+955,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                   >> 4U))));
    bufp->fullCData(oldp+956,(((0x3ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->fullCData(oldp+957,(((0x3ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 4U))))),3);
    bufp->fullCData(oldp+958,(((((IData)(vlSelfRef.out_rdy_i) 
                                 >> 4U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                    | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 2U))) ? 
                                   ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                     ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->fullBit(oldp+959,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                   >> 7U))));
    bufp->fullCData(oldp+960,(((0x07fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 5U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->fullCData(oldp+961,(((0x07fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 5U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 7U))))),3);
    bufp->fullCData(oldp+962,(((((IData)(vlSelfRef.out_rdy_i) 
                                 >> 7U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                    | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 2U))) ? 
                                   ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                     ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->fullCData(oldp+963,((0x0000003fU & (vlSelfRef.sel_out_stage 
                                              >> 0x0000000cU))),6);
    bufp->fullSData(oldp+964,(((0xffffff00U & ((IData)(vlSelfRef.out_rdy_i) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 8U))) 
                               | ((0xffffff80U & (((IData)(vlSelfRef.out_rdy_i) 
                                                   << 2U) 
                                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 7U))) 
                                  | ((0xffffffc0U & 
                                      (((IData)(vlSelfRef.out_rdy_i) 
                                        << 4U) & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 6U))) 
                                     | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_1))))),9);
    bufp->fullSData(oldp+965,((((((0x03fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 6U) 
                                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                      << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                 << 6U) | (((0x0ffffffeU 
                                             & (((IData)(vlSelfRef.out_rdy_i) 
                                                 >> 4U) 
                                                & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                   << 1U))) 
                                            | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                           << 4U)) 
                               | (((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                     & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                                    << 3U) | (0xfffffffcU 
                                              & ((IData)(vlSelfRef.out_rdy_i) 
                                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                    << 2U)))) 
                                  | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                      << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))),9);
    bufp->fullCData(oldp+966,((3U & (vlSelfRef.sel_out_stage 
                                     >> 0x0000000cU))),2);
    bufp->fullCData(oldp+967,((3U & (vlSelfRef.sel_out_stage 
                                     >> 0x0000000eU))),2);
    bufp->fullCData(oldp+968,((3U & (vlSelfRef.sel_out_stage 
                                     >> 0x00000010U))),2);
    bufp->fullCData(oldp+969,(((0x03fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 6U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | ((0x0ffffffeU & (((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 4U) 
                                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 1U))) 
                                  | (((IData)(vlSelfRef.out_rdy_i) 
                                      >> 2U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))),3);
    bufp->fullBit(oldp+970,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                   >> 2U))));
    bufp->fullCData(oldp+971,(((0xfffffffcU & ((IData)(vlSelfRef.out_rdy_i) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->fullCData(oldp+972,(((0xfffffffcU & ((IData)(vlSelfRef.out_rdy_i) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 2U))))),3);
    bufp->fullCData(oldp+973,(((((IData)(vlSelfRef.out_rdy_i) 
                                 >> 2U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                    | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 2U))) ? 
                                   ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                     ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->fullBit(oldp+974,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                   >> 5U))));
    bufp->fullCData(oldp+975,(((0x1ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 3U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->fullCData(oldp+976,(((0x1ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 3U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 5U))))),3);
    bufp->fullCData(oldp+977,(((((IData)(vlSelfRef.out_rdy_i) 
                                 >> 5U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                    | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 2U))) ? 
                                   ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                     ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->fullBit(oldp+978,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                   >> 8U))));
    bufp->fullCData(oldp+979,(((0x03fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 6U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->fullCData(oldp+980,(((0x03fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                                >> 6U) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                  << 2U))) 
                               | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                   >> 8U))))),3);
    bufp->fullCData(oldp+981,(((((IData)(vlSelfRef.out_rdy_i) 
                                 >> 8U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                    | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 2U))) ? 
                                   ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                     ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                                : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
}
