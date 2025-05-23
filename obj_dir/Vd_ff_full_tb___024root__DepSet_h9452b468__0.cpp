// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vd_ff_full_tb.h for the primary calling header

#include "Vd_ff_full_tb__pch.h"
#include "Vd_ff_full_tb___024root.h"

VlCoroutine Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__0(Vd_ff_full_tb___024root* vlSelf);
VlCoroutine Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__1(Vd_ff_full_tb___024root* vlSelf);
VlCoroutine Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__2(Vd_ff_full_tb___024root* vlSelf);

void Vd_ff_full_tb___024root___eval_initial(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_initial\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__d_ff_full_tb__DOT__clk__0 
        = vlSelfRef.d_ff_full_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__d_ff_full_tb__DOT__reset__0 
        = vlSelfRef.d_ff_full_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__0(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hce063bb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         22);
    vlSelfRef.d_ff_full_tb__DOT__d = 0U;
    vlSelfRef.d_ff_full_tb__DOT__en = 0U;
    co_await vlSelfRef.__VtrigSched_hce063bf4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         26);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, q = %b\n",0,
                 1,vlSelfRef.d_ff_full_tb__DOT__d,1,
                 (IData)(vlSelfRef.d_ff_full_tb__DOT__clk),
                 1,vlSelfRef.d_ff_full_tb__DOT__reset,
                 1,(IData)(vlSelfRef.d_ff_full_tb__DOT__en),
                 1,vlSelfRef.d_ff_full_tb__DOT__q);
    co_await vlSelfRef.__VtrigSched_hce063bb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         28);
    vlSelfRef.d_ff_full_tb__DOT__d = 1U;
    vlSelfRef.d_ff_full_tb__DOT__en = 0U;
    co_await vlSelfRef.__VtrigSched_hce063bf4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         32);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, q = %b\n",0,
                 1,vlSelfRef.d_ff_full_tb__DOT__d,1,
                 (IData)(vlSelfRef.d_ff_full_tb__DOT__clk),
                 1,vlSelfRef.d_ff_full_tb__DOT__reset,
                 1,(IData)(vlSelfRef.d_ff_full_tb__DOT__en),
                 1,vlSelfRef.d_ff_full_tb__DOT__q);
    co_await vlSelfRef.__VtrigSched_hce063bb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         34);
    vlSelfRef.d_ff_full_tb__DOT__d = 1U;
    vlSelfRef.d_ff_full_tb__DOT__en = 1U;
    co_await vlSelfRef.__VtrigSched_hce063bf4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         38);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, q = %b\n",0,
                 1,vlSelfRef.d_ff_full_tb__DOT__d,1,
                 (IData)(vlSelfRef.d_ff_full_tb__DOT__clk),
                 1,vlSelfRef.d_ff_full_tb__DOT__reset,
                 1,(IData)(vlSelfRef.d_ff_full_tb__DOT__en),
                 1,vlSelfRef.d_ff_full_tb__DOT__q);
    co_await vlSelfRef.__VtrigSched_hce063bb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         40);
    vlSelfRef.d_ff_full_tb__DOT__d = 0U;
    vlSelfRef.d_ff_full_tb__DOT__en = 1U;
    co_await vlSelfRef.__VtrigSched_hce063bf4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         44);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, q = %b\n",0,
                 1,vlSelfRef.d_ff_full_tb__DOT__d,1,
                 (IData)(vlSelfRef.d_ff_full_tb__DOT__clk),
                 1,vlSelfRef.d_ff_full_tb__DOT__reset,
                 1,(IData)(vlSelfRef.d_ff_full_tb__DOT__en),
                 1,vlSelfRef.d_ff_full_tb__DOT__q);
    co_await vlSelfRef.__VtrigSched_hce063bb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         46);
    vlSelfRef.d_ff_full_tb__DOT__d = 0U;
    vlSelfRef.d_ff_full_tb__DOT__en = 0U;
    co_await vlSelfRef.__VtrigSched_hce063bf4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         50);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, q = %b\n",0,
                 1,vlSelfRef.d_ff_full_tb__DOT__d,1,
                 (IData)(vlSelfRef.d_ff_full_tb__DOT__clk),
                 1,vlSelfRef.d_ff_full_tb__DOT__reset,
                 1,(IData)(vlSelfRef.d_ff_full_tb__DOT__en),
                 1,vlSelfRef.d_ff_full_tb__DOT__q);
    co_await vlSelfRef.__VtrigSched_hce063bb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         52);
    vlSelfRef.d_ff_full_tb__DOT__d = 1U;
    vlSelfRef.d_ff_full_tb__DOT__en = 0U;
    co_await vlSelfRef.__VtrigSched_hce063bf4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         56);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, q = %b\n",0,
                 1,vlSelfRef.d_ff_full_tb__DOT__d,1,
                 (IData)(vlSelfRef.d_ff_full_tb__DOT__clk),
                 1,vlSelfRef.d_ff_full_tb__DOT__reset,
                 1,(IData)(vlSelfRef.d_ff_full_tb__DOT__en),
                 1,vlSelfRef.d_ff_full_tb__DOT__q);
    co_await vlSelfRef.__VtrigSched_hce063bb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         58);
    vlSelfRef.d_ff_full_tb__DOT__d = 1U;
    vlSelfRef.d_ff_full_tb__DOT__en = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/d_ff_full_tb.sv", 
                                         61);
    co_await vlSelfRef.__VtrigSched_hce063bf4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         62);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, q = %b\n",0,
                 1,vlSelfRef.d_ff_full_tb__DOT__d,1,
                 (IData)(vlSelfRef.d_ff_full_tb__DOT__clk),
                 1,vlSelfRef.d_ff_full_tb__DOT__reset,
                 1,(IData)(vlSelfRef.d_ff_full_tb__DOT__en),
                 1,vlSelfRef.d_ff_full_tb__DOT__q);
    co_await vlSelfRef.__VtrigSched_hce063bb5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         64);
    vlSelfRef.d_ff_full_tb__DOT__d = 0U;
    vlSelfRef.d_ff_full_tb__DOT__en = 1U;
    co_await vlSelfRef.__VtrigSched_hce063bf4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge d_ff_full_tb.clk)", 
                                                         "tb/d_ff_full_tb.sv", 
                                                         68);
    VL_WRITEF_NX("d = %b, clk = %b, reset = %b, en = %b, q = %b\n",0,
                 1,vlSelfRef.d_ff_full_tb__DOT__d,1,
                 (IData)(vlSelfRef.d_ff_full_tb__DOT__clk),
                 1,vlSelfRef.d_ff_full_tb__DOT__reset,
                 1,(IData)(vlSelfRef.d_ff_full_tb__DOT__en),
                 1,vlSelfRef.d_ff_full_tb__DOT__q);
    VL_FINISH_MT("tb/d_ff_full_tb.sv", 71, "");
}

