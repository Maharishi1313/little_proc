// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore_top_tb.h for the primary calling header

#ifndef VERILATED_VCORE_TOP_TB___024UNIT_H_
#define VERILATED_VCORE_TOP_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcore_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_top_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcore_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_top_tb___024unit(Vcore_top_tb__Syms* symsp, const char* v__name);
    ~Vcore_top_tb___024unit();
    VL_UNCOPYABLE(Vcore_top_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
