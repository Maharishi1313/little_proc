// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb__Syms.h"
#include "Valu_tb___024root.h"

void Valu_tb___024root___ctor_var_reset(Valu_tb___024root* vlSelf);

Valu_tb___024root::Valu_tb___024root(Valu_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valu_tb___024root___ctor_var_reset(this);
}

void Valu_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Valu_tb___024root::~Valu_tb___024root() {
}
