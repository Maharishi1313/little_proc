// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff_rst_en_flush_tb.h for the primary calling header

#include "Vdff_rst_en_flush_tb__pch.h"
#include "Vdff_rst_en_flush_tb__Syms.h"
#include "Vdff_rst_en_flush_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___dump_triggers__stl(Vdff_rst_en_flush_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root___eval_triggers__stl(Vdff_rst_en_flush_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root___eval_triggers__stl\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdff_rst_en_flush_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
