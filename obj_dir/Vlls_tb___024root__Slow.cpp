// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlls_tb.h for the primary calling header

#include "Vlls_tb__pch.h"
#include "Vlls_tb__Syms.h"
#include "Vlls_tb___024root.h"

void Vlls_tb___024root___ctor_var_reset(Vlls_tb___024root* vlSelf);

Vlls_tb___024root::Vlls_tb___024root(Vlls_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlls_tb___024root___ctor_var_reset(this);
}

void Vlls_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vlls_tb___024root::~Vlls_tb___024root() {
}
