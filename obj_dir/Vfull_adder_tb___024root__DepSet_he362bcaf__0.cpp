// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder_tb.h for the primary calling header

#include "Vfull_adder_tb__pch.h"
#include "Vfull_adder_tb___024root.h"

VlCoroutine Vfull_adder_tb___024root___eval_initial__TOP__Vtiming__0(Vfull_adder_tb___024root* vlSelf);

void Vfull_adder_tb___024root___eval_initial(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_initial\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfull_adder_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vfull_adder_tb___024root___eval_initial__TOP__Vtiming__0(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.full_adder_tb__DOT__x = 0U;
    vlSelfRef.full_adder_tb__DOT__y = 0U;
    vlSelfRef.full_adder_tb__DOT__cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/full_adder_tb.sv", 
                                         19);
    VL_WRITEF_NX("x = %b, y = %b, cin = %b, sum = %b, cout = %b\n",0,
                 1,vlSelfRef.full_adder_tb__DOT__x,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__y),
                 1,vlSelfRef.full_adder_tb__DOT__cin,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__sum),
                 1,((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_a) 
                    | (IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_b)));
    vlSelfRef.full_adder_tb__DOT__x = 0U;
    vlSelfRef.full_adder_tb__DOT__y = 0U;
    vlSelfRef.full_adder_tb__DOT__cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/full_adder_tb.sv", 
                                         24);
    VL_WRITEF_NX("x = %b, y = %b, cin = %b, sum = %b, cout = %b\n",0,
                 1,vlSelfRef.full_adder_tb__DOT__x,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__y),
                 1,vlSelfRef.full_adder_tb__DOT__cin,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__sum),
                 1,((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_a) 
                    | (IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_b)));
    vlSelfRef.full_adder_tb__DOT__x = 0U;
    vlSelfRef.full_adder_tb__DOT__y = 1U;
    vlSelfRef.full_adder_tb__DOT__cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/full_adder_tb.sv", 
                                         29);
    VL_WRITEF_NX("x = %b, y = %b, cin = %b, sum = %b, cout = %b\n",0,
                 1,vlSelfRef.full_adder_tb__DOT__x,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__y),
                 1,vlSelfRef.full_adder_tb__DOT__cin,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__sum),
                 1,((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_a) 
                    | (IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_b)));
    vlSelfRef.full_adder_tb__DOT__x = 0U;
    vlSelfRef.full_adder_tb__DOT__y = 1U;
    vlSelfRef.full_adder_tb__DOT__cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/full_adder_tb.sv", 
                                         34);
    VL_WRITEF_NX("x = %b, y = %b, cin = %b, sum = %b, cout = %b\n",0,
                 1,vlSelfRef.full_adder_tb__DOT__x,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__y),
                 1,vlSelfRef.full_adder_tb__DOT__cin,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__sum),
                 1,((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_a) 
                    | (IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_b)));
    vlSelfRef.full_adder_tb__DOT__x = 1U;
    vlSelfRef.full_adder_tb__DOT__y = 0U;
    vlSelfRef.full_adder_tb__DOT__cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/full_adder_tb.sv", 
                                         39);
    VL_WRITEF_NX("x = %b, y = %b, cin = %b, sum = %b, cout = %b\n",0,
                 1,vlSelfRef.full_adder_tb__DOT__x,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__y),
                 1,vlSelfRef.full_adder_tb__DOT__cin,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__sum),
                 1,((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_a) 
                    | (IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_b)));
    vlSelfRef.full_adder_tb__DOT__x = 1U;
    vlSelfRef.full_adder_tb__DOT__y = 0U;
    vlSelfRef.full_adder_tb__DOT__cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/full_adder_tb.sv", 
                                         44);
    VL_WRITEF_NX("x = %b, y = %b, cin = %b, sum = %b, cout = %b\n",0,
                 1,vlSelfRef.full_adder_tb__DOT__x,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__y),
                 1,vlSelfRef.full_adder_tb__DOT__cin,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__sum),
                 1,((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_a) 
                    | (IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_b)));
    vlSelfRef.full_adder_tb__DOT__x = 1U;
    vlSelfRef.full_adder_tb__DOT__y = 1U;
    vlSelfRef.full_adder_tb__DOT__cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/full_adder_tb.sv", 
                                         49);
    VL_WRITEF_NX("x = %b, y = %b, cin = %b, sum = %b, cout = %b\n",0,
                 1,vlSelfRef.full_adder_tb__DOT__x,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__y),
                 1,vlSelfRef.full_adder_tb__DOT__cin,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__sum),
                 1,((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_a) 
                    | (IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_b)));
    vlSelfRef.full_adder_tb__DOT__x = 1U;
    vlSelfRef.full_adder_tb__DOT__y = 1U;
    vlSelfRef.full_adder_tb__DOT__cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/full_adder_tb.sv", 
                                         54);
    VL_WRITEF_NX("x = %b, y = %b, cin = %b, sum = %b, cout = %b\n",0,
                 1,vlSelfRef.full_adder_tb__DOT__x,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__y),
                 1,vlSelfRef.full_adder_tb__DOT__cin,
                 1,(IData)(vlSelfRef.full_adder_tb__DOT__sum),
                 1,((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_a) 
                    | (IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_b)));
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/full_adder_tb.sv", 
                                         56);
    VL_FINISH_MT("tb/full_adder_tb.sv", 57, "");
}

void Vfull_adder_tb___024root___act_sequent__TOP__0(Vfull_adder_tb___024root* vlSelf);

void Vfull_adder_tb___024root___eval_act(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_act\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vfull_adder_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfull_adder_tb___024root___act_sequent__TOP__0(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___act_sequent__TOP__0\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_a 
        = ((IData)(vlSelfRef.full_adder_tb__DOT__x) 
           & (IData)(vlSelfRef.full_adder_tb__DOT__y));
    vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__sum_a 
        = ((IData)(vlSelfRef.full_adder_tb__DOT__x) 
           ^ (IData)(vlSelfRef.full_adder_tb__DOT__y));
    vlSelfRef.full_adder_tb__DOT__sum = ((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__sum_a) 
                                         ^ (IData)(vlSelfRef.full_adder_tb__DOT__cin));
    vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__c_b 
        = ((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__sum_a) 
           & (IData)(vlSelfRef.full_adder_tb__DOT__cin));
}

void Vfull_adder_tb___024root___eval_nba(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_nba\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfull_adder_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vfull_adder_tb___024root___timing_resume(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___timing_resume\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfull_adder_tb___024root___eval_triggers__act(Vfull_adder_tb___024root* vlSelf);

bool Vfull_adder_tb___024root___eval_phase__act(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_phase__act\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfull_adder_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfull_adder_tb___024root___timing_resume(vlSelf);
        Vfull_adder_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfull_adder_tb___024root___eval_phase__nba(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_phase__nba\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfull_adder_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_adder_tb___024root___dump_triggers__nba(Vfull_adder_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_adder_tb___024root___dump_triggers__act(Vfull_adder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfull_adder_tb___024root___eval(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vfull_adder_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/full_adder_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfull_adder_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/full_adder_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfull_adder_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfull_adder_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfull_adder_tb___024root___eval_debug_assertions(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_debug_assertions\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
