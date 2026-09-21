// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLOS_NOC__SYMS_H_
#define VERILATED_VCLOS_NOC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VClos_NoC.h"

// INCLUDE MODULE CLASSES
#include "VClos_NoC___024root.h"
#include "VClos_NoC_stream_xbar__pi1.h"
#include "VClos_NoC_stream_xbar__pi2.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VClos_NoC__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VClos_NoC* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VClos_NoC___024root            TOP;
    VClos_NoC_stream_xbar__pi1     TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1     TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1     TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1     TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1     TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi2     TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi2     TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi2     TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar;

    // CONSTRUCTORS
    VClos_NoC__Syms(VerilatedContext* contextp, const char* namep, VClos_NoC* modelp);
    ~VClos_NoC__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
