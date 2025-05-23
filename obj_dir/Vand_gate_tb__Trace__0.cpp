// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vand_gate_tb__Syms.h"


void Vand_gate_tb___024root__trace_chg_0_sub_0(Vand_gate_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vand_gate_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root__trace_chg_0\n"); );
    // Init
    Vand_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vand_gate_tb___024root*>(voidSelf);
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vand_gate_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vand_gate_tb___024root__trace_chg_0_sub_0(Vand_gate_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root__trace_chg_0_sub_0\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.and_gate_tb__DOT__x));
    bufp->chgBit(oldp+1,(vlSelfRef.and_gate_tb__DOT__y));
    bufp->chgBit(oldp+2,(((IData)(vlSelfRef.and_gate_tb__DOT__x) 
                          & (IData)(vlSelfRef.and_gate_tb__DOT__y))));
}

void Vand_gate_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root__trace_cleanup\n"); );
    // Init
    Vand_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vand_gate_tb___024root*>(voidSelf);
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
