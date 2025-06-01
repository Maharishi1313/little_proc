// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcore_top_tb__pch.h"
#include "Vcore_top_tb.h"
#include "Vcore_top_tb___024root.h"
#include "Vcore_top_tb___024unit.h"

// FUNCTIONS
Vcore_top_tb__Syms::~Vcore_top_tb__Syms()
{
}

Vcore_top_tb__Syms::Vcore_top_tb__Syms(VerilatedContext* contextp, const char* namep, Vcore_top_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(792);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
