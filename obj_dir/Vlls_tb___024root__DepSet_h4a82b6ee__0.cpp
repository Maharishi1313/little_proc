// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlls_tb.h for the primary calling header

#include "Vlls_tb__pch.h"
#include "Vlls_tb___024root.h"

VlCoroutine Vlls_tb___024root___eval_initial__TOP__Vtiming__0(Vlls_tb___024root* vlSelf);

void Vlls_tb___024root___eval_initial(Vlls_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlls_tb___024root___eval_initial\n"); );
    Vlls_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vlls_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vlls_tb___024root___eval_initial__TOP__Vtiming__0(Vlls_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlls_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vlls_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lls_tb__DOT__x = 0U;
    vlSelfRef.lls_tb__DOT__y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/lls_tb.sv", 
                                         66);
    VL_WRITEF_NX("x = %b, y = %b, z = %b\n",0,4,vlSelfRef.lls_tb__DOT__x,
                 2,(IData)(vlSelfRef.lls_tb__DOT__y),
                 4,vlSelfRef.lls_tb__DOT__z);
    vlSelfRef.lls_tb__DOT__x = 1U;
    vlSelfRef.lls_tb__DOT__y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/lls_tb.sv", 
                                         70);
    VL_WRITEF_NX("x = %b, y = %b, z = %b\n",0,4,vlSelfRef.lls_tb__DOT__x,
                 2,(IData)(vlSelfRef.lls_tb__DOT__y),
                 4,vlSelfRef.lls_tb__DOT__z);
    vlSelfRef.lls_tb__DOT__x = 2U;
    vlSelfRef.lls_tb__DOT__y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/lls_tb.sv", 
                                         74);
    VL_WRITEF_NX("x = %b, y = %b, z = %b\n",0,4,vlSelfRef.lls_tb__DOT__x,
                 2,(IData)(vlSelfRef.lls_tb__DOT__y),
                 4,vlSelfRef.lls_tb__DOT__z);
    vlSelfRef.lls_tb__DOT__x = 3U;
    vlSelfRef.lls_tb__DOT__y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/lls_tb.sv", 
                                         78);
    VL_WRITEF_NX("x = %b, y = %b, z = %b\n",0,4,vlSelfRef.lls_tb__DOT__x,
                 2,(IData)(vlSelfRef.lls_tb__DOT__y),
                 4,vlSelfRef.lls_tb__DOT__z);
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/lls_tb.sv", 
                                         80);
    VL_FINISH_MT("tb/lls_tb.sv", 81, "");
}

void Vlls_tb___024root___act_sequent__TOP__0(Vlls_tb___024root* vlSelf);

void Vlls_tb___024root___eval_act(Vlls_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlls_tb___024root___eval_act\n"); );
    Vlls_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vlls_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vlls_tb___024root___act_sequent__TOP__0(Vlls_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlls_tb___024root___act_sequent__TOP__0\n"); );
    Vlls_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lls_tb__DOT__z = (0xfU & ((IData)(vlSelfRef.lls_tb__DOT__x) 
                                        << (IData)(vlSelfRef.lls_tb__DOT__y)));
}

void Vlls_tb___024root___eval_nba(Vlls_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlls_tb___024root___eval_nba\n"); );
    Vlls_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vlls_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vlls_tb___024root___timing_resume(Vlls_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlls_tb___024root___timing_resume\n"); );
    Vlls_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vlls_tb___024root___eval_triggers__act(Vlls_tb___024root* vlSelf);

bool Vlls_tb___024root___eval_phase__act(Vlls_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlls_tb___024root___eval_phase__act\n"); );
    Vlls_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlls_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vlls_tb___024root___timing_resume(vlSelf);
        Vlls_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlls_tb___024root___eval_phase__nba(Vlls_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlls_tb___024root___eval_phase__nba\n"); );
    Vlls_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlls_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlls_tb___024root___dump_triggers__nba(Vlls_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlls_tb___024root___dump_triggers__act(Vlls_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vlls_tb___024root___eval(Vlls_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlls_tb___024root___eval\n"); );
    Vlls_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vlls_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/lls_tb.sv", 47, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vlls_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/lls_tb.sv", 47, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vlls_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vlls_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlls_tb___024root___eval_debug_assertions(Vlls_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlls_tb___024root___eval_debug_assertions\n"); );
    Vlls_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
