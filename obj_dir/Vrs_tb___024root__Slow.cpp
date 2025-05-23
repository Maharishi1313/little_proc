// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrs_tb.h for the primary calling header

#include "Vrs_tb__pch.h"
#include "Vrs_tb__Syms.h"
#include "Vrs_tb___024root.h"

void Vrs_tb___024root___ctor_var_reset(Vrs_tb___024root* vlSelf);

Vrs_tb___024root::Vrs_tb___024root(Vrs_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrs_tb___024root___ctor_var_reset(this);
}

void Vrs_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrs_tb___024root::~Vrs_tb___024root() {
}
