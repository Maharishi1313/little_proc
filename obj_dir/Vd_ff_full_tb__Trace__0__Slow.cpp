// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vd_ff_full_tb__Syms.h"


VL_ATTR_COLD void Vd_ff_full_tb___024root__trace_init_sub__TOP__0(Vd_ff_full_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root__trace_init_sub__TOP__0\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("d_ff_full_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("d_ff_full_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vd_ff_full_tb___024root__trace_init_top(Vd_ff_full_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root__trace_init_top\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vd_ff_full_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vd_ff_full_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vd_ff_full_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vd_ff_full_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vd_ff_full_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vd_ff_full_tb___024root__trace_register(Vd_ff_full_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root__trace_register\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vd_ff_full_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vd_ff_full_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vd_ff_full_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vd_ff_full_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vd_ff_full_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root__trace_const_0\n"); );
    // Init
    Vd_ff_full_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vd_ff_full_tb___024root*>(voidSelf);
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vd_ff_full_tb___024root__trace_full_0_sub_0(Vd_ff_full_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vd_ff_full_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root__trace_full_0\n"); );
    // Init
    Vd_ff_full_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vd_ff_full_tb___024root*>(voidSelf);
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vd_ff_full_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vd_ff_full_tb___024root__trace_full_0_sub_0(Vd_ff_full_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_full_tb___024root__trace_full_0_sub_0\n"); );
    Vd_ff_full_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.d_ff_full_tb__DOT__d));
    bufp->fullBit(oldp+2,(vlSelfRef.d_ff_full_tb__DOT__clk));
    bufp->fullBit(oldp+3,(vlSelfRef.d_ff_full_tb__DOT__reset));
    bufp->fullBit(oldp+4,(vlSelfRef.d_ff_full_tb__DOT__en));
    bufp->fullBit(oldp+5,(vlSelfRef.d_ff_full_tb__DOT__q));
}
