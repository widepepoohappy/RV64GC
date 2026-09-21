// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClos_NoC.h for the primary calling header

#include "VClos_NoC__pch.h"

void VClos_NoC___024root___ctor_var_reset(VClos_NoC___024root* vlSelf);

VClos_NoC___024root::VClos_NoC___024root(VClos_NoC__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VClos_NoC___024root___ctor_var_reset(this);
}

void VClos_NoC___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VClos_NoC___024root::~VClos_NoC___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
