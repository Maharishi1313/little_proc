// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vd_ff_full_tb__Syms.h"


void Vd_ff_full_tb___024root__trace_chg_0_sub_0(Vd_ff_full_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vd_ff_full_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root__trace_chg_0\n"); );
    // Init
    Vd_ff_full_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vd_ff_full_tb___024root*>(voidSelf);
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vd_ff_full_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vd_ff_full_tb___024root__trace_chg_0_sub_0(Vd_ff_full_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root__trace_chg_0_sub_0\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.d_ff_full_tb__DOT__d));
    bufp->chgBit(oldp+1,(vlSelfRef.d_ff_full_tb__DOT__clk));
    bufp->chgBit(oldp+2,(vlSelfRef.d_ff_full_tb__DOT__reset));
    bufp->chgBit(oldp+3,(vlSelfRef.d_ff_full_tb__DOT__en));
    bufp->chgBit(oldp+4,(vlSelfRef.d_ff_full_tb__DOT__q));
}

void Vd_ff_full_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root__trace_cleanup\n"); );
    // Init
    Vd_ff_full_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vd_ff_full_tb___024root*>(voidSelf);
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
