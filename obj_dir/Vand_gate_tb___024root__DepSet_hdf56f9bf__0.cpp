// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate_tb.h for the primary calling header

#include "Vand_gate_tb__pch.h"
#include "Vand_gate_tb___024root.h"

VlCoroutine Vand_gate_tb___024root___eval_initial__TOP__Vtiming__0(Vand_gate_tb___024root* vlSelf);

void Vand_gate_tb___024root___eval_initial(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_initial\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vand_gate_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vand_gate_tb___024root___eval_initial__TOP__Vtiming__0(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.and_gate_tb__DOT__x = 0U;
    vlSelfRef.and_gate_tb__DOT__y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/and_gate_tb.sv", 
                                         13);
    VL_WRITEF_NX("x = %b, y = %b, z = %b\n",0,1,vlSelfRef.and_gate_tb__DOT__x,
                 1,(IData)(vlSelfRef.and_gate_tb__DOT__y),
                 1,vlSelfRef.and_gate_tb__DOT__z);
    vlSelfRef.and_gate_tb__DOT__x = 0U;
    vlSelfRef.and_gate_tb__DOT__y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/and_gate_tb.sv", 
                                         17);
    VL_WRITEF_NX("x = %b, y = %b, z = %b\n",0,1,vlSelfRef.and_gate_tb__DOT__x,
                 1,(IData)(vlSelfRef.and_gate_tb__DOT__y),
                 1,vlSelfRef.and_gate_tb__DOT__z);
    vlSelfRef.and_gate_tb__DOT__x = 1U;
    vlSelfRef.and_gate_tb__DOT__y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/and_gate_tb.sv", 
                                         21);
    VL_WRITEF_NX("x = %b, y = %b, z = %b\n",0,1,vlSelfRef.and_gate_tb__DOT__x,
                 1,(IData)(vlSelfRef.and_gate_tb__DOT__y),
                 1,vlSelfRef.and_gate_tb__DOT__z);
    vlSelfRef.and_gate_tb__DOT__x = 1U;
    vlSelfRef.and_gate_tb__DOT__y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/and_gate_tb.sv", 
                                         25);
    VL_WRITEF_NX("x = %b, y = %b, z = %b\n",0,1,vlSelfRef.and_gate_tb__DOT__x,
                 1,(IData)(vlSelfRef.and_gate_tb__DOT__y),
                 1,vlSelfRef.and_gate_tb__DOT__z);
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/and_gate_tb.sv", 
                                         27);
    VL_FINISH_MT("tb/and_gate_tb.sv", 28, "");
}

void Vand_gate_tb___024root___act_sequent__TOP__0(Vand_gate_tb___024root* vlSelf);

void Vand_gate_tb___024root___eval_act(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_act\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vand_gate_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vand_gate_tb___024root___act_sequent__TOP__0(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___act_sequent__TOP__0\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.and_gate_tb__DOT__z = ((IData)(vlSelfRef.and_gate_tb__DOT__x) 
                                     & (IData)(vlSelfRef.and_gate_tb__DOT__y));
}

void Vand_gate_tb___024root___eval_nba(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_nba\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vand_gate_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vand_gate_tb___024root___timing_resume(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___timing_resume\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vand_gate_tb___024root___eval_triggers__act(Vand_gate_tb___024root* vlSelf);

bool Vand_gate_tb___024root___eval_phase__act(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_phase__act\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vand_gate_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vand_gate_tb___024root___timing_resume(vlSelf);
        Vand_gate_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vand_gate_tb___024root___eval_phase__nba(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_phase__nba\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vand_gate_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__nba(Vand_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__act(Vand_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vand_gate_tb___024root___eval(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vand_gate_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/and_gate_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vand_gate_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/and_gate_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vand_gate_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vand_gate_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vand_gate_tb___024root___eval_debug_assertions(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_debug_assertions\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
