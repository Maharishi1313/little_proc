// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff_rst_en_flush_tb.h for the primary calling header

#include "Vdff_rst_en_flush_tb__pch.h"
#include "Vdff_rst_en_flush_tb__Syms.h"
#include "Vdff_rst_en_flush_tb___024root.h"

void Vdff_rst_en_flush_tb___024root___ctor_var_reset(Vdff_rst_en_flush_tb___024root* vlSelf);

Vdff_rst_en_flush_tb___024root::Vdff_rst_en_flush_tb___024root(Vdff_rst_en_flush_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdff_rst_en_flush_tb___024root___ctor_var_reset(this);
}

void Vdff_rst_en_flush_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdff_rst_en_flush_tb___024root::~Vdff_rst_en_flush_tb___024root() {
}
