// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdff_rst_en_flush_tb__Syms.h"


void Vdff_rst_en_flush_tb___024root__trace_chg_0_sub_0(Vdff_rst_en_flush_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdff_rst_en_flush_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root__trace_chg_0\n"); );
    // Init
    Vdff_rst_en_flush_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdff_rst_en_flush_tb___024root*>(voidSelf);
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdff_rst_en_flush_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdff_rst_en_flush_tb___024root__trace_chg_0_sub_0(Vdff_rst_en_flush_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root__trace_chg_0_sub_0\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.dff_rst_en_flush_tb__DOT__d));
    bufp->chgBit(oldp+1,(vlSelfRef.dff_rst_en_flush_tb__DOT__clk));
    bufp->chgBit(oldp+2,(vlSelfRef.dff_rst_en_flush_tb__DOT__reset));
    bufp->chgBit(oldp+3,(vlSelfRef.dff_rst_en_flush_tb__DOT__en));
    bufp->chgBit(oldp+4,(vlSelfRef.dff_rst_en_flush_tb__DOT__flush));
    bufp->chgBit(oldp+5,(((~ (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__flush)) 
                          & (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i))));
    bufp->chgBit(oldp+6,(((~ (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__flush)) 
                          & (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__d))));
    bufp->chgBit(oldp+7,(vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i));
    bufp->chgBit(oldp+8,(vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i));
    bufp->chgBit(oldp+9,(((IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__en)
                           ? ((~ (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__flush)) 
                              & (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__d))
                           : (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i))));
}

void Vdff_rst_en_flush_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root__trace_cleanup\n"); );
    // Init
    Vdff_rst_en_flush_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdff_rst_en_flush_tb___024root*>(voidSelf);
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
