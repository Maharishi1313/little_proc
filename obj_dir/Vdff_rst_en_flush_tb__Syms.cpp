// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdff_rst_en_flush_tb__pch.h"
#include "Vdff_rst_en_flush_tb.h"
#include "Vdff_rst_en_flush_tb___024root.h"

// FUNCTIONS
Vdff_rst_en_flush_tb__Syms::~Vdff_rst_en_flush_tb__Syms()
{
}

Vdff_rst_en_flush_tb__Syms::Vdff_rst_en_flush_tb__Syms(VerilatedContext* contextp, const char* namep, Vdff_rst_en_flush_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
