// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrs_tb__Syms.h"


void Vrs_tb___024root__trace_chg_0_sub_0(Vrs_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrs_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root__trace_chg_0\n"); );
    // Init
    Vrs_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrs_tb___024root*>(voidSelf);
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrs_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vrs_tb___024root__trace_chg_0_sub_0(Vrs_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root__trace_chg_0_sub_0\n"); );
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.rs_tb__DOT__x),4);
    bufp->chgCData(oldp+1,(vlSelfRef.rs_tb__DOT__y),2);
    bufp->chgCData(oldp+2,((0xfU & ((IData)(vlSelfRef.rs_tb__DOT__x) 
                                    >> (IData)(vlSelfRef.rs_tb__DOT__y)))),4);
    bufp->chgCData(oldp+3,((0xfU & VL_SHIFTRS_III(4,4,2, (IData)(vlSelfRef.rs_tb__DOT__x), (IData)(vlSelfRef.rs_tb__DOT__y)))),4);
}

void Vrs_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrs_tb___024root__trace_cleanup\n"); );
    // Init
    Vrs_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrs_tb___024root*>(voidSelf);
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
