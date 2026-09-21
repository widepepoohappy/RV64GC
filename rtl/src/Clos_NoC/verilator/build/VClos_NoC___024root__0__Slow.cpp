// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClos_NoC.h for the primary calling header

#include "VClos_NoC__pch.h"

VL_ATTR_COLD void VClos_NoC___024root___eval_static(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_static\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
}

VL_ATTR_COLD void VClos_NoC___024root___eval_initial(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_initial\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VClos_NoC___024root___eval_final(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_final\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VClos_NoC___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VClos_NoC___024root___eval_phase__stl(VClos_NoC___024root* vlSelf);

VL_ATTR_COLD void VClos_NoC___024root___eval_settle(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_settle\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VClos_NoC___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/cclement/RISCV/silverstream/rtl/src/Clos_NoC/Clos_NoC.sv", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (VClos_NoC___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void VClos_NoC___024root___eval_triggers__stl(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_triggers__stl\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VClos_NoC___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool VClos_NoC___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VClos_NoC___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VClos_NoC___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VClos_NoC___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___trigger_anySet__stl\n"); );
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

void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf);
VL_ATTR_COLD void VClos_NoC___024root____Vm_traceActivitySetAll(VClos_NoC___024root* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC___024root___ico_sequent__TOP__0(VClos_NoC___024root* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC___024root___ico_sequent__TOP__1(VClos_NoC___024root* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__0(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC___024root___ico_sequent__TOP__2(VClos_NoC___024root* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi2* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar__1(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC___024root___ico_sequent__TOP__3(VClos_NoC___024root* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi1* vlSelf);
void VClos_NoC_stream_xbar__pi1___ico_sequent__TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar__2(VClos_NoC_stream_xbar__pi1* vlSelf);

VL_ATTR_COLD void VClos_NoC___024root___eval_stl(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_stl\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VClos_NoC_stream_xbar__pi2___ico_sequent__TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar__0((&vlSymsp->TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar));
        VClos_NoC___024root____Vm_traceActivitySetAll(vlSelf);
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

VL_ATTR_COLD bool VClos_NoC___024root___eval_phase__stl(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___eval_phase__stl\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VClos_NoC___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = VClos_NoC___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VClos_NoC___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VClos_NoC___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VClos_NoC___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VClos_NoC___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VClos_NoC___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VClos_NoC___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VClos_NoC___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VClos_NoC___024root____Vm_traceActivitySetAll(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root____Vm_traceActivitySetAll\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void VClos_NoC___024root___ctor_var_reset(VClos_NoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClos_NoC___024root___ctor_var_reset\n"); );
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->data_in, __VscopeHash, 10574596302020702150ull);
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16540271516330450727ull);
    vlSelf->ready_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7479542285155168376ull);
    vlSelf->sel_out_stage = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1663984483000118810ull);
    vlSelf->sel_inp_stage = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12135943969716208380ull);
    vlSelf->sel_inp_stage_stage = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10330083028033916143ull);
    VL_SCOPED_RAND_RESET_W(192, vlSelf->out_data, __VscopeHash, 10144880484820144978ull);
    vlSelf->out_valid = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2886291494070200219ull);
    vlSelf->out_rdy_i = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 970436555002224893ull);
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->flush_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12823618135036147526ull);
    VL_SCOPED_RAND_RESET_W(192, vlSelf->Clos_NoC__DOT__stg2_data_i, __VscopeHash, 9648274157287132007ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->Clos_NoC__DOT__stg3_data_i, __VscopeHash, 16527542906155574342ull);
    vlSelf->Clos_NoC__DOT__stg1_rdy_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1204778785965458898ull);
    vlSelf->Clos_NoC__DOT__stg2_valid_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8208066305918654369ull);
    vlSelf->Clos_NoC__DOT__stg2_rdy_i = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14610461862010365033ull);
    vlSelf->Clos_NoC__DOT__stg3_valid_i = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17202583925064671991ull);
    vlSelf->Clos_NoC__DOT__stg3_rdy_i = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7857453945017467959ull);
    vlSelf->Clos_NoC__DOT__do_not_connect_in_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16874550605049009075ull);
    vlSelf->Clos_NoC__DOT__do_not_connect_mid_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12974850539687637611ull);
    vlSelf->Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1);
    vlSelf->Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_2 = 0;
    vlSelf->Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3 = 0;
    vlSelf->Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4 = 0;
    VL_ZERO_RESET_W(192, vlSelf->Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
