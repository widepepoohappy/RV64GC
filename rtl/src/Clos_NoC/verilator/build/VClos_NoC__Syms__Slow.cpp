// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VClos_NoC__pch.h"

VClos_NoC__Syms::VClos_NoC__Syms(VerilatedContext* contextp, const char* namep, VClos_NoC* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(356);
    // Setup sub module instances
    TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.ctor(this, "Clos_NoC.gen_inp_sw[0].input_xbar");
    TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.ctor(this, "Clos_NoC.gen_inp_sw[1].input_xbar");
    TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.ctor(this, "Clos_NoC.gen_mid_sw[0].input_xbar");
    TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.ctor(this, "Clos_NoC.gen_mid_sw[1].input_xbar");
    TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.ctor(this, "Clos_NoC.gen_mid_sw[2].input_xbar");
    TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.ctor(this, "Clos_NoC.gen_out_sw[0].input_xbar");
    TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.ctor(this, "Clos_NoC.gen_out_sw[1].input_xbar");
    TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.ctor(this, "Clos_NoC.gen_out_sw[2].input_xbar");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar = &TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar;
    TOP.__PVT__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar = &TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar;
    TOP.__PVT__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar = &TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar;
    TOP.__PVT__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar = &TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar;
    TOP.__PVT__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar = &TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar;
    TOP.__PVT__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar = &TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar;
    TOP.__PVT__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar = &TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar;
    TOP.__PVT__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar = &TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.__Vconfigure(true);
    TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.__Vconfigure(false);
    TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.__Vconfigure(false);
    TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.__Vconfigure(false);
    TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.__Vconfigure(false);
    TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.__Vconfigure(true);
    TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.__Vconfigure(false);
    TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.__Vconfigure(false);
    // Setup scopes
}

VClos_NoC__Syms::~VClos_NoC__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar.dtor();
    TOP__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar.dtor();
    TOP__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar.dtor();
    TOP__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar.dtor();
    TOP__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar.dtor();
    TOP__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar.dtor();
    TOP__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar.dtor();
    TOP__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar.dtor();
}
