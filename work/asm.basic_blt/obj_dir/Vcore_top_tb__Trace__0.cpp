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
    VlWide<7>/*223:0*/ __Vtemp_9;
    VlWide<7>/*223:0*/ __Vtemp_21;
    VlWide<7>/*223:0*/ __Vtemp_33;
    VlWide<7>/*223:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_174;
    VlWide<3>/*95:0*/ __Vtemp_175;
    VlWide<3>/*95:0*/ __Vtemp_178;
    VlWide<3>/*95:0*/ __Vtemp_179;
    VlWide<3>/*95:0*/ __Vtemp_182;
    VlWide<3>/*95:0*/ __Vtemp_183;
    VlWide<3>/*95:0*/ __Vtemp_184;
    VlWide<4>/*127:0*/ __Vtemp_187;
    VlWide<5>/*159:0*/ __Vtemp_191;
    VlWide<4>/*127:0*/ __Vtemp_193;
    VlWide<3>/*95:0*/ __Vtemp_196;
    VlWide<3>/*95:0*/ __Vtemp_197;
    VlWide<3>/*95:0*/ __Vtemp_199;
    VlWide<3>/*95:0*/ __Vtemp_200;
    VlWide<3>/*95:0*/ __Vtemp_201;
    VlWide<3>/*95:0*/ __Vtemp_202;
    VlWide<3>/*95:0*/ __Vtemp_206;
    VlWide<3>/*95:0*/ __Vtemp_207;
    VlWide<3>/*95:0*/ __Vtemp_209;
    VlWide<3>/*95:0*/ __Vtemp_210;
    VlWide<3>/*95:0*/ __Vtemp_211;
    VlWide<3>/*95:0*/ __Vtemp_214;
    VlWide<5>/*159:0*/ __Vtemp_217;
    VlWide<5>/*159:0*/ __Vtemp_220;
    VlWide<5>/*159:0*/ __Vtemp_224;
    VlWide<3>/*95:0*/ __Vtemp_489;
    VlWide<3>/*95:0*/ __Vtemp_491;
    VlWide<3>/*95:0*/ __Vtemp_493;
    VlWide<3>/*95:0*/ __Vtemp_495;
    VlWide<3>/*95:0*/ __Vtemp_497;
    VlWide<3>/*95:0*/ __Vtemp_498;
    VlWide<3>/*95:0*/ __Vtemp_499;
    VlWide<3>/*95:0*/ __Vtemp_502;
    VlWide<3>/*95:0*/ __Vtemp_506;
    VlWide<3>/*95:0*/ __Vtemp_511;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr)) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                     & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                         >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                                     : 0U))),32);
        bufp->chgIData(oldp+1,(((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                     & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                         >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                                     : 0U))),32);
        bufp->chgIData(oldp+2,((((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                 & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                     >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                                 : 0U)),32);
        bufp->chgIData(oldp+3,((((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                 & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                     >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                                 : 0U)),32);
        if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            __Vtemp_9[0U] = 0U;
            __Vtemp_9[1U] = 0U;
        } else {
            __Vtemp_9[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U];
            __Vtemp_9[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U];
        }
        __Vtemp_9[2U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                             == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                            & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                            : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                    >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                               [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                                : 0U)) << 0x1bU) | 
                         ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                           ? 0U : (0x7ffffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])));
        __Vtemp_9[3U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                             == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                            & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                            : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                    >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                               [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                                : 0U)) >> 5U) | (((
                                                   ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                                    == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr)) 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                                   : 
                                                  (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                    & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                                        >> 4U) 
                                                       & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                                    ? 
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                                   [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                                                    : 0U)) 
                                                 << 0x1bU));
        __Vtemp_9[4U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                             == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr)) 
                            & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                            : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                    >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                               [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                                : 0U)) >> 5U) | ((IData)(
                                                         ((1U 
                                                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                           ? 0ULL
                                                           : 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                            << 0x25U) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                               << 5U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                                 >> 0x1bU))))) 
                                                 << 0x1bU));
        __Vtemp_9[5U] = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                    >> 0x1bU))))) 
                          >> 5U) | ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                   << 0x25U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                      << 5U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                        >> 0x1bU)))) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp_9[6U] = ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                    >> 0x1bU)))) 
                                  >> 0x20U)) >> 5U);
        bufp->chgWData(oldp+4,(__Vtemp_9),219);
        if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            __Vtemp_21[0U] = 0U;
            __Vtemp_21[1U] = 0U;
            __Vtemp_21[2U] = 0U;
            __Vtemp_21[3U] = 0U;
            __Vtemp_21[4U] = 0U;
            __Vtemp_21[5U] = 0U;
            __Vtemp_21[6U] = 0U;
        } else {
            if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
                __Vtemp_21[0U] = 0U;
                __Vtemp_21[1U] = 0U;
            } else {
                __Vtemp_21[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U];
                __Vtemp_21[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U];
            }
            __Vtemp_21[2U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                     & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                         >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                                     : 0U)) << 0x1bU) 
                              | ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                  ? 0U : (0x7ffffffU 
                                          & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])));
            __Vtemp_21[3U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                     & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                         >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                                     : 0U)) >> 5U) 
                              | (((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                    == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr)) 
                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                       & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                           >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                       ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                      [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                                       : 0U)) << 0x1bU));
            __Vtemp_21[4U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr)) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                     & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                         >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                                     : 0U)) >> 5U) 
                              | ((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                           ? 0ULL : 
                                          (((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                 >> 0x1bU))))) 
                                 << 0x1bU));
            __Vtemp_21[5U] = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                         >> 0x1bU))))) 
                               >> 5U) | ((IData)(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                    ? 0ULL
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                        << 5U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                          >> 0x1bU)))) 
                                                  >> 0x20U)) 
                                         << 0x1bU));
            __Vtemp_21[6U] = ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                         >> 0x1bU)))) 
                                       >> 0x20U)) >> 5U);
        }
        bufp->chgWData(oldp+11,(__Vtemp_21),219);
        __Vtemp_33[5U] = ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                           ? 0U : (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                     << 5U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                       >> 0x1bU))))) 
                                    >> 5U) | ((IData)(
                                                      (((1U 
                                                         & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                         ? 0ULL
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                          << 0x25U) 
                                                         | (((QData)((IData)(
                                                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                             << 5U) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                               >> 0x1bU)))) 
                                                       >> 0x20U)) 
                                              << 0x1bU)));
        if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
            __Vtemp_34[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U];
            __Vtemp_34[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U];
            __Vtemp_34[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U];
            __Vtemp_34[3U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[3U];
            __Vtemp_34[4U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U];
            __Vtemp_34[5U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U];
            __Vtemp_34[6U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U];
        } else if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            __Vtemp_34[0U] = 0U;
            __Vtemp_34[1U] = 0U;
            __Vtemp_34[2U] = 0U;
            __Vtemp_34[3U] = 0U;
            __Vtemp_34[4U] = 0U;
            __Vtemp_34[5U] = __Vtemp_33[5U];
            __Vtemp_34[6U] = 0U;
        } else {
            if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
                __Vtemp_34[0U] = 0U;
                __Vtemp_34[1U] = 0U;
            } else {
                __Vtemp_34[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U];
                __Vtemp_34[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U];
            }
            __Vtemp_34[2U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                     & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                         >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                                     : 0U)) << 0x1bU) 
                              | ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                  ? 0U : (0x7ffffffU 
                                          & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])));
            __Vtemp_34[3U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                     & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                         >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                                     : 0U)) >> 5U) 
                              | (((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                    == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr)) 
                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                       & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                           >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                       ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                      [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                                       : 0U)) << 0x1bU));
            __Vtemp_34[4U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                  == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr)) 
                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                 : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                     & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                         >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                     ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                    [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                                     : 0U)) >> 5U) 
                              | ((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                           ? 0ULL : 
                                          (((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                 >> 0x1bU))))) 
                                 << 0x1bU));
            __Vtemp_34[5U] = __Vtemp_33[5U];
            __Vtemp_34[6U] = ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                         >> 0x1bU)))) 
                                       >> 0x20U)) >> 5U);
        }
        bufp->chgWData(oldp+18,(__Vtemp_34),219);
        bufp->chgIData(oldp+25,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+57,(vlSelfRef.core_top_tb__DOT__cycle_count),32);
        bufp->chgBit(oldp+58,(vlSelfRef.core_top_tb__DOT__finish_seq_detected));
        bufp->chgSData(oldp+59,((0xfffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)),12);
        bufp->chgBit(oldp+60,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_addr_valid));
        bufp->chgIData(oldp+61,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q),32);
        bufp->chgIData(oldp+62,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                         >> (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))),32);
        bufp->chgBit(oldp+63,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid));
        bufp->chgIData(oldp+64,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in),32);
        bufp->chgIData(oldp+65,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                  ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U])),32);
        bufp->chgBit(oldp+66,((IData)(((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                       & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[2U]))));
        bufp->chgIData(oldp+67,(((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U]) 
                                  << 5U) | (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                              ? 0U : 
                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U]) 
                                            >> 0x1bU))),32);
        bufp->chgIData(oldp+68,(((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U]) 
                                  << 5U) | (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                              ? 0U : 
                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U]) 
                                            >> 0x1bU))),32);
        bufp->chgCData(oldp+69,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                            ? 0U : 
                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U]) 
                                          >> 0x16U))),5);
        bufp->chgCData(oldp+70,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                            ? 0U : 
                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U]) 
                                          >> 0x11U))),5);
        bufp->chgIData(oldp+71,(((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U]) 
                                  << 0xfU) | (((1U 
                                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                ? 0U
                                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                              >> 0x11U))),32);
        bufp->chgBit(oldp+72,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                     >> 0x10U))));
        bufp->chgCData(oldp+73,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                            ? 0U : 
                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                          >> 0xbU))),5);
        bufp->chgCData(oldp+74,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                            ? 0U : 
                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                          >> 6U))),5);
        bufp->chgBit(oldp+75,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                     >> 5U))));
        bufp->chgBit(oldp+76,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                     >> 4U))));
        bufp->chgBit(oldp+77,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                     >> 3U))));
        bufp->chgBit(oldp+78,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                     >> 2U))));
        bufp->chgBit(oldp+79,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                     >> 1U))));
        bufp->chgBit(oldp+80,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                ? 0U : (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]))));
        bufp->chgBit(oldp+81,((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                 ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                               >> 0x1fU)));
        bufp->chgBit(oldp+82,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+83,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+84,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+85,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+86,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+87,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x19U))));
        bufp->chgBit(oldp+88,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x18U))));
        bufp->chgBit(oldp+89,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x17U))));
        bufp->chgBit(oldp+90,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x16U))));
        bufp->chgBit(oldp+91,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x15U))));
        bufp->chgBit(oldp+92,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x14U))));
        bufp->chgBit(oldp+93,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x13U))));
        bufp->chgBit(oldp+94,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x12U))));
        bufp->chgBit(oldp+95,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x11U))));
        bufp->chgBit(oldp+96,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0x10U))));
        bufp->chgBit(oldp+97,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0xfU))));
        bufp->chgBit(oldp+98,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0xeU))));
        bufp->chgBit(oldp+99,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                       ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+100,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+101,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+102,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+103,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 9U))));
        bufp->chgBit(oldp+104,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 8U))));
        bufp->chgBit(oldp+105,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 7U))));
        bufp->chgBit(oldp+106,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 6U))));
        bufp->chgBit(oldp+107,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 5U))));
        bufp->chgBit(oldp+108,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 4U))));
        bufp->chgBit(oldp+109,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 3U))));
        bufp->chgBit(oldp+110,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 2U))));
        bufp->chgBit(oldp+111,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 1U))));
        bufp->chgBit(oldp+112,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                 ? 0U : (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]))));
        bufp->chgIData(oldp+113,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[6U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+114,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+115,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+116,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                             >> 0x1bU))),32);
        bufp->chgCData(oldp+117,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+118,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+119,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                   << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                               >> 0x11U))),32);
        bufp->chgBit(oldp+120,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+121,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+122,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                           >> 6U))),5);
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 5U))));
        bufp->chgBit(oldp+124,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+125,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+126,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+127,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+128,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U])));
        bufp->chgBit(oldp+129,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+130,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+131,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+132,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+133,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+134,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+135,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+136,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+137,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+138,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+139,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+140,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+141,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+142,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+143,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+144,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+145,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+146,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+147,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+148,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+149,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+150,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+151,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+152,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+153,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+154,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+155,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+156,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+157,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+158,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+159,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+160,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])));
        bufp->chgBit(oldp+161,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall));
        bufp->chgIData(oldp+162,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data),32);
        bufp->chgCData(oldp+163,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr),5);
        bufp->chgBit(oldp+164,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en));
        bufp->chgBit(oldp+165,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_mul_busy));
        bufp->chgBit(oldp+166,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state));
        bufp->chgBit(oldp+167,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                      | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                         >> 2U)))));
        bufp->chgBit(oldp+168,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall));
        bufp->chgIData(oldp+169,(((0xfffffffcU & ((- (IData)(
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
        bufp->chgBit(oldp+170,((1U & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                       & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                              >> 8U)) 
                                          & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward)))) 
                                      | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                          >> 2U) & 
                                         ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U]) 
                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                             >> 8U)))))));
        bufp->chgIData(oldp+171,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata),32);
        bufp->chgBit(oldp+172,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rvalid_out));
        bufp->chgIData(oldp+173,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr),32);
        bufp->chgBit(oldp+174,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wen));
        bufp->chgIData(oldp+175,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata),32);
        bufp->chgIData(oldp+176,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout 
                                          >> 1U))),32);
        bufp->chgBit(oldp+177,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))));
        bufp->chgIData(oldp+178,((((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
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
        bufp->chgIData(oldp+179,((((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                                  | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                                      & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout)) 
                                     | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                                         & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                                        | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                           & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out))))),32);
        bufp->chgIData(oldp+180,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                   ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U])),32);
        bufp->chgSData(oldp+181,((0x3fcU & (((- (IData)(
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
        bufp->chgSData(oldp+182,((0x3fcU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr)),10);
        bufp->chgIData(oldp+183,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout 
                                          >> 6U))),32);
        bufp->chgCData(oldp+184,((0x1fU & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout 
                                                   >> 1U)))),5);
        bufp->chgBit(oldp+185,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout))));
        bufp->chgIData(oldp+186,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e3)
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[0U]
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[1U])),32);
        bufp->chgCData(oldp+187,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e3),5);
        bufp->chgBit(oldp+188,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3));
        bufp->chgIData(oldp+189,(((0xfU & ((- (IData)(
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
        bufp->chgCData(oldp+190,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr),5);
        bufp->chgBit(oldp+191,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en));
        bufp->chgIData(oldp+192,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data 
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
        bufp->chgCData(oldp+193,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                           >> 1U))),5);
        bufp->chgBit(oldp+194,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en));
        bufp->chgIData(oldp+195,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+196,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
        bufp->chgIData(oldp+197,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+198,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout)),32);
        bufp->chgIData(oldp+199,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+200,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
        bufp->chgIData(oldp+201,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out),32);
        bufp->chgIData(oldp+202,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out),32);
        bufp->chgIData(oldp+203,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__alu_wb_data_i),32);
        bufp->chgBit(oldp+204,((1U & (IData)(((1U == 
                                               (3U 
                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])) 
                                              & (0x22U 
                                                 == 
                                                 (0x22U 
                                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U])))))));
        bufp->chgIData(oldp+205,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a),32);
        bufp->chgIData(oldp+206,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b),32);
        bufp->chgIData(oldp+207,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout),32);
        bufp->chgIData(oldp+208,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm),32);
        bufp->chgBit(oldp+209,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a)) 
                                                  + 
                                                  ((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm)) 
                                                   + (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                         >> 0x19U)))))) 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+210,((1U & (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                           >> 0x1fU)) 
                                       & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm 
                                              >> 0x1fU)) 
                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                             >> 0x1fU))) 
                                      | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                          >> 0x1fU) 
                                         & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                                >> 0x1fU)) 
                                            & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm 
                                               >> 0x1fU)))))));
        bufp->chgBit(oldp+211,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                >> 0x1fU)));
        bufp->chgCData(oldp+212,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_11) 
                                   << 1U) | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_12))),3);
        bufp->chgIData(oldp+213,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_11) 
                                                       >> 1U)))))) 
                                  | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                      & ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_11)))))) 
                                     | ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a) 
                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                           & (- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_12)))))))),32);
        bufp->chgIData(oldp+214,((((- (IData)((1U & 
                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                >> 0x15U)))) 
                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                      << (0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))) 
                                  | (((- (IData)((1U 
                                                  & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                     >> 0x13U)))) 
                                      & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                         >> (0x1fU 
                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                       >> 0x14U)))) 
                                        & VL_SHIFTRS_III(32,32,5, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a, 
                                                         (0x1fU 
                                                          & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b)))))),32);
        bufp->chgBit(oldp+215,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_10) 
                                 & (IData)((1ULL & 
                                            (((QData)((IData)(
                                                              ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                                << 0xfU) 
                                                               | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                                  >> 0x11U)))) 
                                              + (QData)((IData)(
                                                                ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                                                  << 5U) 
                                                                 | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                                    >> 0x1bU))))) 
                                             >> 0x20U)))) 
                                | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_19) 
                                   & (IData)((1ULL 
                                              & (((QData)((IData)(
                                                                  ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                                    << 0xfU) 
                                                                   | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                                      >> 0x11U)))) 
                                                  + (QData)((IData)(
                                                                    ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                                      << 5U) 
                                                                     | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                                        >> 0x1bU))))) 
                                                 >> 0x20U)))))));
        bufp->chgIData(oldp+216,((((IData)((0x1ffffffffULL 
                                            & (- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_10))))) 
                                   & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                        << 0xfU) | 
                                       (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                        >> 0x11U)) 
                                      + ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                          << 5U) | 
                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                          >> 0x1bU)))) 
                                  | ((IData)((0x1ffffffffULL 
                                              & (- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_19))))) 
                                     & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                          << 0xfU) 
                                         | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                            >> 0x11U)) 
                                        + ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                            << 5U) 
                                           | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                              >> 0x1bU)))))),32);
        bufp->chgBit(oldp+217,((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                       >> 0xbU) | (
                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                    >> 0x10U) 
                                                   & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                        >> 0xfU) 
                                                       & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)) 
                                                      | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)) 
                                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                             >> 0xeU)) 
                                                         | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt)) 
                                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                >> 0xdU)) 
                                                            | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                >> 0xcU) 
                                                               & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt))))))))));
        bufp->chgBit(oldp+218,((1U & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                        >> 0xfU) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)) 
                                      | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)) 
                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                             >> 0xeU)) 
                                         | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt)) 
                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                >> 0xdU)) 
                                            | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                >> 0xcU) 
                                               & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt))))))));
        bufp->chgBit(oldp+219,((0U != (7U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                             >> 0x16U)))));
        bufp->chgBit(oldp+220,((IData)((0U != (0x380000U 
                                               & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])))));
        bufp->chgBit(oldp+221,(((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                    >> 0x12U)) & (0U 
                                                  != 
                                                  (0x6000000U 
                                                   & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])))));
        bufp->chgBit(oldp+222,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                 >> 0x12U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt))));
        bufp->chgIData(oldp+223,(VL_SHIFTRS_III(32,32,5, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a, 
                                                (0x1fU 
                                                 & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))),32);
        bufp->chgBit(oldp+224,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq));
        bufp->chgBit(oldp+225,((1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)))));
        bufp->chgBit(oldp+226,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt));
        bufp->chgBit(oldp+227,((1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt)))));
        bufp->chgQData(oldp+228,((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__alu_wb_data_i)) 
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
        bufp->chgQData(oldp+230,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout),38);
        bufp->chgQData(oldp+232,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din),64);
        bufp->chgQData(oldp+234,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout),64);
        bufp->chgQData(oldp+236,((((QData)((IData)(
                                                   (((IData)(
                                                             (0x1ffffffffULL 
                                                              & (- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_10))))) 
                                                     & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                          << 0xfU) 
                                                         | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                            >> 0x11U)) 
                                                        + 
                                                        ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                                          << 5U) 
                                                         | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                            >> 0x1bU)))) 
                                                    | ((IData)(
                                                               (0x1ffffffffULL 
                                                                & (- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_19))))) 
                                                       & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                            << 0xfU) 
                                                           | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                              >> 0x11U)) 
                                                          + 
                                                          ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                            << 5U) 
                                                           | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                              >> 0x1bU))))))) 
                                   << 1U) | (QData)((IData)(
                                                            (1U 
                                                             & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                 >> 0xbU) 
                                                                | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                    >> 0x10U) 
                                                                   & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                        >> 0xfU) 
                                                                       & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)) 
                                                                      | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)) 
                                                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                             >> 0xeU)) 
                                                                         | (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt)) 
                                                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                                >> 0xdU)) 
                                                                            | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                                >> 0xcU) 
                                                                               & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt)))))))))))),33);
        bufp->chgQData(oldp+238,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout),33);
        bufp->chgBit(oldp+240,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1));
        bufp->chgBit(oldp+241,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early));
        bufp->chgBit(oldp+242,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish));
        bufp->chgBit(oldp+243,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                 | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state)) 
                                & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish)) 
                                   & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff))))));
        bufp->chgCData(oldp+244,((0x3fU & ((- (IData)(
                                                      ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish)) 
                                                       & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state) 
                                                          & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                                                             & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable))))))) 
                                           & ((IData)(1U) 
                                              + ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count) 
                                                 + (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff)))))),6);
        bufp->chgCData(oldp+245,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count),6);
        bufp->chgQData(oldp+246,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff),33);
        bufp->chgBit(oldp+248,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52))));
        bufp->chgBit(oldp+249,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52) 
                                    & (0x21U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count))) 
                                   | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)))));
        bufp->chgQData(oldp+250,((0x1ffffffffULL & 
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
        bufp->chgQData(oldp+252,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff),33);
        bufp->chgQData(oldp+254,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in),33);
        bufp->chgQData(oldp+256,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff),33);
        bufp->chgQData(oldp+258,((0x1ffffffffULL & 
                                  ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add)
                                    ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff
                                    : (~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)))),33);
        __Vtemp_174[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
        __Vtemp_174[1U] = 0U;
        __Vtemp_174[2U] = 0U;
        VL_SHIFTL_WWI(65,65,6, __Vtemp_175, __Vtemp_174, (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff));
        bufp->chgQData(oldp+260,((0x1ffffffffULL & 
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
                                                                 & __Vtemp_175[2U]))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp_175[1U]))))))))),33);
        bufp->chgBit(oldp+262,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                      >> 3U))));
        bufp->chgBit(oldp+263,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                      >> 2U))));
        bufp->chgIData(oldp+264,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp),32);
        bufp->chgIData(oldp+265,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff),32);
        bufp->chgIData(oldp+266,(((1U & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                          >> 1U) & 
                                         (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                           >> 3U) ^ 
                                          ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                           >> 2U))))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp
                                   : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff))),32);
        bufp->chgIData(oldp+267,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
                                   << 1U) | (1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))),32);
        bufp->chgIData(oldp+268,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_46)
                                   ? ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
                                       << 1U) | (1U 
                                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                   : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff))),32);
        bufp->chgBit(oldp+269,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                      >> 1U))));
        bufp->chgBit(oldp+270,(((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                    >> 0x11U)) & (0U 
                                                  != 
                                                  ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                    << 5U) 
                                                   | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                      >> 0x1bU))))));
        bufp->chgBit(oldp+271,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))));
        bufp->chgBit(oldp+272,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add));
        __Vtemp_178[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
        __Vtemp_178[1U] = 0U;
        __Vtemp_178[2U] = 0U;
        VL_SHIFTL_WWI(65,65,6, __Vtemp_179, __Vtemp_178, (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff));
        bufp->chgQData(oldp+273,((0x1ffffffffULL & 
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
                                                              & __Vtemp_179[2U]))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp_179[1U])))))))),33);
        __Vtemp_182[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
        __Vtemp_182[1U] = 0U;
        __Vtemp_182[2U] = 0U;
        VL_SHIFTL_WWI(65,65,6, __Vtemp_183, __Vtemp_182, (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff));
        __Vtemp_184[0U] = __Vtemp_183[0U];
        __Vtemp_184[1U] = __Vtemp_183[1U];
        __Vtemp_184[2U] = (1U & __Vtemp_183[2U]);
        bufp->chgWData(oldp+275,(__Vtemp_184),65);
        bufp->chgBit(oldp+278,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct));
        bufp->chgBit(oldp+279,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff));
        bufp->chgBit(oldp+280,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1))));
        bufp->chgBit(oldp+281,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout) 
                                      >> 4U))));
        bufp->chgCData(oldp+282,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__smallnum),4);
        bufp->chgCData(oldp+283,((0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout))),4);
        bufp->chgBit(oldp+284,((IData)((6U == (6U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))))));
        bufp->chgCData(oldp+285,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50),5);
        bufp->chgCData(oldp+286,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51),5);
        bufp->chgCData(oldp+287,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift),6);
        bufp->chgCData(oldp+288,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff),6);
        bufp->chgBit(oldp+289,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable));
        bufp->chgBit(oldp+290,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                      >> 4U))));
        bufp->chgQData(oldp+291,((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))),33);
        bufp->chgCData(oldp+293,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_raw),4);
        bufp->chgCData(oldp+294,((0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout))),4);
        bufp->chgIData(oldp+295,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)),32);
        bufp->chgIData(oldp+296,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp),31);
        bufp->chgQData(oldp+297,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                   | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52) 
                                       & (0x21U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count))) 
                                      | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)),33);
        bufp->chgIData(oldp+299,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)),32);
        bufp->chgIData(oldp+300,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_c__DOT__dout_temp),31);
        bufp->chgBit(oldp+301,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en))));
        bufp->chgCData(oldp+302,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable) 
                                   << 4U) | (0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift)))),5);
        bufp->chgCData(oldp+303,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout),5);
        bufp->chgBit(oldp+304,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en));
        bufp->chgQData(oldp+305,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout),64);
        bufp->chgQData(oldp+307,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)),64);
        bufp->chgQData(oldp+309,((((QData)((IData)(
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
        bufp->chgQData(oldp+311,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
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
        bufp->chgCData(oldp+313,((((8U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
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
        bufp->chgCData(oldp+314,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout),4);
        bufp->chgCData(oldp+315,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
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
        bufp->chgCData(oldp+316,((0x1fU & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
                                            ? ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                << 0x15U) 
                                               | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                  >> 0xbU))
                                            : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr)))),5);
        bufp->chgQData(oldp+317,((0x1ffffffffULL & 
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
        bufp->chgCData(oldp+319,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early) 
                                   << 4U) | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__smallnum))),5);
        bufp->chgCData(oldp+320,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout),5);
        bufp->chgBit(oldp+321,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 6U))));
        bufp->chgBit(oldp+322,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 5U))));
        bufp->chgBit(oldp+323,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 4U))));
        bufp->chgBit(oldp+324,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 2U))));
        bufp->chgBit(oldp+325,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 3U))));
        bufp->chgBit(oldp+326,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout))));
        bufp->chgBit(oldp+327,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                      >> 1U))));
        bufp->chgBit(oldp+328,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__lsu_stall_q));
        bufp->chgBit(oldp+329,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid));
        bufp->chgIData(oldp+330,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[3U] 
                                   << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+331,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                   << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+332,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] 
                                   << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+333,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr),32);
        bufp->chgCData(oldp+334,((0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U])),5);
        bufp->chgBit(oldp+335,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load));
        bufp->chgBit(oldp+336,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward));
        bufp->chgBit(oldp+337,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+338,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+339,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+340,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+341,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+342,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 9U))));
        bufp->chgBit(oldp+343,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+344,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+345,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                      >> 8U))));
        bufp->chgIData(oldp+346,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                   << 0x18U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+347,(((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                                   ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] 
                                      >> (0x18U & (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                   >> 5U)))
                                   : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                                      >> (0x18U & (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                   >> 5U))))),32);
        bufp->chgCData(oldp+348,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                           >> 3U))),5);
        bufp->chgIData(oldp+349,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                   << 0x1fU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U] 
                                                >> 1U))),32);
        bufp->chgBit(oldp+350,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                      >> 1U))));
        bufp->chgBit(oldp+351,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])));
        bufp->chgIData(oldp+352,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U]),32);
        bufp->chgBit(oldp+353,(((IData)((0U != (0x1800U 
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
        bufp->chgBit(oldp+354,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+355,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+356,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+357,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 8U))));
        bufp->chgBit(oldp+358,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 9U))));
        bufp->chgBit(oldp+359,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+360,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                      >> 7U))));
        bufp->chgBit(oldp+361,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+362,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                   << 0x13U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+363,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[4U] 
                                   << 0x12U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+364,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data),32);
        bufp->chgIData(oldp+365,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data_mask),32);
        bufp->chgIData(oldp+366,((((- (IData)((1U & (IData)(
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
        bufp->chgCData(oldp+367,((0x18U & ((- ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                << 0x13U) 
                                               | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                  >> 0xdU))) 
                                           << 3U))),5);
        bufp->chgCData(oldp+368,((7U & ((IData)(4U) 
                                        - (3U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                                 >> 0xdU))))),3);
        bufp->chgIData(oldp+369,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                   << 0x1fU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U] 
                                                >> 1U))),32);
        bufp->chgIData(oldp+370,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_tag_out),32);
        bufp->chgIData(oldp+371,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_out),32);
        bufp->chgIData(oldp+372,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_tag_out),32);
        bufp->chgIData(oldp+373,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_out),32);
        bufp->chgIData(oldp+374,(((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U])
                                   ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9 
                                      | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10 
                                         & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U]))
                                   : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9 
                                      | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10 
                                         & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata)))),32);
        bufp->chgBit(oldp+375,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U])));
        bufp->chgIData(oldp+376,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U]),32);
        bufp->chgQData(oldp+377,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask_base),64);
        bufp->chgQData(oldp+379,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask),64);
        bufp->chgQData(oldp+381,(((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                                   ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_3 
                                      | ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask) 
                                         & (QData)((IData)(
                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U]))))
                                   : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_3 
                                      | ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask) 
                                         & (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata)))))),64);
        __Vtemp_187[0U] = (IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata))));
        __Vtemp_187[1U] = ((0xfffffffeU & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                            << 0x1cU) 
                                           | (0xffffffeU 
                                              & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] 
                                                 >> 4U)))) 
                           | (IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward)) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata))) 
                                      >> 0x20U)));
        __Vtemp_187[2U] = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)) 
                                      << 0x21U) | (
                                                   ((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr))))) 
                            << 8U) | ((0xfffffffeU 
                                       & ((0xf8U & 
                                           (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U] 
                                            << 3U)) 
                                          | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                              << 2U) 
                                             | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load) 
                                                << 1U)))) 
                                      | (1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                               >> 4U))));
        __Vtemp_187[3U] = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)) 
                                      << 0x21U) | (
                                                   ((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr))))) 
                            >> 0x18U) | ((IData)(((
                                                   ((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)) 
                                                    << 0x21U) 
                                                   | (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr)))) 
                                                  >> 0x20U)) 
                                         << 8U));
        bufp->chgWData(oldp+383,(__Vtemp_187),112);
        bufp->chgWData(oldp+387,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout),112);
        __Vtemp_191[0U] = (IData)((((QData)((IData)(
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
        __Vtemp_191[1U] = ((0xfffffffeU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U]) 
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
        __Vtemp_191[2U] = (((IData)((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                         << 0x18U) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])) 
                                           >> 8U)))) 
                            << 0xdU) | ((0xfffffffeU 
                                         & ((0x1fc0U 
                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                >> 3U)) 
                                            | (0x3eU 
                                               & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                  >> 2U)))) 
                                        | (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])));
        __Vtemp_191[3U] = ((((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
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
                                         >> 0x13U) 
                                        | ((IData)(
                                                   ((0x1ffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                                         << 0x18U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])) 
                                                           >> 8U))) 
                                                    >> 0x20U)) 
                                           << 0xdU)));
        __Vtemp_191[4U] = (((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                             ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] 
                                >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                             >> 5U)))
                             : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                                >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                             >> 5U)))) 
                           >> 0x12U);
        bufp->chgWData(oldp+391,(__Vtemp_191),142);
        bufp->chgWData(oldp+396,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout),142);
        bufp->chgCData(oldp+401,(((0x70U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                            >> 4U)) 
                                  | ((0xcU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                              >> 0x1aU)) 
                                     | ((2U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                               >> 0x10U)) 
                                        | (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U]))))),7);
        bufp->chgCData(oldp+402,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout),7);
        __Vtemp_193[0U] = (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                             << 0x14U) | (0xfffe0U 
                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                             >> 0xcU))) 
                           | (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                       >> 0xbU)));
        __Vtemp_193[1U] = ((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
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
        __Vtemp_193[2U] = (((IData)((((QData)((IData)(
                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                      >> 0x1bU)))) 
                            >> 0x1bU) | ((IData)(((
                                                   ((QData)((IData)(
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
        __Vtemp_193[3U] = ((IData)(((((QData)((IData)(
                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                      >> 0x1bU))) 
                                    >> 0x20U)) >> 0x1bU);
        bufp->chgWData(oldp+403,(__Vtemp_193),101);
        bufp->chgWData(oldp+407,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout),101);
        bufp->chgBit(oldp+411,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e1));
        bufp->chgBit(oldp+412,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e2));
        bufp->chgIData(oldp+413,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1),32);
        bufp->chgIData(oldp+414,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1),32);
        bufp->chgBit(oldp+415,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1));
        bufp->chgBit(oldp+416,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1) 
                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1 
                                   >> 0x1fU))));
        bufp->chgBit(oldp+417,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1));
        bufp->chgBit(oldp+418,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1) 
                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1 
                                   >> 0x1fU))));
        bufp->chgQData(oldp+419,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2),33);
        bufp->chgQData(oldp+421,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2),33);
        bufp->chgWData(oldp+423,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3),65);
        bufp->chgBit(oldp+426,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e1));
        bufp->chgBit(oldp+427,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e2));
        bufp->chgBit(oldp+428,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e3));
        bufp->chgCData(oldp+429,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e1),5);
        bufp->chgCData(oldp+430,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e2),5);
        bufp->chgBit(oldp+431,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e1));
        bufp->chgBit(oldp+432,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e2));
        bufp->chgIData(oldp+433,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+434,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+435,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
        bufp->chgIData(oldp+436,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout)),32);
        VL_EXTENDS_WQ(66,33, __Vtemp_196, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2);
        __Vtemp_197[0U] = __Vtemp_196[0U];
        __Vtemp_197[1U] = __Vtemp_196[1U];
        __Vtemp_197[2U] = (3U & __Vtemp_196[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_199, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2);
        __Vtemp_200[0U] = __Vtemp_199[0U];
        __Vtemp_200[1U] = __Vtemp_199[1U];
        __Vtemp_200[2U] = (3U & __Vtemp_199[2U]);
        VL_MULS_WWW(66, __Vtemp_201, __Vtemp_197, __Vtemp_200);
        __Vtemp_202[0U] = __Vtemp_201[0U];
        __Vtemp_202[1U] = __Vtemp_201[1U];
        __Vtemp_202[2U] = (3U & __Vtemp_201[2U]);
        bufp->chgWData(oldp+437,(__Vtemp_202),66);
        bufp->chgQData(oldp+440,((((QData)((IData)(
                                                   ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1) 
                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1 
                                                       >> 0x1fU)))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1)))),33);
        bufp->chgQData(oldp+442,((((QData)((IData)(
                                                   ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1) 
                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1 
                                                       >> 0x1fU)))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1)))),33);
        bufp->chgQData(oldp+444,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout),64);
        bufp->chgQData(oldp+446,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout),64);
        bufp->chgQData(oldp+448,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout),64);
        bufp->chgBit(oldp+450,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellinp__out_rd_wr_en_ff__din));
        VL_EXTENDS_WQ(66,33, __Vtemp_206, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2);
        __Vtemp_207[0U] = __Vtemp_206[0U];
        __Vtemp_207[1U] = __Vtemp_206[1U];
        __Vtemp_207[2U] = (3U & __Vtemp_206[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_209, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2);
        __Vtemp_210[0U] = __Vtemp_209[0U];
        __Vtemp_210[1U] = __Vtemp_209[1U];
        __Vtemp_210[2U] = (3U & __Vtemp_209[2U]);
        VL_MULS_WWW(66, __Vtemp_211, __Vtemp_207, __Vtemp_210);
        __Vtemp_214[0U] = __Vtemp_211[0U];
        __Vtemp_214[1U] = __Vtemp_211[1U];
        __Vtemp_214[2U] = (1U & __Vtemp_211[2U]);
        bufp->chgWData(oldp+451,(__Vtemp_214),65);
        bufp->chgSData(oldp+454,((0x3ffU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q 
                                            >> 2U))),10);
        bufp->chgQData(oldp+455,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data),64);
        bufp->chgQData(oldp+457,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                  >> (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q))),64);
        bufp->chgIData(oldp+459,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[4U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+460,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                             >> 0x1bU))),32);
        bufp->chgCData(oldp+461,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+462,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+463,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                   << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                               >> 0x11U))),32);
        bufp->chgBit(oldp+464,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+465,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+466,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                           >> 6U))),5);
        bufp->chgBit(oldp+467,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 5U))));
        bufp->chgBit(oldp+468,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+469,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+470,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+471,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+472,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U])));
        bufp->chgBit(oldp+473,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+474,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+475,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+476,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+477,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+478,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+479,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+480,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+481,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+482,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+483,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+484,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+485,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+486,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+487,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+488,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+489,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+490,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+491,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+492,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+493,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+494,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+495,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+496,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+497,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+498,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+499,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+500,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+501,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+502,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+503,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+504,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U])));
        bufp->chgBit(oldp+505,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+506,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+507,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+508,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+509,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+510,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+511,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+512,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+513,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+514,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+515,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+516,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+517,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+518,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+519,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+520,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+521,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+522,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+523,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+524,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+525,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+526,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+527,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+528,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+529,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+530,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+531,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+532,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+533,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 9U)))));
        bufp->chgBit(oldp+534,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 8U)))));
        bufp->chgBit(oldp+535,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 7U)))));
        bufp->chgBit(oldp+536,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 6U)))));
        bufp->chgBit(oldp+537,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 5U)))));
        bufp->chgBit(oldp+538,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 4U)))));
        bufp->chgBit(oldp+539,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 3U)))));
        bufp->chgBit(oldp+540,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 2U)))));
        bufp->chgBit(oldp+541,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                              >> 1U)))));
        bufp->chgBit(oldp+542,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out))));
        bufp->chgWData(oldp+543,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i),155);
        bufp->chgBit(oldp+548,((1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))));
        if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            __Vtemp_217[0U] = 0U;
            __Vtemp_217[1U] = 0U;
            __Vtemp_217[2U] = 0U;
            __Vtemp_217[3U] = 0U;
            __Vtemp_217[4U] = 0U;
        } else {
            __Vtemp_217[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U];
            __Vtemp_217[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U];
            __Vtemp_217[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U];
            __Vtemp_217[3U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U];
            __Vtemp_217[4U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U];
        }
        bufp->chgWData(oldp+549,(__Vtemp_217),155);
        if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            __Vtemp_220[0U] = 0U;
            __Vtemp_220[1U] = 0U;
            __Vtemp_220[2U] = 0U;
            __Vtemp_220[3U] = 0U;
            __Vtemp_220[4U] = 0U;
        } else {
            __Vtemp_220[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U];
            __Vtemp_220[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U];
            __Vtemp_220[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U];
            __Vtemp_220[3U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U];
            __Vtemp_220[4U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[4U];
        }
        bufp->chgWData(oldp+554,(__Vtemp_220),155);
        bufp->chgWData(oldp+559,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i),155);
        if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
            __Vtemp_224[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U];
            __Vtemp_224[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U];
            __Vtemp_224[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U];
            __Vtemp_224[3U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U];
            __Vtemp_224[4U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U];
        } else if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            __Vtemp_224[0U] = 0U;
            __Vtemp_224[1U] = 0U;
            __Vtemp_224[2U] = 0U;
            __Vtemp_224[3U] = 0U;
            __Vtemp_224[4U] = 0U;
        } else {
            __Vtemp_224[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U];
            __Vtemp_224[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U];
            __Vtemp_224[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U];
            __Vtemp_224[3U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U];
            __Vtemp_224[4U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[4U];
        }
        bufp->chgWData(oldp+564,(__Vtemp_224),155);
        bufp->chgIData(oldp+569,((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                            ? 0ULL : 
                                           (((QData)((IData)(
                                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                             << 0x25U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                << 5U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                  >> 0x1bU)))) 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+570,((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                           ? 0ULL : 
                                          (((QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                 >> 0x1bU)))))),32);
        bufp->chgCData(oldp+571,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                             ? 0U : 
                                            (0x7ffffffU 
                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+572,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                             ? 0U : 
                                            (0x7ffffffU 
                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+573,(((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : (0x7ffffffU 
                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                   << 0xfU) | (((1U 
                                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                 ? 0U
                                                 : 
                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                               >> 0x11U))),32);
        bufp->chgBit(oldp+574,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                      >> 0x10U))));
        bufp->chgCData(oldp+575,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                             ? 0U : 
                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+576,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                             ? 0U : 
                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                           >> 6U))),5);
        bufp->chgBit(oldp+577,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                      >> 5U))));
        bufp->chgBit(oldp+578,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                      >> 4U))));
        bufp->chgBit(oldp+579,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                      >> 3U))));
        bufp->chgBit(oldp+580,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                      >> 2U))));
        bufp->chgBit(oldp+581,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                      >> 1U))));
        bufp->chgBit(oldp+582,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                 ? 0U : (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]))));
        bufp->chgBit(oldp+583,((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                  ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+584,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+585,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+586,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+587,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+588,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+589,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+590,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+591,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+592,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+593,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+594,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+595,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+596,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+597,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+598,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+599,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+600,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+601,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+602,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+603,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+604,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+605,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 9U))));
        bufp->chgBit(oldp+606,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 8U))));
        bufp->chgBit(oldp+607,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 7U))));
        bufp->chgBit(oldp+608,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 6U))));
        bufp->chgBit(oldp+609,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 5U))));
        bufp->chgBit(oldp+610,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 4U))));
        bufp->chgBit(oldp+611,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 3U))));
        bufp->chgBit(oldp+612,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 2U))));
        bufp->chgBit(oldp+613,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                      >> 1U))));
        bufp->chgBit(oldp+614,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                 ? 0U : (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]))));
        bufp->chgIData(oldp+615,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[6U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[5U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+616,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[5U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[4U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+617,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[4U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[3U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+618,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[3U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] 
                                             >> 0x1bU))),32);
        bufp->chgCData(oldp+619,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+620,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+621,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] 
                                   << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                               >> 0x11U))),32);
        bufp->chgBit(oldp+622,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+623,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+624,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                           >> 6U))),5);
        bufp->chgBit(oldp+625,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                      >> 5U))));
        bufp->chgBit(oldp+626,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+627,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+628,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+629,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+630,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U])));
        bufp->chgBit(oldp+631,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+632,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+633,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+634,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+635,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+636,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+637,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+638,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+639,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+640,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+641,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+642,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+643,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+644,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+645,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+646,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+647,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+648,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+649,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+650,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+651,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+652,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+653,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+654,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+655,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+656,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+657,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+658,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+659,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+660,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+661,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+662,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U])));
        bufp->chgIData(oldp+663,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[6U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[5U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+664,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[5U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+665,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+666,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U] 
                                   << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                             >> 0x1bU))),32);
        bufp->chgCData(oldp+667,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+668,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+669,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                   << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                               >> 0x11U))),32);
        bufp->chgBit(oldp+670,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+671,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+672,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                           >> 6U))),5);
        bufp->chgBit(oldp+673,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 5U))));
        bufp->chgBit(oldp+674,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+675,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+676,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+677,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+678,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U])));
        bufp->chgBit(oldp+679,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+680,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+681,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+682,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+683,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+684,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+685,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+686,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+687,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+688,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+689,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+690,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+691,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+692,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+693,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+694,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+695,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+696,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+697,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+698,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+699,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+700,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+701,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+702,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+703,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+704,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+705,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+706,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+707,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+708,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+709,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+710,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U])));
        bufp->chgIData(oldp+711,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[2U] 
                                   << 0xdU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[1U] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+712,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[1U] 
                                   << 0xdU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                               >> 0x13U))),32);
        bufp->chgCData(oldp+713,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                           >> 0xeU))),5);
        bufp->chgCData(oldp+714,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+715,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                           >> 4U))),5);
        bufp->chgBit(oldp+716,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+717,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+718,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+719,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U])));
        bufp->chgWData(oldp+720,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd),219);
        bufp->chgWData(oldp+727,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i),219);
        __Vtemp_489[0U] = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                      >> 0x1bU))))) 
                            << 0x13U) | ((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                            ? 0U : 
                                           (0x3ffU 
                                            & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U] 
                                               >> 0x11U))) 
                                          << 9U) | 
                                         ((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                             ? 0U : 
                                            (0x1fU 
                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                >> 0xbU))) 
                                           << 4U) | 
                                          (((8U & (
                                                   ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                    << 3U) 
                                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
                                                      >> 4U))) 
                                            | (4U & 
                                               (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                 << 2U) 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                   >> 3U)))) 
                                           | ((2U & 
                                               (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                 << 1U) 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
                                                   >> 2U))) 
                                              | (IData)(
                                                        ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                         & (0U 
                                                            != 
                                                            (0x30000000U 
                                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U])))))))));
        __Vtemp_489[1U] = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                      >> 0x1bU))))) 
                            >> 0xdU) | ((IData)((((1U 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                         >> 0x1bU)))) 
                                                 >> 0x20U)) 
                                        << 0x13U));
        __Vtemp_489[2U] = ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                      >> 0x1bU)))) 
                                    >> 0x20U)) >> 0xdU);
        bufp->chgWData(oldp+734,(__Vtemp_489),83);
        bufp->chgWData(oldp+737,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr),83);
        __Vtemp_491[0U] = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                      >> 0x1bU))))) 
                            << 0x13U) | ((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                            ? 0U : 
                                           (0x3ffU 
                                            & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U] 
                                               >> 0x11U))) 
                                          << 9U) | 
                                         ((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                             ? 0U : 
                                            (0x1fU 
                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                >> 0xbU))) 
                                           << 4U) | 
                                          (((8U & (
                                                   ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                    << 3U) 
                                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
                                                      >> 4U))) 
                                            | (4U & 
                                               (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                 << 2U) 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                   >> 3U)))) 
                                           | ((2U & 
                                               (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                 << 1U) 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
                                                   >> 2U))) 
                                              | (IData)(
                                                        ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                         & (0U 
                                                            != 
                                                            (0x30000000U 
                                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U])))))))));
        if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            __Vtemp_493[0U] = 0U;
            __Vtemp_493[1U] = 0U;
            __Vtemp_493[2U] = 0U;
        } else {
            __Vtemp_493[0U] = __Vtemp_491[0U];
            __Vtemp_493[1U] = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                          ? 0ULL : 
                                         (((QData)((IData)(
                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                           << 0x25U) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                >> 0x1bU))))) 
                                >> 0xdU) | ((IData)(
                                                    (((1U 
                                                       & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                       ? 0ULL
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                                        << 0x25U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                           << 5U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                             >> 0x1bU)))) 
                                                     >> 0x20U)) 
                                            << 0x13U));
            __Vtemp_493[2U] = ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                          ? 0ULL : 
                                         (((QData)((IData)(
                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                           << 0x25U) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                >> 0x1bU)))) 
                                        >> 0x20U)) 
                               >> 0xdU);
        }
        bufp->chgWData(oldp+740,(__Vtemp_493),83);
        bufp->chgWData(oldp+743,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i),83);
        __Vtemp_495[0U] = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                      >> 0x1bU))))) 
                            << 0x13U) | ((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                            ? 0U : 
                                           (0x3ffU 
                                            & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U] 
                                               >> 0x11U))) 
                                          << 9U) | 
                                         ((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                             ? 0U : 
                                            (0x1fU 
                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                >> 0xbU))) 
                                           << 4U) | 
                                          (((8U & (
                                                   ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                    << 3U) 
                                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
                                                      >> 4U))) 
                                            | (4U & 
                                               (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                 << 2U) 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                   >> 3U)))) 
                                           | ((2U & 
                                               (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                 << 1U) 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
                                                   >> 2U))) 
                                              | (IData)(
                                                        ((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                         & (0U 
                                                            != 
                                                            (0x30000000U 
                                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U])))))))));
        __Vtemp_497[1U] = ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                            ? 0U : (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                                   << 0x25U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                      << 5U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                        >> 0x1bU))))) 
                                     >> 0xdU) | ((IData)(
                                                         (((1U 
                                                            & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                            ? 0ULL
                                                            : 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                                             << 0x25U) 
                                                            | (((QData)((IData)(
                                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                                                << 5U) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                                  >> 0x1bU)))) 
                                                          >> 0x20U)) 
                                                 << 0x13U)));
        if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
            __Vtemp_498[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[0U];
            __Vtemp_498[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[1U];
            __Vtemp_498[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i[2U];
        } else if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            __Vtemp_498[0U] = 0U;
            __Vtemp_498[1U] = __Vtemp_497[1U];
            __Vtemp_498[2U] = 0U;
        } else {
            __Vtemp_498[0U] = __Vtemp_495[0U];
            __Vtemp_498[1U] = __Vtemp_497[1U];
            __Vtemp_498[2U] = ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                          ? 0ULL : 
                                         (((QData)((IData)(
                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[6U])) 
                                           << 0x25U) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[5U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[4U])) 
                                                >> 0x1bU)))) 
                                        >> 0x20U)) 
                               >> 0xdU);
        }
        bufp->chgWData(oldp+746,(__Vtemp_498),83);
        bufp->chgCData(oldp+749,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr),5);
        bufp->chgCData(oldp+750,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr),5);
        bufp->chgBit(oldp+751,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                    >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))));
        bufp->chgBit(oldp+752,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                    >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))));
        bufp->chgBit(oldp+753,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xaU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+754,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+755,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xaU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+756,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xbU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+757,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+758,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xbU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+759,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xcU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+760,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+761,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xcU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+762,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xdU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+763,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+764,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xdU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+765,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xeU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+766,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+767,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xeU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+768,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xfU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+769,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+770,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0xfU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+771,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x10U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+772,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+773,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x10U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+774,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x11U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+775,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+776,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x11U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+777,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x12U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+778,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+779,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x12U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+780,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x13U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+781,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+782,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x13U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+783,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+784,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+785,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+786,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x14U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+787,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+788,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x14U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+789,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x15U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+790,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+791,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x15U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+792,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x16U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+793,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+794,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x16U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+795,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x17U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+796,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+797,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x17U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+798,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x18U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+799,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+800,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x18U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+801,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x19U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+802,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+803,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x19U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+804,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1aU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+805,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+806,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1aU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+807,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1bU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+808,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+809,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1bU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+810,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1cU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+811,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+812,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1cU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+813,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1dU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+814,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+815,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1dU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+816,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (2U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+817,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+818,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (2U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+819,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1eU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+820,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+821,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1eU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+822,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1fU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+823,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+824,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (0x1fU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+825,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (3U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+826,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+827,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (3U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+828,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (4U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+829,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+830,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (4U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+831,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (5U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+832,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+833,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (5U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+834,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (6U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+835,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+836,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (6U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+837,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (7U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+838,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+839,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (7U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+840,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (8U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+841,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+842,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (8U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+843,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (9U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
        bufp->chgIData(oldp+844,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
        bufp->chgIData(oldp+845,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                   & (9U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                   ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                   : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
        bufp->chgBit(oldp+846,(((4U == (5U & ((4U & 
                                               ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall))))) 
                                || (2U == ((4U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                << 1U)) 
                                              | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))))));
        __Vtemp_499[0U] = (IData)((((QData)((IData)(
                                                    (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                     >> 
                                                     (3U 
                                                      & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))));
        __Vtemp_499[1U] = (IData)(((((QData)((IData)(
                                                     (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                      >> 
                                                      (3U 
                                                       & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                     << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))) 
                                   >> 0x20U));
        __Vtemp_499[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
        bufp->chgWData(oldp+847,(__Vtemp_499),65);
        if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            __Vtemp_502[0U] = 0U;
            __Vtemp_502[1U] = 0U;
            __Vtemp_502[2U] = 0U;
        } else {
            __Vtemp_502[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U];
            __Vtemp_502[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U];
            __Vtemp_502[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[2U];
        }
        bufp->chgWData(oldp+850,(__Vtemp_502),65);
        if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            __Vtemp_506[0U] = 0U;
            __Vtemp_506[1U] = 0U;
            __Vtemp_506[2U] = 0U;
        } else {
            __Vtemp_506[0U] = (IData)((((QData)((IData)(
                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                         >> 
                                                         (3U 
                                                          & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))));
            __Vtemp_506[1U] = (IData)(((((QData)((IData)(
                                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                          >> 
                                                          (3U 
                                                           & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))) 
                                       >> 0x20U));
            __Vtemp_506[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
        }
        bufp->chgWData(oldp+853,(__Vtemp_506),65);
        bufp->chgWData(oldp+856,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i),65);
        if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
            __Vtemp_511[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U];
            __Vtemp_511[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U];
            __Vtemp_511[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[2U];
        } else if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
            __Vtemp_511[0U] = 0U;
            __Vtemp_511[1U] = 0U;
            __Vtemp_511[2U] = 0U;
        } else {
            __Vtemp_511[0U] = (IData)((((QData)((IData)(
                                                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                         >> 
                                                         (3U 
                                                          & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))));
            __Vtemp_511[1U] = (IData)(((((QData)((IData)(
                                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                          >> 
                                                          (3U 
                                                           & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))) 
                                       >> 0x20U));
            __Vtemp_511[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
        }
        bufp->chgWData(oldp+859,(__Vtemp_511),65);
        bufp->chgBit(oldp+862,((1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)))));
        bufp->chgIData(oldp+863,(((4U == (5U & ((4U 
                                                 & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))))
                                   ? (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout 
                                              >> 1U))
                                   : ((2U == ((4U & 
                                               ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall))))
                                       ? ((IData)(4U) 
                                          + vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)
                                       : 0U))),32);
        bufp->chgIData(oldp+864,((((4U == (5U & ((4U 
                                                  & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall))))) 
                                   || (2U == ((4U & 
                                               ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))))
                                   ? ((4U == (5U & 
                                              ((4U 
                                                & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))))
                                       ? (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout 
                                                  >> 1U))
                                       : ((2U == ((4U 
                                                   & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall))))
                                           ? ((IData)(4U) 
                                              + vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)
                                           : 0U)) : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)),32);
    }
    bufp->chgBit(oldp+865,(vlSelfRef.core_top_tb__DOT__clk));
    bufp->chgBit(oldp+866,(vlSelfRef.core_top_tb__DOT__rst_n));
    bufp->chgIData(oldp+867,(vlSelfRef.core_top_tb__DOT__fd),32);
    bufp->chgIData(oldp+868,(vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+869,(vlSelfRef.core_top_tb__DOT__unnamedblk2__DOT__i),32);
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
