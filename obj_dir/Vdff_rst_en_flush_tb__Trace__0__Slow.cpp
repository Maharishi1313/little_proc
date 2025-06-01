// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdff_rst_en_flush_tb__Syms.h"


VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_init_sub__TOP__0(Vdff_rst_en_flush_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root__trace_init_sub__TOP__0\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("dff_rst_en_flush_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dff_flush_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+12,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+7,0,"din_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+8,0,"dout_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("dff_rst_en_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+12,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+7,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+12,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+9,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_init_top(Vdff_rst_en_flush_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root__trace_init_top\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdff_rst_en_flush_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdff_rst_en_flush_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdff_rst_en_flush_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_register(Vdff_rst_en_flush_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root__trace_register\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdff_rst_en_flush_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdff_rst_en_flush_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdff_rst_en_flush_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdff_rst_en_flush_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_const_0_sub_0(Vdff_rst_en_flush_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root__trace_const_0\n"); );
    // Init
    Vdff_rst_en_flush_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdff_rst_en_flush_tb___024root*>(voidSelf);
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdff_rst_en_flush_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_const_0_sub_0(Vdff_rst_en_flush_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root__trace_const_0_sub_0\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+11,(1U),32);
    bufp->fullBit(oldp+12,(0U));
}

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_full_0_sub_0(Vdff_rst_en_flush_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root__trace_full_0\n"); );
    // Init
    Vdff_rst_en_flush_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdff_rst_en_flush_tb___024root*>(voidSelf);
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdff_rst_en_flush_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdff_rst_en_flush_tb___024root__trace_full_0_sub_0(Vdff_rst_en_flush_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff_rst_en_flush_tb___024root__trace_full_0_sub_0\n"); );
    Vdff_rst_en_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.dff_rst_en_flush_tb__DOT__d));
    bufp->fullBit(oldp+2,(vlSelfRef.dff_rst_en_flush_tb__DOT__clk));
    bufp->fullBit(oldp+3,(vlSelfRef.dff_rst_en_flush_tb__DOT__reset));
    bufp->fullBit(oldp+4,(vlSelfRef.dff_rst_en_flush_tb__DOT__en));
    bufp->fullBit(oldp+5,(vlSelfRef.dff_rst_en_flush_tb__DOT__flush));
    bufp->fullBit(oldp+6,(((~ (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__flush)) 
                           & (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i))));
    bufp->fullBit(oldp+7,(((~ (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__flush)) 
                           & (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__d))));
    bufp->fullBit(oldp+8,(vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i));
    bufp->fullBit(oldp+9,(vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i));
    bufp->fullBit(oldp+10,(((IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__en)
                             ? ((~ (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__flush)) 
                                & (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__d))
                             : (IData)(vlSelfRef.dff_rst_en_flush_tb__DOT__dff_flush_inst__DOT__dout_i))));
}
