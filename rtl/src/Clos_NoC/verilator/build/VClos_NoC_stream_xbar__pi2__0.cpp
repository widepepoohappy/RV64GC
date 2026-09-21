// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClos_NoC.h for the primary calling header

#include "VClos_NoC__pch.h"

void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready_i = ((4U & ((IData)(vlSymsp->TOP.out_rdy_i) 
                                >> 4U)) | ((2U & ((IData)(vlSymsp->TOP.out_rdy_i) 
                                                  >> 2U)) 
                                           | (1U & (IData)(vlSymsp->TOP.out_rdy_i))));
}

void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__1\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    // Body
    vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    if ((2U >= (3U & vlSymsp->TOP.sel_out_stage))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & vlSymsp->TOP.sel_out_stage))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & vlSymsp->TOP.sel_out_stage))));
    }
    vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 2U)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 2U)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 2U)))));
    }
    vlSelfRef.valid_i = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid) 
                          << 2U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid) 
                                     << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid)));
    vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 4U)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 4U)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 4U)))));
    }
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = ((4U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                  << 2U)) | ((2U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                    << 1U)) | (1U & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i));
    vlSelfRef.__VdfgRegularize_h842de97e_0_0 = ((0x00000020U 
                                                 & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                    << 4U)) 
                                                | ((0x00000010U 
                                                    & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                                       << 3U)) 
                                                   | ((8U 
                                                       & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                          << 2U)) 
                                                      | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__out_valid = ((0x00000100U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                  << 6U)) 
                                  | ((0x00000080U & 
                                      ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                       << 5U)) | ((0x00000040U 
                                                   & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                      << 4U)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0) 
                     >> 3U)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__PVT__out_valid) 
                     >> 6U)));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ (IData)(vlSymsp->TOP.out_rdy_i)) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSymsp->TOP.out_rdy_i) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (IData)(vlSymsp->TOP.out_rdy_i)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 3U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 3U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 3U)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 6U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 6U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 6U)));
    vlSelfRef.valid_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                          << 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.idx_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)));
    vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i 
        = ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
             & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
            << 2U) | ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                       << 1U) | ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                 & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))));
    vlSelfRef.__VdfgRegularize_h842de97e_0_1 = ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                  & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 << 5U) 
                                                | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                     & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 3U) 
                                                      | (IData)(vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))));
}

