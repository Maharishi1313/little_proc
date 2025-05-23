// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore_top_tb__Syms.h"


void Vcore_top_tb___024root__trace_chg_0_sub_0(Vcore_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcore_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root__trace_chg_0\n"); );
    // Init
    Vcore_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore_top_tb___024root*>(voidSelf);
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcore_top_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcore_top_tb___024root__trace_chg_0_sub_0(Vcore_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root__trace_chg_0_sub_0\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<7>/*223:0*/ __Vtemp_6;
    VlWide<7>/*223:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<5>/*159:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_62;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                               >> 0x16U))) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                            >> 4U) 
                                           & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                               >> 0x16U))]
                                     : 0U))),32);
        bufp->chgIData(oldp+1,(((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                               >> 0x11U))) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                            >> 3U) 
                                           & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                               >> 0x11U))]
                                     : 0U))),32);
        bufp->chgIData(oldp+2,(((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                        >> 4U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                           >> 0x16U))]
                                 : 0U)),32);
        bufp->chgIData(oldp+3,(((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                        >> 3U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                           >> 0x11U))]
                                 : 0U)),32);
        __Vtemp_6[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U];
        __Vtemp_6[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U];
        __Vtemp_6[2U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                             == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                          >> 0x11U))) 
                            & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                            : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                       >> 3U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                               [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                          >> 0x11U))]
                                : 0U)) << 0x1bU) | 
                         (0x7ffffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U]));
        __Vtemp_6[3U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                             == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                          >> 0x11U))) 
                            & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                            : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                       >> 3U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                               [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                          >> 0x11U))]
                                : 0U)) >> 5U) | (((
                                                   ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                                        >> 0x16U))) 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                                   : 
                                                  ((1U 
                                                    & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                                        >> 4U) 
                                                       & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                                    ? 
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                                   [
                                                   (0x1fU 
                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                                       >> 0x16U))]
                                                    : 0U)) 
                                                 << 0x1bU));
        __Vtemp_6[4U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                             == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                          >> 0x16U))) 
                            & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                            : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                       >> 4U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                               [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                          >> 0x16U))]
                                : 0U)) >> 5U) | ((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
                                                           << 0x25U) 
                                                          | (((QData)((IData)(
                                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U])) 
                                                              << 5U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U])) 
                                                                >> 0x1bU)))) 
                                                 << 0x1bU));
        __Vtemp_6[5U] = (((IData)((((QData)((IData)(
                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
                                    << 0x25U) | (((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U])) 
                                                    >> 0x1bU)))) 
                          >> 5U) | ((IData)(((((QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U])) 
                                                    >> 0x1bU))) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp_6[6U] = ((IData)(((((QData)((IData)(
                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
                                    << 0x25U) | (((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U])) 
                                                    >> 0x1bU))) 
                                  >> 0x20U)) >> 5U);
        bufp->chgWData(oldp+4,(__Vtemp_6),219);
        if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
            __Vtemp_13[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U];
            __Vtemp_13[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U];
            __Vtemp_13[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U];
            __Vtemp_13[3U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[3U];
            __Vtemp_13[4U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U];
            __Vtemp_13[5U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U];
            __Vtemp_13[6U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U];
        } else {
            __Vtemp_13[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U];
            __Vtemp_13[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U];
            __Vtemp_13[2U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                               >> 0x11U))) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                            >> 3U) 
                                           & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                               >> 0x11U))]
                                     : 0U)) << 0x1bU) 
                              | (0x7ffffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U]));
            __Vtemp_13[3U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                               >> 0x11U))) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                            >> 3U) 
                                           & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                               >> 0x11U))]
                                     : 0U)) >> 5U) 
                              | (((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                    == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                                 >> 0x16U))) 
                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                              >> 4U) 
                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                       ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                      [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                                 >> 0x16U))]
                                       : 0U)) << 0x1bU));
            __Vtemp_13[4U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                               >> 0x16U))) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                            >> 4U) 
                                           & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                               >> 0x16U))]
                                     : 0U)) >> 5U) 
                              | ((IData)((((QData)((IData)(
                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
                                           << 0x25U) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U])) 
                                                >> 0x1bU)))) 
                                 << 0x1bU));
            __Vtemp_13[5U] = (((IData)((((QData)((IData)(
                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U])) 
                                              >> 0x1bU)))) 
                               >> 5U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U])) 
                                                         >> 0x1bU))) 
                                                  >> 0x20U)) 
                                         << 0x1bU));
            __Vtemp_13[6U] = ((IData)(((((QData)((IData)(
                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U])) 
                                              >> 0x1bU))) 
                                       >> 0x20U)) >> 5U);
        }
        bufp->chgWData(oldp+11,(__Vtemp_13),219);
        bufp->chgIData(oldp+18,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+50,(vlSelfRef.core_top_tb__DOT__cycle_count),32);
        bufp->chgSData(oldp+51,((0xfffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)),12);
        bufp->chgBit(oldp+52,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_addr_valid));
        bufp->chgIData(oldp+53,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q),32);
        bufp->chgIData(oldp+54,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                         >> (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))),32);
        bufp->chgBit(oldp+55,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid));
        bufp->chgIData(oldp+56,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in),32);
        bufp->chgIData(oldp+57,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[1U]),32);
        bufp->chgBit(oldp+58,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[2U])));
        bufp->chgIData(oldp+59,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U] 
                                  << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U] 
                                            >> 0x1bU))),32);
        bufp->chgIData(oldp+60,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U] 
                                  << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                            >> 0x1bU))),32);
        bufp->chgCData(oldp+61,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                          >> 0x16U))),5);
        bufp->chgCData(oldp+62,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                          >> 0x11U))),5);
        bufp->chgIData(oldp+63,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                  << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                              >> 0x11U))),32);
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                     >> 0x10U))));
        bufp->chgCData(oldp+65,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                          >> 0xbU))),5);
        bufp->chgCData(oldp+66,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                          >> 6U))),5);
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                     >> 5U))));
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                     >> 4U))));
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                     >> 3U))));
        bufp->chgBit(oldp+70,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                     >> 2U))));
        bufp->chgBit(oldp+71,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                     >> 1U))));
        bufp->chgBit(oldp+72,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U])));
        bufp->chgBit(oldp+73,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                               >> 0x1fU)));
        bufp->chgBit(oldp+74,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+75,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+76,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+77,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+78,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+79,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x19U))));
        bufp->chgBit(oldp+80,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x18U))));
        bufp->chgBit(oldp+81,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+82,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+83,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+84,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x14U))));
        bufp->chgBit(oldp+85,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+86,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+87,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+88,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+89,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0xeU))));
        bufp->chgBit(oldp+91,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0xdU))));
        bufp->chgBit(oldp+92,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+93,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+94,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+95,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 9U))));
        bufp->chgBit(oldp+96,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 8U))));
        bufp->chgBit(oldp+97,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 7U))));
        bufp->chgBit(oldp+98,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 6U))));
        bufp->chgBit(oldp+99,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+100,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+101,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+102,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+103,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+104,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U])));
        bufp->chgIData(oldp+105,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[6U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+106,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+107,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+108,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                             >> 0x1bU))),32);
        bufp->chgCData(oldp+109,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+110,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+111,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                   << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                               >> 0x11U))),32);
        bufp->chgBit(oldp+112,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+113,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+114,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                           >> 6U))),5);
        bufp->chgBit(oldp+115,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 5U))));
        bufp->chgBit(oldp+116,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+117,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+118,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+119,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+120,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U])));
        bufp->chgBit(oldp+121,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+122,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+124,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+125,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+126,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+127,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+128,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+130,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+131,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+132,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+133,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+134,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+135,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+136,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+137,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+138,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+139,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+140,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+141,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+142,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+143,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+144,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+145,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+146,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+147,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+148,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+149,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+150,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+151,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+152,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])));
        bufp->chgBit(oldp+153,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall));
        bufp->chgIData(oldp+154,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data),32);
        bufp->chgCData(oldp+155,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr),5);
        bufp->chgBit(oldp+156,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en));
        bufp->chgBit(oldp+157,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_mul_busy));
        bufp->chgBit(oldp+158,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state));
        bufp->chgBit(oldp+159,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                      | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                         >> 2U)))));
        bufp->chgBit(oldp+160,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall));
        bufp->chgIData(oldp+161,(((0xfffffffcU & ((- (IData)(
                                                             ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                                              & ((~ 
                                                                  (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                                   >> 8U)) 
                                                                 & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                                                     >> 3U) 
                                                                    | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load)))))) 
                                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr)) 
                                  | ((- (IData)((1U 
                                                 & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                     >> 2U) 
                                                    & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                         >> 0xcU) 
                                                        | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                           >> 1U)) 
                                                       & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                          >> 8U)))))) 
                                     & (((IData)(1U) 
                                         + ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                             << 0x16U) 
                                            | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                               >> 0xaU))) 
                                        << 2U)))),32);
        bufp->chgBit(oldp+162,((1U & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                       & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                              >> 8U)) 
                                          & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward)))) 
                                      | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                          >> 2U) & 
                                         ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U]) 
                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                             >> 8U)))))));
        bufp->chgIData(oldp+163,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata),32);
        bufp->chgBit(oldp+164,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rvalid_out));
        bufp->chgIData(oldp+165,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr),32);
        bufp->chgBit(oldp+166,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_12) 
                                | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_14))));
        bufp->chgIData(oldp+167,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata),32);
        bufp->chgIData(oldp+168,((((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                                   & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout 
                                              >> 0x20U))) 
                                  | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                                      & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout 
                                                 >> 0x20U))) 
                                     | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                                         & (IData)(
                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout 
                                                    >> 0x20U))) 
                                        | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                           & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out))))),32);
        bufp->chgIData(oldp+169,((((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                                  | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                                      & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout)) 
                                     | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                                         & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                                        | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                           & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out))))),32);
        bufp->chgIData(oldp+170,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[0U]),32);
        bufp->chgSData(oldp+171,((0x3fcU & (((- (IData)(
                                                        ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                                         & ((~ 
                                                             (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                              >> 8U)) 
                                                            & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                                                >> 3U) 
                                                               | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load)))))) 
                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                               >> 2U) 
                                                              & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                                   >> 0xcU) 
                                                                  | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                                     >> 1U)) 
                                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                                    >> 8U)))))) 
                                               & (((IData)(1U) 
                                                   + 
                                                   ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                     << 0x16U) 
                                                    | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                       >> 0xaU))) 
                                                  << 2U))))),10);
        bufp->chgSData(oldp+172,((0x3fcU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr)),10);
        bufp->chgIData(oldp+173,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout 
                                          >> 6U))),32);
        bufp->chgCData(oldp+174,((0x1fU & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout 
                                                   >> 1U)))),5);
        bufp->chgBit(oldp+175,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout))));
        bufp->chgIData(oldp+176,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e3)
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[0U]
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[1U])),32);
        bufp->chgCData(oldp+177,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e3),5);
        bufp->chgBit(oldp+178,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3));
        bufp->chgIData(oldp+179,(((0xfU & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout) 
                                                          >> 4U)))) 
                                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout))) 
                                  | (((- (IData)((1U 
                                                  & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout)))) 
                                      & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_46)
                                          ? ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
                                              << 1U) 
                                             | (1U 
                                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                          : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff))) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout) 
                                                         >> 4U)) 
                                                       & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout)))))) 
                                        & ((1U & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                                   >> 1U) 
                                                  & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                                      >> 3U) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                                      >> 2U))))
                                            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp
                                            : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))))),32);
        bufp->chgCData(oldp+180,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr),5);
        bufp->chgBit(oldp+181,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en));
        bufp->chgIData(oldp+182,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data 
                                   & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data_mask) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            ((0x1000U 
                                                              == 
                                                              (0x1080U 
                                                               & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U])) 
                                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data 
                                                                >> 7U)))))) 
                                      << 8U) | ((- (IData)(
                                                           (1U 
                                                            & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                                >> 0xeU) 
                                                               & ((~ 
                                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                                    >> 7U)) 
                                                                  & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data 
                                                                     >> 0xfU)))))) 
                                                << 0x10U)))),32);
        bufp->chgCData(oldp+183,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                           >> 1U))),5);
        bufp->chgBit(oldp+184,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en));
        bufp->chgIData(oldp+185,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+186,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
        bufp->chgIData(oldp+187,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+188,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout)),32);
        bufp->chgIData(oldp+189,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+190,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
        bufp->chgIData(oldp+191,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out),32);
        bufp->chgIData(oldp+192,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out),32);
        bufp->chgIData(oldp+193,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__alu_wb_data_i),32);
        bufp->chgBit(oldp+194,((1U & (IData)(((1U == 
                                               (3U 
                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])) 
                                              & (0x22U 
                                                 == 
                                                 (0x22U 
                                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U])))))));
        bufp->chgIData(oldp+195,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b),32);
        bufp->chgIData(oldp+196,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout),32);
        bufp->chgIData(oldp+197,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm),32);
        bufp->chgBit(oldp+198,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(
                                                                  ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                                    << 5U) 
                                                                   | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                                      >> 0x1bU)))) 
                                                  + 
                                                  ((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm)) 
                                                   + (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                         >> 0x19U)))))) 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+199,((1U & (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                           >> 0x1aU)) 
                                       & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                              >> 0x1fU)) 
                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                             >> 0x1fU))) 
                                      | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                          >> 0x1aU) 
                                         & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                                >> 0x1fU)) 
                                            & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                               >> 0x1fU)))))));
        bufp->chgBit(oldp+200,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                >> 0x1fU)));
        bufp->chgCData(oldp+201,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_3) 
                                   << 1U) | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_4))),3);
        bufp->chgIData(oldp+202,(((((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                     << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                               >> 0x1bU)) 
                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_3) 
                                                       >> 1U)))))) 
                                  | ((((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                        << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                  >> 0x1bU)) 
                                      & ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_3)))))) 
                                     | ((~ ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                             << 5U) 
                                            | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                               >> 0x1bU))) 
                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                           & (- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_4)))))))),32);
        bufp->chgIData(oldp+203,((((- (IData)((1U & 
                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                >> 0x15U)))) 
                                   & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                        << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                  >> 0x1bU)) 
                                      << (0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))) 
                                  | (((- (IData)((1U 
                                                  & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                     >> 0x13U)))) 
                                      & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                           << 5U) | 
                                          (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                           >> 0x1bU)) 
                                         >> (0x1fU 
                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                       >> 0x14U)))) 
                                        & VL_SHIFTRS_III(32,32,5, 
                                                         ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                           << 5U) 
                                                          | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                             >> 0x1bU)), 
                                                         (0x1fU 
                                                          & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b)))))),32);
        bufp->chgBit(oldp+204,((0U != (7U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                             >> 0x16U)))));
        bufp->chgBit(oldp+205,((IData)((0U != (0x380000U 
                                               & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])))));
        bufp->chgBit(oldp+206,(((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                    >> 0x12U)) & (0U 
                                                  != 
                                                  (0x6000000U 
                                                   & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])))));
        bufp->chgBit(oldp+207,((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                       >> 0x12U) & 
                                      (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                            >> 0x11U)) 
                                        & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                            >> 0x1fU) 
                                           ^ (((~ (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                   >> 0x1aU)) 
                                               & ((~ 
                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                                    >> 0x1fU)) 
                                                  & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                                     >> 0x1fU))) 
                                              | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                  >> 0x1aU) 
                                                 & ((~ 
                                                     (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                                      >> 0x1fU)) 
                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                                       >> 0x1fU)))))) 
                                       | ((~ (IData)(
                                                     (1ULL 
                                                      & (((QData)((IData)(
                                                                          ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                                            << 5U) 
                                                                           | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                                              >> 0x1bU)))) 
                                                          + 
                                                          ((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm)) 
                                                           + (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                                >> 0x19U)))))) 
                                                         >> 0x20U)))) 
                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                             >> 0x11U)))))));
        bufp->chgIData(oldp+208,(VL_SHIFTRS_III(32,32,5, 
                                                ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                  << 5U) 
                                                 | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                    >> 0x1bU)), 
                                                (0x1fU 
                                                 & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))),32);
        bufp->chgBit(oldp+209,((((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                  << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                            >> 0x1bU)) 
                                == vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b)));
        bufp->chgBit(oldp+210,((((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                  << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                            >> 0x1bU)) 
                                != vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b)));
        bufp->chgBit(oldp+211,((1U & (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                           >> 0x11U)) 
                                       & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                           >> 0x1fU) 
                                          ^ (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                  >> 0x1aU)) 
                                              & ((~ 
                                                  (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                                   >> 0x1fU)) 
                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                                    >> 0x1fU))) 
                                             | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                 >> 0x1aU) 
                                                & ((~ 
                                                    (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                                     >> 0x1fU)) 
                                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                                      >> 0x1fU)))))) 
                                      | ((~ (IData)(
                                                    (1ULL 
                                                     & (((QData)((IData)(
                                                                         ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                                           << 5U) 
                                                                          | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                                             >> 0x1bU)))) 
                                                         + 
                                                         ((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm)) 
                                                          + (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                                >> 0x19U)))))) 
                                                        >> 0x20U)))) 
                                         & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+212,((1U & (~ (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                              >> 0x11U)) 
                                          & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                              >> 0x1fU) 
                                             ^ (((~ 
                                                  (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                   >> 0x1aU)) 
                                                 & ((~ 
                                                     (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                                      >> 0x1fU)) 
                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                                       >> 0x1fU))) 
                                                | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                    >> 0x1aU) 
                                                   & ((~ 
                                                       (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                                        >> 0x1fU)) 
                                                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                                         >> 0x1fU)))))) 
                                         | ((~ (IData)(
                                                       (1ULL 
                                                        & (((QData)((IData)(
                                                                            ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                                              << 5U) 
                                                                             | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                                                >> 0x1bU)))) 
                                                            + 
                                                            ((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm)) 
                                                             + (QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                                >> 0x19U)))))) 
                                                           >> 0x20U)))) 
                                            & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                               >> 0x11U)))))));
        bufp->chgQData(oldp+213,((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__alu_wb_data_i)) 
                                   << 6U) | (QData)((IData)(
                                                            ((0x3eU 
                                                              & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                                 >> 0xaU)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          ((1U 
                                                                            == 
                                                                            (3U 
                                                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])) 
                                                                           & (0x22U 
                                                                              == 
                                                                              (0x22U 
                                                                               & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U])))))))))),38);
        bufp->chgQData(oldp+215,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout),38);
        bufp->chgQData(oldp+217,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din),64);
        bufp->chgQData(oldp+219,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout),64);
        bufp->chgBit(oldp+221,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1));
        bufp->chgBit(oldp+222,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early));
        bufp->chgBit(oldp+223,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish));
        bufp->chgBit(oldp+224,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                 | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state)) 
                                & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish)) 
                                   & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff))))));
        bufp->chgCData(oldp+225,((0x3fU & ((- (IData)(
                                                      ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish)) 
                                                       & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state) 
                                                          & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                                                             & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable))))))) 
                                           & ((IData)(1U) 
                                              + ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count) 
                                                 + (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff)))))),6);
        bufp->chgCData(oldp+226,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count),6);
        bufp->chgQData(oldp+227,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff),33);
        bufp->chgBit(oldp+229,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52))));
        bufp->chgBit(oldp+230,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52) 
                                    & (0x21U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count))) 
                                   | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)))));
        bufp->chgQData(oldp+231,((0x1ffffffffULL & 
                                  (((- (QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state)))))) 
                                    & (QData)((IData)(
                                                      ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                        << 5U) 
                                                       | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                          >> 0x1bU))))) 
                                   | (((- (QData)((IData)(
                                                          ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state) 
                                                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_44))))) 
                                       & ((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff)) 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in 
                                                                            >> 0x20U))))))) 
                                          << (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff))) 
                                      | ((- (QData)((IData)(
                                                            ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_44)) 
                                                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state))))) 
                                         & (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)) 
                                             << 1U) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (~ (IData)(
                                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in 
                                                                             >> 0x20U)))))))))))),33);
        bufp->chgQData(oldp+233,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff),33);
        bufp->chgQData(oldp+235,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in),33);
        bufp->chgQData(oldp+237,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff),33);
        bufp->chgQData(oldp+239,((0x1ffffffffULL & 
                                  ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add)
                                    ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff
                                    : (~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)))),33);
        __Vtemp_15[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
        __Vtemp_15[1U] = 0U;
        __Vtemp_15[2U] = 0U;
        VL_SHIFTL_WWI(65,65,6, __Vtemp_16, __Vtemp_15, (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff));
        bufp->chgQData(oldp+241,((0x1ffffffffULL & 
                                  ((- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state))) 
                                   & (((- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct))) 
                                       & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff) 
                                      | (((- (QData)((IData)(
                                                             (1U 
                                                              & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)) 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                                                     >> 4U))))))) 
                                          & (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)) 
                                              << 1U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                           >> 0x20U))))))) 
                                         | ((- (QData)((IData)(
                                                               ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)) 
                                                                & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                                                   >> 4U))))) 
                                            & (((QData)((IData)(
                                                                (1U 
                                                                 & __Vtemp_16[2U]))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp_16[1U]))))))))),33);
        bufp->chgBit(oldp+243,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                      >> 3U))));
        bufp->chgBit(oldp+244,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                      >> 2U))));
        bufp->chgIData(oldp+245,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp),32);
        bufp->chgIData(oldp+246,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff),32);
        bufp->chgIData(oldp+247,(((1U & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                          >> 1U) & 
                                         (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                           >> 3U) ^ 
                                          ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                           >> 2U))))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp
                                   : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff))),32);
        bufp->chgIData(oldp+248,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
                                   << 1U) | (1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))),32);
        bufp->chgIData(oldp+249,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_46)
                                   ? ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
                                       << 1U) | (1U 
                                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                   : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff))),32);
        bufp->chgBit(oldp+250,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                      >> 1U))));
        bufp->chgBit(oldp+251,(((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                    >> 0x11U)) & (0U 
                                                  != 
                                                  ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                    << 5U) 
                                                   | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                      >> 0x1bU))))));
        bufp->chgBit(oldp+252,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))));
        bufp->chgBit(oldp+253,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add));
        __Vtemp_19[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
        __Vtemp_19[1U] = 0U;
        __Vtemp_19[2U] = 0U;
        VL_SHIFTL_WWI(65,65,6, __Vtemp_20, __Vtemp_19, (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff));
        bufp->chgQData(oldp+254,((0x1ffffffffULL & 
                                  (((- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct))) 
                                    & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff) 
                                   | (((- (QData)((IData)(
                                                          (1U 
                                                           & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)) 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                                                  >> 4U))))))) 
                                       & (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)) 
                                           << 1U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff 
                                                                                >> 0x20U))))))) 
                                      | ((- (QData)((IData)(
                                                            ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)) 
                                                             & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                                                >> 4U))))) 
                                         & (((QData)((IData)(
                                                             (1U 
                                                              & __Vtemp_20[2U]))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_20[1U])))))))),33);
        __Vtemp_23[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
        __Vtemp_23[1U] = 0U;
        __Vtemp_23[2U] = 0U;
        VL_SHIFTL_WWI(65,65,6, __Vtemp_24, __Vtemp_23, (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff));
        __Vtemp_25[0U] = __Vtemp_24[0U];
        __Vtemp_25[1U] = __Vtemp_24[1U];
        __Vtemp_25[2U] = (1U & __Vtemp_24[2U]);
        bufp->chgWData(oldp+256,(__Vtemp_25),65);
        bufp->chgBit(oldp+259,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct));
        bufp->chgBit(oldp+260,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff));
        bufp->chgBit(oldp+261,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1))));
        bufp->chgBit(oldp+262,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout) 
                                      >> 4U))));
        bufp->chgCData(oldp+263,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__smallnum),4);
        bufp->chgCData(oldp+264,((0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout))),4);
        bufp->chgBit(oldp+265,((IData)((6U == (6U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))))));
        bufp->chgCData(oldp+266,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50),5);
        bufp->chgCData(oldp+267,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51),5);
        bufp->chgCData(oldp+268,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift),6);
        bufp->chgCData(oldp+269,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff),6);
        bufp->chgBit(oldp+270,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable));
        bufp->chgBit(oldp+271,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                      >> 4U))));
        bufp->chgQData(oldp+272,((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))),33);
        bufp->chgCData(oldp+274,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_raw),4);
        bufp->chgCData(oldp+275,((0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout))),4);
        bufp->chgIData(oldp+276,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)),32);
        bufp->chgIData(oldp+277,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp),31);
        bufp->chgQData(oldp+278,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                   | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52) 
                                       & (0x21U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count))) 
                                      | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)),33);
        bufp->chgIData(oldp+280,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)),32);
        bufp->chgIData(oldp+281,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_c__DOT__dout_temp),31);
        bufp->chgBit(oldp+282,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en))));
        bufp->chgCData(oldp+283,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable) 
                                   << 4U) | (0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift)))),5);
        bufp->chgCData(oldp+284,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout),5);
        bufp->chgBit(oldp+285,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en));
        bufp->chgQData(oldp+286,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout),64);
        bufp->chgQData(oldp+288,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)),64);
        bufp->chgQData(oldp+290,((((QData)((IData)(
                                                   (1U 
                                                    & ((~ 
                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                         >> 0x11U)) 
                                                       & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                          >> 0x1aU))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                                 << 5U) 
                                                                | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                                   >> 0x1bU)))))),33);
        bufp->chgQData(oldp+292,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
                                   ? (((QData)((IData)(
                                                       (1U 
                                                        & ((~ 
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                             >> 0x11U)) 
                                                           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                              >> 0x1aU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                                     << 5U) 
                                                                    | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                                       >> 0x1bU)))))
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)),33);
        bufp->chgCData(oldp+294,((((8U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                          >> 0x17U)) 
                                   | (4U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                            >> 0x18U))) 
                                  | ((((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                           >> 0x11U)) 
                                       & (0U != ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                  << 5U) 
                                                 | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                    >> 0x1bU)))) 
                                      << 1U) | (1U 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                   >> 2U))))),4);
        bufp->chgCData(oldp+295,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout),4);
        bufp->chgCData(oldp+296,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
                                   ? (((8U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                              >> 0x17U)) 
                                       | (4U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                >> 0x18U))) 
                                      | ((((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                               >> 0x11U)) 
                                           & (0U != 
                                              ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                << 5U) 
                                               | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                  >> 0x1bU)))) 
                                          << 1U) | 
                                         (1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                >> 2U))))
                                   : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))),4);
        bufp->chgCData(oldp+297,((0x1fU & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
                                            ? ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                << 0x15U) 
                                               | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                  >> 0xbU))
                                            : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr)))),5);
        bufp->chgQData(oldp+298,((0x1ffffffffULL & 
                                  (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                    | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52))
                                    ? (((- (QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state)))))) 
                                        & (QData)((IData)(
                                                          ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                            << 5U) 
                                                           | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                              >> 0x1bU))))) 
                                       | (((- (QData)((IData)(
                                                              ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state) 
                                                               & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_44))))) 
                                           & ((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff)) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in 
                                                                                >> 0x20U))))))) 
                                              << (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff))) 
                                          | ((- (QData)((IData)(
                                                                ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_44)) 
                                                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state))))) 
                                             & (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)) 
                                                 << 1U) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in 
                                                                                >> 0x20U))))))))))
                                    : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff))),33);
        bufp->chgCData(oldp+300,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early) 
                                   << 4U) | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__smallnum))),5);
        bufp->chgCData(oldp+301,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout),5);
        bufp->chgBit(oldp+302,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 6U))));
        bufp->chgBit(oldp+303,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 5U))));
        bufp->chgBit(oldp+304,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 4U))));
        bufp->chgBit(oldp+305,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 2U))));
        bufp->chgBit(oldp+306,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 3U))));
        bufp->chgBit(oldp+307,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout))));
        bufp->chgBit(oldp+308,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 1U))));
        bufp->chgBit(oldp+309,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__lsu_stall_q));
        bufp->chgBit(oldp+310,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid));
        bufp->chgIData(oldp+311,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[3U] 
                                   << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+312,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                   << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+313,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] 
                                   << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+314,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr),32);
        bufp->chgCData(oldp+315,((0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U])),5);
        bufp->chgBit(oldp+316,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load));
        bufp->chgBit(oldp+317,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward));
        bufp->chgBit(oldp+318,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+319,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+320,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+321,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+322,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+323,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 9U))));
        bufp->chgBit(oldp+324,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+325,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+326,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 8U))));
        bufp->chgIData(oldp+327,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                   << 0x18U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+328,(((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                                   ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] 
                                      >> (0x18U & (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                   >> 5U)))
                                   : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                                      >> (0x18U & (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                   >> 5U))))),32);
        bufp->chgCData(oldp+329,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                           >> 3U))),5);
        bufp->chgIData(oldp+330,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                   << 0x1fU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U] 
                                                >> 1U))),32);
        bufp->chgBit(oldp+331,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                      >> 1U))));
        bufp->chgBit(oldp+332,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])));
        bufp->chgIData(oldp+333,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U]),32);
        bufp->chgBit(oldp+334,(((IData)((0U != (0x1800U 
                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U]))) 
                                & (IData)((((0x300U 
                                             == (0x300U 
                                                 & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                            & (0x140U 
                                               == (0x140U 
                                                   & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U]))) 
                                           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr 
                                              == (((IData)(1U) 
                                                   + 
                                                   ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                     << 0x16U) 
                                                    | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                       >> 0xaU))) 
                                                  << 2U)))))));
        bufp->chgBit(oldp+335,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+336,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+337,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+338,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 8U))));
        bufp->chgBit(oldp+339,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 9U))));
        bufp->chgBit(oldp+340,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+341,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 7U))));
        bufp->chgBit(oldp+342,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+343,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                   << 0x13U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+344,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[4U] 
                                   << 0x12U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+345,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data),32);
        bufp->chgIData(oldp+346,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data_mask),32);
        bufp->chgIData(oldp+347,((((- (IData)((1U & (IData)(
                                                            ((0x1000U 
                                                              == 
                                                              (0x1080U 
                                                               & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U])) 
                                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data 
                                                                >> 7U)))))) 
                                   << 8U) | ((- (IData)(
                                                        (1U 
                                                         & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                             >> 0xeU) 
                                                            & ((~ 
                                                                (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                                 >> 7U)) 
                                                               & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data 
                                                                  >> 0xfU)))))) 
                                             << 0x10U))),32);
        bufp->chgCData(oldp+348,((0x18U & ((- ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                << 0x13U) 
                                               | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                  >> 0xdU))) 
                                           << 3U))),5);
        bufp->chgCData(oldp+349,((7U & ((IData)(4U) 
                                        - (3U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                 >> 0xdU))))),3);
        bufp->chgIData(oldp+350,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                   << 0x1fU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U] 
                                                >> 1U))),32);
        bufp->chgIData(oldp+351,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_tag_out),32);
        bufp->chgIData(oldp+352,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_out),32);
        bufp->chgIData(oldp+353,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_tag_out),32);
        bufp->chgIData(oldp+354,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_out),32);
        bufp->chgIData(oldp+355,(((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U])
                                   ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9 
                                      | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10 
                                         & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U]))
                                   : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9 
                                      | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10 
                                         & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata)))),32);
        bufp->chgBit(oldp+356,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U])));
        bufp->chgIData(oldp+357,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U]),32);
        bufp->chgQData(oldp+358,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask_base),64);
        bufp->chgQData(oldp+360,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask),64);
        bufp->chgQData(oldp+362,(((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                                   ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_3 
                                      | ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask) 
                                         & (QData)((IData)(
                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U]))))
                                   : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_3 
                                      | ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask) 
                                         & (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata)))))),64);
        __Vtemp_28[0U] = (IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata))));
        __Vtemp_28[1U] = ((0xfffffffeU & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                           << 0x1cU) 
                                          | (0xffffffeU 
                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] 
                                                >> 4U)))) 
                          | (IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata))) 
                                     >> 0x20U)));
        __Vtemp_28[2U] = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)) 
                                     << 0x21U) | (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr))))) 
                           << 8U) | ((0xfffffffeU & 
                                      ((0xf8U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U] 
                                                 << 3U)) 
                                       | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                           << 2U) | 
                                          ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load) 
                                           << 1U)))) 
                                     | (1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                              >> 4U))));
        __Vtemp_28[3U] = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)) 
                                     << 0x21U) | (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr))))) 
                           >> 0x18U) | ((IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)) 
                                                   << 0x21U) 
                                                  | (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr)))) 
                                                 >> 0x20U)) 
                                        << 8U));
        bufp->chgWData(oldp+364,(__Vtemp_28),112);
        bufp->chgWData(oldp+368,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout),112);
        __Vtemp_32[0U] = (IData)((((QData)((IData)(
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U]))) 
                                                    & (IData)(
                                                              (((0x300U 
                                                                 == 
                                                                 (0x300U 
                                                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                                                & (0x140U 
                                                                   == 
                                                                   (0x140U 
                                                                    & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U]))) 
                                                               & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr 
                                                                  == 
                                                                  (((IData)(1U) 
                                                                    + 
                                                                    ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                                      << 0x16U) 
                                                                     | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                                        >> 0xaU))) 
                                                                   << 2U))))))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata))));
        __Vtemp_32[1U] = ((0xfffffffeU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U]) 
                          | (IData)(((((QData)((IData)(
                                                       ((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1800U 
                                                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U]))) 
                                                        & (IData)(
                                                                  (((0x300U 
                                                                     == 
                                                                     (0x300U 
                                                                      & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                                                    & (0x140U 
                                                                       == 
                                                                       (0x140U 
                                                                        & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U]))) 
                                                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr 
                                                                      == 
                                                                      (((IData)(1U) 
                                                                        + 
                                                                        ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                                          << 0x16U) 
                                                                         | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                                            >> 0xaU))) 
                                                                       << 2U))))))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata))) 
                                     >> 0x20U)));
        __Vtemp_32[2U] = (((IData)((0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])) 
                                        >> 8U)))) << 0xdU) 
                          | ((0xfffffffeU & ((0x1fc0U 
                                              & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                 >> 3U)) 
                                             | (0x3eU 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                   >> 2U)))) 
                             | (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])));
        __Vtemp_32[3U] = ((((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                             ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] 
                                >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                             >> 5U)))
                             : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                                >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                             >> 5U)))) 
                           << 0xeU) | (((IData)((0x1ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                                     << 0x18U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])) 
                                                       >> 8U)))) 
                                        >> 0x13U) | 
                                       ((IData)(((0x1ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])) 
                                                        >> 8U))) 
                                                 >> 0x20U)) 
                                        << 0xdU)));
        __Vtemp_32[4U] = (((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                            ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] 
                               >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                            >> 5U)))
                            : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                               >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                            >> 5U)))) 
                          >> 0x12U);
        bufp->chgWData(oldp+372,(__Vtemp_32),142);
        bufp->chgWData(oldp+377,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout),142);
        bufp->chgCData(oldp+382,(((0x70U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                            >> 4U)) 
                                  | ((0xcU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                              >> 0x1aU)) 
                                     | ((2U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                               >> 0x10U)) 
                                        | (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U]))))),7);
        bufp->chgCData(oldp+383,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout),7);
        __Vtemp_34[0U] = (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                            << 0x14U) | (0xfffe0U & 
                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                          >> 0xcU))) 
                          | (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 0xbU)));
        __Vtemp_34[1U] = ((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                    >> 0xcU)) | ((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                                                           << 0x25U) 
                                                          | (((QData)((IData)(
                                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                                              << 5U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                                >> 0x1bU)))) 
                                                 << 5U));
        __Vtemp_34[2U] = (((IData)((((QData)((IData)(
                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                     >> 0x1bU)))) 
                           >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                                                   << 0x25U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                                      << 5U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                        >> 0x1bU))) 
                                                 >> 0x20U)) 
                                        << 5U));
        __Vtemp_34[3U] = ((IData)(((((QData)((IData)(
                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                     >> 0x1bU))) 
                                   >> 0x20U)) >> 0x1bU);
        bufp->chgWData(oldp+384,(__Vtemp_34),101);
        bufp->chgWData(oldp+388,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout),101);
        bufp->chgBit(oldp+392,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e1));
        bufp->chgBit(oldp+393,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e2));
        bufp->chgIData(oldp+394,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1),32);
        bufp->chgIData(oldp+395,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1),32);
        bufp->chgBit(oldp+396,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1));
        bufp->chgBit(oldp+397,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1) 
                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1 
                                   >> 0x1fU))));
        bufp->chgBit(oldp+398,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1));
        bufp->chgBit(oldp+399,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1) 
                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1 
                                   >> 0x1fU))));
        bufp->chgQData(oldp+400,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2),33);
        bufp->chgQData(oldp+402,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2),33);
        bufp->chgWData(oldp+404,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3),65);
        bufp->chgBit(oldp+407,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e1));
        bufp->chgBit(oldp+408,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e2));
        bufp->chgBit(oldp+409,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e3));
        bufp->chgCData(oldp+410,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e1),5);
        bufp->chgCData(oldp+411,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e2),5);
        bufp->chgBit(oldp+412,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e1));
        bufp->chgBit(oldp+413,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e2));
        bufp->chgIData(oldp+414,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+415,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+416,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
        bufp->chgIData(oldp+417,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout)),32);
        VL_EXTENDS_WQ(66,33, __Vtemp_37, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2);
        __Vtemp_38[0U] = __Vtemp_37[0U];
        __Vtemp_38[1U] = __Vtemp_37[1U];
        __Vtemp_38[2U] = (3U & __Vtemp_37[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_40, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2);
        __Vtemp_41[0U] = __Vtemp_40[0U];
        __Vtemp_41[1U] = __Vtemp_40[1U];
        __Vtemp_41[2U] = (3U & __Vtemp_40[2U]);
        VL_MULS_WWW(66, __Vtemp_42, __Vtemp_38, __Vtemp_41);
        __Vtemp_43[0U] = __Vtemp_42[0U];
        __Vtemp_43[1U] = __Vtemp_42[1U];
        __Vtemp_43[2U] = (3U & __Vtemp_42[2U]);
        bufp->chgWData(oldp+418,(__Vtemp_43),66);
        bufp->chgQData(oldp+421,((((QData)((IData)(
                                                   ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1) 
                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1 
                                                       >> 0x1fU)))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1)))),33);
        bufp->chgQData(oldp+423,((((QData)((IData)(
                                                   ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1) 
                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1 
                                                       >> 0x1fU)))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1)))),33);
        bufp->chgQData(oldp+425,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout),64);
        bufp->chgQData(oldp+427,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout),64);
        bufp->chgQData(oldp+429,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout),64);
        bufp->chgBit(oldp+431,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellinp__out_rd_wr_en_ff__din));
        VL_EXTENDS_WQ(66,33, __Vtemp_47, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2);
        __Vtemp_48[0U] = __Vtemp_47[0U];
        __Vtemp_48[1U] = __Vtemp_47[1U];
        __Vtemp_48[2U] = (3U & __Vtemp_47[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_50, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2);
        __Vtemp_51[0U] = __Vtemp_50[0U];
        __Vtemp_51[1U] = __Vtemp_50[1U];
        __Vtemp_51[2U] = (3U & __Vtemp_50[2U]);
        VL_MULS_WWW(66, __Vtemp_52, __Vtemp_48, __Vtemp_51);
        __Vtemp_55[0U] = __Vtemp_52[0U];
        __Vtemp_55[1U] = __Vtemp_52[1U];
        __Vtemp_55[2U] = (1U & __Vtemp_52[2U]);
        bufp->chgWData(oldp+432,(__Vtemp_55),65);
        bufp->chgSData(oldp+435,((0x3ffU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q 
                                            >> 2U))),10);
        bufp->chgQData(oldp+436,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data),64);
        bufp->chgQData(oldp+438,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                  >> (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q))),64);
        bufp->chgIData(oldp+440,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[4U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+441,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                             >> 0x1bU))),32);
        bufp->chgCData(oldp+442,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+443,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+444,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                   << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                               >> 0x11U))),32);
        bufp->chgBit(oldp+445,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+446,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+447,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                           >> 6U))),5);
        bufp->chgBit(oldp+448,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 5U))));
        bufp->chgBit(oldp+449,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+450,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+451,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+452,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+453,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U])));
        bufp->chgBit(oldp+454,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+455,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+456,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+457,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+458,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+459,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+460,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+461,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+462,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+463,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+464,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+465,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+466,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+467,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+468,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+469,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+470,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+471,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+472,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+473,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+474,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+475,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+476,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+477,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+478,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+479,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+480,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+481,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+482,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+483,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+484,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+485,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U])));
        bufp->chgBit(oldp+486,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+487,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+488,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+489,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+490,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+491,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+492,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+493,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+494,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+495,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+496,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+497,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+498,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+499,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+500,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+501,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+502,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+503,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+504,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+505,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+506,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+507,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+508,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+509,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+510,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+511,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+512,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+513,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+514,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 9U)))));
        bufp->chgBit(oldp+515,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 8U)))));
        bufp->chgBit(oldp+516,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 7U)))));
        bufp->chgBit(oldp+517,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 6U)))));
        bufp->chgBit(oldp+518,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 5U)))));
        bufp->chgBit(oldp+519,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 4U)))));
        bufp->chgBit(oldp+520,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 3U)))));
        bufp->chgBit(oldp+521,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 2U)))));
        bufp->chgBit(oldp+522,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 1U)))));
        bufp->chgBit(oldp+523,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out))));
        bufp->chgWData(oldp+524,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i),155);
        bufp->chgBit(oldp+529,((1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))));
        bufp->chgWData(oldp+530,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout),155);
        if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
            __Vtemp_56[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U];
            __Vtemp_56[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U];
            __Vtemp_56[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U];
            __Vtemp_56[3U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U];
            __Vtemp_56[4U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U];
        } else {
            __Vtemp_56[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U];
            __Vtemp_56[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U];
            __Vtemp_56[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U];
            __Vtemp_56[3U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U];
            __Vtemp_56[4U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[4U];
        }
        bufp->chgWData(oldp+535,(__Vtemp_56),155);
        bufp->chgIData(oldp+540,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+541,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+542,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[3U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+543,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[3U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U] 
                                             >> 0x1bU))),32);
        bufp->chgCData(oldp+544,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+545,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+546,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U] 
                                   << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                               >> 0x11U))),32);
        bufp->chgBit(oldp+547,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+548,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+549,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                           >> 6U))),5);
        bufp->chgBit(oldp+550,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                      >> 5U))));
        bufp->chgBit(oldp+551,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+552,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+553,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+554,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+555,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U])));
        bufp->chgBit(oldp+556,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+557,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+558,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+559,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+560,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+561,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+562,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+563,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+564,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+565,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+566,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+567,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+568,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+569,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+570,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+571,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+572,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+573,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+574,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+575,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+576,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+577,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+578,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+579,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+580,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+581,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+582,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+583,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+584,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+585,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+586,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+587,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U])));
        bufp->chgIData(oldp+588,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[6U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[5U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+589,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[5U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+590,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+591,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                             >> 0x1bU))),32);
        bufp->chgCData(oldp+592,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+593,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+594,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                   << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                               >> 0x11U))),32);
        bufp->chgBit(oldp+595,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+596,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+597,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                           >> 6U))),5);
        bufp->chgBit(oldp+598,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 5U))));
        bufp->chgBit(oldp+599,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+600,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+601,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+602,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+603,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U])));
        bufp->chgBit(oldp+604,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+605,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+606,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+607,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+608,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+609,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+610,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+611,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+612,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+613,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+614,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+615,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+616,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+617,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+618,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+619,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+620,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+621,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+622,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+623,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+624,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+625,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+626,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+627,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+628,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+629,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+630,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+631,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+632,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+633,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+634,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+635,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U])));
        bufp->chgIData(oldp+636,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[2U] 
                                   << 0xdU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[1U] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+637,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[1U] 
                                   << 0xdU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                               >> 0x13U))),32);
        bufp->chgCData(oldp+638,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                           >> 0xeU))),5);
        bufp->chgCData(oldp+639,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+640,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                           >> 4U))),5);
        bufp->chgBit(oldp+641,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+642,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+643,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+644,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U])));
        bufp->chgWData(oldp+645,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout),219);
        __Vtemp_57[0U] = (((IData)((((QData)((IData)(
                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U])) 
                                                     >> 0x1bU)))) 
                           << 0x13U) | ((0x7fe00U & 
                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U] 
                                          >> 8U)) | 
                                        ((0x1f0U & 
                                          (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                           >> 7U)) 
                                         | (((8U & 
                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                               >> 4U)) 
                                             | (4U 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                                   >> 3U))) 
                                            | ((2U 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                                   >> 2U)) 
                                               | (IData)(
                                                         (0U 
                                                          != 
                                                          (0x30000000U 
                                                           & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U]))))))));
        __Vtemp_57[1U] = (((IData)((((QData)((IData)(
                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U])) 
                                                     >> 0x1bU)))) 
                           >> 0xdU) | ((IData)(((((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U])) 
                                                     << 5U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U])) 
                                                       >> 0x1bU))) 
                                                >> 0x20U)) 
                                       << 0x13U));
        __Vtemp_57[2U] = ((IData)(((((QData)((IData)(
                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U])) 
                                                     >> 0x1bU))) 
                                   >> 0x20U)) >> 0xdU);
        bufp->chgWData(oldp+652,(__Vtemp_57),83);
        bufp->chgWData(oldp+655,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout),83);
        if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
            __Vtemp_59[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U];
            __Vtemp_59[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[1U];
            __Vtemp_59[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[2U];
        } else {
            __Vtemp_59[0U] = (((IData)((((QData)((IData)(
                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U])) 
                                              >> 0x1bU)))) 
                               << 0x13U) | ((0x7fe00U 
                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U] 
                                                >> 8U)) 
                                            | ((0x1f0U 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                                   >> 7U)) 
                                               | (((8U 
                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                                       >> 4U)) 
                                                   | (4U 
                                                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                                         >> 3U))) 
                                                  | ((2U 
                                                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                                         >> 2U)) 
                                                     | (IData)(
                                                               (0U 
                                                                != 
                                                                (0x30000000U 
                                                                 & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U]))))))));
            __Vtemp_59[1U] = (((IData)((((QData)((IData)(
                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U])) 
                                              >> 0x1bU)))) 
                               >> 0xdU) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
                                                      << 0x25U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U])) 
                                                         << 5U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U])) 
                                                           >> 0x1bU))) 
                                                    >> 0x20U)) 
                                           << 0x13U));
            __Vtemp_59[2U] = ((IData)(((((QData)((IData)(
                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U])) 
                                              >> 0x1bU))) 
                                       >> 0x20U)) >> 0xdU);
        }
        bufp->chgWData(oldp+658,(__Vtemp_59),83);
        bufp->chgBit(oldp+661,((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                       >> 4U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))));
        bufp->chgBit(oldp+662,((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                       >> 3U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))));
        bufp->chgBit(oldp+663,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xaU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+664,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+665,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xaU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+666,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xbU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+667,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+668,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xbU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+669,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xcU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+670,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+671,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xcU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+672,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xdU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+673,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+674,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xdU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+675,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xeU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+676,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+677,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xeU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+678,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xfU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+679,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+680,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xfU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+681,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x10U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+682,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+683,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x10U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+684,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x11U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+685,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+686,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x11U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+687,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x12U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+688,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+689,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x12U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+690,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x13U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+691,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+692,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x13U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+693,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+694,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+695,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+696,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x14U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+697,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+698,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x14U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+699,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x15U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+700,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+701,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x15U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+702,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x16U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+703,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+704,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x16U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+705,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x17U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+706,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+707,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x17U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+708,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x18U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+709,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+710,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x18U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+711,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x19U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+712,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+713,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x19U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+714,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1aU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+715,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+716,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1aU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+717,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1bU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+718,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+719,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1bU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+720,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1cU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+721,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+722,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1cU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+723,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1dU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+724,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+725,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1dU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+726,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (2U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+727,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+728,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (2U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+729,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1eU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+730,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+731,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1eU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+732,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1fU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+733,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+734,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1fU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+735,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (3U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+736,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+737,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (3U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+738,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (4U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+739,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+740,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (4U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+741,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (5U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+742,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+743,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (5U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+744,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (6U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+745,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+746,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (6U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+747,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (7U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+748,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+749,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (7U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+750,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (8U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+751,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+752,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (8U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+753,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (9U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+754,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+755,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (9U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        __Vtemp_60[0U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                    >> 
                                                    (3U 
                                                     & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))));
        __Vtemp_60[1U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                     >> 
                                                     (3U 
                                                      & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))) 
                                  >> 0x20U));
        __Vtemp_60[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
        bufp->chgWData(oldp+756,(__Vtemp_60),65);
        bufp->chgWData(oldp+759,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout),65);
        if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
            __Vtemp_62[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[0U];
            __Vtemp_62[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[1U];
            __Vtemp_62[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[2U];
        } else {
            __Vtemp_62[0U] = (IData)((((QData)((IData)(
                                                       (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                        >> 
                                                        (3U 
                                                         & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))));
            __Vtemp_62[1U] = (IData)(((((QData)((IData)(
                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                         >> 
                                                         (3U 
                                                          & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))) 
                                      >> 0x20U));
            __Vtemp_62[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
        }
        bufp->chgWData(oldp+762,(__Vtemp_62),65);
        bufp->chgIData(oldp+765,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_d),32);
        bufp->chgBit(oldp+766,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__update_pc));
        bufp->chgIData(oldp+767,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__update_pc)
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_d
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)),32);
    }
    bufp->chgBit(oldp+768,(vlSelfRef.core_top_tb__DOT__clk));
    bufp->chgBit(oldp+769,(vlSelfRef.core_top_tb__DOT__rst_n));
    bufp->chgIData(oldp+770,(vlSelfRef.core_top_tb__DOT__fd),32);
    bufp->chgIData(oldp+771,(vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+772,(vlSelfRef.core_top_tb__DOT__unnamedblk2__DOT__i),32);
}

void Vcore_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root__trace_cleanup\n"); );
    // Init
    Vcore_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore_top_tb___024root*>(voidSelf);
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
