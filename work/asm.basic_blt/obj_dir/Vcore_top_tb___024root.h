// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore_top_tb.h for the primary calling header

#ifndef VERILATED_VCORE_TOP_TB___024ROOT_H_
#define VERILATED_VCORE_TOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcore_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_top_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ core_top_tb__DOT__clk;
        CData/*0:0*/ core_top_tb__DOT__rst_n;
        CData/*0:0*/ core_top_tb__DOT__finish_seq_detected;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__instr_mem_addr_valid;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__pipe_stall;
        CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_mul_busy;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__dccm_rvalid_out;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__dccm_wen;
        CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr;
        CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0;
        CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_10;
        CData/*1:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_11;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_12;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_19;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e1;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e2;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__mul_c1_e1_clken;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__mul_c1_e2_clken;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__mul_c1_e3_clken;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__exu_mul_c1_e1_clk;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__exu_mul_c1_e2_clk;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__exu_mul_c1_e3_clk;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e1;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e2;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e3;
        CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e1;
        CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e2;
        CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e3;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e1;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e2;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellinp__out_rd_wr_en_ff__din;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_in;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state;
        CData/*5:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count_in;
        CData/*5:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff;
        CData/*3:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__smallnum;
        CData/*3:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout;
        CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en;
        CData/*5:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq;
        CData/*5:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift;
        CData/*5:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable;
        CData/*3:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_raw;
        CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout;
    };
    struct {
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_44;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_46;
        CData/*2:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50;
        CData/*2:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52;
        CData/*3:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__miscf__DOT____Vcellinp__dff_rst_inst__din;
        CData/*4:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__out_addr_ff__DOT____Vcellinp__dff_rst_inst__din;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__lsu_stall_q;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_forward_next;
        CData/*0:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_valid;
        CData/*6:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__core_top_tb__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ core_top_tb__DOT__cycle_count;
        IData/*31:0*/ core_top_tb__DOT__fd;
        IData/*31:0*/ core_top_tb__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ core_top_tb__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_wb_data;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__dccm_rdata;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__dccm_waddr;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__dccm_wdata;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__dff_rst_en_vector_inst__DOT____Vcellinp__dff_rst_vector_inst__din;
        VlWide<3>/*64:0*/ core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i;
        VlWide<3>/*64:0*/ core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din;
        VlWide<5>/*154:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i;
        VlWide<5>/*154:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout;
    };
    struct {
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__DOT____Vcellinp__dff_rst_inst__din;
        VlWide<7>/*218:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i;
        VlWide<7>/*218:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din;
        VlWide<3>/*82:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i;
        VlWide<3>/*82:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dff_rst_en_inst__DOT____Vcellinp__dff_rst_inst__din;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__alu_wb_data_i;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__pcout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1;
        VlWide<3>/*64:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
        IData/*30:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_c__DOT__dout_temp;
        IData/*30:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data_mask;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_tag_out;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_out;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_tag_out;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_out;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out;
        VlWide<4>/*100:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout;
        VlWide<4>/*111:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout;
        VlWide<5>/*141:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9;
        IData/*31:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10;
        IData/*31:0*/ __VactIterCount;
        VlWide<7>/*218:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_out;
    };
    struct {
        QData/*63:0*/ core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data;
        VlWide<5>/*154:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i;
        QData/*37:0*/ core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out;
        VlWide<7>/*218:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd;
        VlWide<7>/*218:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated;
        VlWide<3>/*82:0*/ core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr;
        QData/*37:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout;
        QData/*63:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout;
        QData/*63:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din;
        QData/*32:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout;
        QData/*32:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2;
        QData/*32:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2;
        QData/*63:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout;
        QData/*63:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout;
        QData/*63:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout;
        QData/*32:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff;
        QData/*32:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff;
        QData/*32:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in;
        QData/*32:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff;
        QData/*63:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout;
        QData/*32:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__mff__DOT____Vcellinp__dff_rst_inst__din;
        QData/*32:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__qff__DOT____Vcellinp__dff_rst_inst__din;
        QData/*32:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__aff__DOT____Vcellinp__dff_rst_inst__din;
        QData/*63:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__instr_tag_ff__DOT____Vcellinp__dff_rst_inst__din;
        QData/*63:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask_base;
        QData/*63:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask;
        QData/*63:0*/ core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_3;
        VlUnpacked<IData/*31:0*/, 1024> core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file;
        VlUnpacked<IData/*31:0*/, 1024> core_top_tb__DOT__core_top_i__DOT__dccm_inst__DOT__mem;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_had6561ce__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcore_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_top_tb___024root(Vcore_top_tb__Syms* symsp, const char* v__name);
    ~Vcore_top_tb___024root();
    VL_UNCOPYABLE(Vcore_top_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