void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__2\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_i[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o;
    vlSelfRef.data_i[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o))));
    vlSelfRef.data_i[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o))) 
                                    >> 0x00000020U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.ready_o = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                          << 2U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                     << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (((QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)));
    vlSelfRef.data_o[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1);
    vlSelfRef.data_o[1U] = (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                                    >> 0x00000020U));
    vlSelfRef.data_o[2U] = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_4_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_5_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_i[0U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:182: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_data_unstable] input_data_unstable: data_i is unstable at input: 0 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:182)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 182, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_12_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_13_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_i[1U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:182: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_data_unstable] input_data_unstable: data_i is unstable at input: 1 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:182)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 182, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_20_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_21_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_i[2U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:182: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_data_unstable] input_data_unstable: data_i is unstable at input: 2 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:182)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 182, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_28_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_29_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_o[0U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:191: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_data_unstable] output_data_unstable: data_o is unstable at output: 0 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:191)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 191, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_31_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_32_0) 
                                         == (3U & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__idx_o)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:193: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_idx_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_idx_unstable] output_idx_unstable: idx_o is unstable at output: 0 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:193)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 193, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_36_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_37_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_o[1U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:191: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_data_unstable] output_data_unstable: data_o is unstable at output: 1 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:191)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 191, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_39_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_40_0) 
                                         == (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__idx_o) 
                                                   >> 2U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:193: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_idx_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_idx_unstable] output_idx_unstable: idx_o is unstable at output: 1 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:193)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 193, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_44_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_45_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_o[2U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:191: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_data_unstable] output_data_unstable: data_o is unstable at output: 2 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:191)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 191, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_47_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_48_0) 
                                         == (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__idx_o) 
                                                   >> 4U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:193: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_idx_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_idx_unstable] output_idx_unstable: idx_o is unstable at output: 2 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:193)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 193, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_34_0)) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:195: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_valid_taken] output_valid_taken: valid_o at output 0 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:195)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_42_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o) 
                                         >> 1U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:195: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_valid_taken] output_valid_taken: valid_o at output 1 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:195)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_50_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o) 
                                         >> 2U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:195: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_valid_taken] output_valid_taken: valid_o at output 2 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:195)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_10_0)) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:186: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_valid_taken] input_valid_taken: valid_i at input 0 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:186)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 186, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_18_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                                         >> 1U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:186: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_valid_taken] input_valid_taken: valid_i at input 1 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:186)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 186, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_26_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                                         >> 2U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:186: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_valid_taken] input_valid_taken: valid_i at input 2 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:186)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 186, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_7_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_8_0) 
                                         == (3U & vlSelfRef.__Vsampled_TOP__sel_out_stage))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:184: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_sel_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_sel_unstable] input_sel_unstable: sel_i is unstable at input: 0 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:184)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 184, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_15_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_16_0) 
                                         == (3U & (vlSelfRef.__Vsampled_TOP__sel_out_stage 
                                                   >> 2U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:184: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_sel_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_sel_unstable] input_sel_unstable: sel_i is unstable at input: 1 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:184)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 184, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_23_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_24_0) 
                                         == (3U & (vlSelfRef.__Vsampled_TOP__sel_out_stage 
                                                   >> 4U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:184: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_sel_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_sel_unstable] input_sel_unstable: sel_i is unstable at input: 2 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:184)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 184, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i)) 
                                      | (3U > (3U & vlSelfRef.__Vsampled_TOP__sel_out_stage))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:176: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_sel_assertions[0].non_existing_output: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_sel_assertions[0].non_existing_output] non_existing_output: Non-existing output is selected! (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:176)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 176, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                                          >> 1U)) | 
                                      (3U > (3U & (vlSelfRef.__Vsampled_TOP__sel_out_stage 
                                                   >> 2U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:176: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_sel_assertions[1].non_existing_output: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_sel_assertions[1].non_existing_output] non_existing_output: Non-existing output is selected! (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:176)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 176, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                                          >> 2U)) | 
                                      (3U > (3U & (vlSelfRef.__Vsampled_TOP__sel_out_stage 
                                                   >> 4U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:176: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_sel_assertions[2].non_existing_output: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_sel_assertions[2].non_existing_output] non_existing_output: Non-existing output is selected! (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:176)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 176, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:169: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock] lock: Lock implies same arbiter decision in next cycle if output is not ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:169)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 169, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 4)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0)) 
                                      | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i)) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:174: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req] lock_req: It is disallowed to deassert unserved request signals when LockIn is enabled. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:174)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 174, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:169: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock] lock: Lock implies same arbiter decision in next cycle if output is not ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:169)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 169, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 4)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0)) 
                                      | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                          & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0) 
                                             >> 3U)) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:174: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req] lock_req: It is disallowed to deassert unserved request signals when LockIn is enabled. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:174)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 174, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:169: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock] lock: Lock implies same arbiter decision in next cycle if output is not ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:169)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 169, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 4)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0)) 
                                      | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                          & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__out_valid) 
                                             >> 6U)) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:174: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req] lock_req: It is disallowed to deassert unserved request signals when LockIn is enabled. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:174)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 174, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (0U != (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:316: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req0] req0: Req in implies req out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:316)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 316, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)) 
                                      | (0U != (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:318: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req1] req1: Req out implies req in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:318)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 318, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (0U != (7U 
                                                 & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0) 
                                                    >> 3U)))) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:316: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req0] req0: Req in implies req out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:316)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 316, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)) 
                                      | (0U != (7U 
                                                & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0) 
                                                   >> 3U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:318: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req1] req1: Req out implies req in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:318)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 318, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (0U != (7U 
                                                 & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__out_valid) 
                                                    >> 6U)))) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:316: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req0] req0: Req in implies req out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:316)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 316, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)) 
                                      | (0U != (7U 
                                                & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__out_valid) 
                                                   >> 6U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:318: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req1] req1: Req out implies req in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:318)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 318, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | VL_ONEHOT0_I((
                                                   (((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                                     & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 2U) 
                                                   | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 1U) 
                                                      | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:306: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.hot_one: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.hot_one] hot_one: Grant signal must be hot1 or zero. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:306)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 306, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:308: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt0] gnt0: Grant out implies grant in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:308)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 308, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | VL_ONEHOT0_I((
                                                   (0x7ffffffcU 
                                                    & (((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                                        >> 1U) 
                                                       & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 2U))) 
                                                   | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 1U) 
                                                      | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:306: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.hot_one: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.hot_one] hot_one: Grant signal must be hot1 or zero. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:306)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 306, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ ((((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                            >> 3U) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                         >> 3U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:308: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt0] gnt0: Grant out implies grant in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:308)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 308, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | VL_ONEHOT0_I((
                                                   (0x0ffffffcU 
                                                    & (((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                                        >> 4U) 
                                                       & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 2U))) 
                                                   | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 1U) 
                                                      | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:306: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.hot_one: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.hot_one] hot_one: Grant signal must be hot1 or zero. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:306)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 306, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ ((((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                            >> 6U) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                         >> 6U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:308: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt0] gnt0: Grant out implies grant in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:308)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 308, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)) 
                                      | ((~ (IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i)) 
                                         | (((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                             & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                               | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:311: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt1] gnt1: Req out and grant in implies grant out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:311)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 311, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                             >> 3U)) 
                                         | ((((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                              >> 3U) 
                                             & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                               | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:311: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt1] gnt1: Req out and grant in implies grant out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:311)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 311, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                             >> 6U)) 
                                         | ((((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                              >> 6U) 
                                             & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                               | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:311: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt1] gnt1: Req out and grant in implies grant out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:311)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 311, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)) 
                                      | ((~ (IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i)) 
                                         | ((2U >= (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            && (1U 
                                                & (((((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                                      & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                        << 1U) 
                                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                                   >> (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:314: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt_idx: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt_idx] gnt_idx: Idx_o / gnt_o do not match. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:314)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 314, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                             >> 3U)) 
                                         | ((2U >= (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            && (1U 
                                                & (((0x7ffffffcU 
                                                     & (((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                                         >> 1U) 
                                                        & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 2U))) 
                                                    | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                        << 1U) 
                                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                                   >> (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:314: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt_idx: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt_idx] gnt_idx: Idx_o / gnt_o do not match. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:314)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 314, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                             >> 6U)) 
                                         | ((2U >= (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            && (1U 
                                                & (((0x0ffffffcU 
                                                     & (((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                                                         >> 4U) 
                                                        & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 2U))) 
                                                    | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                        << 1U) 
                                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                                   >> (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:314: Assertion failed in %NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt_idx: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[0].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt_idx] gnt_idx: Idx_o / gnt_o do not match. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:314)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 314, "");
        }
    }
    vlSelfRef.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSelfRef.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSelfRef.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSelfRef._Vpast_5_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_i[0U];
    vlSelfRef._Vpast_13_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_i[1U];
    vlSelfRef._Vpast_21_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_i[2U];
    vlSelfRef._Vpast_29_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_o[0U];
    vlSelfRef._Vpast_32_0 = (3U & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__idx_o));
    vlSelfRef._Vpast_37_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_o[1U];
    vlSelfRef._Vpast_40_0 = (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__idx_o) 
                                   >> 2U));
    vlSelfRef._Vpast_45_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_o[2U];
    vlSelfRef._Vpast_48_0 = (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__idx_o) 
                                   >> 4U));
    vlSelfRef._Vpast_8_0 = (3U & vlSelfRef.__Vsampled_TOP__sel_out_stage);
    vlSelfRef._Vpast_16_0 = (3U & (vlSelfRef.__Vsampled_TOP__sel_out_stage 
                                   >> 2U));
    vlSelfRef._Vpast_24_0 = (3U & (vlSelfRef.__Vsampled_TOP__sel_out_stage 
                                   >> 4U));
    vlSelfRef._Vpast_28_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o) 
                                & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_i))));
    vlSelfRef._Vpast_31_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o) 
                                & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_i))));
    vlSelfRef._Vpast_34_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o) 
                                & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_i))));
    vlSelfRef._Vpast_36_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_i) 
                                              >> 1U))));
    vlSelfRef._Vpast_39_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_i) 
                                              >> 1U))));
    vlSelfRef._Vpast_42_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_i) 
                                              >> 1U))));
    vlSelfRef._Vpast_44_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_i) 
                                              >> 2U))));
    vlSelfRef._Vpast_47_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_i) 
                                              >> 2U))));
    vlSelfRef._Vpast_50_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_i) 
                                              >> 2U))));
    vlSelfRef._Vpast_4_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                            & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                               & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_o))));
    vlSelfRef._Vpast_7_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                            & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                               & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_o))));
    vlSelfRef._Vpast_10_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                                & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_o))));
    vlSelfRef._Vpast_12_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_o) 
                                              >> 1U))));
    vlSelfRef._Vpast_15_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_o) 
                                              >> 1U))));
    vlSelfRef._Vpast_18_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_o) 
                                              >> 1U))));
    vlSelfRef._Vpast_20_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_o) 
                                              >> 2U))));
    vlSelfRef._Vpast_23_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_o) 
                                              >> 2U))));
    vlSelfRef._Vpast_26_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_o) 
                                              >> 2U))));
    vlSelfRef.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    vlSelfRef.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    vlSelfRef.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    vlSelfRef.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid) 
              & ((~ (IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i)) 
                 & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)))));
    vlSelfRef.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
              & ((~ ((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                     >> 3U)) & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)))));
    vlSelfRef.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
              & ((~ ((IData)(vlSelfRef.__Vsampled_TOP__out_rdy_i) 
                     >> 6U)) & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)))));
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__1\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    // Body
    vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    if ((2U >= (3U & vlSymsp->TOP.sel_out_stage))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & vlSymsp->TOP.sel_out_stage))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & vlSymsp->TOP.sel_out_stage))));
    }
    vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 2U)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 2U)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 2U)))));
    }
    vlSelfRef.valid_i = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid) 
                          << 2U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid) 
                                     << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid)));
    vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 4U)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 4U)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 4U)))));
    }
    if (vlSymsp->TOP.rst_ni) {
        if (vlSymsp->TOP.flush_i) {
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        } else {
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q 
                = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q 
                = vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q 
                = vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
                = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
                = vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
                = vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d;
        }
    } else {
        vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
    }
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((1U & (~ (IData)(vlSymsp->TOP.flush_i))) 
                                            && (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((1U & (~ (IData)(vlSymsp->TOP.flush_i))) 
                                            && (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d)));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((1U & (~ (IData)(vlSymsp->TOP.flush_i))) 
                                            && (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = ((4U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                  << 2U)) | ((2U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                    << 1U)) | (1U & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))));
    vlSelfRef.__VdfgRegularize_h842de97e_0_0 = ((0x00000020U 
                                                 & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                    << 4U)) 
                                                | ((0x00000010U 
                                                    & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                                       << 3U)) 
                                                   | ((8U 
                                                       & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                          << 2U)) 
                                                      | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i));
    vlSelfRef.__PVT__out_valid = ((0x00000100U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                  << 6U)) 
                                  | ((0x00000080U & 
                                      ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                       << 5U)) | ((0x00000040U 
                                                   & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                      << 4U)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0) 
                     >> 3U)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__PVT__out_valid) 
                     >> 6U)));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ (IData)(vlSymsp->TOP.out_rdy_i)) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSymsp->TOP.out_rdy_i) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (IData)(vlSymsp->TOP.out_rdy_i)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 3U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 3U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 3U)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 6U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 6U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 6U)));
    vlSelfRef.valid_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                          << 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.idx_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)));
    vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i 
        = ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
             & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
            << 2U) | ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                       << 1U) | ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                 & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))));
    vlSelfRef.__VdfgRegularize_h842de97e_0_1 = ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                  & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 << 5U) 
                                                | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                     & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 3U) 
                                                      | (IData)(vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))));
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__2\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready_o = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                          << 2U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                     << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready)));
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__3(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__3\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_i[0U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o;
    vlSelfRef.data_i[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o))));
    vlSelfRef.data_i[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o))) 
                                    >> 0x00000020U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (((QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)));
    vlSelfRef.data_o[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1);
    vlSelfRef.data_o[1U] = (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                                    >> 0x00000020U));
    vlSelfRef.data_o[2U] = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
}

