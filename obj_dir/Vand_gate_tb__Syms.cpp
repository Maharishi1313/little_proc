// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vand_gate_tb__pch.h"
#include "Vand_gate_tb.h"
#include "Vand_gate_tb___024root.h"

// FUNCTIONS
Vand_gate_tb__Syms::~Vand_gate_tb__Syms()
{
}

Vand_gate_tb__Syms::Vand_gate_tb__Syms(VerilatedContext* contextp, const char* namep, Vand_gate_tb* modelp)
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
