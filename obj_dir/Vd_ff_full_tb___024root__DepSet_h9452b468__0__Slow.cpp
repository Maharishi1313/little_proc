// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vd_ff_full_tb.h for the primary calling header

#include "Vd_ff_full_tb__pch.h"
#include "Vd_ff_full_tb___024root.h"

VL_ATTR_COLD void Vd_ff_full_tb___024root___eval_static__TOP(Vd_ff_full_tb___024root* vlSelf);

VL_ATTR_COLD void Vd_ff_full_tb___024root___eval_static(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_static\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vd_ff_full_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vd_ff_full_tb___024root___eval_static__TOP(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_static__TOP\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d_ff_full_tb__DOT__d = 0U;
    vlSelfRef.d_ff_full_tb__DOT__clk = 0U;
    vlSelfRef.d_ff_full_tb__DOT__reset = 0U;
    vlSelfRef.d_ff_full_tb__DOT__en = 0U;
}

VL_ATTR_COLD void Vd_ff_full_tb___024root___eval_final(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_final\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vd_ff_full_tb___024root___eval_settle(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_settle\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vd_ff_full_tb___024root___dump_triggers__act(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___dump_triggers__act\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge d_ff_full_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge d_ff_full_tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge d_ff_full_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vd_ff_full_tb___024root___dump_triggers__nba(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___dump_triggers__nba\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge d_ff_full_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge d_ff_full_tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge d_ff_full_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vd_ff_full_tb___024root___ctor_var_reset(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___ctor_var_reset\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->d_ff_full_tb__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->d_ff_full_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->d_ff_full_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->d_ff_full_tb__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->d_ff_full_tb__DOT__q = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__d_ff_full_tb__DOT__reset__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__d_ff_full_tb__DOT__reset__v0 = 0;
    vlSelf->__VdlyVal__d_ff_full_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__d_ff_full_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__d_ff_full_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__d_ff_full_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
}
