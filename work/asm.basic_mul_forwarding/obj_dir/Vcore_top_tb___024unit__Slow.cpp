// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_tb.h for the primary calling header

#include "Vcore_top_tb__pch.h"
#include "Vcore_top_tb__Syms.h"
#include "Vcore_top_tb___024unit.h"

void Vcore_top_tb___024unit___ctor_var_reset(Vcore_top_tb___024unit* vlSelf);

Vcore_top_tb___024unit::Vcore_top_tb___024unit(Vcore_top_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_top_tb___024unit___ctor_var_reset(this);
}

void Vcore_top_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_top_tb___024unit::~Vcore_top_tb___024unit() {
}
