// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClos_NoC.h for the primary calling header

#include "VClos_NoC__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VClos_NoC___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VClos_NoC___024root___eval_triggers__ico(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_triggers__ico\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VClos_NoC___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool VClos_NoC___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VClos_NoC___024root___ico_sequent__TOP__0(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___ico_sequent__TOP__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4 
        = ((0x00000020U & ((IData)(vlSelfRef.out_rdy_i) 
                           >> 2U)) | ((0x00000010U 
                                       & (IData)(vlSelfRef.out_rdy_i)) 
                                      | ((8U & ((IData)(vlSelfRef.out_rdy_i) 
                                                << 2U)) 
                                         | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.ready_i))));
    vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx 
        = (1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.Clos_NoC__DOT__stg3_rdy_i = ((0x00000100U 
                                            & (IData)(vlSelfRef.out_rdy_i)) 
                                           | ((0x00000080U 
                                               & ((IData)(vlSelfRef.out_rdy_i) 
                                                  << 2U)) 
                                              | ((0x00000040U 
                                                  & ((IData)(vlSelfRef.out_rdy_i) 
                                                     << 4U)) 
                                                 | (IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4))));
}

void VClos_NoC___024root___ico_sequent__TOP__1(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___ico_sequent__TOP__1\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_0 
        = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
            << 3U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                       << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.valid_i)));
    vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx 
        = (1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.Clos_NoC__DOT__stg2_valid_i = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                                              << 5U) 
                                             | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_0)));
}

void VClos_NoC___024root___ico_sequent__TOP__2(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___ico_sequent__TOP__2\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3 
        = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
            << 5U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                       << 4U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                                  << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.valid_i))));
    vlSelfRef.out_valid = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_4) 
                            << 4U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_2) 
                                       << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[0U] 
        = (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i);
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[1U] 
        = (IData)((vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i 
                   >> 0x00000020U));
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                    << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o))));
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                     << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o))) 
                   >> 0x00000020U));
    vlSelfRef.Clos_NoC__DOT__stg3_valid_i = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                                              << 8U) 
                                             | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                                                 << 7U) 
                                                | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                                                    << 6U) 
                                                   | (IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3))));
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[0U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[0U];
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[1U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[1U];
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[2U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U];
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[3U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U];
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U] = (IData)(
                                                       (((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o))));
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U] = (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o))) 
                                                        >> 0x00000020U));
}

void VClos_NoC___024root___ico_sequent__TOP__3(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___ico_sequent__TOP__3\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_2 
        = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
            << 5U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                       << 4U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                  << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.ready_i))));
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[0U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[0U];
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[1U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[1U];
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[2U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[2U];
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o;
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                    << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o))));
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                     << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o))) 
                   >> 0x00000020U));
    vlSelfRef.out_data[0U] = (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_1);
    vlSelfRef.out_data[1U] = (IData)((vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_1 
                                      >> 0x00000020U));
    vlSelfRef.out_data[2U] = (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_3);
    vlSelfRef.out_data[3U] = (IData)((vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_3 
                                      >> 0x00000020U));
    vlSelfRef.out_data[4U] = (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_5);
    vlSelfRef.out_data[5U] = (IData)((vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_5 
                                      >> 0x00000020U));
    vlSelfRef.Clos_NoC__DOT__stg1_rdy_i = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                  << 3U) 
                                                 | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.ready_i))));
    vlSelfRef.ready_out = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.ready_o) 
                            << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.ready_o));
    vlSelfRef.Clos_NoC__DOT__stg2_rdy_i = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                            << 8U) 
                                           | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               << 7U) 
                                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                  << 6U) 
                                                 | (IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_2))));
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[0U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[0U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[1U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[1U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[2U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[2U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[3U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[4U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[5U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[6U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[7U] = (IData)(
                                                       (((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o))));
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[8U] = (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o))) 
                                                        >> 0x00000020U));
}

void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi1* vlSelf);

void VClos_NoC___024root___eval_ico(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_ico\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar));
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC___024root___ico_sequent__TOP__0(vlSelf);
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC___024root___ico_sequent__TOP__1(vlSelf);
        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC___024root___ico_sequent__TOP__2(vlSelf);
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC___024root___ico_sequent__TOP__3(vlSelf);
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar));
    }
}

