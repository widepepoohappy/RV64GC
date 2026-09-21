// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VClos_NoC.h for the primary calling header

#ifndef VERILATED_VCLOS_NOC___024ROOT_H_
#define VERILATED_VCLOS_NOC___024ROOT_H_  // guard

#include "verilated.h"
class VClos_NoC_stream_xbar__pi1;
class VClos_NoC_stream_xbar__pi2;


class VClos_NoC__Syms;

class alignas(VL_CACHE_LINE_BYTES) VClos_NoC___024root final {
  public:
    // CELLS
    VClos_NoC_stream_xbar__pi1* __PVT__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1* __PVT__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1* __PVT__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1* __PVT__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1* __PVT__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi2* __PVT__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi2* __PVT__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi2* __PVT__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(valid_in,3,0);
    VL_OUT8(ready_out,3,0);
    VL_IN(sel_out_stage,17,0);
    VL_IN8(sel_inp_stage,7,0);
    VL_IN16(sel_inp_stage_stage,11,0);
    VL_OUT8(out_valid,5,0);
    VL_IN16(out_rdy_i,8,0);
    VL_IN8(flush_i,0,0);
    CData/*5:0*/ Clos_NoC__DOT__stg1_rdy_i;
    CData/*5:0*/ Clos_NoC__DOT__stg2_valid_i;
    SData/*8:0*/ Clos_NoC__DOT__stg2_rdy_i;
    SData/*8:0*/ Clos_NoC__DOT__stg3_valid_i;
    SData/*8:0*/ Clos_NoC__DOT__stg3_rdy_i;
    CData/*0:0*/ Clos_NoC__DOT__do_not_connect_in_idx;
    CData/*0:0*/ Clos_NoC__DOT__do_not_connect_mid_idx;
    CData/*3:0*/ Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_0;
    CData/*5:0*/ Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_2;
    CData/*5:0*/ Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_3;
    CData/*5:0*/ Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_4;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
    VL_INW(data_in,127,0,4);
    VL_OUTW(out_data,191,0,6);
    VlWide<6>/*191:0*/ Clos_NoC__DOT__stg2_data_i;
    VlWide<9>/*287:0*/ Clos_NoC__DOT__stg3_data_i;
    VlWide<4>/*127:0*/ Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_1;
    VlWide<6>/*191:0*/ Clos_NoC__DOT____VdfgRegularize_h0b8ec749_0_5;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VClos_NoC__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VClos_NoC___024root(VClos_NoC__Syms* symsp, const char* namep);
    ~VClos_NoC___024root();
    VL_UNCOPYABLE(VClos_NoC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