void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    // Body
    vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 6U)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 6U)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 6U)))));
    }
    vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 8U)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 8U)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 8U)))));
    }
    vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 0x0000000aU)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 0x0000000aU)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 0x0000000aU)))));
    }
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = ((4U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                  << 2U)) | ((2U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                    << 1U)) | (1U & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i));
    vlSelfRef.__VdfgRegularize_h842de97e_0_0 = ((0x00000020U 
                                                 & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                    << 4U)) 
                                                | ((0x00000010U 
                                                    & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                                       << 3U)) 
                                                   | ((8U 
                                                       & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                          << 2U)) 
                                                      | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__out_valid = ((0x00000100U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                  << 6U)) 
                                  | ((0x00000080U & 
                                      ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                       << 5U)) | ((0x00000040U 
                                                   & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                      << 4U)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0) 
                     >> 3U)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__PVT__out_valid) 
                     >> 6U)));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 1U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 1U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 4U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 4U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 4U)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 7U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 7U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 7U)));
    vlSelfRef.valid_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                          << 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.idx_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)));
    vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i 
        = ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
             & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
            << 2U) | ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                       << 1U) | ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                 & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))));
    vlSelfRef.__VdfgRegularize_h842de97e_0_1 = ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                  & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 << 5U) 
                                                | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                     & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 3U) 
                                                      | (IData)(vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))));
}

