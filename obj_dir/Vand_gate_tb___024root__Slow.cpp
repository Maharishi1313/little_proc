// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate_tb.h for the primary calling header

#include "Vand_gate_tb__pch.h"
#include "Vand_gate_tb__Syms.h"
#include "Vand_gate_tb___024root.h"

void Vand_gate_tb___024root___ctor_var_reset(Vand_gate_tb___024root* vlSelf);

Vand_gate_tb___024root::Vand_gate_tb___024root(Vand_gate_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vand_gate_tb___024root___ctor_var_reset(this);
}

void Vand_gate_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vand_gate_tb___024root::~Vand_gate_tb___024root() {
}
