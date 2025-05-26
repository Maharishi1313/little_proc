// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore_top_tb__Syms.h"


VL_ATTR_COLD void Vcore_top_tb___024root__trace_init_sub__TOP____024unit__0(Vcore_top_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcore_top_tb___024root__trace_init_sub__TOP__0(Vcore_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root__trace_init_sub__TOP__0\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vcore_top_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("core_top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"reset_vector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+748,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("core_top_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"reset_vector",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"instr_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+53,0,"instr_mem_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"instr_mem_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"instr_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"instr_mem_rdata_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"instr_mem_tag_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("idu0_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+60,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+68,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("idu1_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+106,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+116,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+154,0,"pipe_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"exu_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"exu_wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+157,0,"exu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"exu_mul_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"exu_div_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"exu_lsu_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"exu_lsu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"dccm_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+160,0,"dccm_rvalid_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"dccm_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+164,0,"dccm_rvalid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+752,0,"dccm_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+753,0,"dccm_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"dccm_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"exu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"exu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dccm_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+756,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+160,0,"rvalid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+164,0,"rvalid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+753,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("exu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("idu1_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+106,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+116,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+165,0,"instr_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"exu_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"exu_wb_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+157,0,"exu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"exu_mul_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"exu_div_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"exu_lsu_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"exu_lsu_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"dccm_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+160,0,"dccm_rvalid_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"dccm_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+164,0,"dccm_rvalid_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+752,0,"dccm_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+753,0,"dccm_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"dccm_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"alu_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"alu_wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+171,0,"alu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"mul_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"mul_wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+174,0,"mul_wb_rd_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"div_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"div_wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+177,0,"div_wb_rd_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"lsu_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"lsu_wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+180,0,"lsu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"alu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"alu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"mul_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"mul_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"div_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"div_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"lsu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"lsu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+106,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+116,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+182,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"instr_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"alu_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"alu_wb_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+171,0,"alu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"alu_wb_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"alu_wb_rd_addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+190,0,"alu_wb_rd_wr_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"aout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"bm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+194,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"ov",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"logic_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,1);
    tracep->declBus(c+198,0,"lout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"sout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+200,0,"sel_logic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"sel_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"sel_adder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"slt_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+758,0,"pcout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"ashift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"ne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"lt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"ge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_wb_data_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+759,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+760,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+209,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+211,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_tag_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+762,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+763,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+213,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+215,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("div_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+765,0,"dec_tlu_fast_div_disable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+106,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+116,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+765,0,"flush_lower",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"valid_ff_e1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"finish_early",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"div_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"out_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+177,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"instr_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"run_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"run_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"count_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+222,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+223,0,"m_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+225,0,"qff_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"aff_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+227,0,"q_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+229,0,"q_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+231,0,"a_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+233,0,"a_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+235,0,"m_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+237,0,"a_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+239,0,"dividend_neg_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"divisor_neg_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"dividend_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"dividend_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"q_ff_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"q_ff_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"a_ff_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"a_ff_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+246,0,"sign_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"sign_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"rem_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+250,0,"a_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+252,0,"a_eff_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+255,0,"rem_correct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"flush_lower_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"valid_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"smallnum_case",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"smallnum_case_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"smallnum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+260,0,"smallnum_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+261,0,"m_already_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"a_cls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+263,0,"b_cls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+766,0,"shortq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+264,0,"shortq_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+265,0,"shortq_shift_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+266,0,"shortq_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"shortq_enable_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+268,0,"short_dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+270,0,"shortq_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+271,0,"shortq_shift_xx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("a_ff_c", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+767,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"dout_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->popPrefix();
    tracep->pushPrefix("aff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+768,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+769,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+231,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+233,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+768,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+769,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+274,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+233,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("countff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+771,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+772,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+222,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("dividend_c", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+767,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+276,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"dout_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->popPrefix();
    tracep->pushPrefix("e1val_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+217,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("flush_any_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+765,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+256,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("i_shortq_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+775,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+279,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_tag_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+762,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+763,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+213,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+282,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+762,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+763,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+284,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+282,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+768,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+769,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+286,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+223,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+768,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+769,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+288,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+223,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("miscf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+776,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+777,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+290,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+776,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+777,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+291,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_addr_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+775,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+778,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+775,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+778,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+176,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+219,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("q_ff_c", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+767,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+276,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"dout_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->popPrefix();
    tracep->pushPrefix("qff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+768,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+769,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+227,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+229,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+768,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+769,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+294,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+229,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("runff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+159,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("smallnumff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+775,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+778,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+297,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lsu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lsu_ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+106,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+116,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+161,0,"lsu_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"lsu_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"lsu_dccm_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+160,0,"lsu_dccm_rvalid_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"lsu_dccm_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+164,0,"lsu_dccm_rvalid_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+752,0,"lsu_dccm_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+753,0,"lsu_dccm_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"lsu_dccm_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"lsu_wb_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+178,0,"lsu_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"lsu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"instr_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+298,0,"dc1_by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"dc1_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"dc1_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"dc1_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"dc1_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"dc1_unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"dc1_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"dc1_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"dc1_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"dc1_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"dc1_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+309,0,"dc1_computed_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+310,0,"dc1_unaligned_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+311,0,"dc1_lsu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"dc1_lsu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+313,0,"dc2_by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"dc2_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"dc2_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"dc2_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"dc2_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"dc2_unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"dc2_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"dc2_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+321,0,"dc2_computed_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+322,0,"dc2_unaligned_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"dc2_lsu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"dc2_lsu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+325,0,"dc3_by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"dc3_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"dc3_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"dc3_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"dc3_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"dc3_unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"dc3_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+332,0,"dc3_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+333,0,"dc3_computed_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+334,0,"dc3_unaligned_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+335,0,"dc3_lsu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"dc3_lsu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"dc1_load_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+338,0,"dc2_load_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"dc3_load_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+340,0,"lsu_stall_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+341,0,"load_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+343,0,"dc3_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+344,0,"load_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+346,0,"load_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"load_sext_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dc1_control_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+779,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+780,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+348,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+349,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc1_data_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+781,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+782,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+350,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declArray(c+354,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc2_control_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+779,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+780,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+349,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+358,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc2_data_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+759,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+760,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+359,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+361,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc2_instr_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc2_instr_tag_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+311,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc3_control_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+779,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+780,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+363,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc3_data_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+787,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+788,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+364,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declArray(c+367,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc3_instr_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+324,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc3_instr_tag_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+335,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_tag_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("stall_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+340,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mul_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mul_ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+106,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+116,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+765,0,"freeze",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"out_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+174,0,"out_rd_wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+183,0,"instr_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+158,0,"mul_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"valid_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"valid_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"mul_c1_e1_clken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"mul_c1_e2_clken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"mul_c1_e3_clken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"exu_mul_c1_e1_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+795,0,"exu_mul_c1_e2_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"exu_mul_c1_e3_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"a_ff_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"a_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"b_ff_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"b_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"rs1_sign_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rs1_neg_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"rs2_sign_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"rs2_neg_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+378,0,"a_ff_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+380,0,"b_ff_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+382,0,"prod_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+385,0,"low_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"low_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"low_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,0,"out_rd_addr_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+389,0,"out_rd_addr_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+173,0,"out_rd_addr_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+390,0,"out_rd_wr_en_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"out_rd_wr_en_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"out_rd_wr_en_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"instr_tag_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+393,0,"instr_tag_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"instr_tag_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+394,0,"instr_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+395,0,"instr_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"instr_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+396,0,"prod_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("a_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("a_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+768,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+769,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+399,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+378,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+768,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+769,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+401,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+380,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_tag_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+762,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+763,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+403,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+405,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_tag_e3_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+762,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+763,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+405,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+407,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_tag_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+762,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+763,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+213,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+403,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("low_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+385,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("low_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+386,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("low_e3_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+386,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+387,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_addr_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+775,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+778,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+388,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+389,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_addr_e3_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+775,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+778,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+389,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+173,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_addr_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+775,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+778,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+388,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_wr_en_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+391,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_wr_en_e3_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+391,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+174,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_wr_en_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+409,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+390,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("prod_e3_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+797,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+798,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+410,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+382,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->pushPrefix("rs1_sign_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+374,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("rs2_sign_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+376,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("valid_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+409,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+409,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+370,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+370,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+371,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+773,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+774,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+371,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("iccm_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+756,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+53,0,"rvalid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"rtag_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"rvalid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"rtag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"line_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+414,0,"line_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+416,0,"line_data_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("idu0_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"instr_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("idu0_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+60,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"instr_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"imm_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"shamt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+68,0,"alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"imm12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"shimm5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"imm20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"store",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"sub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"lor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"lxor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"sll",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"sra",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"srl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"slt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"unsign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"condbr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"by",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"half",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"rs1_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"rs2_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"nop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"legal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+154,0,"pipe_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("idu0_out_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+418,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+421,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+422,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+423,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+425,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+426,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("decode_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+464,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("decode_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("decode_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+464,0,"alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"imm12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"shimm5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"imm20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"store",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"sub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"lor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"lxor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"sll",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"sra",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"srl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"slt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"unsign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"condbr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"by",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"half",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"rs1_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"rs2_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"rem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"nop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"legal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idu0_out_flop_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+802,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+803,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declArray(c+502,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+508,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+802,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+803,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+513,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declArray(c+508,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idu1_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("idu0_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+60,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+68,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("idu1_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+106,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"instr_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"imm_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"shamt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+116,0,"alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"imm12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"shimm5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"imm20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"store",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"lor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"lxor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"sll",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"sra",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"srl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"slt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"unsign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"condbr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"by",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"half",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"rs1_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"rs2_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"nop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"legal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+154,0,"pipe_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"exu_wb_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+155,0,"exu_wb_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+157,0,"exu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"exu_mul_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"exu_div_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"exu_lsu_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"exu_lsu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("idu1_out_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+60,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+68,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("idu1_out_before_fwd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+518,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+519,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+520,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+521,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+522,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+523,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+524,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+525,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+526,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+527,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+528,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+552,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+3,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("idu1_out_gated", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+566,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+568,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+569,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+570,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+571,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+572,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+573,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+574,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+575,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+576,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+584,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+588,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+596,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+597,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+598,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+613,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("last_issued_instr", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+614,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+615,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+616,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+617,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+618,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+619,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("idu1_out_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+808,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+809,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declArray(c+5,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+623,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+808,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+809,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+12,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declArray(c+623,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("last_issued_instr_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+816,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+817,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+630,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+633,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+816,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+817,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+636,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+633,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_file_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+639,0,"rs1_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+640,0,"rs2_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+155,0,"rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+157,0,"rd_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+642,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+643,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+644,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+645,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+646,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+645,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+647,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+648,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+649,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+648,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+651,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+651,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+653,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+654,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+655,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+654,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+656,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+657,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+658,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+657,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+660,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+661,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+660,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+663,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+664,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+665,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+666,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+667,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+668,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+669,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+670,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+671,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+672,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+672,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+675,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+676,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+675,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+677,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+678,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+679,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+678,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+681,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+682,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+681,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+683,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+684,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+685,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+684,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+686,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+687,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+688,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+687,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+689,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+690,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+691,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+690,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+692,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+693,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+694,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+693,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+696,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+697,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+696,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+698,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+699,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+700,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+699,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+701,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+702,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+703,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+702,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+705,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+706,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+705,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+708,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+709,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+708,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+710,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+711,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+712,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+711,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+714,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+715,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+717,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+718,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+717,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+719,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+720,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+721,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+720,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+723,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+724,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+723,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+725,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+726,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+727,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+726,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+729,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+729,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+732,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+733,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+732,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ifu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"reset_vector",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"instr_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+53,0,"instr_mem_addr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"instr_mem_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"instr_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"instr_mem_rdata_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"instr_mem_tag_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,0,"pipe_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"instr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"instr_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("instr_dff_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+797,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+798,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+734,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+737,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+797,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+798,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+740,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+737,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"PC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+820,0,"INC_AMOUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"reset_vector",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+765,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+786,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"pc_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+743,0,"pc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+744,0,"update_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dff_rst_en_vector_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+744,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"reset_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+743,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_vector_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+786,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+746,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"reset_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+745,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+749,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+750,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcore_top_tb___024root__trace_init_sub__TOP____024unit__0(Vcore_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+767,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+821,0,"XLEN_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"RESET_VECTOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"INSTR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+821,0,"INSTR_LEN_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+821,0,"DATA_LEN_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"INSTR_MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+822,0,"INSTR_MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+823,0,"INSTR_MEM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"INSTR_MEM_TAG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"DATA_MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+822,0,"DATA_MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+823,0,"DATA_MEM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"REG_FILE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+824,0,"REG_FILE_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vcore_top_tb___024root__trace_init_top(Vcore_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root__trace_init_top\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcore_top_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcore_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcore_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcore_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcore_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcore_top_tb___024root__trace_register(Vcore_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root__trace_register\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcore_top_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcore_top_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcore_top_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcore_top_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcore_top_tb___024root__trace_const_0_sub_0(Vcore_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcore_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root__trace_const_0\n"); );
    // Init
    Vcore_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore_top_tb___024root*>(voidSelf);
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcore_top_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcore_top_tb___024root__trace_const_0_sub_0(Vcore_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root__trace_const_0_sub_0\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<7>/*223:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    bufp->fullIData(oldp+751,(0x100000U),32);
    bufp->fullIData(oldp+752,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr),32);
    bufp->fullBit(oldp+753,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wen));
    bufp->fullIData(oldp+754,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata),32);
    bufp->fullIData(oldp+755,(0x20U),32);
    bufp->fullIData(oldp+756,(0x400U),32);
    bufp->fullSData(oldp+757,((0x3fcU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr)),10);
    bufp->fullIData(oldp+758,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__pcout),32);
    bufp->fullIData(oldp+759,(0x26U),32);
    bufp->fullQData(oldp+760,(0ULL),38);
    bufp->fullIData(oldp+762,(0x40U),32);
    bufp->fullQData(oldp+763,(0ULL),64);
    bufp->fullBit(oldp+765,(0U));
    bufp->fullCData(oldp+766,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq),6);
    bufp->fullIData(oldp+767,(0x20U),32);
    bufp->fullIData(oldp+768,(0x21U),32);
    bufp->fullQData(oldp+769,(0ULL),33);
    bufp->fullIData(oldp+771,(6U),32);
    bufp->fullCData(oldp+772,(0U),6);
    bufp->fullIData(oldp+773,(1U),32);
    bufp->fullBit(oldp+774,(0U));
    bufp->fullIData(oldp+775,(5U),32);
    bufp->fullIData(oldp+776,(4U),32);
    bufp->fullCData(oldp+777,(0U),4);
    bufp->fullCData(oldp+778,(0U),5);
    bufp->fullIData(oldp+779,(7U),32);
    bufp->fullCData(oldp+780,(0U),7);
    bufp->fullIData(oldp+781,(0x65U),32);
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    __Vtemp_1[3U] = 0U;
    bufp->fullWData(oldp+782,(__Vtemp_1),101);
    bufp->fullIData(oldp+786,(0U),32);
    bufp->fullIData(oldp+787,(0x46U),32);
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    bufp->fullWData(oldp+788,(__Vtemp_2),70);
    bufp->fullBit(oldp+791,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__mul_c1_e1_clken));
    bufp->fullBit(oldp+792,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__mul_c1_e2_clken));
    bufp->fullBit(oldp+793,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__mul_c1_e3_clken));
    bufp->fullBit(oldp+794,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__exu_mul_c1_e1_clk));
    bufp->fullBit(oldp+795,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__exu_mul_c1_e2_clk));
    bufp->fullBit(oldp+796,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__exu_mul_c1_e3_clk));
    bufp->fullIData(oldp+797,(0x41U),32);
    __Vtemp_3[0U] = 0U;
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    bufp->fullWData(oldp+798,(__Vtemp_3),65);
    bufp->fullBit(oldp+801,(1U));
    bufp->fullIData(oldp+802,(0x9bU),32);
    __Vtemp_4[0U] = 0U;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    bufp->fullWData(oldp+803,(__Vtemp_4),155);
    bufp->fullIData(oldp+808,(0xdbU),32);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = 0U;
    __Vtemp_5[2U] = 0U;
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    __Vtemp_5[5U] = 0U;
    __Vtemp_5[6U] = 0U;
    bufp->fullWData(oldp+809,(__Vtemp_5),219);
    bufp->fullIData(oldp+816,(0x53U),32);
    __Vtemp_6[0U] = 0U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    bufp->fullWData(oldp+817,(__Vtemp_6),83);
    bufp->fullIData(oldp+820,(4U),32);
    bufp->fullIData(oldp+821,(4U),32);
    bufp->fullIData(oldp+822,(0x400U),32);
    bufp->fullIData(oldp+823,(0xcU),32);
    bufp->fullIData(oldp+824,(5U),32);
}

VL_ATTR_COLD void Vcore_top_tb___024root__trace_full_0_sub_0(Vcore_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcore_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root__trace_full_0\n"); );
    // Init
    Vcore_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore_top_tb___024root*>(voidSelf);
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcore_top_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcore_top_tb___024root__trace_full_0_sub_0(Vcore_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_top_tb___024root__trace_full_0_sub_0\n"); );
    Vcore_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<7>/*223:0*/ __Vtemp_6;
    VlWide<7>/*223:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<5>/*159:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_56;
    // Body
    bufp->fullIData(oldp+1,(((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                               == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                            >> 0x16U))) 
                              & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                              ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                              : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                         >> 4U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                  ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                 [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                            >> 0x16U))]
                                  : 0U))),32);
    bufp->fullIData(oldp+2,(((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                               == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                            >> 0x11U))) 
                              & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                              ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                              : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                         >> 3U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                  ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                 [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                            >> 0x11U))]
                                  : 0U))),32);
    bufp->fullIData(oldp+3,(((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                     >> 4U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                              ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                             [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                        >> 0x16U))]
                              : 0U)),32);
    bufp->fullIData(oldp+4,(((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                     >> 3U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                              ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                             [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                        >> 0x11U))]
                              : 0U)),32);
    __Vtemp_6[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U];
    __Vtemp_6[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U];
    __Vtemp_6[2U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                         == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                      >> 0x11U))) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                        ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                        : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                   >> 3U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                           [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                      >> 0x11U))] : 0U)) 
                      << 0x1bU) | (0x7ffffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U]));
    __Vtemp_6[3U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                         == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                      >> 0x11U))) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                        ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                        : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                   >> 3U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                           [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                      >> 0x11U))] : 0U)) 
                      >> 5U) | (((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
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
    __Vtemp_6[4U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                         == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                      >> 0x16U))) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                        ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                        : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                   >> 4U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                           [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                      >> 0x16U))] : 0U)) 
                      >> 5U) | ((IData)((((QData)((IData)(
                                                          vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
                                          << 0x25U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U])) 
                                             << 5U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U])) 
                                               >> 0x1bU)))) 
                                << 0x1bU));
    __Vtemp_6[5U] = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
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
    __Vtemp_6[6U] = ((IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
                                << 0x25U) | (((QData)((IData)(
                                                              vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U])) 
                                                >> 0x1bU))) 
                              >> 0x20U)) >> 5U);
    bufp->fullWData(oldp+5,(__Vtemp_6),219);
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
                                        >> 3U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                           >> 0x11U))]
                                 : 0U)) << 0x1bU) | 
                          (0x7ffffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U]));
        __Vtemp_13[3U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                              == (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                           >> 0x11U))) 
                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                             ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                             : ((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                        >> 3U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                [(0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                           >> 0x11U))]
                                 : 0U)) >> 5U) | ((
                                                   (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
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
        __Vtemp_13[4U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
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
        __Vtemp_13[5U] = (((IData)((((QData)((IData)(
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
        __Vtemp_13[6U] = ((IData)(((((QData)((IData)(
                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U])) 
                                                     >> 0x1bU))) 
                                   >> 0x20U)) >> 5U);
    }
    bufp->fullWData(oldp+12,(__Vtemp_13),219);
    bufp->fullIData(oldp+19,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.core_top_tb__DOT__cycle_count),32);
    bufp->fullSData(oldp+52,((0xfffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)),12);
    bufp->fullBit(oldp+53,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_addr_valid));
    bufp->fullIData(oldp+54,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q),32);
    bufp->fullIData(oldp+55,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                      >> (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))),32);
    bufp->fullBit(oldp+56,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid));
    bufp->fullIData(oldp+57,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in),32);
    bufp->fullIData(oldp+58,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[1U]),32);
    bufp->fullBit(oldp+59,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[2U])));
    bufp->fullIData(oldp+60,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U] 
                               << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U] 
                                         >> 0x1bU))),32);
    bufp->fullIData(oldp+61,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U] 
                               << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                         >> 0x1bU))),32);
    bufp->fullCData(oldp+62,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                       >> 0x16U))),5);
    bufp->fullCData(oldp+63,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                                       >> 0x11U))),5);
    bufp->fullIData(oldp+64,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U] 
                               << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                           >> 0x11U))),32);
    bufp->fullBit(oldp+65,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                  >> 0x10U))));
    bufp->fullCData(oldp+66,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                       >> 0xbU))),5);
    bufp->fullCData(oldp+67,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                       >> 6U))),5);
    bufp->fullBit(oldp+68,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                  >> 5U))));
    bufp->fullBit(oldp+69,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                  >> 4U))));
    bufp->fullBit(oldp+70,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                  >> 3U))));
    bufp->fullBit(oldp+71,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                  >> 2U))));
    bufp->fullBit(oldp+72,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                  >> 1U))));
    bufp->fullBit(oldp+73,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U])));
    bufp->fullBit(oldp+74,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                            >> 0x1fU)));
    bufp->fullBit(oldp+75,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+76,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+77,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+78,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+79,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+80,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x19U))));
    bufp->fullBit(oldp+81,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x18U))));
    bufp->fullBit(oldp+82,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x17U))));
    bufp->fullBit(oldp+83,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x16U))));
    bufp->fullBit(oldp+84,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x15U))));
    bufp->fullBit(oldp+85,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x14U))));
    bufp->fullBit(oldp+86,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x13U))));
    bufp->fullBit(oldp+87,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x12U))));
    bufp->fullBit(oldp+88,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+89,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+90,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0xfU))));
    bufp->fullBit(oldp+91,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0xeU))));
    bufp->fullBit(oldp+92,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0xdU))));
    bufp->fullBit(oldp+93,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0xcU))));
    bufp->fullBit(oldp+94,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0xbU))));
    bufp->fullBit(oldp+95,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+96,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 9U))));
    bufp->fullBit(oldp+97,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 8U))));
    bufp->fullBit(oldp+98,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 7U))));
    bufp->fullBit(oldp+99,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                  >> 6U))));
    bufp->fullBit(oldp+100,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+101,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+102,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+103,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+104,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+105,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U])));
    bufp->fullIData(oldp+106,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[6U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+107,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+108,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+109,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                          >> 0x1bU))),32);
    bufp->fullCData(oldp+110,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+111,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                        >> 0x11U))),5);
    bufp->fullIData(oldp+112,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                            >> 0x11U))),32);
    bufp->fullBit(oldp+113,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+114,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+115,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                        >> 6U))),5);
    bufp->fullBit(oldp+116,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 5U))));
    bufp->fullBit(oldp+117,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+118,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+119,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+120,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+121,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U])));
    bufp->fullBit(oldp+122,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+123,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+124,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+125,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+126,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+127,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+128,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+129,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+130,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+131,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+132,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+133,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+134,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+135,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+136,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+137,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+138,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+139,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+140,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+141,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+142,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+143,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+144,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+145,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+146,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+147,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+148,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+149,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+150,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+151,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+152,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+153,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])));
    bufp->fullBit(oldp+154,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall));
    bufp->fullIData(oldp+155,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data),32);
    bufp->fullCData(oldp+156,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr),5);
    bufp->fullBit(oldp+157,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en));
    bufp->fullBit(oldp+158,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_mul_busy));
    bufp->fullBit(oldp+159,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state));
    bufp->fullBit(oldp+160,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_busy));
    bufp->fullBit(oldp+161,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall));
    bufp->fullIData(oldp+162,((((- (IData)((1U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                  & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_control_reg__dout) 
                                                     >> 3U))))) 
                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr) 
                               | ((- (IData)((1U & 
                                              (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                >> 3U) 
                                               & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout))))) 
                                  & (((IData)(1U) + (IData)(
                                                            (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout 
                                                             >> 8U))) 
                                     << 2U)))),32);
    bufp->fullIData(oldp+163,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata),32);
    bufp->fullBit(oldp+164,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rvalid_out));
    bufp->fullIData(oldp+165,((((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                                & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout 
                                           >> 0x20U))) 
                               | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                                   & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout 
                                              >> 0x20U))) 
                                  | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                                      & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout 
                                                 >> 0x20U))) 
                                     | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                        & (((- (IData)(
                                                       (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                         >> 3U) 
                                                        & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_11)))) 
                                            & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_tag_out) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                                             >> 3U)))) 
                                              & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out))))))),32);
    bufp->fullIData(oldp+166,((((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                               | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout)) 
                                  | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                                      & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                                     | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                        & (((- (IData)(
                                                       (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                         >> 3U) 
                                                        & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_11)))) 
                                            & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_out) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                                             >> 3U)))) 
                                              & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out))))))),32);
    bufp->fullIData(oldp+167,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[0U]),32);
    bufp->fullSData(oldp+168,((0x3fcU & (((- (IData)(
                                                     (1U 
                                                      & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                         & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_control_reg__dout) 
                                                            >> 3U))))) 
                                          & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr) 
                                         | ((- (IData)(
                                                       (1U 
                                                        & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                            >> 3U) 
                                                           & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout))))) 
                                            & (((IData)(1U) 
                                                + (IData)(
                                                          (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout 
                                                           >> 8U))) 
                                               << 2U))))),10);
    bufp->fullIData(oldp+169,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout 
                                       >> 6U))),32);
    bufp->fullCData(oldp+170,((0x1fU & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout 
                                                >> 1U)))),5);
    bufp->fullBit(oldp+171,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout))));
    bufp->fullIData(oldp+172,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e3)
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[0U]
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[1U])),32);
    bufp->fullCData(oldp+173,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e3),5);
    bufp->fullBit(oldp+174,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3));
    bufp->fullIData(oldp+175,(((0xfU & ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout) 
                                                       >> 4U)))) 
                                        & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout))) 
                               | (((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout)))) 
                                   & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_46)
                                       ? ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
                                           << 1U) | 
                                          (1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                       : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff))) 
                                  | ((- (IData)((1U 
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
    bufp->fullCData(oldp+176,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr),5);
    bufp->fullBit(oldp+177,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en));
    bufp->fullIData(oldp+178,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__load_shifted) 
                                & ((0xffU & (- (IData)(
                                                       (1U 
                                                        & ((IData)(
                                                                   (0x49U 
                                                                    == 
                                                                    (0x49U 
                                                                     & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout)))) 
                                                           | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_13) 
                                                              & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                                 & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                                    >> 6U)))))))) 
                                   | ((0xffffU & (- (IData)(
                                                            (1U 
                                                             & ((IData)(
                                                                        (0x29U 
                                                                         == 
                                                                         (0x29U 
                                                                          & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout)))) 
                                                                | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_13) 
                                                                   & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                                      & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                                         >> 5U)))))))) 
                                      | (- (IData)(
                                                   (1U 
                                                    & ((IData)(
                                                               (0x19U 
                                                                == 
                                                                (0x19U 
                                                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout)))) 
                                                       | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_13) 
                                                          & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                             & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                                >> 4U)))))))))) 
                               | (((- (IData)((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_4) 
                                                & (IData)(
                                                          ((0x40U 
                                                            == 
                                                            (0x42U 
                                                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout))) 
                                                           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__load_shifted 
                                                              >> 7U)))) 
                                               | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_7) 
                                                  & (IData)(
                                                            (((0x40U 
                                                               == 
                                                               (0x42U 
                                                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout))) 
                                                              & (~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__load_shifted 
                                                                >> 7U))))))) 
                                   << 8U) | ((- (IData)(
                                                        (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_4) 
                                                          & (IData)(
                                                                    ((0x20U 
                                                                      == 
                                                                      (0x22U 
                                                                       & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout))) 
                                                                     & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__load_shifted 
                                                                        >> 0xfU)))) 
                                                         | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_7) 
                                                            & (IData)(
                                                                      (((0x20U 
                                                                         == 
                                                                         (0x22U 
                                                                          & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout))) 
                                                                        & (~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                                       & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__load_shifted 
                                                                          >> 0xfU))))))) 
                                             << 0x10U)))),32);
    bufp->fullCData(oldp+179,((0x1fU & (((- (IData)(
                                                    (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                      >> 3U) 
                                                     & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_11)))) 
                                         & (IData)(
                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout 
                                                    >> 1U))) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                                          >> 3U)))) 
                                           & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_data_ff__dout[1U] 
                                               << 0x1fU) 
                                              | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_data_ff__dout[1U] 
                                                 >> 1U)))))),5);
    bufp->fullBit(oldp+180,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en));
    bufp->fullIData(oldp+181,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+182,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
    bufp->fullIData(oldp+183,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+184,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout)),32);
    bufp->fullIData(oldp+185,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+186,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
    bufp->fullIData(oldp+187,((((- (IData)((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                             >> 3U) 
                                            & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_11)))) 
                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_tag_out) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                               >> 3U)))) 
                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out))),32);
    bufp->fullIData(oldp+188,((((- (IData)((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                             >> 3U) 
                                            & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_11)))) 
                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_out) 
                               | ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                               >> 3U)))) 
                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out))),32);
    bufp->fullIData(oldp+189,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__alu_wb_data_i),32);
    bufp->fullBit(oldp+190,((1U & (IData)(((1U == (3U 
                                                   & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])) 
                                           & (0x22U 
                                              == (0x22U 
                                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U])))))));
    bufp->fullIData(oldp+191,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b),32);
    bufp->fullIData(oldp+192,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout),32);
    bufp->fullIData(oldp+193,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm),32);
    bufp->fullBit(oldp+194,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(
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
    bufp->fullBit(oldp+195,((1U & (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                        >> 0x1aU)) 
                                    & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                           >> 0x1fU)) 
                                       & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                          >> 0x1fU))) 
                                   | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                       >> 0x1aU) & 
                                      ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                           >> 0x1fU)) 
                                       & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                          >> 0x1fU)))))));
    bufp->fullBit(oldp+196,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                             >> 0x1fU)));
    bufp->fullCData(oldp+197,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_3) 
                                << 1U) | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_4))),3);
    bufp->fullIData(oldp+198,(((((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                  << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                            >> 0x1bU)) 
                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                   & (- (IData)((1U 
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
                                          << 5U) | 
                                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                          >> 0x1bU))) 
                                     & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                        & (- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_4)))))))),32);
    bufp->fullIData(oldp+199,((((- (IData)((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                  >> 0x15U)))) 
                                & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                     << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                               >> 0x1bU)) 
                                   << (0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))) 
                               | (((- (IData)((1U & 
                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                >> 0x13U)))) 
                                   & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                        << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                  >> 0x1bU)) 
                                      >> (0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))) 
                                  | ((- (IData)((1U 
                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                    >> 0x14U)))) 
                                     & VL_SHIFTRS_III(32,32,5, 
                                                      ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                        << 5U) 
                                                       | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                          >> 0x1bU)), 
                                                      (0x1fU 
                                                       & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b)))))),32);
    bufp->fullBit(oldp+200,((0U != (7U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                          >> 0x16U)))));
    bufp->fullBit(oldp+201,((IData)((0U != (0x380000U 
                                            & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])))));
    bufp->fullBit(oldp+202,(((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                 >> 0x12U)) & (0U != 
                                               (0x6000000U 
                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])))));
    bufp->fullBit(oldp+203,((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                    >> 0x12U) & (((~ 
                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                    >> 0x11U)) 
                                                  & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                                      >> 0x1fU) 
                                                     ^ 
                                                     (((~ 
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
    bufp->fullIData(oldp+204,(VL_SHIFTRS_III(32,32,5, 
                                             ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                               << 5U) 
                                              | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                 >> 0x1bU)), 
                                             (0x1fU 
                                              & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))),32);
    bufp->fullBit(oldp+205,((((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                               << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                         >> 0x1bU)) 
                             == vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b)));
    bufp->fullBit(oldp+206,((((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                               << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                         >> 0x1bU)) 
                             != vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b)));
    bufp->fullBit(oldp+207,((1U & (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                        >> 0x11U)) 
                                    & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                        >> 0x1fU) ^ 
                                       (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
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
                                                 >> 0x1fU)))))) 
                                   | ((~ (IData)((1ULL 
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
    bufp->fullBit(oldp+208,((1U & (~ (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
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
                                            >> 0x11U)))))));
    bufp->fullQData(oldp+209,((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__alu_wb_data_i)) 
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
    bufp->fullQData(oldp+211,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout),38);
    bufp->fullQData(oldp+213,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din),64);
    bufp->fullQData(oldp+215,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout),64);
    bufp->fullBit(oldp+217,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1));
    bufp->fullBit(oldp+218,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early));
    bufp->fullBit(oldp+219,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish));
    bufp->fullBit(oldp+220,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                              | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state)) 
                             & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish)) 
                                & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff))))));
    bufp->fullCData(oldp+221,((0x3fU & ((- (IData)(
                                                   ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish)) 
                                                    & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state) 
                                                       & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                                                          & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable))))))) 
                                        & ((IData)(1U) 
                                           + ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count) 
                                              + (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff)))))),6);
    bufp->fullCData(oldp+222,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count),6);
    bufp->fullQData(oldp+223,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff),33);
    bufp->fullBit(oldp+225,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                             | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52))));
    bufp->fullBit(oldp+226,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                             | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52) 
                                 & (0x21U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count))) 
                                | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)))));
    bufp->fullQData(oldp+227,((0x1ffffffffULL & (((- (QData)((IData)(
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
    bufp->fullQData(oldp+229,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff),33);
    bufp->fullQData(oldp+231,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in),33);
    bufp->fullQData(oldp+233,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff),33);
    bufp->fullQData(oldp+235,((0x1ffffffffULL & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add)
                                                  ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff
                                                  : 
                                                 (~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)))),33);
    __Vtemp_15[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
    __Vtemp_15[1U] = 0U;
    __Vtemp_15[2U] = 0U;
    VL_SHIFTL_WWI(65,65,6, __Vtemp_16, __Vtemp_15, (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff));
    bufp->fullQData(oldp+237,((0x1ffffffffULL & ((- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state))) 
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
    bufp->fullBit(oldp+239,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                   >> 3U))));
    bufp->fullBit(oldp+240,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                   >> 2U))));
    bufp->fullIData(oldp+241,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp),32);
    bufp->fullIData(oldp+242,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff),32);
    bufp->fullIData(oldp+243,(((1U & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                       >> 1U) & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                                  >> 3U) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                                  >> 2U))))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp
                                : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff))),32);
    bufp->fullIData(oldp+244,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
                                << 1U) | (1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))),32);
    bufp->fullIData(oldp+245,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_46)
                                ? ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
                                    << 1U) | (1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff))),32);
    bufp->fullBit(oldp+246,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                   >> 1U))));
    bufp->fullBit(oldp+247,(((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                 >> 0x11U)) & (0U != 
                                               ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                 << 5U) 
                                                | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+248,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))));
    bufp->fullBit(oldp+249,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add));
    __Vtemp_19[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
    __Vtemp_19[1U] = 0U;
    __Vtemp_19[2U] = 0U;
    VL_SHIFTL_WWI(65,65,6, __Vtemp_20, __Vtemp_19, (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff));
    bufp->fullQData(oldp+250,((0x1ffffffffULL & (((- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct))) 
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
    bufp->fullWData(oldp+252,(__Vtemp_25),65);
    bufp->fullBit(oldp+255,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct));
    bufp->fullBit(oldp+256,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff));
    bufp->fullBit(oldp+257,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1))));
    bufp->fullBit(oldp+258,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout) 
                                   >> 4U))));
    bufp->fullCData(oldp+259,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__smallnum),4);
    bufp->fullCData(oldp+260,((0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout))),4);
    bufp->fullBit(oldp+261,((IData)((6U == (6U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))))));
    bufp->fullCData(oldp+262,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50),5);
    bufp->fullCData(oldp+263,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51),5);
    bufp->fullCData(oldp+264,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift),6);
    bufp->fullCData(oldp+265,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff),6);
    bufp->fullBit(oldp+266,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable));
    bufp->fullBit(oldp+267,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                   >> 4U))));
    bufp->fullQData(oldp+268,((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))),33);
    bufp->fullCData(oldp+270,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_raw),4);
    bufp->fullCData(oldp+271,((0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout))),4);
    bufp->fullIData(oldp+272,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)),32);
    bufp->fullIData(oldp+273,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp),31);
    bufp->fullQData(oldp+274,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52) 
                                    & (0x21U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count))) 
                                   | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)),33);
    bufp->fullIData(oldp+276,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)),32);
    bufp->fullIData(oldp+277,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_c__DOT__dout_temp),31);
    bufp->fullBit(oldp+278,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en))));
    bufp->fullCData(oldp+279,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable) 
                                << 4U) | (0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift)))),5);
    bufp->fullCData(oldp+280,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout),5);
    bufp->fullBit(oldp+281,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en));
    bufp->fullQData(oldp+282,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout),64);
    bufp->fullQData(oldp+284,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)),64);
    bufp->fullQData(oldp+286,((((QData)((IData)((1U 
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
    bufp->fullQData(oldp+288,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
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
    bufp->fullCData(oldp+290,((((8U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                       >> 0x17U)) | 
                                (4U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                       >> 0x18U))) 
                               | ((((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                        >> 0x11U)) 
                                    & (0U != ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                               << 5U) 
                                              | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                 >> 0x1bU)))) 
                                   << 1U) | (1U & (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                   >> 2U))))),4);
    bufp->fullCData(oldp+291,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout),4);
    bufp->fullCData(oldp+292,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
                                ? (((8U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                           >> 0x17U)) 
                                    | (4U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                             >> 0x18U))) 
                                   | ((((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                            >> 0x11U)) 
                                        & (0U != ((
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                   << 5U) 
                                                  | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                     >> 0x1bU)))) 
                                       << 1U) | (1U 
                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                    >> 2U))))
                                : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))),4);
    bufp->fullCData(oldp+293,((0x1fU & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
                                         ? ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                             << 0x15U) 
                                            | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                               >> 0xbU))
                                         : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr)))),5);
    bufp->fullQData(oldp+294,((0x1ffffffffULL & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                                  | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52))
                                                  ? 
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
                                                                                >> 0x20U))))))))))
                                                  : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff))),33);
    bufp->fullCData(oldp+296,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early) 
                                << 4U) | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__smallnum))),5);
    bufp->fullCData(oldp+297,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout),5);
    bufp->fullBit(oldp+298,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_control_reg__dout) 
                                   >> 6U))));
    bufp->fullBit(oldp+299,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_control_reg__dout) 
                                   >> 5U))));
    bufp->fullBit(oldp+300,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_control_reg__dout) 
                                   >> 4U))));
    bufp->fullBit(oldp+301,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_control_reg__dout) 
                                   >> 3U))));
    bufp->fullBit(oldp+302,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_control_reg__dout) 
                                   >> 2U))));
    bufp->fullBit(oldp+303,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_control_reg__dout) 
                                   >> 1U))));
    bufp->fullBit(oldp+304,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_control_reg__dout))));
    bufp->fullIData(oldp+305,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_data_ff__dout[3U] 
                                << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_data_ff__dout[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+306,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_data_ff__dout[2U] 
                                << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_data_ff__dout[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+307,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_data_ff__dout[1U] 
                                << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_data_ff__dout[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+308,((0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_data_ff__dout[0U])),5);
    bufp->fullIData(oldp+309,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr),32);
    bufp->fullBit(oldp+310,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_unaligned_addr));
    bufp->fullIData(oldp+311,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_tag_out),32);
    bufp->fullIData(oldp+312,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_out),32);
    bufp->fullBit(oldp+313,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                   >> 6U))));
    bufp->fullBit(oldp+314,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                   >> 5U))));
    bufp->fullBit(oldp+315,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                   >> 4U))));
    bufp->fullBit(oldp+316,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                   >> 3U))));
    bufp->fullBit(oldp+317,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                   >> 2U))));
    bufp->fullBit(oldp+318,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                   >> 1U))));
    bufp->fullBit(oldp+319,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout))));
    bufp->fullCData(oldp+320,((0x1fU & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout 
                                                >> 1U)))),5);
    bufp->fullIData(oldp+321,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout 
                                       >> 6U))),32);
    bufp->fullBit(oldp+322,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout))));
    bufp->fullIData(oldp+323,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_tag_out),32);
    bufp->fullIData(oldp+324,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_out),32);
    bufp->fullBit(oldp+325,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                   >> 6U))));
    bufp->fullBit(oldp+326,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                   >> 5U))));
    bufp->fullBit(oldp+327,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                   >> 4U))));
    bufp->fullBit(oldp+328,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                   >> 3U))));
    bufp->fullBit(oldp+329,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                   >> 2U))));
    bufp->fullBit(oldp+330,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                   >> 1U))));
    bufp->fullBit(oldp+331,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout))));
    bufp->fullCData(oldp+332,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_data_ff__dout[1U] 
                                        >> 1U))),5);
    bufp->fullIData(oldp+333,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_data_ff__dout[2U] 
                                << 0x1aU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_data_ff__dout[1U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+334,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_data_ff__dout[1U])));
    bufp->fullIData(oldp+335,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out),32);
    bufp->fullIData(oldp+336,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out),32);
    bufp->fullIData(oldp+337,(((- (IData)((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                 >> 3U)))) 
                               & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata)),32);
    bufp->fullIData(oldp+338,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_data_ff__dout[0U]),32);
    bufp->fullIData(oldp+339,(((- (IData)((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                                 >> 3U)))) 
                               & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                                  & (- (IData)((1U 
                                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout))))))),32);
    bufp->fullBit(oldp+340,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__lsu_stall_q));
    bufp->fullQData(oldp+341,((((QData)((IData)(((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout) 
                                                                >> 3U)))) 
                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_data_ff__dout[0U])))),64);
    bufp->fullCData(oldp+343,((0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_data_ff__dout[1U] 
                                        >> 3U))),5);
    bufp->fullQData(oldp+344,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__load_shifted),64);
    bufp->fullIData(oldp+346,(((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(
                                                               (0x49U 
                                                                == 
                                                                (0x49U 
                                                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout)))) 
                                                       | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_13) 
                                                          & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                             & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                                >> 6U)))))))) 
                               | ((0xffffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (0x29U 
                                                                     == 
                                                                     (0x29U 
                                                                      & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout)))) 
                                                            | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_13) 
                                                               & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                                  & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                                     >> 5U)))))))) 
                                  | (- (IData)((1U 
                                                & ((IData)(
                                                           (0x19U 
                                                            == 
                                                            (0x19U 
                                                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout)))) 
                                                   | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_13) 
                                                      & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                         & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                                            >> 4U)))))))))),32);
    bufp->fullIData(oldp+347,((((- (IData)((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_4) 
                                             & (IData)(
                                                       ((0x40U 
                                                         == 
                                                         (0x42U 
                                                          & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout))) 
                                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__load_shifted 
                                                           >> 7U)))) 
                                            | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_7) 
                                               & (IData)(
                                                         (((0x40U 
                                                            == 
                                                            (0x42U 
                                                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout))) 
                                                           & (~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__load_shifted 
                                                             >> 7U))))))) 
                                << 8U) | ((- (IData)(
                                                     (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_4) 
                                                       & (IData)(
                                                                 ((0x20U 
                                                                   == 
                                                                   (0x22U 
                                                                    & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout))) 
                                                                  & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__load_shifted 
                                                                     >> 0xfU)))) 
                                                      | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_7) 
                                                         & (IData)(
                                                                   (((0x20U 
                                                                      == 
                                                                      (0x22U 
                                                                       & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout))) 
                                                                     & (~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout)) 
                                                                    & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__load_shifted 
                                                                       >> 0xfU))))))) 
                                          << 0x10U))),32);
    bufp->fullCData(oldp+348,(((0x70U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                         >> 4U)) | 
                               ((0xcU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                         >> 0x1aU)) 
                                | ((2U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                          >> 0x10U)) 
                                   | (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U]))))),7);
    bufp->fullCData(oldp+349,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_control_reg__dout),7);
    __Vtemp_27[0U] = (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                        << 0x14U) | (0xfffe0U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                 >> 0xcU))) 
                      | (0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                  >> 0xbU)));
    __Vtemp_27[1U] = ((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
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
    __Vtemp_27[2U] = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
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
    __Vtemp_27[3U] = ((IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                                 << 0x25U) | (((QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                 >> 0x1bU))) 
                               >> 0x20U)) >> 0x1bU);
    bufp->fullWData(oldp+350,(__Vtemp_27),101);
    bufp->fullWData(oldp+354,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_data_ff__dout),101);
    bufp->fullCData(oldp+358,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout),7);
    bufp->fullQData(oldp+359,((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr)) 
                                << 6U) | (QData)((IData)(
                                                         ((0x3eU 
                                                           & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc1_data_ff__dout[0U] 
                                                              << 1U)) 
                                                          | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_unaligned_addr)))))),38);
    bufp->fullQData(oldp+361,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout),38);
    bufp->fullCData(oldp+363,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_control_reg__dout),7);
    __Vtemp_28[0U] = ((- (IData)((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_control_reg__dout) 
                                        >> 3U)))) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata);
    __Vtemp_28[1U] = (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout);
    __Vtemp_28[2U] = (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_data_ff__dout 
                              >> 0x20U));
    bufp->fullWData(oldp+364,(__Vtemp_28),70);
    bufp->fullWData(oldp+367,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_data_ff__dout),70);
    bufp->fullBit(oldp+370,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e1));
    bufp->fullBit(oldp+371,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e2));
    bufp->fullIData(oldp+372,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1),32);
    bufp->fullIData(oldp+373,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1),32);
    bufp->fullBit(oldp+374,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1));
    bufp->fullBit(oldp+375,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1) 
                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1 
                                >> 0x1fU))));
    bufp->fullBit(oldp+376,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1));
    bufp->fullBit(oldp+377,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1) 
                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1 
                                >> 0x1fU))));
    bufp->fullQData(oldp+378,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2),33);
    bufp->fullQData(oldp+380,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2),33);
    bufp->fullWData(oldp+382,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3),65);
    bufp->fullBit(oldp+385,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e1));
    bufp->fullBit(oldp+386,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e2));
    bufp->fullBit(oldp+387,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e3));
    bufp->fullCData(oldp+388,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e1),5);
    bufp->fullCData(oldp+389,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e2),5);
    bufp->fullBit(oldp+390,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e1));
    bufp->fullBit(oldp+391,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e2));
    bufp->fullIData(oldp+392,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+393,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+394,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
    bufp->fullIData(oldp+395,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout)),32);
    VL_EXTENDS_WQ(66,33, __Vtemp_31, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2);
    __Vtemp_32[0U] = __Vtemp_31[0U];
    __Vtemp_32[1U] = __Vtemp_31[1U];
    __Vtemp_32[2U] = (3U & __Vtemp_31[2U]);
    VL_EXTENDS_WQ(66,33, __Vtemp_34, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2);
    __Vtemp_35[0U] = __Vtemp_34[0U];
    __Vtemp_35[1U] = __Vtemp_34[1U];
    __Vtemp_35[2U] = (3U & __Vtemp_34[2U]);
    VL_MULS_WWW(66, __Vtemp_36, __Vtemp_32, __Vtemp_35);
    __Vtemp_37[0U] = __Vtemp_36[0U];
    __Vtemp_37[1U] = __Vtemp_36[1U];
    __Vtemp_37[2U] = (3U & __Vtemp_36[2U]);
    bufp->fullWData(oldp+396,(__Vtemp_37),66);
    bufp->fullQData(oldp+399,((((QData)((IData)(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1) 
                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1 
                                                    >> 0x1fU)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1)))),33);
    bufp->fullQData(oldp+401,((((QData)((IData)(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1) 
                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1 
                                                    >> 0x1fU)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1)))),33);
    bufp->fullQData(oldp+403,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout),64);
    bufp->fullQData(oldp+405,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout),64);
    bufp->fullQData(oldp+407,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout),64);
    bufp->fullBit(oldp+409,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellinp__out_rd_wr_en_ff__din));
    VL_EXTENDS_WQ(66,33, __Vtemp_41, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2);
    __Vtemp_42[0U] = __Vtemp_41[0U];
    __Vtemp_42[1U] = __Vtemp_41[1U];
    __Vtemp_42[2U] = (3U & __Vtemp_41[2U]);
    VL_EXTENDS_WQ(66,33, __Vtemp_44, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2);
    __Vtemp_45[0U] = __Vtemp_44[0U];
    __Vtemp_45[1U] = __Vtemp_44[1U];
    __Vtemp_45[2U] = (3U & __Vtemp_44[2U]);
    VL_MULS_WWW(66, __Vtemp_46, __Vtemp_42, __Vtemp_45);
    __Vtemp_49[0U] = __Vtemp_46[0U];
    __Vtemp_49[1U] = __Vtemp_46[1U];
    __Vtemp_49[2U] = (1U & __Vtemp_46[2U]);
    bufp->fullWData(oldp+410,(__Vtemp_49),65);
    bufp->fullSData(oldp+413,((0x3ffU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q 
                                         >> 2U))),10);
    bufp->fullQData(oldp+414,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data),64);
    bufp->fullQData(oldp+416,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                               >> (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q))),64);
    bufp->fullIData(oldp+418,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[4U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+419,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                          >> 0x1bU))),32);
    bufp->fullCData(oldp+420,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+421,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                        >> 0x11U))),5);
    bufp->fullIData(oldp+422,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                            >> 0x11U))),32);
    bufp->fullBit(oldp+423,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+424,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+425,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                        >> 6U))),5);
    bufp->fullBit(oldp+426,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 5U))));
    bufp->fullBit(oldp+427,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+428,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+429,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+430,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+431,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U])));
    bufp->fullBit(oldp+432,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+433,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+434,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+435,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+436,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+437,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+438,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+439,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+440,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+441,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+442,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+443,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+444,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+445,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+446,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+447,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+448,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+449,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+450,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+451,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+452,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+453,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+454,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+455,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+456,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+457,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+458,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+459,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+460,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+461,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+462,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+463,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U])));
    bufp->fullBit(oldp+464,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+465,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+466,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+467,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+468,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+469,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+470,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+471,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+472,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+473,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+474,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+475,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+476,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+477,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+478,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+479,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+480,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+481,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+482,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+483,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+484,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+485,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+486,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+487,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+488,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+489,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+490,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+491,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+492,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 9U)))));
    bufp->fullBit(oldp+493,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 8U)))));
    bufp->fullBit(oldp+494,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 7U)))));
    bufp->fullBit(oldp+495,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 6U)))));
    bufp->fullBit(oldp+496,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 5U)))));
    bufp->fullBit(oldp+497,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 4U)))));
    bufp->fullBit(oldp+498,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 3U)))));
    bufp->fullBit(oldp+499,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 2U)))));
    bufp->fullBit(oldp+500,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 1U)))));
    bufp->fullBit(oldp+501,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out))));
    bufp->fullWData(oldp+502,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i),155);
    bufp->fullBit(oldp+507,((1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))));
    bufp->fullWData(oldp+508,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout),155);
    if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
        __Vtemp_50[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U];
        __Vtemp_50[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U];
        __Vtemp_50[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[2U];
        __Vtemp_50[3U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[3U];
        __Vtemp_50[4U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[4U];
    } else {
        __Vtemp_50[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U];
        __Vtemp_50[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U];
        __Vtemp_50[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U];
        __Vtemp_50[3U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U];
        __Vtemp_50[4U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[4U];
    }
    bufp->fullWData(oldp+513,(__Vtemp_50),155);
    bufp->fullIData(oldp+518,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+519,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+520,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[3U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+521,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[3U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U] 
                                          >> 0x1bU))),32);
    bufp->fullCData(oldp+522,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U] 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+523,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U] 
                                        >> 0x11U))),5);
    bufp->fullIData(oldp+524,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U] 
                                << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                            >> 0x11U))),32);
    bufp->fullBit(oldp+525,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+526,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+527,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                        >> 6U))),5);
    bufp->fullBit(oldp+528,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                   >> 5U))));
    bufp->fullBit(oldp+529,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+530,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+531,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+532,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+533,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U])));
    bufp->fullBit(oldp+534,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+535,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+536,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+537,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+538,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+539,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+540,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+541,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+542,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+543,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+544,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+545,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+546,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+547,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+548,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+549,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+550,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+551,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+552,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+553,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+554,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+555,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+556,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+557,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+558,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+559,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+560,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+561,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+562,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+563,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+564,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+565,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U])));
    bufp->fullIData(oldp+566,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[6U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[5U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+567,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[5U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+568,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+569,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                          >> 0x1bU))),32);
    bufp->fullCData(oldp+570,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+571,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                        >> 0x11U))),5);
    bufp->fullIData(oldp+572,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                            >> 0x11U))),32);
    bufp->fullBit(oldp+573,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+574,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+575,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                        >> 6U))),5);
    bufp->fullBit(oldp+576,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 5U))));
    bufp->fullBit(oldp+577,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+578,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+579,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+580,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+581,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U])));
    bufp->fullBit(oldp+582,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+583,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+584,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+585,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+586,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+587,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+588,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+589,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+590,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+591,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+592,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+593,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+594,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+595,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+596,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+597,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+598,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+599,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+600,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+601,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+602,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+603,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+604,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+605,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+606,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+607,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+608,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+609,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+610,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+611,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+612,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+613,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U])));
    bufp->fullIData(oldp+614,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[2U] 
                                << 0xdU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[1U] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+615,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[1U] 
                                << 0xdU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                            >> 0x13U))),32);
    bufp->fullCData(oldp+616,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                        >> 0xeU))),5);
    bufp->fullCData(oldp+617,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                        >> 9U))),5);
    bufp->fullCData(oldp+618,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                        >> 4U))),5);
    bufp->fullBit(oldp+619,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+620,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+621,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+622,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U])));
    bufp->fullWData(oldp+623,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout),219);
    __Vtemp_51[0U] = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
                                 << 0x25U) | (((QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U])) 
                                                 >> 0x1bU)))) 
                       << 0x13U) | ((0x7fe00U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[2U] 
                                                 >> 8U)) 
                                    | ((0x1f0U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                                  >> 7U)) 
                                       | (((8U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                                  >> 4U)) 
                                           | (4U & 
                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[1U] 
                                               >> 3U))) 
                                          | ((2U & 
                                              (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U] 
                                               >> 2U)) 
                                             | (IData)(
                                                       (0U 
                                                        != 
                                                        (0x30000000U 
                                                         & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[0U]))))))));
    __Vtemp_51[1U] = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
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
    __Vtemp_51[2U] = ((IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
                                 << 0x25U) | (((QData)((IData)(
                                                               vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U])) 
                                                 >> 0x1bU))) 
                               >> 0x20U)) >> 0xdU);
    bufp->fullWData(oldp+630,(__Vtemp_51),83);
    bufp->fullWData(oldp+633,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout),83);
    if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
        __Vtemp_53[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[0U];
        __Vtemp_53[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[1U];
        __Vtemp_53[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__last_issued_instr_reg__dout[2U];
    } else {
        __Vtemp_53[0U] = (((IData)((((QData)((IData)(
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
        __Vtemp_53[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp_53[2U] = ((IData)(((((QData)((IData)(
                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellout__idu1_out_reg__dout[4U])) 
                                                     >> 0x1bU))) 
                                   >> 0x20U)) >> 0xdU);
    }
    bufp->fullWData(oldp+636,(__Vtemp_53),83);
    bufp->fullBit(oldp+639,((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                    >> 4U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))));
    bufp->fullBit(oldp+640,((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[1U] 
                                    >> 3U) & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT____Vcellout__idu0_out_flop_inst__dout[0U]))));
    bufp->fullBit(oldp+641,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xaU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+642,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+643,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xaU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+644,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xbU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+645,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+646,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xbU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+647,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xcU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+648,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+649,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xcU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+650,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xdU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+651,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+652,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xdU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+653,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xeU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+654,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+655,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xeU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+656,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xfU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+657,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+658,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xfU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+659,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x10U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+660,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+661,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x10U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+662,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x11U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+663,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+664,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x11U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+665,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x12U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+666,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+667,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x12U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+668,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x13U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+669,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+670,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x13U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+671,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+672,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+673,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+674,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x14U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+675,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+676,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x14U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+677,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x15U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+678,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+679,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x15U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+680,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x16U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+681,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+682,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x16U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+683,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x17U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+684,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+685,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x17U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+686,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x18U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+687,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+688,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x18U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+689,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x19U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+690,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+691,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x19U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+692,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1aU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+693,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+694,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1aU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+695,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1bU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+696,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+697,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1bU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+698,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1cU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+699,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+700,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1cU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+701,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1dU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+702,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+703,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1dU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+704,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (2U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+705,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+706,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (2U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+707,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1eU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+708,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+709,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1eU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+710,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1fU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+711,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+712,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1fU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+713,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (3U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+714,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+715,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (3U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+716,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (4U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+717,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+718,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (4U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+719,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (5U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+720,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+721,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (5U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+722,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (6U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+723,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+724,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (6U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+725,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (7U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+726,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+727,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (7U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+728,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (8U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+729,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+730,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (8U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+731,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (9U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+732,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+733,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (9U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    __Vtemp_54[0U] = (IData)((((QData)((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                >> 
                                                (3U 
                                                 & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))));
    __Vtemp_54[1U] = (IData)(((((QData)((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                 >> 
                                                 (3U 
                                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))) 
                              >> 0x20U));
    __Vtemp_54[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
    bufp->fullWData(oldp+734,(__Vtemp_54),65);
    bufp->fullWData(oldp+737,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout),65);
    if (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall) {
        __Vtemp_56[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[0U];
        __Vtemp_56[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[1U];
        __Vtemp_56[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT____Vcellout__instr_dff_inst__dout[2U];
    } else {
        __Vtemp_56[0U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                    >> 
                                                    (3U 
                                                     & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))));
        __Vtemp_56[1U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                     >> 
                                                     (3U 
                                                      & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))) 
                                  >> 0x20U));
        __Vtemp_56[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
    }
    bufp->fullWData(oldp+740,(__Vtemp_56),65);
    bufp->fullIData(oldp+743,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_d),32);
    bufp->fullBit(oldp+744,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__update_pc));
    bufp->fullIData(oldp+745,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__update_pc)
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_d
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)),32);
    bufp->fullBit(oldp+746,(vlSelfRef.core_top_tb__DOT__clk));
    bufp->fullBit(oldp+747,(vlSelfRef.core_top_tb__DOT__rst_n));
    bufp->fullIData(oldp+748,(vlSelfRef.core_top_tb__DOT__fd),32);
    bufp->fullIData(oldp+749,(vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+750,(vlSelfRef.core_top_tb__DOT__unnamedblk2__DOT__i),32);
}