bool VClos_NoC___024root___eval_phase__ico(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_phase__ico\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VClos_NoC___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = VClos_NoC___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VClos_NoC___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VClos_NoC___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VClos_NoC___024root___eval_triggers__act(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_triggers__act\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.rst_ni)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk_i) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VClos_NoC___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool VClos_NoC___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VClos_NoC___024root___nba_sequent__TOP__0(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___nba_sequent__TOP__0\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx 
        = (1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_0 
        = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
            << 3U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                       << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.valid_i)));
    vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx 
        = (1U & ((~ (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3 
        = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
            << 5U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                       << 4U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid) 
                                  << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.valid_i))));
    vlSelfRef.out_valid = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_4) 
                            << 4U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_2) 
                                       << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.Clos_NoC__DOT__stg2_valid_i = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                                              << 5U) 
                                             | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_0)));
    vlSelfRef.Clos_NoC__DOT__stg3_valid_i = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                                              << 8U) 
                                             | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                                                 << 7U) 
                                                | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid) 
                                                    << 6U) 
                                                   | (IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3))));
}

void VClos_NoC___024root___nba_sequent__TOP__1(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___nba_sequent__TOP__1\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_2 
        = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
            << 5U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                       << 4U) | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                  << 3U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.ready_i))));
    vlSelfRef.Clos_NoC__DOT__stg1_rdy_i = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                  << 3U) 
                                                 | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.ready_i))));
    vlSelfRef.ready_out = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.ready_o) 
                            << 2U) | (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.ready_o));
    vlSelfRef.Clos_NoC__DOT__stg2_rdy_i = (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready) 
                                            << 8U) 
                                           | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready) 
                                               << 7U) 
                                              | (((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready) 
                                                  << 6U) 
                                                 | (IData)(vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_2))));
}

void VClos_NoC___024root___nba_sequent__TOP__2(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___nba_sequent__TOP__2\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[0U] 
        = (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i);
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[1U] 
        = (IData)((vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i 
                   >> 0x00000020U));
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                    << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o))));
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                     << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o))) 
                   >> 0x00000020U));
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[0U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[0U];
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[1U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[1U];
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[2U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U];
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[3U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U];
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U] = (IData)(
                                                       (((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o))));
    vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U] = (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o))) 
                                                        >> 0x00000020U));
}

