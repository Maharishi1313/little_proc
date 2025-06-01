// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff_rst_en_flush_tb.h for the primary calling header

#include "Vdff_rst_en_flush_tb__pch.h"
#include "Vdff_rst_en_flush_tb___024root.h"

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___eval_static__TOP(Vdff_rst_en_flush_tb___024root* vlSelf);

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___eval_static(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_static\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdff_rst_en_flush_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___eval_static__TOP(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_static__TOP\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dff_rst_en_flush_tb__DOT__d = 0U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__clk = 0U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__reset = 0U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__en = 0U;
    vlSelfRef.dff_rst_en_flush_tb__DOT__flush = 0U;
}

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___eval_final(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_final\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___dump_triggers__stl(Vdff_rst_en_flush_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdff_rst_en_flush_tb___024root___eval_phase__stl(Vdff_rst_en_flush_tb___024root* vlSelf);

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___eval_settle(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_settle\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdff_rst_en_flush_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/dff_rst_en_flush_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdff_rst_en_flush_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___dump_triggers__stl(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___dump_triggers__stl\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vdff_rst_en_flush_tb___024root___act_comb__TOP__0(Vdff_rst_en_flush_tb___024root* vlSelf);

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___eval_stl(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_stl\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdff_rst_en_flush_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___eval_triggers__stl(Vdff_rst_en_flush_tb___024root* vlSelf);

VL_ATTR_COLD bool Vdff_rst_en_flush_tb___024root___eval_phase__stl(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_phase__stl\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdff_rst_en_flush_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdff_rst_en_flush_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___dump_triggers__act(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___dump_triggers__act\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge dff_rst_en_flush_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge dff_rst_en_flush_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___dump_triggers__nba(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___dump_triggers__nba\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge dff_rst_en_flush_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge dff_rst_en_flush_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___ctor_var_reset(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___ctor_var_reset\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->dff_rst_en_flush_tb__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->dff_rst_en_flush_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dff_rst_en_flush_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->dff_rst_en_flush_tb__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->dff_rst_en_flush_tb__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->dff_rst_en_flush_tb__DOT__q = VL_RAND_RESET_I(1);
    vlSelf->dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i = VL_RAND_RESET_I(1);
    vlSelf->dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__dff_rst_en_flush_tb__DOT__reset__v0 = 0;
    vlSelf->__VdlyVal__dff_rst_en_flush_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__dff_rst_en_flush_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dff_rst_en_flush_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