void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__1\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.ready_o = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                          << 2U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                     << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (((QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)));
    vlSelfRef.data_o[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3);
    vlSelfRef.data_o[1U] = (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                    >> 0x00000020U));
    vlSelfRef.data_o[2U] = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_4_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_5_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:182: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_data_unstable] input_data_unstable: data_i is unstable at input: 0 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:182)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 182, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_12_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_13_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:182: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_data_unstable] input_data_unstable: data_i is unstable at input: 1 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:182)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 182, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_20_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_21_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:182: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_data_unstable] input_data_unstable: data_i is unstable at input: 2 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:182)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 182, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_28_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_29_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__data_o[0U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:191: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_data_unstable] output_data_unstable: data_o is unstable at output: 0 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:191)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 191, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_31_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_32_0) 
                                         == (3U & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__idx_o)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:193: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_idx_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_idx_unstable] output_idx_unstable: idx_o is unstable at output: 0 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:193)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 193, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_36_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_37_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__data_o[1U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:191: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_data_unstable] output_data_unstable: data_o is unstable at output: 1 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:191)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 191, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_39_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_40_0) 
                                         == (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__idx_o) 
                                                   >> 2U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:193: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_idx_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_idx_unstable] output_idx_unstable: idx_o is unstable at output: 1 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:193)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 193, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_44_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_45_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__data_o[2U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:191: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_data_unstable] output_data_unstable: data_o is unstable at output: 2 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:191)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 191, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_47_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_48_0) 
                                         == (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__idx_o) 
                                                   >> 4U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:193: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_idx_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_idx_unstable] output_idx_unstable: idx_o is unstable at output: 2 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:193)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 193, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_34_0)) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:195: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_valid_taken] output_valid_taken: valid_o at output 0 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:195)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_42_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o) 
                                         >> 1U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:195: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_valid_taken] output_valid_taken: valid_o at output 1 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:195)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_50_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o) 
                                         >> 2U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:195: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_valid_taken] output_valid_taken: valid_o at output 2 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:195)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_10_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                         >> 3U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:186: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_valid_taken] input_valid_taken: valid_i at input 0 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:186)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 186, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_18_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                         >> 4U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:186: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_valid_taken] input_valid_taken: valid_i at input 1 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:186)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 186, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_26_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                         >> 5U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:186: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_valid_taken] input_valid_taken: valid_i at input 2 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:186)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 186, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_7_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_8_0) 
                                         == (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 6U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:184: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_sel_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_sel_unstable] input_sel_unstable: sel_i is unstable at input: 0 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:184)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 184, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_15_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_16_0) 
                                         == (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 8U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:184: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_sel_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_sel_unstable] input_sel_unstable: sel_i is unstable at input: 1 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:184)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 184, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_23_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_24_0) 
                                         == (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 0x0000000aU)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:184: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_sel_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_sel_unstable] input_sel_unstable: sel_i is unstable at input: 2 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:184)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 184, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                          >> 3U)) | 
                                      (3U > (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 6U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:176: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_sel_assertions[0].non_existing_output: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_sel_assertions[0].non_existing_output] non_existing_output: Non-existing output is selected! (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:176)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 176, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                          >> 4U)) | 
                                      (3U > (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 8U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:176: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_sel_assertions[1].non_existing_output: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_sel_assertions[1].non_existing_output] non_existing_output: Non-existing output is selected! (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:176)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 176, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                          >> 5U)) | 
                                      (3U > (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 0x0000000aU)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:176: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_sel_assertions[2].non_existing_output: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_sel_assertions[2].non_existing_output] non_existing_output: Non-existing output is selected! (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:176)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 176, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:169: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock] lock: Lock implies same arbiter decision in next cycle if output is not ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:169)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 169, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 4)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0)) 
                                      | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i)) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:174: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req] lock_req: It is disallowed to deassert unserved request signals when LockIn is enabled. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:174)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 174, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:169: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock] lock: Lock implies same arbiter decision in next cycle if output is not ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:169)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 169, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 4)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0)) 
                                      | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                          & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0) 
                                             >> 3U)) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:174: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req] lock_req: It is disallowed to deassert unserved request signals when LockIn is enabled. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:174)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 174, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:169: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock] lock: Lock implies same arbiter decision in next cycle if output is not ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:169)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 169, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 4)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0)) 
                                      | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                          & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__out_valid) 
                                             >> 6U)) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:174: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req] lock_req: It is disallowed to deassert unserved request signals when LockIn is enabled. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:174)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 174, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (0U != (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:316: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req0] req0: Req in implies req out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:316)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 316, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)) 
                                      | (0U != (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:318: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req1] req1: Req out implies req in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:318)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 318, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (0U != (7U 
                                                 & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0) 
                                                    >> 3U)))) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:316: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req0] req0: Req in implies req out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:316)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 316, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)) 
                                      | (0U != (7U 
                                                & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0) 
                                                   >> 3U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:318: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req1] req1: Req out implies req in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:318)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 318, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (0U != (7U 
                                                 & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__out_valid) 
                                                    >> 6U)))) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:316: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req0] req0: Req in implies req out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:316)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 316, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)) 
                                      | (0U != (7U 
                                                & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__out_valid) 
                                                   >> 6U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:318: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req1] req1: Req out implies req in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:318)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 318, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | VL_ONEHOT0_I((
                                                   (0xfffffffcU 
                                                    & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                        << 1U) 
                                                       & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 2U))) 
                                                   | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 1U) 
                                                      | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:306: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.hot_one: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.hot_one] hot_one: Grant signal must be hot1 or zero. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:306)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 306, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                            >> 1U) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))) 
                                      | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                         >> 1U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:308: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt0] gnt0: Grant out implies grant in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:308)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 308, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | VL_ONEHOT0_I((
                                                   (0x3ffffffcU 
                                                    & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                        >> 2U) 
                                                       & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 2U))) 
                                                   | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 1U) 
                                                      | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:306: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.hot_one: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.hot_one] hot_one: Grant signal must be hot1 or zero. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:306)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 306, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                            >> 4U) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))) 
                                      | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                         >> 4U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:308: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt0] gnt0: Grant out implies grant in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:308)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 308, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | VL_ONEHOT0_I((
                                                   (0x07fffffcU 
                                                    & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                        >> 5U) 
                                                       & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 2U))) 
                                                   | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 1U) 
                                                      | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:306: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.hot_one: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.hot_one] hot_one: Grant signal must be hot1 or zero. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:306)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 306, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                            >> 7U) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))) 
                                      | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                         >> 7U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:308: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt0] gnt0: Grant out implies grant in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:308)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 308, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 1U)) 
                                         | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                              >> 1U) 
                                             & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                               | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:311: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt1] gnt1: Req out and grant in implies grant out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:311)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 311, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 4U)) 
                                         | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                              >> 4U) 
                                             & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                               | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:311: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt1] gnt1: Req out and grant in implies grant out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:311)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 311, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 7U)) 
                                         | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                              >> 7U) 
                                             & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                               | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:311: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt1] gnt1: Req out and grant in implies grant out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:311)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 311, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 1U)) 
                                         | ((2U >= (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            && (1U 
                                                & (((0xfffffffcU 
                                                     & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                         << 1U) 
                                                        & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 2U))) 
                                                    | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                        << 1U) 
                                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                                   >> (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:314: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt_idx: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt_idx] gnt_idx: Idx_o / gnt_o do not match. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:314)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 314, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 4U)) 
                                         | ((2U >= (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            && (1U 
                                                & (((0x3ffffffcU 
                                                     & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                         >> 2U) 
                                                        & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 2U))) 
                                                    | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                        << 1U) 
                                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                                   >> (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:314: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt_idx: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt_idx] gnt_idx: Idx_o / gnt_o do not match. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:314)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 314, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 7U)) 
                                         | ((2U >= (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            && (1U 
                                                & (((0x07fffffcU 
                                                     & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                         >> 5U) 
                                                        & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 2U))) 
                                                    | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                        << 1U) 
                                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                                   >> (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:314: Assertion failed in %NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt_idx: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[1].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt_idx] gnt_idx: Idx_o / gnt_o do not match. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:314)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 314, "");
        }
    }
    vlSelfRef.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSelfRef.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSelfRef.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSelfRef._Vpast_5_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
    vlSelfRef._Vpast_13_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
    vlSelfRef._Vpast_21_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
    vlSelfRef._Vpast_29_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__data_o[0U];
    vlSelfRef._Vpast_32_0 = (3U & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__idx_o));
    vlSelfRef._Vpast_37_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__data_o[1U];
    vlSelfRef._Vpast_40_0 = (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__idx_o) 
                                   >> 2U));
    vlSelfRef._Vpast_45_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__data_o[2U];
    vlSelfRef._Vpast_48_0 = (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__idx_o) 
                                   >> 4U));
    vlSelfRef._Vpast_8_0 = (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                  >> 6U));
    vlSelfRef._Vpast_16_0 = (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                   >> 8U));
    vlSelfRef._Vpast_24_0 = (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                   >> 0x0000000aU));
    vlSelfRef._Vpast_28_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o) 
                                & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4) 
                                      >> 3U))));
    vlSelfRef._Vpast_31_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o) 
                                & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4) 
                                      >> 3U))));
    vlSelfRef._Vpast_34_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o) 
                                & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4) 
                                      >> 3U))));
    vlSelfRef._Vpast_36_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4) 
                                              >> 4U))));
    vlSelfRef._Vpast_39_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4) 
                                              >> 4U))));
    vlSelfRef._Vpast_42_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4) 
                                              >> 4U))));
    vlSelfRef._Vpast_44_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4) 
                                              >> 5U))));
    vlSelfRef._Vpast_47_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4) 
                                              >> 5U))));
    vlSelfRef._Vpast_50_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4) 
                                              >> 5U))));
    vlSelfRef._Vpast_4_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                            & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                >> 3U) & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__ready_o))));
    vlSelfRef._Vpast_7_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                            & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                >> 3U) & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__ready_o))));
    vlSelfRef._Vpast_10_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                 >> 3U) & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__ready_o))));
    vlSelfRef._Vpast_12_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                 >> 4U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__ready_o) 
                                              >> 1U))));
    vlSelfRef._Vpast_15_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                 >> 4U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__ready_o) 
                                              >> 1U))));
    vlSelfRef._Vpast_18_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                 >> 4U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__ready_o) 
                                              >> 1U))));
    vlSelfRef._Vpast_20_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                 >> 5U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__ready_o) 
                                              >> 2U))));
    vlSelfRef._Vpast_23_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                 >> 5U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__ready_o) 
                                              >> 2U))));
    vlSelfRef._Vpast_26_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3) 
                                 >> 5U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__ready_o) 
                                              >> 2U))));
    vlSelfRef.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    vlSelfRef.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    vlSelfRef.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    vlSelfRef.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid) 
              & ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                     >> 1U)) & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)))));
    vlSelfRef.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
              & ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)))));
    vlSelfRef.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
              & ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                     >> 7U)) & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)))));
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__1\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    // Body
    vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 6U)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 6U)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 6U)))));
    }
    vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 8U)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 8U)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 8U)))));
    }
    vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 0x0000000aU)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 0x0000000aU)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 0x0000000aU)))));
    }
    if (vlSymsp->TOP.rst_ni) {
        if (vlSymsp->TOP.flush_i) {
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        } else {
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q 
                = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q 
                = vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q 
                = vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
                = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
                = vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
                = vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d;
        }
    } else {
        vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
    }
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((1U & (~ (IData)(vlSymsp->TOP.flush_i))) 
                                            && (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((1U & (~ (IData)(vlSymsp->TOP.flush_i))) 
                                            && (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d)));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((1U & (~ (IData)(vlSymsp->TOP.flush_i))) 
                                            && (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = ((4U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                  << 2U)) | ((2U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                    << 1U)) | (1U & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))));
    vlSelfRef.__VdfgRegularize_h842de97e_0_0 = ((0x00000020U 
                                                 & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                    << 4U)) 
                                                | ((0x00000010U 
                                                    & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                                       << 3U)) 
                                                   | ((8U 
                                                       & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                          << 2U)) 
                                                      | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i));
    vlSelfRef.__PVT__out_valid = ((0x00000100U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                  << 6U)) 
                                  | ((0x00000080U & 
                                      ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                       << 5U)) | ((0x00000040U 
                                                   & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                      << 4U)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0) 
                     >> 3U)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__PVT__out_valid) 
                     >> 6U)));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 1U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 1U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 4U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 4U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 4U)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 7U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 7U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 7U)));
    vlSelfRef.valid_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                          << 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.idx_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)));
    vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i 
        = ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
             & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
            << 2U) | ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                       << 1U) | ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                 & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))));
    vlSelfRef.__VdfgRegularize_h842de97e_0_1 = ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                  & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 << 5U) 
                                                | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                     & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 3U) 
                                                      | (IData)(vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))));
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__2\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready_o = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                          << 2U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                     << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready)));
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__3(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__3\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (((QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)));
    vlSelfRef.data_o[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3);
    vlSelfRef.data_o[1U] = (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                    >> 0x00000020U));
    vlSelfRef.data_o[2U] = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
}

