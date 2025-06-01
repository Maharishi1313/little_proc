// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff_rst_en_flush_tb.h for the primary calling header

#include "Vdff_rst_en_flush_tb__pch.h"
#include "Vdff_rst_en_flush_tb___024root.h"

VlCoroutine Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__0(Vdff_rst_en_flush_tb___024root* vlSelf);
VlCoroutine Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__1(Vdff_rst_en_flush_tb___024root* vlSelf);
VlCoroutine Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__2(Vdff_rst_en_flush_tb___024root* vlSelf);

void Vdff_rst_en_flush_tb___024root___eval_initial(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_initial\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__dff_rst_en_flush_tb__DOT__clk__0 
        = vlSelfRef.dff_rst_en_flush_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__0(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hf57b8bd3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         24);
    vlSelfRef.dff_rst_en_flush_tb__DOT__d = 0U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__en = 0U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__flush = 0U;
    co_await vlSelfRef.__VtrigSched_hf57b8b12__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         29);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b\n",0,
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__d,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__clk),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__reset,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__en),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__flush,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__q));
    co_await vlSelfRef.__VtrigSched_hf57b8bd3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         31);
    vlSelfRef.dff_rst_en_flush_tb__DOT__d = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__en = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__flush = 0U;
    co_await vlSelfRef.__VtrigSched_hf57b8b12__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         36);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b\n",0,
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__d,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__clk),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__reset,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__en),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__flush,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__q));
    co_await vlSelfRef.__VtrigSched_hf57b8bd3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         38);
    vlSelfRef.dff_rst_en_flush_tb__DOT__d = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__en = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__flush = 0U;
    co_await vlSelfRef.__VtrigSched_hf57b8b12__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         43);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b\n",0,
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__d,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__clk),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__reset,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__en),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__flush,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__q));
    co_await vlSelfRef.__VtrigSched_hf57b8bd3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         45);
    vlSelfRef.dff_rst_en_flush_tb__DOT__d = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__en = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__flush = 0U;
    co_await vlSelfRef.__VtrigSched_hf57b8b12__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         51);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b\n",0,
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__d,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__clk),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__reset,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__en),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__flush,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__q));
    co_await vlSelfRef.__VtrigSched_hf57b8bd3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         53);
    vlSelfRef.dff_rst_en_flush_tb__DOT__d = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__en = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__flush = 1U;
    co_await vlSelfRef.__VtrigSched_hf57b8b12__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         58);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b\n",0,
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__d,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__clk),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__reset,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__en),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__flush,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__q));
    co_await vlSelfRef.__VtrigSched_hf57b8bd3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         60);
    vlSelfRef.dff_rst_en_flush_tb__DOT__d = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__en = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__flush = 0U;
    co_await vlSelfRef.__VtrigSched_hf57b8b12__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         65);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b\n",0,
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__d,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__clk),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__reset,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__en),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__flush,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__q));
    co_await vlSelfRef.__VtrigSched_hf57b8bd3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         67);
    vlSelfRef.dff_rst_en_flush_tb__DOT__d = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__en = 1U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__flush = 0U;
    co_await vlSelfRef.__VtrigSched_hf57b8b12__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dff_rst_en_flush_tb.clk)", 
                                                         "tb/dff_rst_en_flush_tb.sv", 
                                                         119);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, flush = %b, q = %b\n",0,
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__d,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__clk),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__reset,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__en),
                 1,vlSelfRef.dff_rst_en_flush_tb__DOT__flush,
                 1,(IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__q));
    VL_FINISH_MT("tb/dff_rst_en_flush_tb.sv", 122, "");
}

VL_INLINE_OPT VlCoroutine Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__1(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb/dff_rst_en_flush_tb.sv", 
                                             21);
        vlSelfRef.__VdlySet__dff_rst_en_flush_tb__DOT__reset__v0 = 1U;
    }
}

VL_INLINE_OPT VlCoroutine Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__2(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/dff_rst_en_flush_tb.sv", 
                                             20);
        vlSelfRef.__VdlyVal__dff_rst_en_flush_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__clk)));
        vlSelfRef.__VdlySet__dff_rst_en_flush_tb__DOT__clk__v0 = 1U;
    }
}

void Vdff_rst_en_flush_tb___024root___act_comb__TOP__0(Vdff_rst_en_flush_tb___024root* vlSelf);

void Vdff_rst_en_flush_tb___024root___eval_act(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_act\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdff_rst_en_flush_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdff_rst_en_flush_tb___024root___act_comb__TOP__0(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___act_comb__TOP__0\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dff_rst_en_flush_tb__DOT__q = ((~ (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__flush)) 
                                             & (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i));
    vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din 
        = ((IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__en)
            ? ((~ (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__flush)) 
               & (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__d))
            : (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i));
}

void Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__0(Vdff_rst_en_flush_tb___024root* vlSelf);
void Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__1(Vdff_rst_en_flush_tb___024root* vlSelf);
void Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__2(Vdff_rst_en_flush_tb___024root* vlSelf);

void Vdff_rst_en_flush_tb___024root___eval_nba(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_nba\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdff_rst_en_flush_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__0(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__0\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__dff_rst_en_flush_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__dff_rst_en_flush_tb__DOT__clk__v0 = 0U;
        vlSelfRef.dff_rst_en_flush_tb__DOT__clk = vlSelfRef.__VdlyVal__dff_rst_en_flush_tb__DOT__clk__v0;
    }
}

VL_INLINE_OPT void Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__1(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__1\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i 
        = ((IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__reset) 
           & (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din));
}

VL_INLINE_OPT void Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__2(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___nba_sequent__TOP__2\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__dff_rst_en_flush_tb__DOT__reset__v0) {
        vlSelfRef.__VdlySet__dff_rst_en_flush_tb__DOT__reset__v0 = 0U;
        vlSelfRef.dff_rst_en_flush_tb__DOT__reset = 1U;
    }
}

void Vdff_rst_en_flush_tb___024root___timing_resume(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___timing_resume\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf57b8bd3__0.resume(
                                                   "@(negedge dff_rst_en_flush_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf57b8b12__0.resume(
                                                   "@(posedge dff_rst_en_flush_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdff_rst_en_flush_tb___024root___timing_commit(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___timing_commit\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf57b8bd3__0.commit(
                                                   "@(negedge dff_rst_en_flush_tb.clk)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf57b8b12__0.commit(
                                                   "@(posedge dff_rst_en_flush_tb.clk)");
    }
}

void Vdff_rst_en_flush_tb___024root___eval_triggers__act(Vdff_rst_en_flush_tb___024root* vlSelf);

bool Vdff_rst_en_flush_tb___024root___eval_phase__act(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_phase__act\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdff_rst_en_flush_tb___024root___eval_triggers__act(vlSelf);
    Vdff_rst_en_flush_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdff_rst_en_flush_tb___024root___timing_resume(vlSelf);
        Vdff_rst_en_flush_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdff_rst_en_flush_tb___024root___eval_phase__nba(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_phase__nba\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdff_rst_en_flush_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___dump_triggers__nba(Vdff_rst_en_flush_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___dump_triggers__act(Vdff_rst_en_flush_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdff_rst_en_flush_tb___024root___eval(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdff_rst_en_flush_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/dff_rst_en_flush_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdff_rst_en_flush_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/dff_rst_en_flush_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdff_rst_en_flush_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdff_rst_en_flush_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdff_rst_en_flush_tb___024root___eval_debug_assertions(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_debug_assertions\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