void VClos_NoC___024root___nba_sequent__TOP__3(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___nba_sequent__TOP__3\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[0U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[0U];
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[1U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[1U];
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[2U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[2U];
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o;
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                    << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o))));
    vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                     << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__data_o))) 
                   >> 0x00000020U));
    vlSelfRef.out_data[0U] = (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_1);
    vlSelfRef.out_data[1U] = (IData)((vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_1 
                                      >> 0x00000020U));
    vlSelfRef.out_data[2U] = (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_3);
    vlSelfRef.out_data[3U] = (IData)((vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_3 
                                      >> 0x00000020U));
    vlSelfRef.out_data[4U] = (IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_5);
    vlSelfRef.out_data[5U] = (IData)((vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h6e95ff9d_0_5 
                                      >> 0x00000020U));
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[0U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[0U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[1U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[1U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[2U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[2U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[3U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[4U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[5U] = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[6U] = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o;
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[7U] = (IData)(
                                                       (((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o))));
    vlSelfRef.Clos_NoC__DOT__stg3_data_i[8U] = (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o)) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__data_o))) 
                                                        >> 0x00000020U));
}

void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__3(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__3(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__3(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__3(VClos_NoC_stream_xbar__pi2* vlSelf);

void VClos_NoC___024root___eval_nba(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_nba\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC___024root___nba_sequent__TOP__0(vlSelf);
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__1((&vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC___024root___nba_sequent__TOP__1(vlSelf);
        VClos_NoC_stream_xbar__pi1___nba_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__3((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__2((&vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC___024root___nba_sequent__TOP__2(vlSelf);
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__3((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__3((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar));
        VClos_NoC_stream_xbar__pi2___nba_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__3((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar));
        VClos_NoC___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void VClos_NoC___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VClos_NoC___024root___eval_phase__act(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_phase__act\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VClos_NoC___024root___eval_triggers__act(vlSelf);
    VClos_NoC___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VClos_NoC___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VClos_NoC___024root___eval_phase__nba(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_phase__nba\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VClos_NoC___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VClos_NoC___024root___eval_nba(vlSelf);
        VClos_NoC___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VClos_NoC___024root___sample(VClos_NoC___024root* vlSelf);

void VClos_NoC___024root___eval(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    VClos_NoC___024root___sample(vlSelf);
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VClos_NoC___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/cclement/RISCV/silverstream/rtl/src/Clos_NoC/Clos_NoC.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (VClos_NoC___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VClos_NoC___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/cclement/RISCV/silverstream/rtl/src/Clos_NoC/Clos_NoC.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VClos_NoC___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/cclement/RISCV/silverstream/rtl/src/Clos_NoC/Clos_NoC.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (VClos_NoC___024root___eval_phase__act(vlSelf));
    } while (VClos_NoC___024root___eval_phase__nba(vlSelf));
}

void VClos_NoC___024root___sample(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___sample\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__rst_ni 
        = vlSelfRef.rst_ni;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__valid_in 
        = vlSelfRef.valid_in;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_inp_stage 
        = vlSelfRef.sel_inp_stage;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_3_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_3_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__data_in[0U] 
        = vlSelfRef.data_in[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__data_in[1U] 
        = vlSelfRef.data_in[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__data_in[2U] 
        = vlSelfRef.data_in[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__data_in[3U] 
        = vlSelfRef.data_in[3U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_6_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_6_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_7_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_7_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_9_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_9_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_11_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_11_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_12_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_12_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_14_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_14_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_15_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_15_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_17_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_17_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_19_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_19_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_20_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_20_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__data_o[0U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.data_o[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__data_o[1U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.data_o[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__data_o[2U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.data_o[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_22_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_22_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_23_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_23_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_25_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_25_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__valid_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.valid_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_27_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_27_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_28_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_28_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_30_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_30_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_31_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_31_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_33_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_33_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_35_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_35_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_36_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_36_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_38_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_38_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_39_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_39_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar___Vpast_41_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar._Vpast_41_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__ready_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.ready_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__ready_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.ready_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__flush_i 
        = vlSelfRef.flush_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__do_not_connect_in_idx 
        = vlSelfRef.Clos_NoC__DOT__do_not_connect_in_idx;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____VdfgRegularize_hd9890966_0_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__out_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_3_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_3_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_6_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_6_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_7_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_7_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_9_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_9_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_11_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_11_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_12_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_12_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_14_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_14_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_15_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_15_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_17_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_17_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_19_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_19_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_20_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_20_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__data_o[0U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.data_o[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__data_o[1U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.data_o[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__data_o[2U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.data_o[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_22_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_22_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_23_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_23_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_25_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_25_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__valid_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.valid_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_27_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_27_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_28_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_28_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_30_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_30_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_31_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_31_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_33_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_33_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_35_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_35_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_36_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_36_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_38_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_38_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_39_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_39_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar___Vpast_41_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar._Vpast_41_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__ready_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.ready_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg1_rdy_i 
        = vlSelfRef.Clos_NoC__DOT__stg1_rdy_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____VdfgRegularize_hd9890966_0_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__out_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__valid_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.valid_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_inp_stage_stage 
        = vlSelfRef.sel_inp_stage_stage;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_3_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_3_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__data_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_6_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_6_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_7_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_7_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_9_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_9_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_11_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_11_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_12_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_12_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_14_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_14_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_15_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_15_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_17_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_17_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_19_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_19_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_20_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_20_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__data_o[0U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_o[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__data_o[1U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_o[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__data_o[2U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.data_o[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_22_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_22_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_23_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_23_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_25_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_25_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__valid_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.valid_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_27_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_27_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_28_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_28_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_30_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_30_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_31_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_31_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_33_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_33_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_35_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_35_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_36_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_36_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_38_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_38_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_39_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_39_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar___Vpast_41_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar._Vpast_41_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__ready_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.ready_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__ready_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.ready_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__do_not_connect_mid_idx 
        = vlSelfRef.Clos_NoC__DOT__do_not_connect_mid_idx;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____VdfgRegularize_hd9890966_0_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__out_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_0 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_3_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_3_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[0U] 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[1U] 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U] 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U] 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1[3U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_6_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_6_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_7_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_7_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_9_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_9_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_11_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_11_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_12_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_12_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_14_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_14_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_15_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_15_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_17_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_17_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_19_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_19_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_20_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_20_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__data_o[0U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.data_o[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__data_o[1U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.data_o[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__data_o[2U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.data_o[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_22_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_22_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_23_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_23_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_25_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_25_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__valid_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.valid_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_27_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_27_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_28_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_28_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_30_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_30_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_31_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_31_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_33_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_33_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_35_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_35_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_36_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_36_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_38_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_38_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_39_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_39_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar___Vpast_41_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar._Vpast_41_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__ready_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.ready_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_2 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_2;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____VdfgRegularize_hd9890966_0_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__out_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg2_valid_i 
        = vlSelfRef.Clos_NoC__DOT__stg2_valid_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_3_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_3_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg2_data_i[0U] 
        = vlSelfRef.Clos_NoC__DOT__stg2_data_i[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg2_data_i[1U] 
        = vlSelfRef.Clos_NoC__DOT__stg2_data_i[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg2_data_i[2U] 
        = vlSelfRef.Clos_NoC__DOT__stg2_data_i[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg2_data_i[3U] 
        = vlSelfRef.Clos_NoC__DOT__stg2_data_i[3U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg2_data_i[4U] 
        = vlSelfRef.Clos_NoC__DOT__stg2_data_i[4U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg2_data_i[5U] 
        = vlSelfRef.Clos_NoC__DOT__stg2_data_i[5U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_6_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_6_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_7_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_7_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_9_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_9_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_11_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_11_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_12_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_12_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_14_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_14_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_15_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_15_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_17_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_17_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_19_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_19_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_20_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_20_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__data_o[0U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.data_o[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__data_o[1U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.data_o[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__data_o[2U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.data_o[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_22_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_22_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_23_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_23_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_25_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_25_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__valid_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.valid_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_27_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_27_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_28_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_28_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_30_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_30_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_31_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_31_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_33_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_33_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_35_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_35_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_36_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_36_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_38_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_38_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_39_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_39_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar___Vpast_41_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar._Vpast_41_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__ready_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.ready_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg2_rdy_i 
        = vlSelfRef.Clos_NoC__DOT__stg2_rdy_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____VdfgRegularize_hd9890966_0_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_hd9890966_0_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__out_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_ready 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_ready;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.valid_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__sel_out_stage 
        = vlSelfRef.sel_out_stage;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_5_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_5_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_i[0U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_i[1U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_i[2U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_i[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_7_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_7_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_8_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_8_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_10_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_10_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_12_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_12_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_13_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_13_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_15_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_15_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_16_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_16_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_18_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_18_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_20_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_20_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_21_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_21_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_23_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_23_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_24_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_24_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_26_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_26_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_28_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_28_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_29_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_29_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_o[0U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_o[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_o[1U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_o[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__data_o[2U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.data_o[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_31_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_31_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_32_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_32_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_34_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_34_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__valid_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.valid_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_36_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_36_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_37_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_37_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_39_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_39_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_40_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_40_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_42_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_42_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_44_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_44_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_45_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_45_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_47_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_47_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_48_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_48_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar___Vpast_50_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar._Vpast_50_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.ready_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__ready_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.ready_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__out_rdy_i 
        = vlSelfRef.out_rdy_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__out_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__out_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_5_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_5_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[0U] 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[1U] 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[2U] 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U] 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[3U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U] 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[4U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U] 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5[5U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_7_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_7_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_8_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_8_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_10_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_10_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_12_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_12_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_13_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_13_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_15_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_15_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_16_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_16_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_18_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_18_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_20_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_20_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_21_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_21_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_23_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_23_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_24_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_24_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_26_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_26_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_28_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_28_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_29_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_29_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__data_o[0U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.data_o[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__data_o[1U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.data_o[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__data_o[2U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.data_o[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_31_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_31_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_32_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_32_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_34_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_34_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__valid_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.valid_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_36_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_36_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_37_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_37_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_39_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_39_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_40_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_40_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_42_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_42_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_44_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_44_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_45_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_45_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_47_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_47_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_48_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_48_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar___Vpast_50_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar._Vpast_50_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__ready_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.ready_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4 
        = vlSelfRef.Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__out_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__out_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg3_valid_i 
        = vlSelfRef.Clos_NoC__DOT__stg3_valid_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_5_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_5_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[0U] 
        = vlSelfRef.Clos_NoC__DOT__stg3_data_i[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[1U] 
        = vlSelfRef.Clos_NoC__DOT__stg3_data_i[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[2U] 
        = vlSelfRef.Clos_NoC__DOT__stg3_data_i[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[3U] 
        = vlSelfRef.Clos_NoC__DOT__stg3_data_i[3U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[4U] 
        = vlSelfRef.Clos_NoC__DOT__stg3_data_i[4U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[5U] 
        = vlSelfRef.Clos_NoC__DOT__stg3_data_i[5U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[6U] 
        = vlSelfRef.Clos_NoC__DOT__stg3_data_i[6U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[7U] 
        = vlSelfRef.Clos_NoC__DOT__stg3_data_i[7U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg3_data_i[8U] 
        = vlSelfRef.Clos_NoC__DOT__stg3_data_i[8U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_7_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_7_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_8_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_8_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_10_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_10_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_12_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_12_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_13_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_13_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_15_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_15_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_16_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_16_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_18_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_18_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_20_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_20_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_21_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_21_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_23_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_23_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_24_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_24_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_26_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_26_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_28_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_28_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_29_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_29_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__data_o[0U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.data_o[0U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__data_o[1U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.data_o[1U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__data_o[2U] 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.data_o[2U];
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_31_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_31_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_32_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_32_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_34_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_34_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__valid_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.valid_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_36_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_36_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_37_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_37_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_39_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_39_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_40_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_40_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_42_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_42_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_44_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_44_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_45_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_45_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_47_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_47_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_48_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_48_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar___Vpast_50_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar._Vpast_50_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__ready_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.ready_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__stg3_rdy_i 
        = vlSelfRef.Clos_NoC__DOT__stg3_rdy_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__req_i;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____VdfgRegularize_h842de97e_0_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__VdfgRegularize_h842de97e_0_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_1_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__idx_o;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_2_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT___Vpast_4_0;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__out_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__out_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__arb_valid 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__arb_valid;
    vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vsampled_TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar____PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d 
        = vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__PVT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_d;
}

#ifdef VL_DEBUG
void VClos_NoC___024root___eval_debug_assertions(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_debug_assertions\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");
    }
    if (VL_UNLIKELY(((vlSelfRef.flush_i & 0xfeU)))) {
        Verilated::overWidthError("flush_i");
    }
}
#endif  // VL_DEBUG
