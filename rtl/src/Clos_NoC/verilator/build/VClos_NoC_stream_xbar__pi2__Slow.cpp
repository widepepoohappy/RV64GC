// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClos_NoC.h for the primary calling header

#include "VClos_NoC__pch.h"

void VClos_NoC_stream_xbar__pi2___ctor_var_reset(VClos_NoC_stream_xbar__pi2* vlSelf);

void VClos_NoC_stream_xbar__pi2::ctor(VClos_NoC__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VClos_NoC_stream_xbar__pi2___ctor_var_reset(this);
}

void VClos_NoC_stream_xbar__pi2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VClos_NoC_stream_xbar__pi2::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