VL_INLINE_OPT VlCoroutine Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__1(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb/d_ff_full_tb.sv", 
                                             19);
        vlSelfRef.__VdlyVal__d_ff_full_tb__DOT__reset__v0 
            = (1U & (~ (IData)(vlSelfRef.d_ff_full_tb__DOT__reset)));
        vlSelfRef.__VdlySet__d_ff_full_tb__DOT__reset__v0 = 1U;
    }
}

VL_INLINE_OPT VlCoroutine Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__2(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/d_ff_full_tb.sv", 
                                             18);
        vlSelfRef.__VdlyVal__d_ff_full_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.d_ff_full_tb__DOT__clk)));
        vlSelfRef.__VdlySet__d_ff_full_tb__DOT__clk__v0 = 1U;
    }
}

void Vd_ff_full_tb___024root___eval_act(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_act\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vd_ff_full_tb___024root___nba_sequent__TOP__0(Vd_ff_full_tb___024root* vlSelf);
void Vd_ff_full_tb___024root___nba_sequent__TOP__1(Vd_ff_full_tb___024root* vlSelf);
void Vd_ff_full_tb___024root___nba_sequent__TOP__2(Vd_ff_full_tb___024root* vlSelf);

void Vd_ff_full_tb___024root___eval_nba(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_nba\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vd_ff_full_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vd_ff_full_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vd_ff_full_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vd_ff_full_tb___024root___nba_sequent__TOP__0(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___nba_sequent__TOP__0\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__d_ff_full_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__d_ff_full_tb__DOT__clk__v0 = 0U;
        vlSelfRef.d_ff_full_tb__DOT__clk = vlSelfRef.__VdlyVal__d_ff_full_tb__DOT__clk__v0;
    }
}

VL_INLINE_OPT void Vd_ff_full_tb___024root___nba_sequent__TOP__1(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___nba_sequent__TOP__1\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.d_ff_full_tb__DOT__reset) {
        if (vlSelfRef.d_ff_full_tb__DOT__en) {
            vlSelfRef.d_ff_full_tb__DOT__q = vlSelfRef.d_ff_full_tb__DOT__d;
        }
    } else {
        vlSelfRef.d_ff_full_tb__DOT__q = 0U;
    }
}

VL_INLINE_OPT void Vd_ff_full_tb___024root___nba_sequent__TOP__2(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___nba_sequent__TOP__2\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__d_ff_full_tb__DOT__reset__v0) {
        vlSelfRef.__VdlySet__d_ff_full_tb__DOT__reset__v0 = 0U;
        vlSelfRef.d_ff_full_tb__DOT__reset = vlSelfRef.__VdlyVal__d_ff_full_tb__DOT__reset__v0;
    }
}

void Vd_ff_full_tb___024root___timing_resume(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___timing_resume\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hce063bb5__0.resume(
                                                   "@(negedge d_ff_full_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hce063bf4__0.resume(
                                                   "@(posedge d_ff_full_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vd_ff_full_tb___024root___timing_commit(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___timing_commit\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hce063bb5__0.commit(
                                                   "@(negedge d_ff_full_tb.clk)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hce063bf4__0.commit(
                                                   "@(posedge d_ff_full_tb.clk)");
    }
}

void Vd_ff_full_tb___024root___eval_triggers__act(Vd_ff_full_tb___024root* vlSelf);

bool Vd_ff_full_tb___024root___eval_phase__act(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_phase__act\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vd_ff_full_tb___024root___eval_triggers__act(vlSelf);
    Vd_ff_full_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vd_ff_full_tb___024root___timing_resume(vlSelf);
        Vd_ff_full_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vd_ff_full_tb___024root___eval_phase__nba(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_phase__nba\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vd_ff_full_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vd_ff_full_tb___024root___dump_triggers__nba(Vd_ff_full_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vd_ff_full_tb___024root___dump_triggers__act(Vd_ff_full_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vd_ff_full_tb___024root___eval(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vd_ff_full_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/d_ff_full_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vd_ff_full_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/d_ff_full_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vd_ff_full_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vd_ff_full_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vd_ff_full_tb___024root___eval_debug_assertions(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_debug_assertions\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
