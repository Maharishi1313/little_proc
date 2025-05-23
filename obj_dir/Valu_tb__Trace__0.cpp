// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_tb__Syms.h"


void Valu_tb___024root__trace_chg_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_chg_0\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Valu_tb___024root__trace_chg_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_chg_0_sub_0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.alu_tb__DOT__alu_op),4);
    bufp->chgIData(oldp+1,(vlSelfRef.alu_tb__DOT__src1),32);
    bufp->chgIData(oldp+2,(vlSelfRef.alu_tb__DOT__src2),32);
    bufp->chgIData(oldp+3,(((8U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                             ? ((4U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                 ? 0U : ((2U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                          ? ((1U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                              ? 0U : 
                                             (~ (vlSelfRef.alu_tb__DOT__src1 
                                                 ^ vlSelfRef.alu_tb__DOT__src2)))
                                          : ((1U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                              ? (vlSelfRef.alu_tb__DOT__src1 
                                                 < vlSelfRef.alu_tb__DOT__src2)
                                              : VL_LTS_III(32, vlSelfRef.alu_tb__DOT__src1, vlSelfRef.alu_tb__DOT__src2))))
                             : ((4U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                 ? ((2U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                     ? ((1U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                         ? VL_SHIFTRS_III(32,32,32, vlSelfRef.alu_tb__DOT__src1, vlSelfRef.alu_tb__DOT__src2)
                                         : VL_SHIFTR_III(32,32,32, vlSelfRef.alu_tb__DOT__src1, vlSelfRef.alu_tb__DOT__src2))
                                     : ((1U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                         ? VL_SHIFTL_III(32,32,32, vlSelfRef.alu_tb__DOT__src1, vlSelfRef.alu_tb__DOT__src2)
                                         : (vlSelfRef.alu_tb__DOT__src1 
                                            ^ vlSelfRef.alu_tb__DOT__src2)))
                                 : ((2U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                     ? ((1U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                         ? (vlSelfRef.alu_tb__DOT__src1 
                                            | vlSelfRef.alu_tb__DOT__src2)
                                         : (vlSelfRef.alu_tb__DOT__src1 
                                            & vlSelfRef.alu_tb__DOT__src2))
                                     : ((1U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                         ? (vlSelfRef.alu_tb__DOT__src1 
                                            - vlSelfRef.alu_tb__DOT__src2)
                                         : (vlSelfRef.alu_tb__DOT__src1 
                                            + vlSelfRef.alu_tb__DOT__src2)))))),32);
}

void Valu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_cleanup\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