void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    // Body
    vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 0x0000000cU)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 0x0000000cU)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 0x0000000cU)))));
    }
    vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 0x0000000eU)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 0x0000000eU)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 0x0000000eU)))));
    }
    vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 0x00000010U)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 0x00000010U)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 0x00000010U)))));
    }
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = ((4U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                  << 2U)) | ((2U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                    << 1U)) | (1U & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i));
    vlSelfRef.__VdfgRegularize_h842de97e_0_0 = ((0x00000020U 
                                                 & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                    << 4U)) 
                                                | ((0x00000010U 
                                                    & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                                       << 3U)) 
                                                   | ((8U 
                                                       & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                          << 2U)) 
                                                      | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__out_valid = ((0x00000100U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                  << 6U)) 
                                  | ((0x00000080U & 
                                      ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                       << 5U)) | ((0x00000040U 
                                                   & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                      << 4U)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0) 
                     >> 3U)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__PVT__out_valid) 
                     >> 6U)));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 2U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 2U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 2U)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 5U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 5U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 5U)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 8U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 8U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & ((IData)(vlSymsp->TOP.out_rdy_i) >> 8U));
    vlSelfRef.valid_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                          << 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.idx_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)));
    vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i 
        = ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
             & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
            << 2U) | ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                       << 1U) | ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                 & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))));
    vlSelfRef.__VdfgRegularize_h842de97e_0_1 = ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                  & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 << 5U) 
                                                | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                     & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 3U) 
                                                      | (IData)(vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))));
}

