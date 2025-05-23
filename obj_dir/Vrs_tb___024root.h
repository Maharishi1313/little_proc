// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrs_tb.h for the primary calling header

#ifndef VERILATED_VRS_TB___024ROOT_H_
#define VERILATED_VRS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vrs_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrs_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ rs_tb__DOT__x;
    CData/*1:0*/ rs_tb__DOT__y;
    CData/*3:0*/ rs_tb__DOT__z_logical;
    CData/*3:0*/ rs_tb__DOT__z_arithmetic;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrs_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrs_tb___024root(Vrs_tb__Syms* symsp, const char* v__name);
    ~Vrs_tb___024root();
    VL_UNCOPYABLE(Vrs_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
