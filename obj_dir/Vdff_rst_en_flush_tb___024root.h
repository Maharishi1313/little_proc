// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdff_rst_en_flush_tb.h for the primary calling header

#ifndef VERILATED_VDFF_RST_EN_FLUSH_TB___024ROOT_H_
#define VERILATED_VDFF_RST_EN_FLUSH_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdff_rst_en_flush_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdff_rst_en_flush_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ dff_rst_en_flush_tb__DOT__clk;
    CData/*0:0*/ dff_rst_en_flush_tb__DOT__d;
    CData/*0:0*/ dff_rst_en_flush_tb__DOT__reset;
    CData/*0:0*/ dff_rst_en_flush_tb__DOT__en;
    CData/*0:0*/ dff_rst_en_flush_tb__DOT__flush;
    CData/*0:0*/ dff_rst_en_flush_tb__DOT__q;
    CData/*0:0*/ dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i;
    CData/*0:0*/ dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din;
    CData/*0:0*/ __VdlySet__dff_rst_en_flush_tb__DOT__reset__v0;
    CData/*0:0*/ __VdlyVal__dff_rst_en_flush_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__dff_rst_en_flush_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dff_rst_en_flush_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf57b8bd3__0;
    VlTriggerScheduler __VtrigSched_hf57b8b12__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdff_rst_en_flush_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdff_rst_en_flush_tb___024root(Vdff_rst_en_flush_tb__Syms* symsp, const char* v__name);
    ~Vdff_rst_en_flush_tb___024root();
    VL_UNCOPYABLE(Vdff_rst_en_flush_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
