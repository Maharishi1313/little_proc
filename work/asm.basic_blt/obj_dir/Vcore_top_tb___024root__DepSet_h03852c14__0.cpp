// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_tb.h for the primary calling header

#include "Vcore_top_tb__pch.h"
#include "Vcore_top_tb___024root.h"

VL_ATTR_COLD void Vcore_top_tb___024root___eval_initial__TOP(Vcore_top_tb___024root* vlSelf);
VlCoroutine Vcore_top_tb___024root___eval_initial__TOP__Vtiming__0(Vcore_top_tb___024root* vlSelf);
VlCoroutine Vcore_top_tb___024root___eval_initial__TOP__Vtiming__1(Vcore_top_tb___024root* vlSelf);

void Vcore_top_tb___024root___eval_initial(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___eval_initial\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcore_top_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vcore_top_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcore_top_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__core_top_tb__DOT__clk__0 
        = vlSelfRef.core_top_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vcore_top_tb___024root___eval_initial__TOP__Vtiming__1(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                             24);
        vlSelfRef.core_top_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__clk)));
    }
}

void Vcore_top_tb___024root___eval_act(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___eval_act\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcore_top_tb___024root___nba_sequent__TOP__0(Vcore_top_tb___024root* vlSelf);

void Vcore_top_tb___024root___eval_nba(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___eval_nba\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcore_top_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vcore_top_tb___024root___nba_sequent__TOP__0(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___nba_sequent__TOP__0\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_0;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_0 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_1;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_1 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_2;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_2 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3 = 0;
    IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_5;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_5 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_6;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_6 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_7;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_7 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_8;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_8 = 0;
    CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_9;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_9 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_1;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_1 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_2;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_2 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_3;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_3 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_4;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_4 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_5;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_5 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_6;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_6 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_15;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_15 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_17;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_17 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_18;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_18 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_20;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_20 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_22;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_22 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_23;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_23 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_25;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_25 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_26;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_26 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_28;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_28 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_29;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_29 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_30;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_30 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_31;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_31 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_32;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_32 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_33;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_33 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_34;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_34 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_35;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_35 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_36;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_36 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_37;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_37 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_38;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_38 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_39;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_39 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_40;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_40 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_41;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_41 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_42;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_42 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_43;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_43 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_44;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_44 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_45;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_45 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_46;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_46 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_47;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_47 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_48;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_48 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_49;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_49 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_52;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_52 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_54;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_54 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_55;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_55 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_56;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_56 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_57;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_57 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_59;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_59 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_60;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_60 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_61;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_61 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_62;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_62 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_63;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_63 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_64;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_64 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_66;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_66 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_67;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_67 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_68;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_68 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_69;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_69 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_70;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_70 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_71;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_71 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_72;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_72 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_73;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_73 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_74;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_74 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_75;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_75 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_76;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_76 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_77;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_77 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_78;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_78 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_79;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_79 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_80;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_80 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_81;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_81 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_82;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_82 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_83;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_83 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_84;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_84 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_85;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_85 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_86;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_86 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_87;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_87 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_88;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_88 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_89;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_89 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_90;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_90 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_91;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_91 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_92;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_92 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_93;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_93 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_94;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_94 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_95;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_95 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_96;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_96 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_97;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_97 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_98;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_98 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_99;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_99 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_100;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_100 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_101;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_101 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_102;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_102 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_103;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_103 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_104;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_104 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_105;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_105 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_106;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_106 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_107;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_107 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_108;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_108 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_109;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_109 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_110;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_110 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_111;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_111 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_112;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_112 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_113;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_113 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_114;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_114 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_115;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_115 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_116;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_116 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_117;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_117 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_118;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_118 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_119;
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_119 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_14;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_14 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_17;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_17 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_18;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_18 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_19;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_19 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_20;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_20 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_23;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_23 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_26;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_26 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_27;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_27 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_31;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_31 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_33;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_33 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_35;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_35 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_38;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_38 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_53;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_53 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_54;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_54 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_55;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_55 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_56;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_56 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_57;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_57 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_58;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_58 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_59;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_59 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_60;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_60 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_61;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_61 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_62;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_62 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_63;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_63 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_64;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_64 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_65;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_65 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_66;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_66 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_67;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_67 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_68;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_68 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_69;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_69 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_70;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_70 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_71;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_71 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_12;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_12 = 0;
    CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_14;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    __VdfgRegularize_hd87f99a1_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_1;
    __VdfgRegularize_hd87f99a1_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_5;
    __VdfgRegularize_hd87f99a1_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_6;
    __VdfgRegularize_hd87f99a1_0_6 = 0;
    IData/*31:0*/ __VdlyVal__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0;
    __VdlyVal__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0;
    __VdlyDim0__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0;
    __VdlySet__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<7>/*223:0*/ __Vtemp_59;
    // Body
    if (VL_UNLIKELY((vlSelfRef.core_top_tb__DOT__finish_seq_detected))) {
        VL_FINISH_MT("/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 56, "");
    }
    __VdlySet__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                      & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)))))) {
        VL_FWRITEF_NX(vlSelfRef.core_top_tb__DOT__fd,"%5#;0x%x;0x%x;x%0#=0x%x\n",0,
                      32,vlSelfRef.core_top_tb__DOT__cycle_count,
                      32,(((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                           & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout 
                                      >> 0x20U))) | 
                          (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                            & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout 
                                       >> 0x20U))) 
                           | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                               & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout 
                                          >> 0x20U))) 
                              | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                 & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out)))),
                      32,(((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                          | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                              & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout)) 
                             | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                                | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                   & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out)))),
                      5,(IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr),
                      32,vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                      & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))))) {
        VL_FWRITEF_NX(vlSelfRef.core_top_tb__DOT__fd,"%5#;0x%x;0x%x;x%0#=0x%x;pc=0x%x\n",0,
                      32,vlSelfRef.core_top_tb__DOT__cycle_count,
                      32,(((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                           & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout 
                                      >> 0x20U))) | 
                          (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                            & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout 
                                       >> 0x20U))) 
                           | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                               & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout 
                                          >> 0x20U))) 
                              | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                 & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out)))),
                      32,(((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                          | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                              & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout)) 
                             | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                                | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                   & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out)))),
                      5,(IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr),
                      32,vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data,
                      32,(IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout 
                                  >> 1U)));
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)) 
                            & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)))))) {
        VL_FWRITEF_NX(vlSelfRef.core_top_tb__DOT__fd,"%5#;0x%x;0x%x;taken=true;pc=0x%x\n",0,
                      32,vlSelfRef.core_top_tb__DOT__cycle_count,
                      32,(IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout 
                                  >> 0x20U)),32,(IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout),
                      32,(IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout 
                                  >> 1U)));
    }
    if (VL_UNLIKELY(((IData)(((0x10001U == (0x10001U 
                                            & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])) 
                              & (~ (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xfU) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)) 
                                    | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)) 
                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                           >> 0xeU)) 
                                       | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt)) 
                                           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                              >> 0xdU)) 
                                          | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                              >> 0xcU) 
                                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt))))))))))) {
        VL_FWRITEF_NX(vlSelfRef.core_top_tb__DOT__fd,"%5#;0x%x;0x%x;taken=false\n",0,
                      32,vlSelfRef.core_top_tb__DOT__cycle_count,
                      32,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                           << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                     >> 0x1bU)),32,
                      ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[6U] 
                        << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                  >> 0x1bU)));
    }
    if (VL_UNLIKELY(((IData)((0xa00U == (0xa00U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])))))) {
        VL_FWRITEF_NX(vlSelfRef.core_top_tb__DOT__fd,"%5#;0x%x;0x%x;mem[0x%8x]=0x%x\n",0,
                      32,vlSelfRef.core_top_tb__DOT__cycle_count,
                      32,vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_tag_out,
                      32,vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_out,
                      32,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                           << 0x18U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                        >> 8U)),32,
                      ((IData)(((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                                 ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_3 
                                    | ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask) 
                                       & (QData)((IData)(
                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U]))))
                                 : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_3 
                                    | ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask) 
                                       & (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata)))))) 
                       & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask_base)));
    }
    if (VL_UNLIKELY(((IData)(((0x140U == (0x140U & 
                                          vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U])) 
                              & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                 >> 0xdU)))))) {
        VL_FWRITEF_NX(vlSelfRef.core_top_tb__DOT__fd,"%5#;0x%x;0x%x;mem[0x%8x]=0x%x\n",0,
                      32,vlSelfRef.core_top_tb__DOT__cycle_count,
                      32,vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out,
                      32,vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out,
                      32,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                           << 0x13U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                        >> 0xdU)),32,
                      (((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U])
                         ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9 
                            | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10 
                               & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U]))
                         : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9 
                            | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10 
                               & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata))) 
                       & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data_mask));
    }
    if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wen) {
        __VdlyVal__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata;
        __VdlyDim0__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0 
            = (0x3fcU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr);
        __VdlySet__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0 = 1U;
    }
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_addr_valid));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable) 
            << 4U) | (0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e2 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e1));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
              & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_in));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__lsu_stall_q 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e3 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e2));
    VL_EXTENDS_WQ(66,33, __Vtemp_8, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2);
    __Vtemp_9[0U] = __Vtemp_8[0U];
    __Vtemp_9[1U] = __Vtemp_8[1U];
    __Vtemp_9[2U] = (3U & __Vtemp_8[2U]);
    VL_EXTENDS_WQ(66,33, __Vtemp_11, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2);
    __Vtemp_12[0U] = __Vtemp_11[0U];
    __Vtemp_12[1U] = __Vtemp_11[1U];
    __Vtemp_12[2U] = (3U & __Vtemp_11[2U]);
    VL_MULS_WWW(66, __Vtemp_13, __Vtemp_9, __Vtemp_12);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rvalid_out 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           && (1U & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                      & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                             >> 8U)) & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward)))) 
                     | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                         >> 2U) & ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U]) 
                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 8U))))));
    if (vlSelfRef.core_top_tb__DOT__rst_n) {
        vlSelfRef.core_top_tb__DOT__cycle_count = ((IData)(1U) 
                                                   + vlSelfRef.core_top_tb__DOT__cycle_count);
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[3U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[4U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count_in;
        if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_addr_valid) {
            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in 
                = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q;
            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                = (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__mem
                                    [(0x3ffU & ((IData)(1U) 
                                                + (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q 
                                                   >> 2U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__mem
                                                [(0x3ffU 
                                                  & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q 
                                                     >> 2U))])));
        } else {
            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in = 0U;
            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data = 0ULL;
        }
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[3U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[3U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[4U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[5U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[6U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[0U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[1U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__out_addr_ff__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout 
            = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early) 
                << 4U) | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__smallnum));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__mff__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e3 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e2;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__aff__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[0U] 
            = __Vtemp_13[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[1U] 
            = __Vtemp_13[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[2U] 
            = (1U & __Vtemp_13[2U]);
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__miscf__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__qff__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__instr_tag_ff__DOT____Vcellinp__dff_rst_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_tag_out;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_out;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout 
            = (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__alu_wb_data_i)) 
                << 6U) | (QData)((IData)(((0x3eU & 
                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                            >> 0xaU)) 
                                          | (1U & (IData)(
                                                          ((1U 
                                                            == 
                                                            (3U 
                                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])) 
                                                           & (0x22U 
                                                              == 
                                                              (0x22U 
                                                               & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U])))))))));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_forward_next)) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata))));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U] 
            = ((0xfffffffeU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U]) 
               | (IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_forward_next)) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata))) 
                          >> 0x20U)));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
            = (((IData)((0x1ffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])) 
                                              >> 8U)))) 
                << 0xdU) | ((0xfffffffeU & ((0x1fc0U 
                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                >> 3U)) 
                                            | (0x3eU 
                                               & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                  >> 2U)))) 
                            | (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
            = ((((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                  ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] 
                     >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                  >> 5U))) : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                                              >> (0x18U 
                                                  & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                     >> 5U)))) 
                << 0xeU) | (((IData)((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                          << 0x18U) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])) 
                                            >> 8U)))) 
                             >> 0x13U) | ((IData)((
                                                   (0x1ffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                                        << 0x18U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])) 
                                                          >> 8U))) 
                                                   >> 0x20U)) 
                                          << 0xdU)));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[4U] 
            = (((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                 ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] 
                    >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                 >> 5U))) : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                                             >> (0x18U 
                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                    >> 5U)))) 
               >> 0x12U);
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout 
            = (((QData)((IData)((((IData)((0x1ffffffffULL 
                                           & (- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_10))))) 
                                  & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                       << 0xfU) | (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                   >> 0x11U)) 
                                     + ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                         << 5U) | (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                   >> 0x1bU)))) 
                                 | ((IData)((0x1ffffffffULL 
                                             & (- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_19))))) 
                                    & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                         << 0xfU) | 
                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                         >> 0x11U)) 
                                       + ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                           << 5U) | 
                                          (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                           >> 0x1bU))))))) 
                << 1U) | (QData)((IData)((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                 >> 0xbU) 
                                                | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                    >> 0x10U) 
                                                   & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                        >> 0xfU) 
                                                       & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)) 
                                                      | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)) 
                                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                             >> 0xeU)) 
                                                         | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt)) 
                                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                >> 0xdU)) 
                                                            | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                >> 0xcU) 
                                                               & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt)))))))))));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__dff_rst_en_vector_inst__DOT____Vcellinp__dff_rst_vector_inst__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e2 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e1;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2 
            = (((QData)((IData)(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1) 
                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1 
                                    >> 0x1fU)))) << 0x20U) 
               | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1)));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2 
            = (((QData)((IData)(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1) 
                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1 
                                    >> 0x1fU)))) << 0x20U) 
               | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1)));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_tag_out 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_tag_out;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_out 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_out;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem
            [(0x3fcU & (((- (IData)(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                     & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                            >> 8U)) 
                                        & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                            >> 3U) 
                                           | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load)))))) 
                         & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr) 
                        | ((- (IData)((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                              >> 2U) 
                                             & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                  >> 0xcU) 
                                                 | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                    >> 1U)) 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                   >> 8U)))))) 
                           & (((IData)(1U) + ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                               << 0x16U) 
                                              | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                 >> 0xaU))) 
                              << 2U))))];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e1 
            = (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                        >> 0xbU));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1 
            = ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                          >> 0x1bU));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1 
            = ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                          >> 0x1bU));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_tag_out 
            = ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                          >> 0x1bU));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_out 
            = ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[6U] 
                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                          >> 0x1bU));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward)) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata))));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U] 
            = ((0xfffffffeU & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                << 0x1cU) | (0xffffffeU 
                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] 
                                                >> 4U)))) 
               | (IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward)) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata))) 
                          >> 0x20U)));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
            = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)) 
                          << 0x21U) | (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall)) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr))))) 
                << 8U) | ((0xfffffffeU & ((0xf8U & 
                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U] 
                                            << 3U)) 
                                          | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                              << 2U) 
                                             | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load) 
                                                << 1U)))) 
                          | (1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                   >> 4U))));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
            = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)) 
                          << 0x21U) | (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall)) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr))))) 
                >> 0x18U) | ((IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)) 
                                        << 0x21U) | 
                                       (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr)))) 
                                      >> 0x20U)) << 8U));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U] 
            = (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                 << 0x14U) | (0xfffe0U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                          >> 0xcU))) 
               | (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                           >> 0xbU)));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] 
            = ((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                         >> 0xcU)) | ((IData)((((QData)((IData)(
                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                                                << 0x25U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                     >> 0x1bU)))) 
                                      << 5U));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
            = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                          << 0x25U) | (((QData)((IData)(
                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                        << 5U) | ((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                  >> 0x1bU)))) 
                >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                   >> 0x1bU))) 
                                      >> 0x20U)) << 5U));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[3U] 
            = ((IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                          << 0x25U) | (((QData)((IData)(
                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                        << 5U) | ((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                  >> 0x1bU))) 
                        >> 0x20U)) >> 0x1bU);
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout 
            = ((0x70U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                         >> 4U)) | ((0xcU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                             >> 0x1aU)) 
                                    | ((2U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                              >> 0x10U)) 
                                       | (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U]))));
    } else {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[3U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e3 = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[4U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q = 0x100000U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e2 = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2 = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2 = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_tag_out = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_out = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e1 = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1 = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1 = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout = 0ULL;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_tag_out = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_out = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[3U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout = 0U;
    }
    if (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wen) 
         & (0x10000000U == vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr))) {
        vlSelfRef.core_top_tb__DOT__finish_seq_detected = 1U;
    }
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e2));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff 
        = ((0x1fU & (- (IData)((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                      >> 3U))))) | 
           ((0x18U & (- (IData)((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                       >> 2U))))) | 
            ((0x10U & (- (IData)((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                        >> 1U))))) 
             | (8U & (- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout))))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[1U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[2U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[3U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[4U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[5U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[6U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[7U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[8U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[9U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0xaU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0xbU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0xcU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0xdU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0xeU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0xfU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x10U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x11U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x12U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x13U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x14U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x15U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x16U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x17U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x18U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x19U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x1aU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x1bU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x1cU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x1dU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x1eU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0x1fU] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e1 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellinp__out_rd_wr_en_ff__din));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_44 
        = ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1) 
           | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
              >> 4U));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff = 0U;
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_57 
        = (IData)((0ULL == (3ULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_53 
        = (IData)((3ULL == (3ULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_61 
        = (IData)((4ULL == (6ULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_60 
        = (IData)((0ULL == (0xaULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_56 
        = (IData)((4ULL == (0xcULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_58 
        = (IData)((0ULL == (0xcULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_54 
        = (IData)((0ULL == (6ULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_33 
        = (((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                        >> 0x20U))) & (0U != (0xffU 
                                              & (IData)(
                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                         >> 0x10U))))) 
           | ((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                       >> 0x20U)) & (0xffU != (0xffU 
                                               & (IData)(
                                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                          >> 0x10U))))));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_31 
        = (((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                        >> 0x20U))) & (0U != (0xffU 
                                              & (IData)(
                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                         >> 0x18U))))) 
           | ((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                       >> 0x20U)) & (0xffU != (0xffU 
                                               & (IData)(
                                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                          >> 0x18U))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e2 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e1));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
        = ((((((0x40000000U & (((0U != (0x7fffffffU 
                                        & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                 ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                               >> 0x1fU)))
                                 : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                            >> 0x1fU))) 
                               << 0x1eU)) | (0x20000000U 
                                             & (((0U 
                                                  != 
                                                  (0x3fffffffU 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                             >> 0x1eU)))
                                                  : (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                             >> 0x1eU))) 
                                                << 0x1dU))) 
              | ((0x10000000U & (((0U != (0x1fffffffU 
                                          & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                   ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                 >> 0x1dU)))
                                   : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                              >> 0x1dU))) 
                                 << 0x1cU)) | (0x8000000U 
                                               & (((0U 
                                                    != 
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                    ? 
                                                   (~ (IData)(
                                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                               >> 0x1cU)))
                                                    : (IData)(
                                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                               >> 0x1cU))) 
                                                  << 0x1bU)))) 
             | (((0x4000000U & (((0U != (0x7ffffffU 
                                         & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                  ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                >> 0x1bU)))
                                  : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                             >> 0x1bU))) 
                                << 0x1aU)) | (0x2000000U 
                                              & (((0U 
                                                   != 
                                                   (0x3ffffffU 
                                                    & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                              >> 0x1aU)))
                                                   : (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                              >> 0x1aU))) 
                                                 << 0x19U))) 
                | ((0x1000000U & (((0U != (0x1ffffffU 
                                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                    ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                  >> 0x19U)))
                                    : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                               >> 0x19U))) 
                                  << 0x18U)) | (0x800000U 
                                                & (((0U 
                                                     != 
                                                     (0xffffffU 
                                                      & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                                >> 0x18U)))
                                                     : (IData)(
                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                                >> 0x18U))) 
                                                   << 0x17U))))) 
            | ((((0x400000U & (((0U != (0x7fffffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                 ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                               >> 0x17U)))
                                 : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                            >> 0x17U))) 
                               << 0x16U)) | (0x200000U 
                                             & (((0U 
                                                  != 
                                                  (0x3fffffU 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                             >> 0x16U)))
                                                  : (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                             >> 0x16U))) 
                                                << 0x15U))) 
                | ((0x100000U & (((0U != (0x1fffffU 
                                          & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                   ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                 >> 0x15U)))
                                   : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                              >> 0x15U))) 
                                 << 0x14U)) | (0x80000U 
                                               & (((0U 
                                                    != 
                                                    (0xfffffU 
                                                     & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                    ? 
                                                   (~ (IData)(
                                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                               >> 0x14U)))
                                                    : (IData)(
                                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                               >> 0x14U))) 
                                                  << 0x13U)))) 
               | (((0x40000U & (((0U != (0x7ffffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                  ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                >> 0x13U)))
                                  : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                             >> 0x13U))) 
                                << 0x12U)) | (0x20000U 
                                              & (((0U 
                                                   != 
                                                   (0x3ffffU 
                                                    & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                              >> 0x12U)))
                                                   : (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                              >> 0x12U))) 
                                                 << 0x11U))) 
                  | ((0x10000U & (((0U != (0x1ffffU 
                                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                    ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                  >> 0x11U)))
                                    : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                               >> 0x11U))) 
                                  << 0x10U)) | (0x8000U 
                                                & (((0U 
                                                     != 
                                                     (0xffffU 
                                                      & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                                >> 0x10U)))
                                                     : (IData)(
                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                                >> 0x10U))) 
                                                   << 0xfU)))))) 
           | (((((0x4000U & (((0U != (0x7fffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                               ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                             >> 0xfU)))
                               : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                          >> 0xfU))) 
                             << 0xeU)) | (0x2000U & 
                                          (((0U != 
                                             (0x3fffU 
                                              & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                             ? (~ (IData)(
                                                          (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                           >> 0xeU)))
                                             : (IData)(
                                                       (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                        >> 0xeU))) 
                                           << 0xdU))) 
                | ((0x1000U & (((0U != (0x1fffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                 ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                               >> 0xdU)))
                                 : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                            >> 0xdU))) 
                               << 0xcU)) | (0x800U 
                                            & (((0U 
                                                 != 
                                                 (0xfffU 
                                                  & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                 ? 
                                                (~ (IData)(
                                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                            >> 0xcU)))
                                                 : (IData)(
                                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                            >> 0xcU))) 
                                               << 0xbU)))) 
               | (((0x400U & (((0U != (0x7ffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                              >> 0xbU)))
                                : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                           >> 0xbU))) 
                              << 0xaU)) | (0x200U & 
                                           (((0U != 
                                              (0x3ffU 
                                               & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                              ? (~ (IData)(
                                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                            >> 0xaU)))
                                              : (IData)(
                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                         >> 0xaU))) 
                                            << 9U))) 
                  | ((0x100U & (((0U != (0x1ffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                  ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                >> 9U)))
                                  : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                             >> 9U))) 
                                << 8U)) | (0x80U & 
                                           (((0U != 
                                              (0xffU 
                                               & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                              ? (~ (IData)(
                                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                            >> 8U)))
                                              : (IData)(
                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                         >> 8U))) 
                                            << 7U))))) 
              | ((((0x40U & (((0U != (0x7fU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                               ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                             >> 7U)))
                               : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                          >> 7U))) 
                             << 6U)) | (0x20U & (((0U 
                                                   != 
                                                   (0x3fU 
                                                    & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                              >> 6U)))
                                                   : (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                              >> 6U))) 
                                                 << 5U))) 
                  | ((0x10U & (((0U != (0x1fU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                 ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                               >> 5U)))
                                 : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                            >> 5U))) 
                               << 4U)) | (8U & (((0U 
                                                  != 
                                                  (0xfU 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                             >> 4U)))
                                                  : (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                             >> 4U))) 
                                                << 3U)))) 
                 | ((4U & (((0U != (7U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                             ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                           >> 3U)))
                             : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                        >> 3U))) << 2U)) 
                    | ((2U & (((0U != (3U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                              >> 2U)))
                                : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                           >> 2U))) 
                              << 1U)) | (1U & ((1U 
                                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff))
                                                ? (~ (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                              >> 1U)))
                                                : (IData)(
                                                          (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                                                           >> 1U)))))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct 
        = ((0x21U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count)) 
           & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
              & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                         >> 0x20U))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_46 
        = (IData)((0xaU == (0xaU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_19 
        = (IData)((0xaULL == (0xaULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_59 
        = (IData)((3ULL == (3ULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_64 
        = (IData)((8ULL == (0xcULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_70 
        = (1U & ((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                             >> 3U))) & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                 >> 3U))));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_68 
        = (1U & ((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                             >> 3U))) & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                 >> 2U))));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_17 
        = (IData)((4ULL == (0xcULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_14 
        = (IData)((0xcULL == (0xcULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24 
        = (1U & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                  >> 1U) & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                    >> 0x1fU))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_c__DOT__dout_temp 
        = ((((((0x40000000U & (((0U != (0x7fffffffU 
                                        & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                 ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                               >> 0x1fU)))
                                 : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                            >> 0x1fU))) 
                               << 0x1eU)) | (0x20000000U 
                                             & (((0U 
                                                  != 
                                                  (0x3fffffffU 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                             >> 0x1eU)))
                                                  : (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                             >> 0x1eU))) 
                                                << 0x1dU))) 
              | ((0x10000000U & (((0U != (0x1fffffffU 
                                          & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                   ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                 >> 0x1dU)))
                                   : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                              >> 0x1dU))) 
                                 << 0x1cU)) | (0x8000000U 
                                               & (((0U 
                                                    != 
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                                    ? 
                                                   (~ (IData)(
                                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                               >> 0x1cU)))
                                                    : (IData)(
                                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                               >> 0x1cU))) 
                                                  << 0x1bU)))) 
             | (((0x4000000U & (((0U != (0x7ffffffU 
                                         & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                  ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                >> 0x1bU)))
                                  : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                             >> 0x1bU))) 
                                << 0x1aU)) | (0x2000000U 
                                              & (((0U 
                                                   != 
                                                   (0x3ffffffU 
                                                    & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                              >> 0x1aU)))
                                                   : (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                              >> 0x1aU))) 
                                                 << 0x19U))) 
                | ((0x1000000U & (((0U != (0x1ffffffU 
                                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                    ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                  >> 0x19U)))
                                    : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                               >> 0x19U))) 
                                  << 0x18U)) | (0x800000U 
                                                & (((0U 
                                                     != 
                                                     (0xffffffU 
                                                      & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                >> 0x18U)))
                                                     : (IData)(
                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                >> 0x18U))) 
                                                   << 0x17U))))) 
            | ((((0x400000U & (((0U != (0x7fffffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                 ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                               >> 0x17U)))
                                 : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                            >> 0x17U))) 
                               << 0x16U)) | (0x200000U 
                                             & (((0U 
                                                  != 
                                                  (0x3fffffU 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                             >> 0x16U)))
                                                  : (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                             >> 0x16U))) 
                                                << 0x15U))) 
                | ((0x100000U & (((0U != (0x1fffffU 
                                          & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                   ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                 >> 0x15U)))
                                   : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                              >> 0x15U))) 
                                 << 0x14U)) | (0x80000U 
                                               & (((0U 
                                                    != 
                                                    (0xfffffU 
                                                     & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                                    ? 
                                                   (~ (IData)(
                                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                               >> 0x14U)))
                                                    : (IData)(
                                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                               >> 0x14U))) 
                                                  << 0x13U)))) 
               | (((0x40000U & (((0U != (0x7ffffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                  ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                >> 0x13U)))
                                  : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                             >> 0x13U))) 
                                << 0x12U)) | (0x20000U 
                                              & (((0U 
                                                   != 
                                                   (0x3ffffU 
                                                    & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                              >> 0x12U)))
                                                   : (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                              >> 0x12U))) 
                                                 << 0x11U))) 
                  | ((0x10000U & (((0U != (0x1ffffU 
                                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                    ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                  >> 0x11U)))
                                    : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                               >> 0x11U))) 
                                  << 0x10U)) | (0x8000U 
                                                & (((0U 
                                                     != 
                                                     (0xffffU 
                                                      & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                >> 0x10U)))
                                                     : (IData)(
                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                >> 0x10U))) 
                                                   << 0xfU)))))) 
           | (((((0x4000U & (((0U != (0x7fffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                               ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                             >> 0xfU)))
                               : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                          >> 0xfU))) 
                             << 0xeU)) | (0x2000U & 
                                          (((0U != 
                                             (0x3fffU 
                                              & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                             ? (~ (IData)(
                                                          (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                           >> 0xeU)))
                                             : (IData)(
                                                       (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                        >> 0xeU))) 
                                           << 0xdU))) 
                | ((0x1000U & (((0U != (0x1fffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                 ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                               >> 0xdU)))
                                 : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                            >> 0xdU))) 
                               << 0xcU)) | (0x800U 
                                            & (((0U 
                                                 != 
                                                 (0xfffU 
                                                  & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                                 ? 
                                                (~ (IData)(
                                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                            >> 0xcU)))
                                                 : (IData)(
                                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                            >> 0xcU))) 
                                               << 0xbU)))) 
               | (((0x400U & (((0U != (0x7ffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                              >> 0xbU)))
                                : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                           >> 0xbU))) 
                              << 0xaU)) | (0x200U & 
                                           (((0U != 
                                              (0x3ffU 
                                               & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                              ? (~ (IData)(
                                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                            >> 0xaU)))
                                              : (IData)(
                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                         >> 0xaU))) 
                                            << 9U))) 
                  | ((0x100U & (((0U != (0x1ffU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                  ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                >> 9U)))
                                  : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                             >> 9U))) 
                                << 8U)) | (0x80U & 
                                           (((0U != 
                                              (0xffU 
                                               & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                              ? (~ (IData)(
                                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                            >> 8U)))
                                              : (IData)(
                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                         >> 8U))) 
                                            << 7U))))) 
              | ((((0x40U & (((0U != (0x7fU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                               ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                             >> 7U)))
                               : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                          >> 7U))) 
                             << 6U)) | (0x20U & (((0U 
                                                   != 
                                                   (0x3fU 
                                                    & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                                   ? 
                                                  (~ (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                              >> 6U)))
                                                   : (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                              >> 6U))) 
                                                 << 5U))) 
                  | ((0x10U & (((0U != (0x1fU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                 ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                               >> 5U)))
                                 : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                            >> 5U))) 
                               << 4U)) | (8U & (((0U 
                                                  != 
                                                  (0xfU 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                             >> 4U)))
                                                  : (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                             >> 4U))) 
                                                << 3U)))) 
                 | ((4U & (((0U != (7U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                             ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                           >> 3U)))
                             : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                        >> 3U))) << 2U)) 
                    | ((2U & (((0U != (3U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))
                                ? (~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                              >> 2U)))
                                : (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                           >> 2U))) 
                              << 1U)) | (1U & ((1U 
                                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff))
                                                ? (~ (IData)(
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                              >> 1U)))
                                                : (IData)(
                                                          (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                           >> 1U)))))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e2 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e1));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9 
        = (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
             << 0x1fU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U] 
                          >> 1U)) >> (0x18U & ((- (
                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                    << 0x13U) 
                                                   | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                      >> 0xdU))) 
                                               << 3U)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_14 
        = (1U & (IData)(((0x140U == (0x140U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U])) 
                         & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                            >> 0xdU))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data_mask 
        = ((0xffU & (- (IData)((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 0xcU))))) 
           | ((0xffffU & (- (IData)((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                           >> 0xbU))))) 
              | (- (IData)((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                  >> 0xaU))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en 
        = (IData)((0x240U == (0x240U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U])));
    if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr = 0U;
        core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_0 = 0U;
        core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_9 = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[3U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[4U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[5U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[6U] = 0U;
        __Vtemp_43[1U] = 0U;
        __Vtemp_59[5U] = 0U;
    } else {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr 
            = (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U] 
                        >> 0x16U));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr 
            = (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U] 
                        >> 0x11U));
        core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_0 
            = (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                        >> 0x14U));
        core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_9 
            = (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                        >> 7U));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[1U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[2U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[3U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[3U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[4U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[5U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[6U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U];
        __Vtemp_43[1U] = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                                << 0x25U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                     >> 0x1bU))))) 
                           >> 0xdU) | ((IData)((((1U 
                                                  & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                  ? 0ULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                                   << 0x25U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                      << 5U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                        >> 0x1bU)))) 
                                                >> 0x20U)) 
                                       << 0x13U));
        __Vtemp_59[5U] = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                << 0x25U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                     >> 0x1bU))))) 
                           >> 5U) | ((IData)((((1U 
                                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                ? 0ULL
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                         >> 0x1bU)))) 
                                              >> 0x20U)) 
                                     << 0x1bU));
    }
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0 
        = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                 & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]));
    __VdfgRegularize_hd87f99a1_0_6 = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                            & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                               >> 7U)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_1 
        = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                    >> 0x1eU)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_6 
        = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                    >> 0x19U)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_2 
        = (1U & (~ ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                       >> 0x1dU))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_3 
        = (1U & (~ ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                       >> 0x1cU))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_4 
        = (1U & (~ ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                       >> 0x1bU))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_5 
        = (1U & (~ ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                       >> 0x1aU))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3 
        = (IData)(((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                      >> 0x1fU)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12 
        = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                    >> 0xcU)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10 
        = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                    >> 0xdU)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8 
        = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                    >> 0xeU)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_15 
        = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                    >> 5U)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13 
        = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                    >> 6U)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_20 
        = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                    >> 2U)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_17 
        = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                    >> 4U)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_40 
        = (1U & (IData)(((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                         & (3U == (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U])))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_18 
        = (1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                    >> 3U)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_65 
        = ((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                    >> 1U)) & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_58));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_55 
        = ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_54));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_38 
        = (1U == (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_31) 
                   << 1U) | (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_33)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51 
        = (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_31) 
            << 2U) | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_33) 
                       << 1U) | (((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                              >> 0x20U))) 
                                  & (0U != (0xffU & (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                             >> 8U))))) 
                                 | ((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                             >> 0x20U)) 
                                    & (0xffU != (0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                            >> 8U))))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add 
        = (1U & (((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff 
                           >> 0x20U)) | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)) 
                 ^ (IData)((6U == (6U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))))));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_63 
        = ((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                       >> 3U))) & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_64));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_69 
        = ((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                       >> 2U))) & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_70));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_67 
        = ((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                       >> 2U))) & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_68));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_18 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_17) 
           & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                      >> 1U)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_66 
        = ((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                       >> 3U))) & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_14));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_20 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_14) 
           & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                      >> 1U)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_27 
        = (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24)) 
            & (0U != (0xffU & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                       >> 0x10U))))) 
           | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24) 
              & (0xffU != (0xffU & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                            >> 0xfU))))));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_26 
        = (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24)) 
            & (0U != (0xffU & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                       >> 0x18U))))) 
           | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24) 
              & (0x1ffU != (0x1ffU & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                              >> 0x17U))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp 
        = ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_c__DOT__dout_temp 
            << 1U) | (1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10 
        = (~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data_mask 
              << (0x18U & ((- ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                << 0x13U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                             >> 0xdU))) 
                           << 3U))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en 
        = (1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout) 
                 | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3) 
                    | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en) 
                       | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en)))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr 
        = (0x1fU & (((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                     & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout 
                                >> 1U))) | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e3)) 
                                            | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr)) 
                                               | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                                  & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                      << 0x1fU) 
                                                     | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                        >> 1U)))))));
    if (__VdlySet__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem[__VdlyDim0__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0] 
            = __VdlyVal__core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem__v0;
    }
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_112 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_3) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_4) 
              & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_5) 
                 & (~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_6)))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_5 
        = (((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3))) 
            << 0xcU) | ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                         ? 0U : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                 >> 0x14U)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_119 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3)) 
           & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_1)) 
              & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_2) 
                 & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_3) 
                    & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_4) 
                       & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_5))))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_36 
        = (1U & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10)) 
                 & (~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_87 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_30 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_33 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_28 
        = (1U & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8)) 
                 & (~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_32 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_15));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_31 
        = (1U & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
                 & (~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_15))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_26 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_15));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_66 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_52 
        = (1U & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12)) 
                 & (~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_39 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_17));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_96 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_20) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_40));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_43 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_18)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_17) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_40)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_42 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_18)) 
           & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_20)) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_40)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_71 
        = ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout)) 
           & ((0U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)) 
              & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e1 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
              >> 4U));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
              >> 6U));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
              >> 5U));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_62 
        = ((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                       >> 3U))) & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_18));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_23 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_20) 
           & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                      >> 3U)));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_35 
        = (1U == (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_26) 
                   << 1U) | (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_27)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50 
        = (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_26) 
            << 2U) | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_27) 
                       << 1U) | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24)) 
                                  & (0U != (0xffU & (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                             >> 8U))))) 
                                 | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24) 
                                    & (0xffU != (0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                            >> 7U))))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff 
        = ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_46)
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp
            : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e1 
        = ((IData)(vlSelfRef.core_top_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellinp__out_rd_wr_en_ff__din));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data 
        = (((- (IData)((1U & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                  >> 0xdU)) & (~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U]))))) 
            & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[4U] 
                << 0x12U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                             >> 0xeU))) | (((- (IData)(
                                                       (1U 
                                                        & ((~ 
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U]) 
                                                           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                                              >> 0xdU))))) 
                                            & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[4U] 
                                                 << 0x12U) 
                                                | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                                   >> 0xeU)) 
                                               | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                                                  << 
                                                  (0x18U 
                                                   & ((- 
                                                       ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                         << 0x13U) 
                                                        | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                           >> 0xdU))) 
                                                      << 3U))))) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & ((~ 
                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                                                >> 0xdU)) 
                                                              & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U])))) 
                                               & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U]) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                                                 >> 0xdU) 
                                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U])))) 
                                                 & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[4U] 
                                                      << 0x12U) 
                                                     | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                                        >> 0xeU)) 
                                                    | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U] 
                                                       << 
                                                       (0x18U 
                                                        & ((- 
                                                            ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                              << 0x13U) 
                                                             | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                                >> 0xdU))) 
                                                           << 3U))))))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_113 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_2) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_112)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_111 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_2) 
              & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_1) 
                 & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_112))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_34 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_119) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_6));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_118 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_6)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_119));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_29 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_28) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_94 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_28));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_75 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_33) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_52));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_98 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_17)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_26) 
              & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_18) 
                 & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_96))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_41 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_18)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_96));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_44 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_31) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_43));
    __VdfgRegularize_hd87f99a1_0_1 = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12) 
                                      & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_39) 
                                         & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_42)));
    __VdfgRegularize_hd87f99a1_0_0 = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_17)) 
                                      & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_42));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_46 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_17)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_15) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_42)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_49 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_17) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_42));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early 
        = ((IData)((((0ULL == (0xfffffff0ULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)) 
                     & (0ULL == (0xfffffff0ULL & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff))) 
                    & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_71))) 
           | ((0U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_71)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__smallnum 
        = (((((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                          >> 1U))) & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_69)) 
             << 3U) | ((((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)) 
                         & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_69)) 
                        | (((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                        >> 1U))) & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_67)) 
                           | ((~ (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                          >> 2U))) 
                              & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_66)))) 
                       << 2U)) | (((((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)) 
                                     & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_67)) 
                                    | (((~ (IData)(
                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                    >> 1U))) 
                                        & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_65)) 
                                       | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_70) 
                                           & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_57)) 
                                          | (((~ (IData)(
                                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                          >> 2U))) 
                                              & ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_63) 
                                                 & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_53))) 
                                             | (((~ (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                             >> 2U))) 
                                                 & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_62)) 
                                                | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)) 
                                                    & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_66)) 
                                                   | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_66) 
                                                       & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_61)) 
                                                      | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_19) 
                                                          & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_60)) 
                                                         | ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_20) 
                                                            & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_56)))))))))) 
                                   << 1U) | (((IData)(
                                                      (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                       >> 2U)) 
                                              & ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_59) 
                                                 & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_60))) 
                                             | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_64) 
                                                 & ((~ (IData)(
                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                                >> 3U))) 
                                                    & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff) 
                                                       & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_53)))) 
                                                | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_68) 
                                                    & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_57)) 
                                                   | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)) 
                                                       & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_65)) 
                                                      | (((~ (IData)(
                                                                     (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                                      >> 3U))) 
                                                          & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_55)) 
                                                         | (((~ (IData)(
                                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                         >> 1U))) 
                                                             & ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_17) 
                                                                & ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_58) 
                                                                   & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_53)))) 
                                                            | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)) 
                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_62)) 
                                                               | (((~ (IData)(
                                                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                                               >> 2U))) 
                                                                   & ((IData)(
                                                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                               >> 3U)) 
                                                                      & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_57))) 
                                                                  | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_63) 
                                                                      & (IData)(
                                                                                (6ULL 
                                                                                == 
                                                                                (6ULL 
                                                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)))) 
                                                                     | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_62) 
                                                                         & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_61)) 
                                                                        | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_17) 
                                                                            & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff) 
                                                                               & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_60))) 
                                                                           | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_64) 
                                                                               & ((~ (IData)(
                                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                                >> 1U))) 
                                                                                & (IData)(
                                                                                (5ULL 
                                                                                == 
                                                                                (0xdULL 
                                                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff))))) 
                                                                              | (((~ (IData)(
                                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                                >> 2U))) 
                                                                                & ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_59) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_58))) 
                                                                                | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_14) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_57)) 
                                                                                | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_19) 
                                                                                & (IData)(
                                                                                (0ULL 
                                                                                == 
                                                                                (5ULL 
                                                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)))) 
                                                                                | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_18) 
                                                                                & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_56))) 
                                                                                | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_14) 
                                                                                & (IData)(
                                                                                (8ULL 
                                                                                == 
                                                                                (0xcULL 
                                                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)))) 
                                                                                | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_19) 
                                                                                & ((IData)(
                                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                                                >> 3U)) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_54))) 
                                                                                | (((IData)(
                                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                                >> 3U)) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_55)) 
                                                                                | ((IData)(
                                                                                (((8ULL 
                                                                                == 
                                                                                (0xaULL 
                                                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)) 
                                                                                & (4ULL 
                                                                                == 
                                                                                (0xcULL 
                                                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff))) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_53))) 
                                                                                | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_23)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                                                >> 1U))) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_23)) 
                                                                                | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_14) 
                                                                                & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff) 
                                                                                & (IData)(
                                                                                (8ULL 
                                                                                == 
                                                                                (0xaULL 
                                                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff))))) 
                                                                                | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_64) 
                                                                                & ((IData)(
                                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (2ULL 
                                                                                == 
                                                                                (0xaULL 
                                                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff))))) 
                                                                                | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_19) 
                                                                                & ((~ (IData)(
                                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                                                >> 2U))) 
                                                                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff))) 
                                                                                | ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_20) 
                                                                                & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff) 
                                                                                & (IData)(
                                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff 
                                                                                >> 3U)))))))))))))))))))))))))))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_raw 
        = ((((((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_35) 
               & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_31)) 
              | (((1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50)) 
                  & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_31)) 
                 | (((0U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50)) 
                     & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_31)) 
                    | (((1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50)) 
                        & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_38)) 
                       | ((0U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50)) 
                          & ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_38) 
                             | (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51)))))))) 
             << 3U) | ((((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_26) 
                         & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_31)) 
                        | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_35) 
                            & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_38)) 
                           | (((1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50)) 
                               & (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51))) 
                              | ((0U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50)) 
                                 & (0U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51)))))) 
                       << 2U)) | (((((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_26) 
                                     & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_38)) 
                                    | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_35) 
                                        & (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51))) 
                                       | ((1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50)) 
                                          & (0U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51))))) 
                                   << 1U) | (((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_26) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51))) 
                                             | ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_35) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51))))));
    __Vtemp_33[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
    __Vtemp_33[1U] = 0U;
    __Vtemp_33[2U] = 0U;
    VL_SHIFTL_WWI(65,65,6, __Vtemp_34, __Vtemp_33, (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in 
        = (0x1ffffffffULL & ((- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state))) 
                             & (((- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state))) 
                                 & (((- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct))) 
                                     & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff) 
                                    | (((- (QData)((IData)(
                                                           (1U 
                                                            & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)) 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                                                   >> 4U))))))) 
                                        & (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)) 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                         >> 0x20U))))))) 
                                       | ((- (QData)((IData)(
                                                             ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)) 
                                                              & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                                                 >> 4U))))) 
                                          & (((QData)((IData)(
                                                              (1U 
                                                               & __Vtemp_34[2U]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               __Vtemp_34[1U]))))))) 
                                + (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add)
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff
                                     : (~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)) 
                                   + (QData)((IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add)))))))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_67 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_113) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_87) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_66)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_35 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_34) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_78 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_34));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_22 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_118) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_117 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_118));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_84 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_94));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_93 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_94) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_26) 
              & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_17)) 
                 & (~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_18)))));
    __VdfgRegularize_hd87f99a1_0_5 = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_17) 
                                      & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_41));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_110 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_111) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8) 
              & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10)) 
                 & (IData)(__VdfgRegularize_hd87f99a1_0_1))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_45 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_15)) 
           & (IData)(__VdfgRegularize_hd87f99a1_0_0));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_73 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_29) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_46)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_70 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_75) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_46));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_47 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_46));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_62 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_15)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_49));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_15) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_49));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish 
        = ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
           & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early) 
              | ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))
                  ? (0x21U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count))
                  : (0x20U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count)))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable 
        = ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1) 
           & ((0U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)) 
              & (0U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_raw))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_mul_busy 
        = ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e1) 
           | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e2));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask_base 
        = ((0xffULL & (- (QData)((IData)((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                >> 0xfU)))))) 
           | ((0xffffULL & (- (QData)((IData)((1U & 
                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                >> 0xeU)))))) 
              | (0xffffffffULL & (- (QData)((IData)(
                                                    (1U 
                                                     & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                        >> 0xdU))))))));
    core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_12 
        = (IData)((0xa00U == (0xa00U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data 
        = (((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
            & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout 
                       >> 6U))) | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                                    & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e3)
                                        ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[0U]
                                        : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[1U])) 
                                   | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                                       & ((0xfU & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout) 
                                                                  >> 4U)))) 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout))) 
                                          | (((- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout)))) 
                                              & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_46)
                                                  ? 
                                                 ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                                  : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff))) 
                                             | ((- (IData)(
                                                           (1U 
                                                            & ((~ 
                                                                ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout) 
                                                                 >> 4U)) 
                                                               & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout)))))) 
                                                & ((1U 
                                                    & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                                        >> 1U) 
                                                       & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                                           >> 3U) 
                                                          ^ 
                                                          ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                                           >> 2U))))
                                                    ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp
                                                    : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))))) 
                                      | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                         & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data 
                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data_mask) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      ((0x1000U 
                                                                        == 
                                                                        (0x1080U 
                                                                         & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U])) 
                                                                       & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data 
                                                                          >> 7U)))))) 
                                                << 8U) 
                                               | ((- (IData)(
                                                             (1U 
                                                              & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                                  >> 0xeU) 
                                                                 & ((~ 
                                                                     (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                                      >> 7U)) 
                                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data 
                                                                       >> 0xfU)))))) 
                                                  << 0x10U)))))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_56 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_78));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_104 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_22));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_23 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_22) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_25 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_117) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_116 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_117));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_72 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_84) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_46));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_97 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_93) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_96));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_48 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_93) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_40));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_81 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_32) 
           & (IData)(__VdfgRegularize_hd87f99a1_0_5));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_82 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_31) 
           & (IData)(__VdfgRegularize_hd87f99a1_0_5));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_71 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_66) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_45)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_74 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_75) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_45));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_69 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_36) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_45)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_91 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_47)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_90 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8) 
           & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12)) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_47)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_95 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_29) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_47));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_89 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_30) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_66) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_62)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_80 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_33) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_62)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_83 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_84) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_62));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_85 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_52) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_62));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_55 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_79 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_35) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_77 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_78) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_100 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_52) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift 
        = ((0x30U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift)) 
           | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable))) 
              & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_raw)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count_in 
        = (0x3fU & ((- (IData)(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish)) 
                                & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state) 
                                   & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                                      & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable))))))) 
                    & ((IData)(1U) + ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count) 
                                      + (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff)))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52 
        = ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable)) 
           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_3 
        = (((QData)((IData)(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                              << 0x1fU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U] 
                                           >> 1U)))) 
            & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask_base) 
           << (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                        >> 5U)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask 
        = (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask_base 
           << (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                        >> 5U)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wen 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_12) 
           | (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_14));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr 
        = ((0xfffffffcU & ((- (IData)(((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                           >> 0xdU)) 
                                       & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_12)))) 
                           & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                               << 0x18U) | (0xfffffcU 
                                            & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                               >> 8U))))) 
           | ((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_14))) 
              & (((IData)(1U) + ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                  << 0x11U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                               >> 0xfU))) 
                 << 2U)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (2U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (3U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (4U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (5U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (6U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (7U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (8U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (9U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0xaU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0xbU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0xcU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0xdU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0xeU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0xfU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x10U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x11U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x12U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x13U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x14U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x15U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x16U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x17U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x18U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x19U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x1aU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x1bU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x1cU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x1dU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x1eU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
            & (0x1fU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[3U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[4U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[5U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[5U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[6U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[6U];
    if (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
          >> 4U) & ((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] 
                              >> 0x16U)) == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U] 
            = ((0x7ffffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U]) 
               | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data 
                  << 0x1bU));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U] 
            = ((0xf8000000U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U]) 
               | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data 
                  >> 5U));
    }
    if (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
          >> 3U) & ((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] 
                              >> 0x11U)) == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
            = ((0x7ffffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U]) 
               | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data 
                  << 0x1bU));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U] 
            = ((0xf8000000U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U]) 
               | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data 
                  >> 5U));
    }
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_105 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_104) 
           & (IData)(__VdfgRegularize_hd87f99a1_0_1));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_109 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_23) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_66) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_99 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_25) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_115 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_116) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_66));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_8 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_73) 
           | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_72) 
              | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_70)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_92 
        = ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_20)) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_48));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_37 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_98) 
           | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_82));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_64 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_97) 
           | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_74));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_61 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_70) 
           | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_69));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_7 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_74) 
           | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_71) 
              | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_69)));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_57 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_91) 
           | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_90));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_60 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_83) 
           | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_82));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_88 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_30) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_85));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_86 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_87) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_85));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_54 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_56) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_55));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_107 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_23) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_100));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_103 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_104) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_100));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_101 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_116) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_100));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_106 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_111) 
           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_28) 
              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_100)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata 
        = (((- (IData)(((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                            >> 8U)) & (IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_12)))) 
            & (IData)(((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                        ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_3 
                           | ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask) 
                              & (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U]))))
                        : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_3 
                           | ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask) 
                              & (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata))))))) 
           | ((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_14))) 
              & ((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U])
                  ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9 
                     | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10 
                        & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U]))
                  : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9 
                     | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10 
                        & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata)))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_forward_next 
        = ((IData)((0U != (0x1800U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U]))) 
           & (IData)((((0x300U == (0x300U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                       & (0x140U == (0x140U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U]))) 
                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr 
                         == (((IData)(1U) + ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                              << 0x16U) 
                                             | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                >> 0xaU))) 
                             << 2U)))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid 
        = ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
           & (0U != (0xcU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr 
        = (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[3U] 
             << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                          >> 5U)) + ((0x7ffff800U & 
                                      ((- (IData)((1U 
                                                   & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                                       >> 1U) 
                                                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U] 
                                                         >> 0x10U))))) 
                                       << 0xbU)) | 
                                     (0x7ffU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U] 
                                                >> 5U))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_59 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_99) 
           | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_95));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_102 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_115) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_114 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_115) 
           & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_62));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_38 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_95) 
           | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_92));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_1 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_37) 
           | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_81));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_63 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_88) 
           | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_86) 
              | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_60) 
                 | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_81) 
                    | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_80)))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_68 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_88) 
           | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_86) 
              | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_83) 
                 | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_80))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward 
        = ((IData)((0U != (0xcU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)))) 
           & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
              & (IData)(((0xa00U == (0xa00U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                         & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr 
                            == (0xfffffffcU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall 
        = ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__lsu_stall_q)) 
           & (((0U != (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr)) 
               & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                  >> 4U)) | ((3U == (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr)) 
                             & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                >> 5U))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_108 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_114) 
           | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_110) 
              | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_109) 
                 | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_107) 
                    | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_106) 
                       | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_105) 
                          | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_103) 
                             | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_102) 
                                | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_101)))))))));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_6 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_38) 
           | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_57));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_2 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_97) 
           | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_89) 
              | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_68)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load 
        = (1U & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                  >> 2U) & (IData)(((0U != (0x60U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout))) 
                                    | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall)))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall = 0U;
    if (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
          >> 3U) & (1U == (0x83U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U])))) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_mul_busy;
    } else if ((((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                  >> 3U) & (0x81U == (0x83U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U]))) 
                & (((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                              >> 4U)) == (0x1fU & (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                                   >> 0x16U))) 
                   | ((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                >> 4U)) == (0x1fU & 
                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                             >> 0x11U)))))) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_mul_busy;
    } else if ((1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[0U] 
                         >> 1U)))) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state;
    } else if ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                & (1U == (0x8000003U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U])))) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall 
            = (1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                     | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                        >> 2U)));
    }
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall 
        = ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) 
           | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall));
    core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_76 
        = ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_108) 
           | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_79) 
              | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_77) 
                 | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_99))));
    if (((4U == (5U & ((4U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                              << 2U)) | ((2U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                << 1U)) 
                                         | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall))))) 
         || (2U == ((4U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                           << 2U)) | ((2U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                             << 1U)) 
                                      | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))))) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_addr_valid 
            = (1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__dff_rst_en_vector_inst__DOT____Vcellinp__dff_rst_vector_inst__din 
            = ((4U == (5U & ((4U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                    << 2U)) | ((2U 
                                                & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                   << 1U)) 
                                               | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))))
                ? (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout 
                           >> 1U)) : ((2U == ((4U & 
                                               ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall))))
                                       ? ((IData)(4U) 
                                          + vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)
                                       : 0U));
    } else {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_addr_valid = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__dff_rst_en_vector_inst__DOT____Vcellinp__dff_rst_vector_inst__din 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q;
    }
    __Vtemp_41[0U] = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                 ? 0ULL : (((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                 >> 0x1bU))))) 
                       << 0x13U) | ((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : (0x3ffU 
                                               & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U] 
                                                  >> 0x11U))) 
                                     << 9U) | ((((1U 
                                                  & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                  ? 0U
                                                  : 
                                                 (0x1fU 
                                                  & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                     >> 0xbU))) 
                                                << 4U) 
                                               | (((8U 
                                                    & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                        << 3U) 
                                                       & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
                                                          >> 4U))) 
                                                   | (4U 
                                                      & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                          << 2U) 
                                                         & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                            >> 3U)))) 
                                                  | ((2U 
                                                      & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                          << 1U) 
                                                         & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
                                                            >> 2U))) 
                                                     | (IData)(
                                                               ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                                & (0U 
                                                                   != 
                                                                   (0x30000000U 
                                                                    & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U])))))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[5U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[6U] 
        = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[6U];
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
        = ((0xfffffffeU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U]) 
           | (1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                    & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
        = (((QData)((IData)((((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_108) 
                                | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_99) 
                                   | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_98) 
                                      | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_97) 
                                         | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_95) 
                                            | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_92) 
                                               | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_91) 
                                                  | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_90) 
                                                     | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_89) 
                                                        | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_63)))))))))) 
                               << 5U) | ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_76) 
                                           | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_64) 
                                              | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_38) 
                                                 | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_73) 
                                                    | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_72) 
                                                       | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_57) 
                                                          | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_89) 
                                                             | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_71) 
                                                                | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_61) 
                                                                   | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_68)))))))))) 
                                          << 4U) | 
                                         ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_67) 
                                            & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65)) 
                                           | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_109) 
                                              | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_107) 
                                                 | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_106) 
                                                    | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_103) 
                                                       | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_102) 
                                                          | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_101) 
                                                             | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_79) 
                                                                | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_77) 
                                                                   | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_59) 
                                                                      | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_92) 
                                                                         | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_73) 
                                                                            | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_72) 
                                                                               | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_91) 
                                                                                | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_90) 
                                                                                | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_70)))))))))))))))) 
                                          << 3U))) 
                             | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_2) 
                                 << 2U) | ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_76) 
                                             | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_98) 
                                                | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_64) 
                                                   | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_89) 
                                                      | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_71) 
                                                         | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_61) 
                                                            | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_63))))))) 
                                            << 1U) 
                                           | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_67) 
                                               & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_62)) 
                                              | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_114))))))) 
            << 0x20U) | (QData)((IData)((((((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_1) 
                                              << 0x1fU) 
                                             | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_37) 
                                                << 0x1eU)) 
                                            | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_7) 
                                                << 0x1dU) 
                                               | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_8) 
                                                  << 0x1cU))) 
                                           | (((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_74) 
                                                 | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_73) 
                                                    | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_72) 
                                                       | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_71) 
                                                          | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_61))))) 
                                                << 0x1bU) 
                                               | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_101) 
                                                   | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_60)) 
                                                  << 0x1aU)) 
                                              | ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_106) 
                                                   | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_59) 
                                                      | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_92) 
                                                         | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_91) 
                                                            | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_90) 
                                                               | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_80)))))) 
                                                  << 0x19U) 
                                                 | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_109) 
                                                     | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_89)) 
                                                    << 0x18U)))) 
                                          | ((((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_107) 
                                                 | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_88) 
                                                    | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_81))) 
                                                << 0x17U) 
                                               | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_103) 
                                                   | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_86)) 
                                                  << 0x16U)) 
                                              | ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_114) 
                                                   | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_102)) 
                                                  << 0x15U) 
                                                 | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_110) 
                                                    << 0x14U))) 
                                             | ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_105) 
                                                  << 0x13U) 
                                                 | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_99) 
                                                     | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_80)) 
                                                    << 0x12U)) 
                                                | (((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_25) 
                                                      & (IData)(__VdfgRegularize_hd87f99a1_0_1)) 
                                                     | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_35) 
                                                         & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_55)) 
                                                        | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_30) 
                                                            & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_47)) 
                                                           | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_33) 
                                                               & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
                                                                  & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12) 
                                                                     & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_62)))) 
                                                              | ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
                                                                 & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_87) 
                                                                    & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_45))))))) 
                                                    << 0x11U) 
                                                   | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_6) 
                                                      << 0x10U))))) 
                                         | ((((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_92) 
                                                << 0xfU) 
                                               | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_95) 
                                                  << 0xeU)) 
                                              | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_91) 
                                                  << 0xdU) 
                                                 | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_90) 
                                                    << 0xcU))) 
                                             | (((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_98) 
                                                   | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_97)) 
                                                  << 0xbU) 
                                                 | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_72) 
                                                     | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_69)) 
                                                    << 0xaU)) 
                                                | ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_73) 
                                                     | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_71)) 
                                                    << 9U) 
                                                   | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_74) 
                                                       | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_70)) 
                                                      << 8U)))) 
                                            | (((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_77) 
                                                  << 7U) 
                                                 | ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_78) 
                                                      & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10) 
                                                         & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_100))) 
                                                     | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_54)) 
                                                    << 6U)) 
                                                | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_54) 
                                                    << 5U) 
                                                   | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_56) 
                                                       & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_100)) 
                                                      << 4U))) 
                                               | ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_79) 
                                                    << 3U) 
                                                   | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_35) 
                                                       & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
                                                          & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10) 
                                                             & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_65)))) 
                                                      << 2U)) 
                                                  | ((((~ 
                                                        ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                         & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                            >> 0x18U))) 
                                                       & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_118) 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                               & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                  >> 0x17U))) 
                                                             & ((~ 
                                                                 ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                  & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                     >> 0x16U))) 
                                                                & ((~ 
                                                                    ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                     & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                        >> 0x15U))) 
                                                                   & ((~ 
                                                                       ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                           >> 0x14U))) 
                                                                      & ((~ 
                                                                          ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                              >> 0x13U))) 
                                                                         & ((~ 
                                                                             ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                              & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                                >> 0x12U))) 
                                                                            & ((~ 
                                                                                ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                                >> 0x11U))) 
                                                                               & ((~ 
                                                                                ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                                >> 0x10U))) 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                                >> 0xfU))) 
                                                                                & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8)) 
                                                                                & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_36) 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                                >> 0xbU))) 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                                >> 0xaU))) 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                                >> 9U))) 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                                >> 8U))) 
                                                                                & ((~ (IData)(__VdfgRegularize_hd87f99a1_0_6)) 
                                                                                & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_62)))))))))))))))))))) 
                                                      << 1U) 
                                                     | (((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
                                                         & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_118) 
                                                            & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_43))) 
                                                        | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_113) 
                                                            & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_28) 
                                                               & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12)) 
                                                                  & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
                                                                     & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_42))))) 
                                                           | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_48) 
                                                              | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_28) 
                                                                  & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_46)) 
                                                                 | (((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12)) 
                                                                     & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_44)) 
                                                                    | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_67) 
                                                                        & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_43)) 
                                                                       | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_119) 
                                                                           & ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_32) 
                                                                              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_43))) 
                                                                          | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8) 
                                                                              & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_47)) 
                                                                             | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_98) 
                                                                                | (((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10)) 
                                                                                & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_45))) 
                                                                                | (((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_10) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_44)) 
                                                                                | (((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_8)) 
                                                                                & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_12)) 
                                                                                & ((~ (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_13)) 
                                                                                & (IData)(__VdfgRegularize_hd87f99a1_0_0)))) 
                                                                                | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_39) 
                                                                                & (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_inst__DOT____VdfgRegularize_h9b45ae17_0_41))))))))))))))))))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_10 
        = (1U & ((IData)((0x40000800U == (0x40000800U 
                                          & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U]))) 
                 | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                    >> 0x10U)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_19 
        = (IData)((0x800U == (0x40000800U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellinp__out_rd_wr_en_ff__din 
        = (IData)((0x81U == (0x81U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din 
        = (((QData)((IData)(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                              << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                        >> 0x1bU)))) 
            << 0x20U) | (QData)((IData)(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[6U] 
                                          << 5U) | 
                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                          >> 0x1bU)))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_11 
        = (3U & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                   << 9U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                             >> 0x17U)) | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                            << 0xaU) 
                                           | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                              >> 0x16U))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_12 
        = (IData)((0U != (0xc00000U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en 
        = (IData)((9U == (9U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
        = ((0x800U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])
            ? ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                          >> 0x1bU)) : ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                         << 5U) | (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                   >> 0x1bU)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
        = (((- (IData)((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                              >> 0x10U)))) & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                               << 0xfU) 
                                              | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                 >> 0x11U))) 
           | ((0x1fU & ((- (IData)((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U]))) 
                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                           >> 6U))) | (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                       >> 3U)))) 
                                        & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                            << 5U) 
                                           | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                              >> 0x1bU))) 
                                       | (4U & (- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                              >> 0xbU))))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
        = (IData)((((QData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_0)) 
                    << 0x26U) | vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
        = ((0xfffff800U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U]) 
           | (IData)(((((QData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_0)) 
                        << 0x26U) | vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out) 
                      >> 0x20U)));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
        = ((0xfffe07ffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U]) 
           | (0xfffff800U & ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_1) 
                               | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_2) 
                                  | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_6) 
                                     | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_7) 
                                        | (IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_8))))) 
                              << 0x10U) | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_9) 
                                           << 0xbU))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
        = ((0x1ffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U]) 
           | (0xfffe0000U & ((((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_1))) 
                               << 0x11U) & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                              ? 0U : 
                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                              >> 0xcU)) 
                                            << 0x1dU)) 
                             | ((((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_2))) 
                                  & core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_5) 
                                 << 0x11U) | ((((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_6))) 
                                                << 0x11U) 
                                               & (((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3))) 
                                                   << 0x1eU) 
                                                  | ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3) 
                                                       << 0x1dU) 
                                                      | ((IData)(__VdfgRegularize_hd87f99a1_0_6) 
                                                         << 0x1cU)) 
                                                     | ((((1U 
                                                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                           ? 0U
                                                           : 
                                                          (0x3fU 
                                                           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                              >> 0x19U))) 
                                                         << 0x16U) 
                                                        | (((1U 
                                                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                             ? 0U
                                                             : 
                                                            (0xfU 
                                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                                >> 8U))) 
                                                           << 0x12U))))) 
                                              | ((((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_7))) 
                                                   & core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_5) 
                                                  << 0x11U) 
                                                 | (((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_8))) 
                                                     << 0x11U) 
                                                    & (((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3))) 
                                                        << 0x1dU) 
                                                       | ((((1U 
                                                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                             ? 0U
                                                             : 
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                             >> 0x19U)) 
                                                           << 0x16U) 
                                                          | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_9) 
                                                             << 0x11U))))))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
        = ((0xfffe0000U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U]) 
           | (0x1ffffU & ((0x1ffffU & (((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_1))) 
                                        >> 0xfU) & 
                                       (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                          ? 0U : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                  >> 0xcU)) 
                                        >> 3U))) | 
                          ((((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_2))) 
                             & core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_5) 
                            >> 0xfU) | ((0x1ffffU & 
                                         (((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_6))) 
                                           >> 0xfU) 
                                          & (((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3))) 
                                              >> 2U) 
                                             | ((((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3) 
                                                  >> 3U) 
                                                 | ((IData)(__VdfgRegularize_hd87f99a1_0_6) 
                                                    >> 4U)) 
                                                | ((((1U 
                                                      & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                      ? 0U
                                                      : 
                                                     (0x3fU 
                                                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                         >> 0x19U))) 
                                                    >> 0xaU) 
                                                   | (((1U 
                                                        & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                        ? 0U
                                                        : 
                                                       (0xfU 
                                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                           >> 8U))) 
                                                      >> 0xeU)))))) 
                                        | ((((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_7))) 
                                             & core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_5) 
                                            >> 0xfU) 
                                           | (((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_8))) 
                                               >> 0xfU) 
                                              & ((0x1ffffU 
                                                  & ((- (IData)((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_3))) 
                                                     >> 3U)) 
                                                 | ((0x1ffffU 
                                                     & (((1U 
                                                          & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                          >> 0x19U)) 
                                                        >> 0xaU)) 
                                                    | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_9) 
                                                       >> 0xfU))))))))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
        = ((0xf801ffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U]) 
           | (0xfffe0000U & ((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                ? 0U : (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U] 
                                                 >> 0xfU))) 
                              << 0x16U) | ((IData)(core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____VdfgRegularize_h4c49245a_0_0) 
                                           << 0x11U))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
        = ((0x7ffffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U]) 
           | ((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                        ? 0ULL : (((QData)((IData)(
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U]))))) 
              << 0x1bU));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U] 
        = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                      ? 0ULL : (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U]))))) 
            >> 5U) | ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                 ? 0ULL : (((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U])))) 
                               >> 0x20U)) << 0x1bU));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[4U] 
        = ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                      ? 0ULL : (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U])))) 
                    >> 0x20U)) >> 5U);
    if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[2U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[2U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[3U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[3U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[4U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[5U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[6U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[3U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[4U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U];
    } else if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] 
            = __Vtemp_43[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[3U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[4U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[5U] 
            = __Vtemp_59[5U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[6U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[3U] = 0U;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[4U] = 0U;
    } else {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] 
            = __Vtemp_41[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] 
            = __Vtemp_43[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] 
            = ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                          ? 0ULL : (((QData)((IData)(
                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                     >> 0x1bU)))) 
                        >> 0x20U)) >> 0xdU);
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] 
            = (IData)((((QData)((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                         >> (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] 
            = (IData)(((((QData)((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                          >> (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                         << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))) 
                       >> 0x20U));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
        if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] = 0U;
            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] = 0U;
        } else {
            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] 
                = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U];
            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] 
                = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U];
        }
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] 
            = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                   == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                  & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                  ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                  : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                      & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                          >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                      ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                     [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                      : 0U)) << 0x1bU) | ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                           ? 0U : (0x7ffffffU 
                                                   & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[3U] 
            = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                   == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                  & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                  ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                  : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                      & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                          >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                      ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                     [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                      : 0U)) >> 5U) | (((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                          == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr)) 
                                         & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                         ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                         : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                             & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                                 >> 4U) 
                                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                             ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                            [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                                             : 0U)) 
                                       << 0x1bU));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[4U] 
            = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                   == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr)) 
                  & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                  ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                  : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                      & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                          >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                      ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                     [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                      : 0U)) >> 5U) | ((IData)(((1U 
                                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                 ? 0ULL
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                     << 5U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                       >> 0x1bU))))) 
                                       << 0x1bU));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[5U] 
            = __Vtemp_59[5U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[6U] 
            = ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                          ? 0ULL : (((QData)((IData)(
                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                     >> 0x1bU)))) 
                        >> 0x20U)) >> 5U);
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[0U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[1U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[2U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[3U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U];
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din[4U] 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[4U];
    }
    if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__miscf__DOT____Vcellinp__dff_rst_inst__din 
            = (((8U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                       >> 0x17U)) | (4U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                           >> 0x18U))) 
               | ((((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                        >> 0x11U)) & (0U != ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                              << 5U) 
                                             | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                >> 0x1bU)))) 
                   << 1U) | (1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 2U))));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__mff__DOT____Vcellinp__dff_rst_inst__din 
            = (((QData)((IData)((1U & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                           >> 0x11U)) 
                                       & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                          >> 0x1aU))))) 
                << 0x20U) | (QData)((IData)(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                              << 5U) 
                                             | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                >> 0x1bU)))));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__out_addr_ff__DOT____Vcellinp__dff_rst_inst__din 
            = (0x1fU & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                         << 0x15U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 0xbU)));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__instr_tag_ff__DOT____Vcellinp__dff_rst_inst__din 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din;
    } else {
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__miscf__DOT____Vcellinp__dff_rst_inst__din 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__mff__DOT____Vcellinp__dff_rst_inst__din 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff;
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__out_addr_ff__DOT____Vcellinp__dff_rst_inst__din 
            = (0x1fU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr));
        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__instr_tag_ff__DOT____Vcellinp__dff_rst_inst__din 
            = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout;
    }
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_in 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
            | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state)) 
           & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish)) 
              & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__aff__DOT____Vcellinp__dff_rst_inst__din 
        = (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
            | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52) 
                & (0x21U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count))) 
               | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)))
            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__qff__DOT____Vcellinp__dff_rst_inst__din 
        = (0x1ffffffffULL & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                              | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52))
                              ? (((- (QData)((IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state)))))) 
                                  & (QData)((IData)(
                                                    ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                      << 5U) 
                                                     | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                        >> 0x1bU))))) 
                                 | (((- (QData)((IData)(
                                                        ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state) 
                                                         & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_44))))) 
                                     & ((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff)) 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in 
                                                                                >> 0x20U))))))) 
                                        << (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff))) 
                                    | ((- (QData)((IData)(
                                                          ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_44)) 
                                                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state))))) 
                                       & (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)) 
                                           << 1U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in 
                                                                                >> 0x20U))))))))))
                              : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq 
        = (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
           == vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm 
        = ((0x2000000U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])
            ? (~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b)
            : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b);
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
        = (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
           + (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm 
              + (1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                       >> 0x19U))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt 
        = (1U & (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                      >> 0x11U)) & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                     >> 0x1fU) ^ ((
                                                   (~ 
                                                    (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                                     >> 0x1fU)) 
                                                   & ((~ 
                                                       (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm 
                                                        >> 0x1fU)) 
                                                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                                         >> 0x1fU))) 
                                                  | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                                      >> 0x1fU) 
                                                     & ((~ 
                                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                                          >> 0x1fU)) 
                                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm 
                                                           >> 0x1fU)))))) 
                 | ((~ (IData)((1ULL & (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a)) 
                                         + ((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm)) 
                                            + (QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                  >> 0x19U)))))) 
                                        >> 0x20U)))) 
                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                       >> 0x11U))));
    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__alu_wb_data_i 
        = (((- (IData)((0U != (7U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                     >> 0x16U))))) 
            & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                   & (- (IData)((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_11) 
                                       >> 1U)))))) 
               | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                   & ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b) 
                      & (- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_11)))))) 
                  | ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a) 
                     & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                        & (- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_12)))))))) 
           | (((- (IData)((IData)((0U != (0x380000U 
                                          & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U]))))) 
               & (((- (IData)((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                     >> 0x15U)))) & 
                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                    << (0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))) 
                  | (((- (IData)((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                        >> 0x13U)))) 
                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                         >> (0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))) 
                     | ((- (IData)((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                          >> 0x14U)))) 
                        & VL_SHIFTRS_III(32,32,5, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a, 
                                         (0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b)))))) 
              | (((- (IData)(((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                  >> 0x12U)) & (0U 
                                                != 
                                                (0x6000000U 
                                                 & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U]))))) 
                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout) 
                 | (1U & (- (IData)(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x12U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt))))))));
}

void Vcore_top_tb___024root___timing_resume(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___timing_resume\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_had6561ce__0.resume(
                                                   "@(negedge core_top_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcore_top_tb___024root___timing_commit(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___timing_commit\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_had6561ce__0.commit(
                                                   "@(negedge core_top_tb.clk)");
    }
}

void Vcore_top_tb___024root___eval_triggers__act(Vcore_top_tb___024root* vlSelf);

bool Vcore_top_tb___024root___eval_phase__act(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___eval_phase__act\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcore_top_tb___024root___eval_triggers__act(vlSelf);
    Vcore_top_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcore_top_tb___024root___timing_resume(vlSelf);
        Vcore_top_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcore_top_tb___024root___eval_phase__nba(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___eval_phase__nba\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcore_top_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_tb___024root___dump_triggers__nba(Vcore_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_tb___024root___dump_triggers__act(Vcore_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcore_top_tb___024root___eval(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___eval\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcore_top_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcore_top_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcore_top_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcore_top_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcore_top_tb___024root___eval_debug_assertions(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___eval_debug_assertions\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
