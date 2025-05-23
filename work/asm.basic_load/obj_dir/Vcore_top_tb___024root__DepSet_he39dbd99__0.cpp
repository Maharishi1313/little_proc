// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_tb.h for the primary calling header

#include "Vcore_top_tb__pch.h"
#include "Vcore_top_tb__Syms.h"
#include "Vcore_top_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcore_top_tb___024root___eval_initial__TOP__Vtiming__0(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TIMEFORMAT_IINI(0xfffffff7U, 3U, std::string{"ns"}, 0xaU, vlSymsp->_vm_contextp__);
    vlSelfRef.core_top_tb__DOT__fd = VL_FOPEN_NN(std::string{"rtl.log"}
                                                 , 
                                                 std::string{"w"});
    ;
    vlSelfRef.core_top_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_had6561ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge core_top_tb.clk)", 
                                                         "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                                         31);
    vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_had6561ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge core_top_tb.clk)", 
                                                         "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                                         31);
    vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_had6561ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge core_top_tb.clk)", 
                                                         "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                                         31);
    vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_had6561ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge core_top_tb.clk)", 
                                                         "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                                         31);
    vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelfRef.__VtrigSched_had6561ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge core_top_tb.clk)", 
                                                         "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                                         31);
    vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelfRef.__VtrigSched_had6561ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge core_top_tb.clk)", 
                                                         "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                                         31);
    vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i = 6U;
    co_await vlSelfRef.__VtrigSched_had6561ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge core_top_tb.clk)", 
                                                         "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                                         31);
    vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i = 7U;
    co_await vlSelfRef.__VtrigSched_had6561ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge core_top_tb.clk)", 
                                                         "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                                         31);
    vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i = 8U;
    co_await vlSelfRef.__VtrigSched_had6561ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge core_top_tb.clk)", 
                                                         "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                                         31);
    vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i = 9U;
    co_await vlSelfRef.__VtrigSched_had6561ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge core_top_tb.clk)", 
                                                         "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                                         31);
    vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelfRef.core_top_tb__DOT__rst_n = 1U;
    vlSelfRef.core_top_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x64U, vlSelfRef.core_top_tb__DOT__unnamedblk2__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_had6561ce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge core_top_tb.clk)", 
                                                             "/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 
                                                             35);
        vlSelfRef.core_top_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.core_top_tb__DOT__unnamedblk2__DOT__i);
    }
    VL_FINISH_MT("/home/maharishi/sysv/risc-core/tb/core_top_tb.sv", 37, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_top_tb___024root___dump_triggers__act(Vcore_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcore_top_tb___024root___eval_triggers__act(Vcore_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root___eval_triggers__act\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.core_top_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__core_top_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.core_top_tb__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__core_top_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__core_top_tb__DOT__clk__0 
        = vlSelfRef.core_top_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcore_top_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
