// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vd_ff_full_tb.h for the primary calling header

#include "Vd_ff_full_tb__pch.h"
#include "Vd_ff_full_tb__Syms.h"
#include "Vd_ff_full_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vd_ff_full_tb___024root___dump_triggers__act(Vd_ff_full_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vd_ff_full_tb___024root___eval_triggers__act(Vd_ff_full_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root___eval_triggers__act\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.d_ff_full_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__d_ff_full_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.d_ff_full_tb__DOT__reset)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__d_ff_full_tb__DOT__reset__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.d_ff_full_tb__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__d_ff_full_tb__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__d_ff_full_tb__DOT__clk__0 
        = vlSelfRef.d_ff_full_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__d_ff_full_tb__DOT__reset__0 
        = vlSelfRef.d_ff_full_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vd_ff_full_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
