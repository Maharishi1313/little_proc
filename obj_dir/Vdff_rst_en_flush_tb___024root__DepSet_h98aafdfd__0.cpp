// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff_rst_en_flush_tb.h for the primary calling header

#include "Vdff_rst_en_flush_tb__pch.h"
#include "Vdff_rst_en_flush_tb__Syms.h"
#include "Vdff_rst_en_flush_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___dump_triggers__act(Vdff_rst_en_flush_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdff_rst_en_flush_tb___024root___eval_triggers__act(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_triggers__act\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dff_rst_en_flush_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dff_rst_en_flush_tb__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__dff_rst_en_flush_tb__DOT__clk__0 
        = vlSelfRef.dff_rst_en_flush_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdff_rst_en_flush_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
