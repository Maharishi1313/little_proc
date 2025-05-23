// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfull_adder_tb__Syms.h"


void Vfull_adder_tb___024root__trace_chg_0_sub_0(Vfull_adder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfull_adder_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root__trace_chg_0\n"); );
    // Init
    Vfull_adder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfull_adder_tb___024root*>(voidSelf);
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfull_adder_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfull_adder_tb___024root__trace_chg_0_sub_0(Vfull_adder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root__trace_chg_0_sub_0\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.full_adder_tb__DOT__x));
    bufp->chgBit(oldp+1,(vlSelfRef.full_adder_tb__DOT__y));
    bufp->chgBit(oldp+2,(vlSelfRef.full_adder_tb__DOT__cin));
    bufp->chgBit(oldp+3,(((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__sum_a) 
                          ^ (IData)(vlSelfRef.full_adder_tb__DOT__cin))));
    bufp->chgBit(oldp+4,((((IData)(vlSelfRef.full_adder_tb__DOT__x) 
                           & (IData)(vlSelfRef.full_adder_tb__DOT__y)) 
                          | ((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__sum_a) 
                             & (IData)(vlSelfRef.full_adder_tb__DOT__cin)))));
    bufp->chgBit(oldp+5,(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__sum_a));
    bufp->chgBit(oldp+6,(((IData)(vlSelfRef.full_adder_tb__DOT__x) 
                          & (IData)(vlSelfRef.full_adder_tb__DOT__y))));
    bufp->chgBit(oldp+7,(((IData)(vlSelfRef.full_adder_tb__DOT__full_adder_inst__DOT__sum_a) 
                          & (IData)(vlSelfRef.full_adder_tb__DOT__cin))));
}

void Vfull_adder_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root__trace_cleanup\n"); );
    // Init
    Vfull_adder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfull_adder_tb___024root*>(voidSelf);
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