void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__1\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.ready_o = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                          << 2U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                     << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (((QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)));
    vlSelfRef.data_o[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5);
    vlSelfRef.data_o[1U] = (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                                    >> 0x00000020U));
    vlSelfRef.data_o[2U] = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_4_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_5_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[6U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:182: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_data_unstable] input_data_unstable: data_i is unstable at input: 0 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:182)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 182, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_12_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_13_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[7U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:182: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_data_unstable] input_data_unstable: data_i is unstable at input: 1 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:182)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 182, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_20_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_21_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[8U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:182: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_data_unstable] input_data_unstable: data_i is unstable at input: 2 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:182)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 182, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_28_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_29_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__data_o[0U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:191: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_data_unstable] output_data_unstable: data_o is unstable at output: 0 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:191)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 191, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_31_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_32_0) 
                                         == (3U & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__idx_o)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:193: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_idx_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_idx_unstable] output_idx_unstable: idx_o is unstable at output: 0 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:193)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 193, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_36_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_37_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__data_o[1U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:191: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_data_unstable] output_data_unstable: data_o is unstable at output: 1 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:191)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 191, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_39_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_40_0) 
                                         == (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__idx_o) 
                                                   >> 2U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:193: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_idx_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_idx_unstable] output_idx_unstable: idx_o is unstable at output: 1 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:193)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 193, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_44_0)) 
                                      | (vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_45_0 
                                         == vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__data_o[2U])))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:191: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_data_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_data_unstable] output_data_unstable: data_o is unstable at output: 2 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:191)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 191, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_47_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_48_0) 
                                         == (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__idx_o) 
                                                   >> 4U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:193: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_idx_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_idx_unstable] output_idx_unstable: idx_o is unstable at output: 2 Check that parameter LockIn is set. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:193)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 193, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_34_0)) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:195: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[0].output_valid_taken] output_valid_taken: valid_o at output 0 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:195)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_42_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o) 
                                         >> 1U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:195: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[1].output_valid_taken] output_valid_taken: valid_o at output 1 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:195)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_50_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o) 
                                         >> 2U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:195: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_out_assertions[2].output_valid_taken] output_valid_taken: valid_o at output 2 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:195)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_10_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                         >> 6U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:186: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_valid_taken] input_valid_taken: valid_i at input 0 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:186)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 186, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_18_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                         >> 7U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:186: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_valid_taken] input_valid_taken: valid_i at input 1 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:186)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 186, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_26_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                         >> 8U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:186: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_valid_taken: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_valid_taken] input_valid_taken: valid_i at input 2 has been taken away without a ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:186)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 186, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_7_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_8_0) 
                                         == (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 0x0000000cU)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:184: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_sel_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[0].input_sel_unstable] input_sel_unstable: sel_i is unstable at input: 0 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:184)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 184, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_15_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_16_0) 
                                         == (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 0x0000000eU)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:184: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_sel_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[1].input_sel_unstable] input_sel_unstable: sel_i is unstable at input: 1 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:184)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 184, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_23_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_24_0) 
                                         == (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 0x00000010U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:184: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_sel_unstable: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_handshake_assertions.gen_inp_assertions[2].input_sel_unstable] input_sel_unstable: sel_i is unstable at input: 2 (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:184)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 184, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                          >> 6U)) | 
                                      (3U > (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 0x0000000cU)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:176: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_sel_assertions[0].non_existing_output: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_sel_assertions[0].non_existing_output] non_existing_output: Non-existing output is selected! (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:176)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 176, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                          >> 7U)) | 
                                      (3U > (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 0x0000000eU)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:176: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_sel_assertions[1].non_existing_output: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_sel_assertions[1].non_existing_output] non_existing_output: Non-existing output is selected! (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:176)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 176, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                   | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                          >> 8U)) | 
                                      (3U > (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                                   >> 0x00000010U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: stream_xbar.sv:176: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_sel_assertions[2].non_existing_output: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_sel_assertions[2].non_existing_output] non_existing_output: Non-existing output is selected! (/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv:176)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/stream_xbar.sv", 176, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:169: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock] lock: Lock implies same arbiter decision in next cycle if output is not ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:169)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 169, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 4)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0)) 
                                      | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i)) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:174: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req] lock_req: It is disallowed to deassert unserved request signals when LockIn is enabled. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:174)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 174, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:169: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock] lock: Lock implies same arbiter decision in next cycle if output is not ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:169)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 169, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 4)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0)) 
                                      | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                          & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0) 
                                             >> 3U)) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:174: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req] lock_req: It is disallowed to deassert unserved request signals when LockIn is enabled. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:174)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 174, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0)) 
                                      | ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:169: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock] lock: Lock implies same arbiter decision in next cycle if output is not ready. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:169)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 169, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 4)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0)) 
                                      | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q) 
                                          & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__out_valid) 
                                             >> 6U)) 
                                         == (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:174: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gen_int_rr.gen_lock.lock_req] lock_req: It is disallowed to deassert unserved request signals when LockIn is enabled. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:174)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 174, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (0U != (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:316: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req0] req0: Req in implies req out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:316)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 316, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)) 
                                      | (0U != (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:318: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.req1] req1: Req out implies req in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:318)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 318, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (0U != (7U 
                                                 & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0) 
                                                    >> 3U)))) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:316: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req0] req0: Req in implies req out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:316)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 316, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)) 
                                      | (0U != (7U 
                                                & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0) 
                                                   >> 3U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:318: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.req1] req1: Req out implies req in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:318)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 318, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (0U != (7U 
                                                 & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__out_valid) 
                                                    >> 6U)))) 
                                      | (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:316: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req0] req0: Req in implies req out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:316)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 316, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)) 
                                      | (0U != (7U 
                                                & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__out_valid) 
                                                   >> 6U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:318: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.req1] req1: Req out implies req in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:318)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 318, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | VL_ONEHOT0_I((
                                                   (0xfffffffcU 
                                                    & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                       & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 2U))) 
                                                   | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 1U) 
                                                      | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:306: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.hot_one: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.hot_one] hot_one: Grant signal must be hot1 or zero. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:306)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 306, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                            >> 2U) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))) 
                                      | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                         >> 2U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:308: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt0] gnt0: Grant out implies grant in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:308)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 308, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | VL_ONEHOT0_I((
                                                   (0x1ffffffcU 
                                                    & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                        >> 3U) 
                                                       & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 2U))) 
                                                   | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 1U) 
                                                      | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:306: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.hot_one: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.hot_one] hot_one: Grant signal must be hot1 or zero. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:306)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 306, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                            >> 5U) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))) 
                                      | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                         >> 5U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:308: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt0] gnt0: Grant out implies grant in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:308)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 308, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | VL_ONEHOT0_I((
                                                   (0x03fffffcU 
                                                    & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                        >> 6U) 
                                                       & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 2U))) 
                                                   | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 1U) 
                                                      | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:306: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.hot_one: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.hot_one] hot_one: Grant signal must be hot1 or zero. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:306)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 306, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                            >> 8U) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                             | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))))) 
                                      | ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                         >> 8U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:308: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt0: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt0] gnt0: Grant out implies grant in. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:308)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 308, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 2U)) 
                                         | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                              >> 2U) 
                                             & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                               | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:311: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt1] gnt1: Req out and grant in implies grant out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:311)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 311, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 5U)) 
                                         | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                              >> 5U) 
                                             & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                               | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:311: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt1] gnt1: Req out and grant in implies grant out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:311)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 311, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 8U)) 
                                         | ((((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                              >> 8U) 
                                             & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                            | (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                               | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:311: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt1: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt1] gnt1: Req out and grant in implies grant out. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:311)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 311, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 2U)) 
                                         | ((2U >= (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            && (1U 
                                                & (((0xfffffffcU 
                                                     & ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                        & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 2U))) 
                                                    | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                        << 1U) 
                                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                                   >> (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:314: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt_idx: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[0].i_rr_arb_tree.gen_arbiter.gnt_idx] gnt_idx: Idx_o / gnt_o do not match. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:314)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 314, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 5U)) 
                                         | ((2U >= (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            && (1U 
                                                & (((0x1ffffffcU 
                                                     & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                         >> 3U) 
                                                        & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 2U))) 
                                                    | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                        << 1U) 
                                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                                   >> (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:314: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt_idx: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[1].i_rr_arb_tree.gen_arbiter.gnt_idx] gnt_idx: Idx_o / gnt_o do not match. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:314)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 314, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
                                    | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)) 
                                   | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid)) 
                                      | ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                             >> 8U)) 
                                         | ((2U >= (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)) 
                                            && (1U 
                                                & (((0x03fffffcU 
                                                     & (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                                                         >> 6U) 
                                                        & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 2U))) 
                                                    | ((((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                        << 1U) 
                                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                          & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)))) 
                                                   >> (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o)))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: rr_arb_tree.sv:314: Assertion failed in %NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt_idx: [ASSERT FAILED] [%NClos_NoC.gen_out_sw[2].input_xbar.gen_outs[2].i_rr_arb_tree.gen_arbiter.gnt_idx] gnt_idx: Idx_o / gnt_o do not match. (/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv:314)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),vlSymsp->name());
            VL_STOP_MT("/home/cclement/RISCV/silverstream/rtl/include/primitives/rr_arb_tree.sv", 314, "");
        }
    }
    vlSelfRef.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSelfRef.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSelfRef.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSelfRef._Vpast_5_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[6U];
    vlSelfRef._Vpast_13_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[7U];
    vlSelfRef._Vpast_21_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[8U];
    vlSelfRef._Vpast_29_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__data_o[0U];
    vlSelfRef._Vpast_32_0 = (3U & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__idx_o));
    vlSelfRef._Vpast_37_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__data_o[1U];
    vlSelfRef._Vpast_40_0 = (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__idx_o) 
                                   >> 2U));
    vlSelfRef._Vpast_45_0 = vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__data_o[2U];
    vlSelfRef._Vpast_48_0 = (3U & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__idx_o) 
                                   >> 4U));
    vlSelfRef._Vpast_8_0 = (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                  >> 0x0000000cU));
    vlSelfRef._Vpast_16_0 = (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                   >> 0x0000000eU));
    vlSelfRef._Vpast_24_0 = (3U & (vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
                                   >> 0x00000010U));
    vlSelfRef._Vpast_28_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o) 
                                & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_rdy_i) 
                                      >> 6U))));
    vlSelfRef._Vpast_31_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o) 
                                & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_rdy_i) 
                                      >> 6U))));
    vlSelfRef._Vpast_34_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o) 
                                & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_rdy_i) 
                                      >> 6U))));
    vlSelfRef._Vpast_36_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_rdy_i) 
                                              >> 7U))));
    vlSelfRef._Vpast_39_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_rdy_i) 
                                              >> 7U))));
    vlSelfRef._Vpast_42_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o) 
                                 >> 1U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_rdy_i) 
                                              >> 7U))));
    vlSelfRef._Vpast_44_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_rdy_i) 
                                              >> 8U))));
    vlSelfRef._Vpast_47_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_rdy_i) 
                                              >> 8U))));
    vlSelfRef._Vpast_50_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o) 
                                 >> 2U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_rdy_i) 
                                              >> 8U))));
    vlSelfRef._Vpast_4_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                            & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                >> 6U) & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__ready_o))));
    vlSelfRef._Vpast_7_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                            & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                >> 6U) & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__ready_o))));
    vlSelfRef._Vpast_10_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                 >> 6U) & (~ (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__ready_o))));
    vlSelfRef._Vpast_12_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                 >> 7U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__ready_o) 
                                              >> 1U))));
    vlSelfRef._Vpast_15_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                 >> 7U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__ready_o) 
                                              >> 1U))));
    vlSelfRef._Vpast_18_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                 >> 7U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__ready_o) 
                                              >> 1U))));
    vlSelfRef._Vpast_20_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                 >> 8U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__ready_o) 
                                              >> 2U))));
    vlSelfRef._Vpast_23_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                 >> 8U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__ready_o) 
                                              >> 2U))));
    vlSelfRef._Vpast_26_0 = ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni) 
                             & (((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i) 
                                 >> 8U) & (~ ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__ready_o) 
                                              >> 2U))));
    vlSelfRef.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    vlSelfRef.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    vlSelfRef.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & (IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d));
    vlSelfRef.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid) 
              & ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                     >> 2U)) & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)))));
    vlSelfRef.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
              & ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                     >> 5U)) & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)))));
    vlSelfRef.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = ((~ ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni)) 
               | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i))) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
              & ((~ ((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i) 
                     >> 8U)) & (~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i)))));
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__1\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    CData/*0:0*/ gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 = 0;
    // Body
    vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 0x0000000cU)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 0x0000000cU)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 0x0000000cU)))));
    }
    vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 0x0000000eU)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 0x0000000eU)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__1__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 0x0000000eU)))));
    }
    vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    if ((2U >= (3U & (vlSymsp->TOP.sel_out_stage >> 0x00000010U)))) {
        vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP.sel_out_stage 
                                          >> 0x00000010U)))) 
                & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o)) 
               | (7U & ((IData)(gen_inps__BRA__2__KET____DOT__i_stream_demux__DOT____Vlvbound_h583eadf2__0) 
                        << (3U & (vlSymsp->TOP.sel_out_stage 
                                  >> 0x00000010U)))));
    }
    if (vlSymsp->TOP.rst_ni) {
        if (vlSymsp->TOP.flush_i) {
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        } else {
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q 
                = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q 
                = vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q 
                = vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
            vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
                = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d;
            vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
                = vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d;
            vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
                = vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d;
        }
    } else {
        vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
    }
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((1U & (~ (IData)(vlSymsp->TOP.flush_i))) 
                                            && (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((1U & (~ (IData)(vlSymsp->TOP.flush_i))) 
                                            && (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d)));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((1U & (~ (IData)(vlSymsp->TOP.flush_i))) 
                                            && (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = ((4U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                  << 2U)) | ((2U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                    << 1U)) | (1U & (IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))));
    vlSelfRef.__VdfgRegularize_h842de97e_0_0 = ((0x00000020U 
                                                 & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                    << 4U)) 
                                                | ((0x00000010U 
                                                    & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                                       << 3U)) 
                                                   | ((8U 
                                                       & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                          << 2U)) 
                                                      | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i));
    vlSelfRef.__PVT__out_valid = ((0x00000100U & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                  << 6U)) 
                                  | ((0x00000080U & 
                                      ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                       << 5U)) | ((0x00000040U 
                                                   & ((IData)(vlSelfRef.__Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                      << 4U)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__VdfgRegularize_h842de97e_0_0) 
                     >> 3U)));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d 
        = (7U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                  ? (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
                  : ((IData)(vlSelfRef.__PVT__out_valid) 
                     >> 6U)));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 1U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                    & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 2U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 2U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 2U)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d))
                ? 0U : 1U) : 2U);
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
              >> 2U));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U) & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 5U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 5U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSymsp->TOP.out_rdy_i) 
                    >> 5U)));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = ((~ ((IData)(vlSymsp->TOP.out_rdy_i) >> 8U)) 
           & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((((IData)(vlSymsp->TOP.out_rdy_i) >> 8U) 
            & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid))
            ? (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | ((2U > (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                   & ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                      >> 2U))) ? ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
                                   ? 1U : 2U) : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? 2U : (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & ((IData)(vlSymsp->TOP.out_rdy_i) >> 8U));
    vlSelfRef.valid_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                          << 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.idx_o = (((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o)));
    vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i 
        = ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
             & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
            << 2U) | ((((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__)) 
                       << 1U) | ((~ (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                 & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__))));
    vlSelfRef.__VdfgRegularize_h842de97e_0_1 = ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                  & (IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 << 5U) 
                                                | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                     & (IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                                        & (IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                       << 3U) 
                                                      | (IData)(vlSelfRef.__PVT__gen_inps__BRA__0__KET____DOT__i_stream_demux__DOT__oup_ready_i))));
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__2\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready_o = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                          << 2U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                     << 1U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready)));
}

void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__3(VClos_NoC_stream_xbar__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__3\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o 
        = ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
            : ((IData)(vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                ? vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o
                : vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (((QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__data_o)));
    vlSelfRef.data_o[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5);
    vlSelfRef.data_o[1U] = (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                                    >> 0x00000020U));
    vlSelfRef.data_o[2U] = vlSelfRef.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
}
