// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrs_tb.h for the primary calling header

#include "Vrs_tb__pch.h"
#include "Vrs_tb___024root.h"

VlCoroutine Vrs_tb___024root___eval_initial__TOP__Vtiming__0(Vrs_tb___024root* vlSelf);

void Vrs_tb___024root___eval_initial(Vrs_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root___eval_initial\n"); );
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrs_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vrs_tb___024root___eval_initial__TOP__Vtiming__0(Vrs_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs_tb__DOT__x = 0U;
    vlSelfRef.rs_tb__DOT__y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/rs_tb.sv", 
                                         30);
    VL_WRITEF_NX("x = %b, y = %b, z_logical = %b, z_arithmetic = %b\n",0,
                 4,vlSelfRef.rs_tb__DOT__x,2,(IData)(vlSelfRef.rs_tb__DOT__y),
                 4,vlSelfRef.rs_tb__DOT__z_logical,
                 4,(IData)(vlSelfRef.rs_tb__DOT__z_arithmetic));
    vlSelfRef.rs_tb__DOT__x = 1U;
    vlSelfRef.rs_tb__DOT__y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/rs_tb.sv", 
                                         34);
    VL_WRITEF_NX("x = %b, y = %b, z_logical = %b, z_arithmetic = %b\n",0,
                 4,vlSelfRef.rs_tb__DOT__x,2,(IData)(vlSelfRef.rs_tb__DOT__y),
                 4,vlSelfRef.rs_tb__DOT__z_logical,
                 4,(IData)(vlSelfRef.rs_tb__DOT__z_arithmetic));
    vlSelfRef.rs_tb__DOT__x = 2U;
    vlSelfRef.rs_tb__DOT__y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/rs_tb.sv", 
                                         38);
    VL_WRITEF_NX("x = %b, y = %b, z_logical = %b, z_arithmetic = %b\n",0,
                 4,vlSelfRef.rs_tb__DOT__x,2,(IData)(vlSelfRef.rs_tb__DOT__y),
                 4,vlSelfRef.rs_tb__DOT__z_logical,
                 4,(IData)(vlSelfRef.rs_tb__DOT__z_arithmetic));
    vlSelfRef.rs_tb__DOT__x = 3U;
    vlSelfRef.rs_tb__DOT__y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/rs_tb.sv", 
                                         42);
    VL_WRITEF_NX("x = %b, y = %b, z_logical = %b, z_arithmetic = %b\n",0,
                 4,vlSelfRef.rs_tb__DOT__x,2,(IData)(vlSelfRef.rs_tb__DOT__y),
                 4,vlSelfRef.rs_tb__DOT__z_logical,
                 4,(IData)(vlSelfRef.rs_tb__DOT__z_arithmetic));
    vlSelfRef.rs_tb__DOT__x = 0xfU;
    vlSelfRef.rs_tb__DOT__y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/rs_tb.sv", 
                                         46);
    VL_WRITEF_NX("x = %b, y = %b, z_logical = %b, z_arithmetic = %b\n",0,
                 4,vlSelfRef.rs_tb__DOT__x,2,(IData)(vlSelfRef.rs_tb__DOT__y),
                 4,vlSelfRef.rs_tb__DOT__z_logical,
                 4,(IData)(vlSelfRef.rs_tb__DOT__z_arithmetic));
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/rs_tb.sv", 
                                         48);
    VL_FINISH_MT("tb/rs_tb.sv", 49, "");
}

void Vrs_tb___024root___act_sequent__TOP__0(Vrs_tb___024root* vlSelf);

void Vrs_tb___024root___eval_act(Vrs_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root___eval_act\n"); );
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrs_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vrs_tb___024root___act_sequent__TOP__0(Vrs_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root___act_sequent__TOP__0\n"); );
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs_tb__DOT__z_logical = (0xfU & ((IData)(vlSelfRef.rs_tb__DOT__x) 
                                               >> (IData)(vlSelfRef.rs_tb__DOT__y)));
    vlSelfRef.rs_tb__DOT__z_arithmetic = (0xfU & VL_SHIFTRS_III(4,4,2, (IData)(vlSelfRef.rs_tb__DOT__x), (IData)(vlSelfRef.rs_tb__DOT__y)));
}

void Vrs_tb___024root___eval_nba(Vrs_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root___eval_nba\n"); );
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrs_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vrs_tb___024root___timing_resume(Vrs_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root___timing_resume\n"); );
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vrs_tb___024root___eval_triggers__act(Vrs_tb___024root* vlSelf);

bool Vrs_tb___024root___eval_phase__act(Vrs_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root___eval_phase__act\n"); );
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vrs_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vrs_tb___024root___timing_resume(vlSelf);
        Vrs_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vrs_tb___024root___eval_phase__nba(Vrs_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root___eval_phase__nba\n"); );
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vrs_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrs_tb___024root___dump_triggers__nba(Vrs_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrs_tb___024root___dump_triggers__act(Vrs_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vrs_tb___024root___eval(Vrs_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root___eval\n"); );
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vrs_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/rs_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vrs_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/rs_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vrs_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vrs_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vrs_tb___024root___eval_debug_assertions(Vrs_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root___eval_debug_assertions\n"); );
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
