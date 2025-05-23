// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vd_ff_full_tb.h for the primary calling header

#ifndef VERILATED_VD_FF_FULL_TB___024ROOT_H_
#define VERILATED_VD_FF_FULL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vd_ff_full_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vd_ff_full_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ d_ff_full_tb__DOT__clk;
    CData/*0:0*/ d_ff_full_tb__DOT__reset;
    CData/*0:0*/ d_ff_full_tb__DOT__d;
    CData/*0:0*/ d_ff_full_tb__DOT__en;
    CData/*0:0*/ d_ff_full_tb__DOT__q;
    CData/*0:0*/ __VdlyVal__d_ff_full_tb__DOT__reset__v0;
    CData/*0:0*/ __VdlySet__d_ff_full_tb__DOT__reset__v0;
    CData/*0:0*/ __VdlyVal__d_ff_full_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__d_ff_full_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__d_ff_full_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__d_ff_full_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hce063bb5__0;
    VlTriggerScheduler __VtrigSched_hce063bf4__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vd_ff_full_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vd_ff_full_tb___024root(Vd_ff_full_tb__Syms* symsp, const char* v__name);
    ~Vd_ff_full_tb___024root();
    VL_UNCOPYABLE(Vd_ff_full_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
