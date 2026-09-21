// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VClos_NoC__Syms.h"


void VClos_NoC___024root__trace_chg_0_sub_0(VClos_NoC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VClos_NoC___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_chg_0\n"); );
    // Body
    VClos_NoC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VClos_NoC___024root*>(voidSelf);
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VClos_NoC___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VClos_NoC___024root__trace_chg_0_sub_0(VClos_NoC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_chg_0_sub_0\n"); );
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.Clos_NoC__DOT__stg3_rdy_i),9);
        bufp->chgCData(oldp+1,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                 << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))),6);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid),6);
        bufp->chgCData(oldp+3,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+5,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),2);
        bufp->chgCData(oldp+6,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                      >> 2U))),2);
        bufp->chgCData(oldp+7,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                      >> 4U))),2);
        bufp->chgCData(oldp+8,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                 << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))),6);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid),6);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+12,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),2);
        bufp->chgCData(oldp+13,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+14,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                       >> 4U))),2);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.ready_i),3);
        bufp->chgCData(oldp+16,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4) 
                                       >> 3U))),3);
        bufp->chgCData(oldp+17,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT__stg3_rdy_i) 
                                       >> 6U))),3);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        __Vtemp_1[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.data_o[0U];
        __Vtemp_1[1U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.data_o[1U];
        __Vtemp_1[2U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.data_o[2U];
        __Vtemp_1[3U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.data_o[0U];
        __Vtemp_1[4U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.data_o[1U];
        __Vtemp_1[5U] = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.data_o[2U];
        bufp->chgWData(oldp+18,(__Vtemp_1),192);
        bufp->chgWData(oldp+24,(vlSelfRef.Clos_NoC__DOT__stg2_data_i),192);
        __Vtemp_3[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_o[0U];
        __Vtemp_3[1U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_o[1U];
        __Vtemp_3[2U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_o[2U];
        __Vtemp_3[3U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.data_o[0U];
        __Vtemp_3[4U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.data_o[1U];
        __Vtemp_3[5U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.data_o[2U];
        __Vtemp_3[6U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.data_o[0U];
        __Vtemp_3[7U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.data_o[1U];
        __Vtemp_3[8U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.data_o[2U];
        bufp->chgWData(oldp+30,(__Vtemp_3),288);
        bufp->chgWData(oldp+39,(vlSelfRef.Clos_NoC__DOT__stg3_data_i),288);
        __Vtemp_5[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_o[0U];
        __Vtemp_5[1U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_o[1U];
        __Vtemp_5[2U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_o[2U];
        __Vtemp_5[3U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.data_o[0U];
        __Vtemp_5[4U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.data_o[1U];
        __Vtemp_5[5U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.data_o[2U];
        __Vtemp_5[6U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.data_o[0U];
        __Vtemp_5[7U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.data_o[1U];
        __Vtemp_5[8U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.data_o[2U];
        bufp->chgWData(oldp+48,(__Vtemp_5),288);
        bufp->chgCData(oldp+57,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.valid_o) 
                                  << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.valid_o))),6);
        bufp->chgCData(oldp+58,(vlSelfRef.Clos_NoC__DOT__stg1_rdy_i),6);
        bufp->chgCData(oldp+59,(vlSelfRef.Clos_NoC__DOT__stg2_valid_i),6);
        bufp->chgSData(oldp+60,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.valid_o) 
                                  << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.valid_o) 
                                             << 3U) 
                                            | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.valid_o)))),9);
        bufp->chgSData(oldp+61,(vlSelfRef.Clos_NoC__DOT__stg2_rdy_i),9);
        bufp->chgCData(oldp+62,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.ready_o) 
                                  << 4U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.ready_o) 
                                             << 2U) 
                                            | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.ready_o)))),6);
        bufp->chgSData(oldp+63,(vlSelfRef.Clos_NoC__DOT__stg3_valid_i),9);
        bufp->chgSData(oldp+64,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.valid_o) 
                                  << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.valid_o) 
                                             << 3U) 
                                            | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.valid_o)))),9);
        bufp->chgSData(oldp+65,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.ready_o) 
                                  << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.ready_o) 
                                             << 3U) 
                                            | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.ready_o)))),9);
        bufp->chgBit(oldp+66,(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx));
        bufp->chgBit(oldp+67,(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx));
        bufp->chgBit(oldp+68,((1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))));
        bufp->chgCData(oldp+69,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.ready_o),2);
        bufp->chgWData(oldp+70,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.data_o),96);
        bufp->chgCData(oldp+73,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.idx_o),3);
        bufp->chgCData(oldp+74,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.valid_o),3);
        bufp->chgCData(oldp+75,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.ready_i),3);
        bufp->chgCData(oldp+76,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                  << 5U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                              & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                 & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)) 
                                                << 3U) 
                                               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))))),6);
        bufp->chgCData(oldp+77,((((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 5U) | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                                << 3U))) 
                                 | ((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                      & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)) 
                                     << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                 & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)) 
                                                << 1U) 
                                               | ((~ (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)) 
                                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))))),6);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
        bufp->chgCData(oldp+79,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                  << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                              & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             << 1U) 
                                            | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                               & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx))))),3);
        bufp->chgQData(oldp+80,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                  << 1U) | (QData)((IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)))),33);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready));
        bufp->chgCData(oldp+84,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                   & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)) 
                                  << 1U) | ((~ (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx)) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgCData(oldp+86,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+87,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                      & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                      ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                         | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))
                                      : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+88,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                     >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+89,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U) 
                                 | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+90,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+91,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                     | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                        & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                           >> 1U))))));
        bufp->chgBit(oldp+92,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                        & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                           >> 1U))))));
        bufp->chgBit(oldp+93,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                        | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                           & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                              >> 1U)))))));
        bufp->chgCData(oldp+94,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  | ((1U 
                                                      <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                     & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                        >> 1U)))))),2);
        bufp->chgCData(oldp+95,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                  << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+96,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                  << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+98,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                 & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),2);
        bufp->chgQData(oldp+99,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                  << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+101,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready));
        bufp->chgCData(oldp+103,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+105,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+106,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+107,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+108,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+109,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+110,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+111,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+112,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+113,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+114,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+115,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+116,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+118,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                     >> 2U))),2);
        bufp->chgQData(oldp+119,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+121,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready));
        bufp->chgCData(oldp+123,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+125,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+126,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+127,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+128,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+129,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+130,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+131,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+132,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+133,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+134,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+135,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+136,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+137,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+138,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 4U))),2);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.ready_o),2);
        bufp->chgWData(oldp+140,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.data_o),96);
        bufp->chgCData(oldp+143,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.idx_o),3);
        bufp->chgCData(oldp+144,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.valid_o),3);
        bufp->chgCData(oldp+145,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT__stg1_rdy_i) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+146,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 5U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                                 << 3U) 
                                                | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))))),6);
        bufp->chgCData(oldp+147,((((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
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
        bufp->chgCData(oldp+148,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
        bufp->chgCData(oldp+149,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))))),3);
        bufp->chgQData(oldp+150,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+152,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready));
        bufp->chgCData(oldp+154,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+156,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+157,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+158,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+159,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+160,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+161,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+162,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+163,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+164,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+165,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+166,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+167,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+168,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+169,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),2);
        bufp->chgQData(oldp+170,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+172,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready));
        bufp->chgCData(oldp+174,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+176,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+177,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+178,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+179,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+180,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+181,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+182,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+183,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+184,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+185,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+186,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+187,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+188,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+189,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                     >> 2U))),2);
        bufp->chgQData(oldp+190,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+192,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready));
        bufp->chgCData(oldp+194,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+196,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+197,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+198,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+199,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+200,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+201,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+202,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+203,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+204,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+205,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+206,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+207,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+208,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+209,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 4U))),2);
        bufp->chgQData(oldp+210,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i),64);
        bufp->chgCData(oldp+212,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.valid_i),2);
        bufp->chgCData(oldp+213,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.ready_o),2);
        bufp->chgWData(oldp+214,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_o),96);
        bufp->chgCData(oldp+217,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.idx_o),3);
        bufp->chgCData(oldp+218,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.valid_o),3);
        bufp->chgCData(oldp+219,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.ready_i),3);
        bufp->chgCData(oldp+220,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                   << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))),6);
        bufp->chgCData(oldp+221,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 5U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
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
        bufp->chgWData(oldp+222,(__Vtemp_6),192);
        bufp->chgCData(oldp+228,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid),6);
        bufp->chgCData(oldp+229,((((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
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
        bufp->chgCData(oldp+230,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+231,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
        bufp->chgCData(oldp+232,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+233,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx))))),3);
        bufp->chgQData(oldp+234,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx)))),33);
        bufp->chgBit(oldp+236,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready));
        bufp->chgCData(oldp+238,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),2);
        bufp->chgCData(oldp+239,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                    & (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx)) 
                                   << 1U) | ((~ (IData)(vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+240,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgCData(oldp+241,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+242,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+243,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+244,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+245,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+246,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+247,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+248,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+249,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+250,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+251,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+252,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+253,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),2);
        bufp->chgQData(oldp+254,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+256,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready));
        bufp->chgCData(oldp+258,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+259,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+260,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+261,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+262,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+263,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+264,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+265,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+266,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+267,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+268,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+269,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+270,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+271,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+272,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+273,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+274,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                     >> 2U))),2);
        bufp->chgQData(oldp+275,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+277,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready));
        bufp->chgCData(oldp+279,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+280,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+281,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+282,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+283,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+284,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+285,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+286,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+287,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+288,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+289,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+290,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+291,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+292,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+293,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+294,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+295,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 4U))),2);
        bufp->chgQData(oldp+296,((((QData)((IData)(
                                                   vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U])))),64);
        bufp->chgCData(oldp+298,((3U & ((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+299,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.ready_o),2);
        bufp->chgWData(oldp+300,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.data_o),96);
        bufp->chgCData(oldp+303,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.idx_o),3);
        bufp->chgCData(oldp+304,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.valid_o),3);
        bufp->chgCData(oldp+305,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_2) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+306,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                   << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))),6);
        bufp->chgCData(oldp+307,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 5U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                                 << 3U) 
                                                | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))))),6);
        __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))));
        __Vtemp_7[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))) 
                                 >> 0x00000020U));
        __Vtemp_7[2U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))));
        __Vtemp_7[3U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))) 
                                 >> 0x00000020U));
        __Vtemp_7[4U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))));
        __Vtemp_7[5U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U]))) 
                                 >> 0x00000020U));
        bufp->chgWData(oldp+308,(__Vtemp_7),192);
        bufp->chgCData(oldp+314,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid),6);
        bufp->chgCData(oldp+315,((((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
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
        bufp->chgCData(oldp+316,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+317,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
        bufp->chgCData(oldp+318,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+319,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))))),3);
        bufp->chgQData(oldp+320,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+322,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
        bufp->chgBit(oldp+323,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready));
        bufp->chgCData(oldp+324,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),2);
        bufp->chgCData(oldp+325,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+326,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+327,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+328,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+329,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+330,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+331,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+332,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+333,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+334,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+335,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+336,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+337,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+338,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+339,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+340,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),2);
        bufp->chgQData(oldp+341,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+343,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready));
        bufp->chgCData(oldp+345,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+346,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+347,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+348,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+349,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+350,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+351,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+352,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+353,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+354,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+355,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+356,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+357,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+358,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+359,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+360,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+361,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                     >> 2U))),2);
        bufp->chgQData(oldp+362,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+364,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready));
        bufp->chgCData(oldp+366,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+367,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+368,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+369,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+370,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+371,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+372,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+373,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+374,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+375,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+376,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+377,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+378,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+379,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+380,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+381,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+382,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 4U))),2);
        bufp->chgQData(oldp+383,((((QData)((IData)(
                                                   vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U])))),64);
        bufp->chgCData(oldp+385,((3U & ((IData)(vlSelfRef.Clos_NoC__DOT__stg2_valid_i) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+386,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.ready_o),2);
        bufp->chgWData(oldp+387,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.data_o),96);
        bufp->chgCData(oldp+390,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.idx_o),3);
        bufp->chgCData(oldp+391,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.valid_o),3);
        bufp->chgCData(oldp+392,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT__stg2_rdy_i) 
                                        >> 6U))),3);
        bufp->chgCData(oldp+393,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                   << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))),6);
        bufp->chgCData(oldp+394,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 5U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                                 << 3U) 
                                                | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))))),6);
        __Vtemp_8[0U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))));
        __Vtemp_8[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))) 
                                 >> 0x00000020U));
        __Vtemp_8[2U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))));
        __Vtemp_8[3U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))) 
                                 >> 0x00000020U));
        __Vtemp_8[4U] = (IData)((((QData)((IData)(vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))));
        __Vtemp_8[5U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U]))) 
                                 >> 0x00000020U));
        bufp->chgWData(oldp+395,(__Vtemp_8),192);
        bufp->chgCData(oldp+401,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid),6);
        bufp->chgCData(oldp+402,((((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
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
        bufp->chgCData(oldp+403,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+404,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
        bufp->chgCData(oldp+405,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+406,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))))),3);
        bufp->chgQData(oldp+407,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+409,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready));
        bufp->chgCData(oldp+411,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),2);
        bufp->chgCData(oldp+412,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+413,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+414,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+415,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+416,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+417,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+418,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+419,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+420,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+421,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+422,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+423,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+424,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+425,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+426,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+427,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),2);
        bufp->chgQData(oldp+428,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+430,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
        bufp->chgBit(oldp+431,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready));
        bufp->chgCData(oldp+432,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+433,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+434,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+435,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+436,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+437,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+438,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+439,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+440,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+441,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+442,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+443,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+444,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+445,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+446,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+447,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+448,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0) 
                                     >> 2U))),2);
        bufp->chgQData(oldp+449,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),33);
        bufp->chgBit(oldp+451,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
        bufp->chgBit(oldp+452,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready));
        bufp->chgCData(oldp+453,((3U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+454,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)))),2);
        bufp->chgIData(oldp+455,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgBit(oldp+456,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o));
        bufp->chgCData(oldp+457,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),2);
        bufp->chgBit(oldp+458,((1U & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                                       ? ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                          | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))
                                       : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))));
        bufp->chgCData(oldp+459,((((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                      >> 1U)) << 1U)),2);
        bufp->chgCData(oldp+460,(((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 1U)) << 1U) 
                                  | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))),2);
        bufp->chgBit(oldp+461,((1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)))));
        bufp->chgBit(oldp+462,((1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                      | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+463,((1U & (~ ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                         & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                            >> 1U))))));
        bufp->chgBit(oldp+464,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         | ((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 1U)))))));
        bufp->chgCData(oldp+465,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                   | ((1U 
                                                       <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                         >> 1U)))))),2);
        bufp->chgCData(oldp+466,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__1__KET__) 
                                   << 1U) | (1U & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),2);
        bufp->chgCData(oldp+467,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   << 1U) | ((1U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                             & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+468,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+469,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 4U))),2);
        bufp->chgWData(oldp+470,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i),96);
        bufp->chgCData(oldp+473,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.valid_i),3);
        bufp->chgCData(oldp+474,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.ready_o),3);
        bufp->chgWData(oldp+475,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_o),96);
        bufp->chgCData(oldp+478,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.idx_o),6);
        bufp->chgCData(oldp+479,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.valid_o),3);
        bufp->chgSData(oldp+480,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                   << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                              << 3U) 
                                             | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)))),9);
        __Vtemp_9[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[0U];
        __Vtemp_9[1U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[1U];
        __Vtemp_9[2U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[2U];
        __Vtemp_9[3U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[0U];
        __Vtemp_9[4U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[1U];
        __Vtemp_9[5U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[2U];
        __Vtemp_9[6U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[0U];
        __Vtemp_9[7U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[1U];
        __Vtemp_9[8U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[2U];
        bufp->chgWData(oldp+481,(__Vtemp_9),288);
        bufp->chgSData(oldp+490,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid),9);
        bufp->chgCData(oldp+491,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+492,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
        bufp->chgCData(oldp+493,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+494,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_1) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+495,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgQData(oldp+496,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
        bufp->chgBit(oldp+498,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
        bufp->chgCData(oldp+499,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),3);
        bufp->chgIData(oldp+500,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgCData(oldp+501,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
        bufp->chgCData(oldp+502,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                   << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
        __Vtemp_10[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o;
        __Vtemp_10[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                      ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                      : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
        __Vtemp_10[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                       ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                       : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+503,(__Vtemp_10),96);
        bufp->chgCData(oldp+506,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid)))),3);
        bufp->chgCData(oldp+507,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
        bufp->chgCData(oldp+508,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                     << 1U))),3);
        bufp->chgCData(oldp+509,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 1U)) << 1U) 
                                     | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
        bufp->chgCData(oldp+510,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+511,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
        bufp->chgCData(oldp+512,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
        bufp->chgBit(oldp+513,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgBit(oldp+514,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgCData(oldp+515,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+516,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((((1U 
                                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                       ? 0U
                                                       : 1U) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
        bufp->chgCData(oldp+517,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+518,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                     ? 1U
                                                     : 2U)))),8);
        bufp->chgBit(oldp+519,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+520,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),3);
        bufp->chgBit(oldp+521,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+522,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgQData(oldp+523,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
        bufp->chgBit(oldp+525,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
        bufp->chgCData(oldp+526,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                        >> 3U))),3);
        bufp->chgIData(oldp+527,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgCData(oldp+528,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
        bufp->chgCData(oldp+529,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                   << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
        __Vtemp_11[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o;
        __Vtemp_11[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                      ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                      : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
        __Vtemp_11[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                       ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                       : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+530,(__Vtemp_11),96);
        bufp->chgCData(oldp+533,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid)))),3);
        bufp->chgCData(oldp+534,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
        bufp->chgCData(oldp+535,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                     << 1U))),3);
        bufp->chgCData(oldp+536,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 1U)) << 1U) 
                                     | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
        bufp->chgCData(oldp+537,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+538,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
        bufp->chgCData(oldp+539,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
        bufp->chgBit(oldp+540,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgBit(oldp+541,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgCData(oldp+542,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+543,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((((1U 
                                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                       ? 0U
                                                       : 1U) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
        bufp->chgCData(oldp+544,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+545,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                     ? 1U
                                                     : 2U)))),8);
        bufp->chgBit(oldp+546,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+547,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                     >> 3U))),3);
        bufp->chgBit(oldp+548,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+549,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgQData(oldp+550,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
        bufp->chgBit(oldp+552,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
        bufp->chgCData(oldp+553,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                        >> 6U))),3);
        bufp->chgIData(oldp+554,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgCData(oldp+555,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
        bufp->chgCData(oldp+556,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                   << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
        __Vtemp_12[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
        __Vtemp_12[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                      ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                      : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
        __Vtemp_12[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                       ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                       : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+557,(__Vtemp_12),96);
        bufp->chgCData(oldp+560,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid)))),3);
        bufp->chgCData(oldp+561,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
        bufp->chgCData(oldp+562,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                     << 1U))),3);
        bufp->chgCData(oldp+563,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 1U)) << 1U) 
                                     | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
        bufp->chgCData(oldp+564,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+565,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
        bufp->chgCData(oldp+566,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
        bufp->chgBit(oldp+567,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgBit(oldp+568,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgCData(oldp+569,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+570,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((((1U 
                                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                       ? 0U
                                                       : 1U) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
        bufp->chgCData(oldp+571,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+572,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                     ? 1U
                                                     : 2U)))),8);
        bufp->chgBit(oldp+573,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+574,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 6U))),3);
        bufp->chgBit(oldp+575,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+576,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        __Vtemp_13[0U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
        __Vtemp_13[1U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
        __Vtemp_13[2U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
        bufp->chgWData(oldp+577,(__Vtemp_13),96);
        bufp->chgCData(oldp+580,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+581,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.ready_o),3);
        bufp->chgWData(oldp+582,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.data_o),96);
        bufp->chgCData(oldp+585,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.idx_o),6);
        bufp->chgCData(oldp+586,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.valid_o),3);
        bufp->chgSData(oldp+587,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                   << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                              << 3U) 
                                             | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)))),9);
        __Vtemp_15[0U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
        __Vtemp_15[1U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
        __Vtemp_15[2U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
        __Vtemp_15[3U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
        __Vtemp_15[4U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
        __Vtemp_15[5U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
        __Vtemp_15[6U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
        __Vtemp_15[7U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
        __Vtemp_15[8U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
        bufp->chgWData(oldp+588,(__Vtemp_15),288);
        bufp->chgSData(oldp+597,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid),9);
        bufp->chgCData(oldp+598,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+599,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
        bufp->chgCData(oldp+600,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+601,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_1) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+602,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgQData(oldp+603,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
        bufp->chgBit(oldp+605,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
        bufp->chgCData(oldp+606,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),3);
        bufp->chgIData(oldp+607,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgCData(oldp+608,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
        bufp->chgCData(oldp+609,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                   << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
        __Vtemp_16[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o;
        __Vtemp_16[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                      ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                      : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
        __Vtemp_16[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                       ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                       : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+610,(__Vtemp_16),96);
        bufp->chgCData(oldp+613,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid)))),3);
        bufp->chgCData(oldp+614,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
        bufp->chgCData(oldp+615,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                     << 1U))),3);
        bufp->chgCData(oldp+616,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 1U)) << 1U) 
                                     | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
        bufp->chgCData(oldp+617,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+618,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
        bufp->chgCData(oldp+619,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
        bufp->chgBit(oldp+620,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgBit(oldp+621,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgCData(oldp+622,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+623,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((((1U 
                                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                       ? 0U
                                                       : 1U) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
        bufp->chgCData(oldp+624,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+625,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                     ? 1U
                                                     : 2U)))),8);
        bufp->chgBit(oldp+626,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+627,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),3);
        bufp->chgBit(oldp+628,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+629,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgQData(oldp+630,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
        bufp->chgBit(oldp+632,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
        bufp->chgCData(oldp+633,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                        >> 3U))),3);
        bufp->chgIData(oldp+634,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgCData(oldp+635,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
        bufp->chgCData(oldp+636,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                   << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
        __Vtemp_17[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o;
        __Vtemp_17[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                      ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                      : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
        __Vtemp_17[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                       ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                       : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+637,(__Vtemp_17),96);
        bufp->chgCData(oldp+640,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid)))),3);
        bufp->chgCData(oldp+641,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
        bufp->chgCData(oldp+642,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                     << 1U))),3);
        bufp->chgCData(oldp+643,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 1U)) << 1U) 
                                     | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
        bufp->chgCData(oldp+644,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+645,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
        bufp->chgCData(oldp+646,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
        bufp->chgBit(oldp+647,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgBit(oldp+648,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgCData(oldp+649,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+650,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((((1U 
                                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                       ? 0U
                                                       : 1U) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
        bufp->chgCData(oldp+651,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+652,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                     ? 1U
                                                     : 2U)))),8);
        bufp->chgBit(oldp+653,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+654,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                     >> 3U))),3);
        bufp->chgBit(oldp+655,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+656,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgQData(oldp+657,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
        bufp->chgBit(oldp+659,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
        bufp->chgCData(oldp+660,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                        >> 6U))),3);
        bufp->chgIData(oldp+661,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgCData(oldp+662,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
        bufp->chgCData(oldp+663,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                   << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
        __Vtemp_18[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
        __Vtemp_18[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                      ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                      : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
        __Vtemp_18[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                       ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                       : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+664,(__Vtemp_18),96);
        bufp->chgCData(oldp+667,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid)))),3);
        bufp->chgCData(oldp+668,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
        bufp->chgCData(oldp+669,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                     << 1U))),3);
        bufp->chgCData(oldp+670,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 1U)) << 1U) 
                                     | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
        bufp->chgCData(oldp+671,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+672,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
        bufp->chgCData(oldp+673,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
        bufp->chgBit(oldp+674,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgBit(oldp+675,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgCData(oldp+676,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+677,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((((1U 
                                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                       ? 0U
                                                       : 1U) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
        bufp->chgCData(oldp+678,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+679,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                     ? 1U
                                                     : 2U)))),8);
        bufp->chgBit(oldp+680,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+681,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 6U))),3);
        bufp->chgBit(oldp+682,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        __Vtemp_19[0U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[6U];
        __Vtemp_19[1U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[7U];
        __Vtemp_19[2U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[8U];
        bufp->chgWData(oldp+684,(__Vtemp_19),96);
        bufp->chgCData(oldp+687,((7U & ((IData)(vlSelfRef.Clos_NoC__DOT__stg3_valid_i) 
                                        >> 6U))),3);
        bufp->chgCData(oldp+688,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.ready_o),3);
        bufp->chgWData(oldp+689,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.data_o),96);
        bufp->chgCData(oldp+692,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.idx_o),6);
        bufp->chgCData(oldp+693,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.valid_o),3);
        bufp->chgSData(oldp+694,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                   << 6U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                              << 3U) 
                                             | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)))),9);
        __Vtemp_21[0U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[6U];
        __Vtemp_21[1U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[7U];
        __Vtemp_21[2U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[8U];
        __Vtemp_21[3U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[6U];
        __Vtemp_21[4U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[7U];
        __Vtemp_21[5U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[8U];
        __Vtemp_21[6U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[6U];
        __Vtemp_21[7U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[7U];
        __Vtemp_21[8U] = vlSelfRef.Clos_NoC__DOT__stg3_data_i[8U];
        bufp->chgWData(oldp+695,(__Vtemp_21),288);
        bufp->chgSData(oldp+704,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid),9);
        bufp->chgCData(oldp+705,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+706,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i),3);
        bufp->chgCData(oldp+707,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgCData(oldp+708,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_1) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+709,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o),3);
        bufp->chgQData(oldp+710,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
        bufp->chgBit(oldp+712,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
        bufp->chgCData(oldp+713,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i),3);
        bufp->chgIData(oldp+714,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgCData(oldp+715,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
        bufp->chgCData(oldp+716,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                   << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
        __Vtemp_22[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o;
        __Vtemp_22[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                      ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                      : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
        __Vtemp_22[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                       ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                       : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+717,(__Vtemp_22),96);
        bufp->chgCData(oldp+720,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid)))),3);
        bufp->chgCData(oldp+721,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
        bufp->chgCData(oldp+722,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                     << 1U))),3);
        bufp->chgCData(oldp+723,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 1U)) << 1U) 
                                     | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
        bufp->chgCData(oldp+724,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+725,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
        bufp->chgCData(oldp+726,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
        bufp->chgBit(oldp+727,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgBit(oldp+728,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgCData(oldp+729,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+730,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((((1U 
                                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                       ? 0U
                                                       : 1U) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
        bufp->chgCData(oldp+731,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+732,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                     ? 1U
                                                     : 2U)))),8);
        bufp->chgBit(oldp+733,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+734,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))),3);
        bufp->chgBit(oldp+735,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+736,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgQData(oldp+737,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
        bufp->chgBit(oldp+739,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
        bufp->chgCData(oldp+740,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                        >> 3U))),3);
        bufp->chgIData(oldp+741,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgCData(oldp+742,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
        bufp->chgCData(oldp+743,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                   << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
        __Vtemp_23[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o;
        __Vtemp_23[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                      ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                      : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
        __Vtemp_23[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                       ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                       : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+744,(__Vtemp_23),96);
        bufp->chgCData(oldp+747,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid)))),3);
        bufp->chgCData(oldp+748,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
        bufp->chgCData(oldp+749,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                     << 1U))),3);
        bufp->chgCData(oldp+750,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 1U)) << 1U) 
                                     | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
        bufp->chgCData(oldp+751,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+752,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
        bufp->chgCData(oldp+753,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
        bufp->chgBit(oldp+754,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgBit(oldp+755,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgCData(oldp+756,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+757,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((((1U 
                                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                       ? 0U
                                                       : 1U) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
        bufp->chgCData(oldp+758,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+759,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                     ? 1U
                                                     : 2U)))),8);
        bufp->chgBit(oldp+760,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+761,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0) 
                                     >> 3U))),3);
        bufp->chgBit(oldp+762,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+763,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgQData(oldp+764,((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 2U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))),34);
        bufp->chgBit(oldp+766,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
        bufp->chgCData(oldp+767,((7U & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid) 
                                        >> 6U))),3);
        bufp->chgIData(oldp+768,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o),32);
        bufp->chgCData(oldp+769,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o),2);
        bufp->chgCData(oldp+770,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                   << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o))),6);
        __Vtemp_24[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
        __Vtemp_24[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                      ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                      : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))));
        __Vtemp_24[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                       ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                                                       : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)))) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+771,(__Vtemp_24),96);
        bufp->chgCData(oldp+774,(((4U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid)))),3);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d),3);
        bufp->chgCData(oldp+776,(((((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                     << 1U))),3);
        bufp->chgCData(oldp+777,(((((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                       >> 2U)) << 2U) 
                                  | ((((1U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                       & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                          >> 1U)) << 1U) 
                                     | (1U & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))))),3);
        bufp->chgCData(oldp+778,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+779,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx),2);
        bufp->chgCData(oldp+780,((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))),2);
        bufp->chgBit(oldp+781,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgBit(oldp+782,((1U & (~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                         | ((2U <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                               >> 2U)))))));
        bufp->chgCData(oldp+783,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    <= (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+784,((0x00000020U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((((1U 
                                                       & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                                                       ? 0U
                                                       : 1U) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))))),8);
        bufp->chgCData(oldp+785,(((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
                                    << 3U) | (((2U 
                                                > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                               & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                  >> 2U)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                                | ((2U 
                                                    > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                                   & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+786,((0x00000024U | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__BRA__7__03a6__KET__) 
                                                  << 6U) 
                                                 | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                                     ? 1U
                                                     : 2U)))),8);
        bufp->chgBit(oldp+787,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
        bufp->chgCData(oldp+788,(((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                  & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid) 
                                     >> 6U))),3);
        bufp->chgBit(oldp+789,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+791,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+792,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+793,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+794,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+795,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+796,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+797,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+798,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+799,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+800,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+801,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+802,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+803,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+805,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+806,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+808,(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+809,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+811,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+812,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+813,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+814,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+815,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+816,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+817,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+818,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+819,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+820,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+821,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+822,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+823,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+824,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+825,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+826,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+827,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+828,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+829,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+830,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+831,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+832,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgBit(oldp+833,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
        bufp->chgBit(oldp+834,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+835,(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),2);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
        bufp->chgBit(oldp+837,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+838,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
        bufp->chgCData(oldp+839,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
        bufp->chgBit(oldp+840,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+841,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
        bufp->chgCData(oldp+842,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
        bufp->chgBit(oldp+843,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+844,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
        bufp->chgCData(oldp+845,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
        bufp->chgBit(oldp+846,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+847,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
        bufp->chgCData(oldp+848,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
        bufp->chgBit(oldp+849,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+850,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
        bufp->chgCData(oldp+851,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
        bufp->chgBit(oldp+852,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+853,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
        bufp->chgCData(oldp+854,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
        bufp->chgBit(oldp+855,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+856,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
        bufp->chgCData(oldp+857,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
        bufp->chgBit(oldp+858,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+859,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
        bufp->chgBit(oldp+861,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q));
        bufp->chgCData(oldp+862,(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q),3);
    }
    bufp->chgWData(oldp+863,(vlSelfRef.data_in),128);
    bufp->chgCData(oldp+867,(vlSelfRef.valid_in),4);
    bufp->chgCData(oldp+868,(vlSelfRef.ready_out),4);
    bufp->chgIData(oldp+869,(vlSelfRef.sel_out_stage),18);
    bufp->chgCData(oldp+870,(vlSelfRef.sel_inp_stage),8);
    bufp->chgSData(oldp+871,(vlSelfRef.sel_inp_stage_stage),12);
    bufp->chgWData(oldp+872,(vlSelfRef.out_data),192);
    bufp->chgCData(oldp+878,(vlSelfRef.out_valid),6);
    bufp->chgSData(oldp+879,(vlSelfRef.out_rdy_i),9);
    bufp->chgBit(oldp+880,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+881,(vlSelfRef.rst_ni));
    bufp->chgBit(oldp+882,(vlSelfRef.flush_i));
    bufp->chgQData(oldp+883,((((QData)((IData)(vlSelfRef.data_in[1U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.data_in[0U])))),64);
    bufp->chgCData(oldp+885,((0x0000000fU & (IData)(vlSelfRef.sel_inp_stage))),4);
    bufp->chgCData(oldp+886,((3U & (IData)(vlSelfRef.valid_in))),2);
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
    bufp->chgWData(oldp+887,(__Vtemp_25),192);
    bufp->chgBit(oldp+893,((1U & (IData)(vlSelfRef.valid_in))));
    bufp->chgBit(oldp+894,(((2U >= (3U & (IData)(vlSelfRef.sel_inp_stage))) 
                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i) 
                               >> (3U & (IData)(vlSelfRef.sel_inp_stage))))));
    bufp->chgCData(oldp+895,((3U & (IData)(vlSelfRef.sel_inp_stage))),2);
    bufp->chgBit(oldp+896,((1U & ((IData)(vlSelfRef.valid_in) 
                                  >> 1U))));
    bufp->chgBit(oldp+897,(((2U >= (3U & ((IData)(vlSelfRef.sel_inp_stage) 
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
    bufp->chgCData(oldp+898,((3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                    >> 2U))),2);
    bufp->chgQData(oldp+899,((((QData)((IData)(vlSelfRef.data_in[3U])) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 vlSelfRef.data_in[2U])))),64);
    bufp->chgCData(oldp+901,((0x0000000fU & ((IData)(vlSelfRef.sel_inp_stage) 
                                             >> 4U))),4);
    bufp->chgCData(oldp+902,((3U & ((IData)(vlSelfRef.valid_in) 
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
    bufp->chgWData(oldp+903,(__Vtemp_26),192);
    bufp->chgBit(oldp+909,((1U & ((IData)(vlSelfRef.valid_in) 
                                  >> 2U))));
    bufp->chgBit(oldp+910,(((2U >= (3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                          >> 4U))) 
                            & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i) 
                               >> (3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                         >> 4U))))));
    bufp->chgCData(oldp+911,((3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                    >> 4U))),2);
    bufp->chgBit(oldp+912,((1U & ((IData)(vlSelfRef.valid_in) 
                                  >> 3U))));
    bufp->chgBit(oldp+913,(((2U >= (3U & ((IData)(vlSelfRef.sel_inp_stage) 
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
    bufp->chgCData(oldp+914,((3U & ((IData)(vlSelfRef.sel_inp_stage) 
                                    >> 6U))),2);
    bufp->chgCData(oldp+915,((0x0000000fU & (IData)(vlSelfRef.sel_inp_stage_stage))),4);
    bufp->chgCData(oldp+916,((3U & (IData)(vlSelfRef.sel_inp_stage_stage))),2);
    bufp->chgCData(oldp+917,((3U & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+918,((0x0000000fU & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                             >> 4U))),4);
    bufp->chgCData(oldp+919,((3U & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+920,((3U & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                    >> 6U))),2);
    bufp->chgCData(oldp+921,((0x0000000fU & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                             >> 8U))),4);
    bufp->chgCData(oldp+922,((3U & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                    >> 8U))),2);
    bufp->chgCData(oldp+923,((3U & ((IData)(vlSelfRef.sel_inp_stage_stage) 
                                    >> 0x0000000aU))),2);
    bufp->chgCData(oldp+924,((0x0000003fU & vlSelfRef.sel_out_stage)),6);
    bufp->chgSData(oldp+925,(((0xffffff00U & (((IData)(vlSelfRef.out_rdy_i) 
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
    bufp->chgSData(oldp+926,((((((0x0ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
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
                                          << 4U)) | 
                              (((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                                 << 3U) | (((IData)(vlSelfRef.out_rdy_i) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           << 2U)) 
                               | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))),9);
    bufp->chgCData(oldp+927,((3U & vlSelfRef.sel_out_stage)),2);
    bufp->chgCData(oldp+928,((3U & (vlSelfRef.sel_out_stage 
                                    >> 2U))),2);
    bufp->chgCData(oldp+929,((3U & (vlSelfRef.sel_out_stage 
                                    >> 4U))),2);
    bufp->chgCData(oldp+930,(((0x0ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 4U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | ((0x3ffffffeU & (((IData)(vlSelfRef.out_rdy_i) 
                                                  >> 2U) 
                                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                    << 1U))) 
                                 | ((IData)(vlSelfRef.out_rdy_i) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))),3);
    bufp->chgBit(oldp+931,((1U & (IData)(vlSelfRef.out_rdy_i))));
    bufp->chgCData(oldp+932,(((((IData)(vlSelfRef.out_rdy_i) 
                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                               << 2U) | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                           & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          << 1U) | 
                                         ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->chgCData(oldp+933,(((((IData)(vlSelfRef.out_rdy_i) 
                                & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                               << 2U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                          << 1U) | 
                                         (1U & (IData)(vlSelfRef.out_rdy_i))))),3);
    bufp->chgCData(oldp+934,((((IData)(vlSelfRef.out_rdy_i) 
                               & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                               ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                               : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->chgBit(oldp+935,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                  >> 3U))));
    bufp->chgCData(oldp+936,(((0x7ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 1U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->chgCData(oldp+937,(((0x7ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 1U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                  << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                  >> 3U))))),3);
    bufp->chgCData(oldp+938,(((((IData)(vlSelfRef.out_rdy_i) 
                                >> 3U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                               ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                               : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->chgBit(oldp+939,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                  >> 6U))));
    bufp->chgCData(oldp+940,(((0x0ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 4U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->chgCData(oldp+941,(((0x0ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 4U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                  << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                  >> 6U))))),3);
    bufp->chgCData(oldp+942,(((((IData)(vlSelfRef.out_rdy_i) 
                                >> 6U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                               ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                               : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->chgCData(oldp+943,((0x0000003fU & (vlSelfRef.sel_out_stage 
                                             >> 6U))),6);
    bufp->chgSData(oldp+944,(((0xffffff00U & (((IData)(vlSelfRef.out_rdy_i) 
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
    bufp->chgSData(oldp+945,((((((0x07fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
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
                                          << 4U)) | 
                              (((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
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
    bufp->chgCData(oldp+946,((3U & (vlSelfRef.sel_out_stage 
                                    >> 6U))),2);
    bufp->chgCData(oldp+947,((3U & (vlSelfRef.sel_out_stage 
                                    >> 8U))),2);
    bufp->chgCData(oldp+948,((3U & (vlSelfRef.sel_out_stage 
                                    >> 0x0000000aU))),2);
    bufp->chgCData(oldp+949,(((0x07fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 5U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | ((0x1ffffffeU & (((IData)(vlSelfRef.out_rdy_i) 
                                                  >> 3U) 
                                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                    << 1U))) 
                                 | (((IData)(vlSelfRef.out_rdy_i) 
                                     >> 1U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))),3);
    bufp->chgBit(oldp+950,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                  >> 1U))));
    bufp->chgCData(oldp+951,(((0xfffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               << 1U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->chgCData(oldp+952,(((0xfffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               << 1U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                  << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                  >> 1U))))),3);
    bufp->chgCData(oldp+953,(((((IData)(vlSelfRef.out_rdy_i) 
                                >> 1U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                               ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                               : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->chgBit(oldp+954,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                  >> 4U))));
    bufp->chgCData(oldp+955,(((0x3ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 2U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->chgCData(oldp+956,(((0x3ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 2U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                  << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                  >> 4U))))),3);
    bufp->chgCData(oldp+957,(((((IData)(vlSelfRef.out_rdy_i) 
                                >> 4U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                               ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                               : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->chgBit(oldp+958,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                  >> 7U))));
    bufp->chgCData(oldp+959,(((0x07fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 5U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->chgCData(oldp+960,(((0x07fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 5U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                  << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                  >> 7U))))),3);
    bufp->chgCData(oldp+961,(((((IData)(vlSelfRef.out_rdy_i) 
                                >> 7U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                               ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                               : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->chgCData(oldp+962,((0x0000003fU & (vlSelfRef.sel_out_stage 
                                             >> 0x0000000cU))),6);
    bufp->chgSData(oldp+963,(((0xffffff00U & ((IData)(vlSelfRef.out_rdy_i) 
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
    bufp->chgSData(oldp+964,((((((0x03fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
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
                                          << 4U)) | 
                              (((((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                                 << 3U) | (0xfffffffcU 
                                           & ((IData)(vlSelfRef.out_rdy_i) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U)))) 
                               | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                    & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))),9);
    bufp->chgCData(oldp+965,((3U & (vlSelfRef.sel_out_stage 
                                    >> 0x0000000cU))),2);
    bufp->chgCData(oldp+966,((3U & (vlSelfRef.sel_out_stage 
                                    >> 0x0000000eU))),2);
    bufp->chgCData(oldp+967,((3U & (vlSelfRef.sel_out_stage 
                                    >> 0x00000010U))),2);
    bufp->chgCData(oldp+968,(((0x03fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 6U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | ((0x0ffffffeU & (((IData)(vlSelfRef.out_rdy_i) 
                                                  >> 4U) 
                                                 & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                    << 1U))) 
                                 | (((IData)(vlSelfRef.out_rdy_i) 
                                     >> 2U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))))),3);
    bufp->chgBit(oldp+969,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                  >> 2U))));
    bufp->chgCData(oldp+970,(((0xfffffffcU & ((IData)(vlSelfRef.out_rdy_i) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->chgCData(oldp+971,(((0xfffffffcU & ((IData)(vlSelfRef.out_rdy_i) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                  << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                  >> 2U))))),3);
    bufp->chgCData(oldp+972,(((((IData)(vlSelfRef.out_rdy_i) 
                                >> 2U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
                               ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                               : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->chgBit(oldp+973,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                  >> 5U))));
    bufp->chgCData(oldp+974,(((0x1ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 3U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->chgCData(oldp+975,(((0x1ffffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 3U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                  << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                  >> 5U))))),3);
    bufp->chgCData(oldp+976,(((((IData)(vlSelfRef.out_rdy_i) 
                                >> 5U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
                               ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                               : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
    bufp->chgBit(oldp+977,((1U & ((IData)(vlSelfRef.out_rdy_i) 
                                  >> 8U))));
    bufp->chgCData(oldp+978,(((0x03fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 6U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                   & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                  << 1U) | ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))),3);
    bufp->chgCData(oldp+979,(((0x03fffffcU & (((IData)(vlSelfRef.out_rdy_i) 
                                               >> 6U) 
                                              & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 2U))) 
                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                  << 1U) | (1U & ((IData)(vlSelfRef.out_rdy_i) 
                                                  >> 8U))))),3);
    bufp->chgCData(oldp+980,(((((IData)(vlSelfRef.out_rdy_i) 
                                >> 8U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
                               ? (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                   | ((2U > (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                                      & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                                         >> 2U))) ? 
                                  ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                    ? 1U : 2U) : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
                               : (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))),2);
}

void VClos_NoC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root__trace_cleanup\n"); );
    // Body
    VClos_NoC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VClos_NoC___024root*>(voidSelf);
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
