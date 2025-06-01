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
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+871,0,"reset_vector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+868,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+59,0,"finish_seq_detected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core_top_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+871,0,"reset_vector",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"instr_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+61,0,"instr_mem_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"instr_mem_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"instr_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"instr_mem_rdata_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"instr_mem_tag_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("idu0_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+68,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+76,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("idu1_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+114,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+123,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+124,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+162,0,"pipe_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"exu_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"exu_wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+165,0,"exu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"exu_mul_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"exu_div_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"exu_lsu_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"exu_lsu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"dccm_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"dccm_rvalid_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"dccm_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+173,0,"dccm_rvalid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"dccm_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"dccm_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"dccm_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"pc_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"exu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"exu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dccm_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+873,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+171,0,"rvalid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+173,0,"rvalid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+183,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+175,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("exu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("idu1_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+114,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+123,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+124,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+179,0,"instr_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"exu_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"exu_wb_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+165,0,"exu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"exu_mul_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"exu_div_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"exu_lsu_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"exu_lsu_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"dccm_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"dccm_rvalid_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"dccm_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+173,0,"dccm_rvalid_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"dccm_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"dccm_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"dccm_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"pc_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"alu_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"alu_wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+186,0,"alu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"mul_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"mul_wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+189,0,"mul_wb_rd_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"div_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"div_wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+192,0,"div_wb_rd_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"lsu_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"lsu_wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+195,0,"lsu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"alu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"alu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"mul_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"mul_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"div_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"div_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"lsu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"lsu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+114,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+123,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+124,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+197,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"instr_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"alu_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"alu_wb_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+186,0,"alu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"pc_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"alu_wb_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"alu_wb_rd_addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+205,0,"alu_wb_rd_wr_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"aout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"bm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"ov",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"logic_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,1);
    tracep->declBus(c+214,0,"lout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"sout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+216,0,"pc_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"pc_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"brn_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"sel_logic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"sel_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"sel_adder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"slt_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+874,0,"pcout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"ashift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"ne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"lt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"ge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_wb_data_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+875,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+876,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+229,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+231,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_tag_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+878,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+879,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+233,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+235,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+881,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+882,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+237,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+239,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("div_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+884,0,"dec_tlu_fast_div_disable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+114,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+123,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+124,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+884,0,"flush_lower",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"valid_ff_e1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"finish_early",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"div_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"out_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+192,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"instr_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+244,0,"run_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"run_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"count_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+246,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+247,0,"m_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+249,0,"qff_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"aff_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+251,0,"q_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+253,0,"q_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+255,0,"a_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+257,0,"a_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+259,0,"m_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+261,0,"a_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+263,0,"dividend_neg_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"divisor_neg_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"dividend_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"dividend_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"q_ff_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"q_ff_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"a_ff_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"a_ff_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+270,0,"sign_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"sign_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"rem_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+274,0,"a_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+276,0,"a_eff_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+279,0,"rem_correct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"flush_lower_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"valid_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"smallnum_case",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"smallnum_case_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"smallnum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"smallnum_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+285,0,"m_already_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"a_cls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+287,0,"b_cls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+885,0,"shortq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+288,0,"shortq_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+289,0,"shortq_shift_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+290,0,"shortq_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"shortq_enable_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+292,0,"short_dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+294,0,"shortq_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"shortq_shift_xx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("a_ff_c", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+886,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"dout_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->popPrefix();
    tracep->pushPrefix("aff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+881,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+882,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+255,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+257,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+881,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+882,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+298,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+257,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("countff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+887,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+888,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+246,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("dividend_c", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+886,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"dout_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->popPrefix();
    tracep->pushPrefix("e1val_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+241,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("flush_any_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+884,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+280,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("i_shortq_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+891,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+303,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_tag_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+878,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+879,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+233,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+306,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+878,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+879,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+308,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+306,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+881,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+882,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+310,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+247,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+881,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+882,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+312,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+247,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("miscf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+892,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+893,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+314,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+315,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+892,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+893,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+315,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_addr_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+891,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+894,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+122,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+891,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+894,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+317,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+191,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+243,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("q_ff_c", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+886,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"dout_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->popPrefix();
    tracep->pushPrefix("qff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+881,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+882,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+251,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+253,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+881,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+882,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+318,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+253,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("runff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+167,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("smallnumff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+891,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+894,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+321,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lsu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lsu_ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+114,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+123,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+124,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+169,0,"lsu_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"lsu_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"lsu_dccm_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"lsu_dccm_rvalid_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"lsu_dccm_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+173,0,"lsu_dccm_rvalid_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"lsu_dccm_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"lsu_dccm_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"lsu_dccm_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"lsu_wb_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+193,0,"lsu_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+195,0,"lsu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"instr_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+322,0,"dc1_by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"dc1_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"dc1_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"dc1_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"dc1_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"dc1_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"dc1_unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"lsu_stall_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"dc1_lsu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"dc1_unaligned_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+331,0,"dc1_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"dc1_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"dc1_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"dc1_computed_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+335,0,"dc1_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+336,0,"dc1_store_needs_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"dc1_store_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"dc1_forward_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+338,0,"dc2_by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"dc2_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"dc2_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"dc2_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"dc2_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"dc2_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"dc2_unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"dc2_lsu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"dc2_unaligned_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"dc2_computed_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"dc2_load_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"dc2_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+350,0,"dc2_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+351,0,"dc2_store_needs_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"dc2_store_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"dc2_forward_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+354,0,"dc2_store_forward_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"dc2_forward_value_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+355,0,"dc3_by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"dc3_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"dc3_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"dc3_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"dc3_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"dc3_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"dc3_unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"dc3_lsu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"dc3_unaligned_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+363,0,"dc3_computed_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+364,0,"dc3_load_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+365,0,"dc3_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"dc3_wb_data_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+367,0,"dc3_wb_sext_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"dc3_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+368,0,"dc3_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+369,0,"dc3_shamt_by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+370,0,"dc3_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"dc1_lsu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"dc1_lsu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"dc2_lsu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"dc2_lsu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"dc3_lsu_instr_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"dc3_lsu_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,0,"dc3_store_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+376,0,"dc3_store_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"dc3_forward_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+378,0,"dc2_store_mask_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+380,0,"dc2_store_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+382,0,"dc2_store_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("dc2_dccm_rdata_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+896,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+897,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+384,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+388,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc2_instr_out_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc2_instr_tag_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+371,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc3_dccm_rdata_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+902,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+903,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 141,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+392,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 141,0);
    tracep->declArray(c+397,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 141,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc3_instr_out_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dc3_instr_tag_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_ctrl_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+908,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+909,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+403,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_data_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+910,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+911,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+404,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declArray(c+408,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_instr_out_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_instr_tag_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("stall_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+329,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mul_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mul_ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+114,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+123,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+124,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+884,0,"freeze",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"out_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+189,0,"out_rd_wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"instr_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"mul_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"valid_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"valid_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"mul_c1_e1_clken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+916,0,"mul_c1_e2_clken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"mul_c1_e3_clken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+918,0,"exu_mul_c1_e1_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+919,0,"exu_mul_c1_e2_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"exu_mul_c1_e3_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"a_ff_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"a_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"b_ff_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"b_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+416,0,"rs1_sign_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"rs1_neg_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"rs2_sign_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"rs2_neg_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+420,0,"a_ff_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+422,0,"b_ff_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+424,0,"prod_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+427,0,"low_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"low_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"low_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"out_rd_addr_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+431,0,"out_rd_addr_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+188,0,"out_rd_addr_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+432,0,"out_rd_wr_en_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"out_rd_wr_en_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"out_rd_wr_en_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"instr_tag_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"instr_tag_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"instr_tag_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"instr_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"instr_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"instr_e3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+438,0,"prod_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("a_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("a_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+881,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+882,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+441,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+420,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+881,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+882,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+443,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+422,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_tag_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+878,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+879,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+445,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+447,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_tag_e3_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+878,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+879,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+447,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+449,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_tag_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+878,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+879,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+233,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+445,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("low_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+427,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("low_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+427,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+428,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("low_e3_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+428,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+429,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_addr_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+891,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+894,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+430,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+431,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_addr_e3_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+891,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+894,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+431,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+188,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_addr_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+891,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+894,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+430,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_wr_en_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+433,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_wr_en_e3_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+189,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_rd_wr_en_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+451,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+432,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("prod_e3_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+921,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+922,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+452,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+424,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->pushPrefix("rs1_sign_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+416,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("rs2_sign_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+418,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("valid_e1_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+451,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+412,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+451,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+412,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_e2_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+412,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+413,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+890,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+412,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+413,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("iccm_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+873,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+61,0,"rvalid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"rtag_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"rvalid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"rtag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+455,0,"line_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+456,0,"line_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+458,0,"line_data_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("idu0_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"instr_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("idu0_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+68,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"instr_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"imm_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"shamt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+76,0,"alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"imm12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"shimm5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"imm20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"store",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"sub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"lor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"lxor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"sll",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"sra",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"srl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"slt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"unsign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"condbr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"by",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"half",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rs1_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"rs2_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"rem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"nop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"legal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+162,0,"pipe_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"pipe_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("idu0_out_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+460,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+463,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+464,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+465,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+466,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+467,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+468,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("decode_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+506,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("decode_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+66,0,"i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("decode_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+506,0,"alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"imm12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"shimm5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"imm20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"store",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"sub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"lor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"lxor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"sll",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"sra",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"srl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"slt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"unsign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"condbr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"by",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"half",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"rs1_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"rs2_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"rem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"nop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"legal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idu0_out_flop_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+926,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+927,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declArray(c+544,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+550,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declArray(c+555,0,"din_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declArray(c+560,0,"dout_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->pushPrefix("dff_rst_en_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+926,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+927,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declArray(c+555,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+560,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+926,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+927,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+565,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->declArray(c+560,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 154,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idu1_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("idu0_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+68,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"instr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"imm_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+76,0,"alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"imm12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"shimm5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"imm20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"lor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"lxor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"condbr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"by",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"half",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rs1_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"rs2_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"rem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"nop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"legal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("idu1_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+114,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"instr_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"imm_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+123,0,"shamt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+124,0,"alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"imm12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"shimm5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"imm20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"store",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"sub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"lor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"lxor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sll",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"sra",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"srl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"slt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"unsign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"condbr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"by",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"half",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"rs1_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"rs2_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"rem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"nop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"legal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+162,0,"pipe_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"pipe_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"exu_wb_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+163,0,"exu_wb_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"exu_wb_rd_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"exu_mul_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"exu_div_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"exu_lsu_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"exu_lsu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("idu1_out_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+570,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+572,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+573,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+574,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+575,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+576,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+577,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+578,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+584,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+588,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+596,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+597,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+598,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+613,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("idu1_out_before_fwd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+616,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+617,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+618,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+619,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+620,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+621,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+622,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+623,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+624,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+625,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+626,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+631,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+640,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+642,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+644,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+647,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+648,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+651,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+653,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+654,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+656,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+657,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+663,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+3,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("idu1_out_gated", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+664,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+669,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+670,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+671,0,"imm_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+672,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+673,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+674,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+676,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+677,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+678,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"shimm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+683,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+686,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"lor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+689,0,"lxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+690,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+691,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+692,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+693,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"unsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"condbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+696,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+697,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+698,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+699,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+700,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+701,0,"by",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+702,0,"half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+705,0,"rs1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"rs2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+709,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+710,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+711,0,"legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("last_issued_instr", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+712,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,0,"instr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+715,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+716,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+717,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+718,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+719,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("idu1_out_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+932,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+933,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declArray(c+5,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+721,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declArray(c+12,0,"din_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declArray(c+728,0,"dout_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->pushPrefix("dff_rst_en_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+932,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+933,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declArray(c+12,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+728,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+932,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+933,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+19,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->declArray(c+728,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 218,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("last_issued_instr_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+940,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+941,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+735,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+738,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+741,0,"din_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+744,0,"dout_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->pushPrefix("dff_rst_en_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+940,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+941,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+741,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+744,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+940,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+941,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+747,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+744,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_file_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+750,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+751,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+752,0,"rs1_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"rs2_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+163,0,"rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"rd_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+26+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+754,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+755,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+756,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+755,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+757,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+758,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+759,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+758,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+761,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+762,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+764,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+765,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+764,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+767,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+768,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+769,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+770,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+771,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+770,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+772,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+773,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+774,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+773,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+775,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+776,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+777,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+776,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+778,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+779,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+780,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+779,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+781,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+782,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+783,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+782,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+786,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+788,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+789,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+791,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+791,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+794,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+795,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+794,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+797,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+798,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+800,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+801,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+800,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+802,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+803,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+804,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+803,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+806,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+807,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+806,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+809,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+810,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+812,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+813,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+812,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+814,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+815,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+816,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+817,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+818,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+819,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+818,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+820,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+821,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+822,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+821,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+823,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+824,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+825,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+824,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+826,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+827,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+828,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+827,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+829,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+830,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+831,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+830,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+833,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+834,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+836,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+837,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+836,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+839,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+841,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+842,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+843,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+842,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_reg_file[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("g_reg_file_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("reg_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+844,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+845,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+846,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+845,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ifu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+871,0,"reset_vector",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"instr_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+61,0,"instr_mem_addr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"instr_mem_tag_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"instr_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"instr_mem_rdata_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"instr_mem_tag_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"pipe_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"pc_exu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"pc_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"instr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"instr_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"pc_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("instr_dff_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+921,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+922,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+848,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+851,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+854,0,"din_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+857,0,"dout_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->pushPrefix("dff_rst_en_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+921,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+922,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+854,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+857,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->pushPrefix("dff_rst_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+921,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+922,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+860,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+857,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"PC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+944,0,"INC_AMOUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+871,0,"reset_vector",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+863,0,"inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"pc_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+864,0,"pc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"update_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dff_rst_en_vector_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+871,0,"reset_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dff_rst_vector_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+901,0,"RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+866,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+871,0,"reset_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+869,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+870,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    tracep->declBus(c+886,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+945,0,"XLEN_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+901,0,"RESET_VECTOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"INSTR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+945,0,"INSTR_LEN_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+945,0,"DATA_LEN_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"INSTR_MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+946,0,"INSTR_MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+947,0,"INSTR_MEM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"INSTR_MEM_TAG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"DATA_MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+946,0,"DATA_MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+947,0,"DATA_MEM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"REG_FILE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+948,0,"REG_FILE_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<7>/*223:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    bufp->fullIData(oldp+871,(0x100000U),32);
    bufp->fullIData(oldp+872,(0x20U),32);
    bufp->fullIData(oldp+873,(0x400U),32);
    bufp->fullIData(oldp+874,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__pcout),32);
    bufp->fullIData(oldp+875,(0x26U),32);
    bufp->fullQData(oldp+876,(0ULL),38);
    bufp->fullIData(oldp+878,(0x40U),32);
    bufp->fullQData(oldp+879,(0ULL),64);
    bufp->fullIData(oldp+881,(0x21U),32);
    bufp->fullQData(oldp+882,(0ULL),33);
    bufp->fullBit(oldp+884,(0U));
    bufp->fullCData(oldp+885,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq),6);
    bufp->fullIData(oldp+886,(0x20U),32);
    bufp->fullIData(oldp+887,(6U),32);
    bufp->fullCData(oldp+888,(0U),6);
    bufp->fullIData(oldp+889,(1U),32);
    bufp->fullBit(oldp+890,(0U));
    bufp->fullIData(oldp+891,(5U),32);
    bufp->fullIData(oldp+892,(4U),32);
    bufp->fullCData(oldp+893,(0U),4);
    bufp->fullCData(oldp+894,(0U),5);
    bufp->fullBit(oldp+895,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_valid));
    bufp->fullIData(oldp+896,(0x70U),32);
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    __Vtemp_1[3U] = 0U;
    bufp->fullWData(oldp+897,(__Vtemp_1),112);
    bufp->fullIData(oldp+901,(0U),32);
    bufp->fullIData(oldp+902,(0x8eU),32);
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    bufp->fullWData(oldp+903,(__Vtemp_2),142);
    bufp->fullIData(oldp+908,(7U),32);
    bufp->fullCData(oldp+909,(0U),7);
    bufp->fullIData(oldp+910,(0x65U),32);
    __Vtemp_3[0U] = 0U;
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    bufp->fullWData(oldp+911,(__Vtemp_3),101);
    bufp->fullBit(oldp+915,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__mul_c1_e1_clken));
    bufp->fullBit(oldp+916,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__mul_c1_e2_clken));
    bufp->fullBit(oldp+917,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__mul_c1_e3_clken));
    bufp->fullBit(oldp+918,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__exu_mul_c1_e1_clk));
    bufp->fullBit(oldp+919,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__exu_mul_c1_e2_clk));
    bufp->fullBit(oldp+920,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__exu_mul_c1_e3_clk));
    bufp->fullIData(oldp+921,(0x41U),32);
    __Vtemp_4[0U] = 0U;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    bufp->fullWData(oldp+922,(__Vtemp_4),65);
    bufp->fullBit(oldp+925,(1U));
    bufp->fullIData(oldp+926,(0x9bU),32);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = 0U;
    __Vtemp_5[2U] = 0U;
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    bufp->fullWData(oldp+927,(__Vtemp_5),155);
    bufp->fullIData(oldp+932,(0xdbU),32);
    __Vtemp_6[0U] = 0U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    __Vtemp_6[5U] = 0U;
    __Vtemp_6[6U] = 0U;
    bufp->fullWData(oldp+933,(__Vtemp_6),219);
    bufp->fullIData(oldp+940,(0x53U),32);
    __Vtemp_7[0U] = 0U;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    bufp->fullWData(oldp+941,(__Vtemp_7),83);
    bufp->fullIData(oldp+944,(4U),32);
    bufp->fullIData(oldp+945,(4U),32);
    bufp->fullIData(oldp+946,(0x400U),32);
    bufp->fullIData(oldp+947,(0xcU),32);
    bufp->fullIData(oldp+948,(5U),32);
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
    bufp->fullIData(oldp+1,(((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                               == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr)) 
                              & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                              ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                              : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                  & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                      >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                  ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                 [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                                  : 0U))),32);
    bufp->fullIData(oldp+2,(((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                               == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                              & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                              ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                              : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                  & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                      >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                  ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                 [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                                  : 0U))),32);
    bufp->fullIData(oldp+3,((((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                              & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                  >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                              ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                             [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr]
                              : 0U)),32);
    bufp->fullIData(oldp+4,((((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
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
                            : 0U)) << 0x1bU) | ((1U 
                                                 & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                 ? 0U
                                                 : 
                                                (0x7ffffffU 
                                                 & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])));
    __Vtemp_9[3U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                         == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                        & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                        ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                        : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                            & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                            ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                           [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                            : 0U)) >> 5U) | (((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                                                == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr)) 
                                               & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                                               ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                               : ((
                                                   (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
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
    bufp->fullWData(oldp+5,(__Vtemp_9),219);
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
                                 : 0U)) << 0x1bU) | 
                          ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                            ? 0U : (0x7ffffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])));
        __Vtemp_21[3U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                              == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                             ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                             : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                 & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                     >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                                 : 0U)) >> 5U) | ((
                                                   (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
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
        __Vtemp_21[4U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
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
        __Vtemp_21[5U] = (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                << 0x25U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                     >> 0x1bU))))) 
                           >> 5U) | ((IData)((((1U 
                                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                ? 0ULL
                                                : (
                                                   ((QData)((IData)(
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
    }
    bufp->fullWData(oldp+12,(__Vtemp_21),219);
    __Vtemp_33[5U] = ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                       ? 0U : (((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
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
                                >> 5U) | ((IData)((
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
                                 : 0U)) << 0x1bU) | 
                          ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                            ? 0U : (0x7ffffffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])));
        __Vtemp_34[3U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
                              == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr)) 
                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en))
                             ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                             : (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                 & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                     >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))
                                 ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file
                                [vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr]
                                 : 0U)) >> 5U) | ((
                                                   (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
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
        __Vtemp_34[4U] = ((((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr) 
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
        __Vtemp_34[5U] = __Vtemp_33[5U];
        __Vtemp_34[6U] = ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
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
    }
    bufp->fullWData(oldp+19,(__Vtemp_34),219);
    bufp->fullIData(oldp+26,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.core_top_tb__DOT__cycle_count),32);
    bufp->fullBit(oldp+59,(vlSelfRef.core_top_tb__DOT__finish_seq_detected));
    bufp->fullSData(oldp+60,((0xfffU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)),12);
    bufp->fullBit(oldp+61,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_addr_valid));
    bufp->fullIData(oldp+62,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q),32);
    bufp->fullIData(oldp+63,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                      >> (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))),32);
    bufp->fullBit(oldp+64,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid));
    bufp->fullIData(oldp+65,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in),32);
    bufp->fullIData(oldp+66,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                               ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U])),32);
    bufp->fullBit(oldp+67,((IData)(((~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                    & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[2U]))));
    bufp->fullIData(oldp+68,(((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                 ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U]) 
                               << 5U) | (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                           ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U]) 
                                         >> 0x1bU))),32);
    bufp->fullIData(oldp+69,(((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                 ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U]) 
                               << 5U) | (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                           ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U]) 
                                         >> 0x1bU))),32);
    bufp->fullCData(oldp+70,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                         ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U]) 
                                       >> 0x16U))),5);
    bufp->fullCData(oldp+71,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                         ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U]) 
                                       >> 0x11U))),5);
    bufp->fullIData(oldp+72,(((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                 ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U]) 
                               << 0xfU) | (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                             ? 0U : 
                                            vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                           >> 0x11U))),32);
    bufp->fullBit(oldp+73,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                  >> 0x10U))));
    bufp->fullCData(oldp+74,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                         ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                       >> 0xbU))),5);
    bufp->fullCData(oldp+75,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                         ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                       >> 6U))),5);
    bufp->fullBit(oldp+76,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                  >> 5U))));
    bufp->fullBit(oldp+77,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                  >> 4U))));
    bufp->fullBit(oldp+78,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                  >> 3U))));
    bufp->fullBit(oldp+79,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                  >> 2U))));
    bufp->fullBit(oldp+80,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                  >> 1U))));
    bufp->fullBit(oldp+81,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                             ? 0U : (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]))));
    bufp->fullBit(oldp+82,((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                              ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                            >> 0x1fU)));
    bufp->fullBit(oldp+83,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+84,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+85,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+86,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+87,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+88,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x19U))));
    bufp->fullBit(oldp+89,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x18U))));
    bufp->fullBit(oldp+90,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x17U))));
    bufp->fullBit(oldp+91,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x16U))));
    bufp->fullBit(oldp+92,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x15U))));
    bufp->fullBit(oldp+93,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x14U))));
    bufp->fullBit(oldp+94,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x13U))));
    bufp->fullBit(oldp+95,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x12U))));
    bufp->fullBit(oldp+96,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x11U))));
    bufp->fullBit(oldp+97,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0x10U))));
    bufp->fullBit(oldp+98,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+99,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                    ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                  >> 0xeU))));
    bufp->fullBit(oldp+100,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+101,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+102,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+103,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+104,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 9U))));
    bufp->fullBit(oldp+105,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 8U))));
    bufp->fullBit(oldp+106,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 7U))));
    bufp->fullBit(oldp+107,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 6U))));
    bufp->fullBit(oldp+108,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 5U))));
    bufp->fullBit(oldp+109,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 4U))));
    bufp->fullBit(oldp+110,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 3U))));
    bufp->fullBit(oldp+111,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 2U))));
    bufp->fullBit(oldp+112,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 1U))));
    bufp->fullBit(oldp+113,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                              ? 0U : (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]))));
    bufp->fullIData(oldp+114,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[6U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+115,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+116,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+117,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                          >> 0x1bU))),32);
    bufp->fullCData(oldp+118,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+119,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                        >> 0x11U))),5);
    bufp->fullIData(oldp+120,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                            >> 0x11U))),32);
    bufp->fullBit(oldp+121,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+122,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+123,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                        >> 6U))),5);
    bufp->fullBit(oldp+124,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 5U))));
    bufp->fullBit(oldp+125,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+126,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+127,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+128,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+129,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U])));
    bufp->fullBit(oldp+130,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+131,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+132,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+133,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+134,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+135,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+136,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+137,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+138,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+139,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+140,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+141,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+142,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+143,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+144,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+145,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+146,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+147,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+148,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+149,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+150,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+151,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+152,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+153,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+154,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+155,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+156,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+157,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+158,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+159,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+160,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+161,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])));
    bufp->fullBit(oldp+162,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall));
    bufp->fullIData(oldp+163,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data),32);
    bufp->fullCData(oldp+164,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr),5);
    bufp->fullBit(oldp+165,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en));
    bufp->fullBit(oldp+166,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_mul_busy));
    bufp->fullBit(oldp+167,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state));
    bufp->fullBit(oldp+168,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                   | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                      >> 2U)))));
    bufp->fullBit(oldp+169,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall));
    bufp->fullIData(oldp+170,(((0xfffffffcU & ((- (IData)(
                                                          ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                                           & ((~ 
                                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                                >> 8U)) 
                                                              & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                                                  >> 3U) 
                                                                 | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load)))))) 
                                               & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr)) 
                               | ((- (IData)((1U & 
                                              ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                >> 2U) 
                                               & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                    >> 0xcU) 
                                                   | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                      >> 1U)) 
                                                  & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                     >> 8U)))))) 
                                  & (((IData)(1U) + 
                                      ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                        << 0x16U) | 
                                       (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                        >> 0xaU))) 
                                     << 2U)))),32);
    bufp->fullBit(oldp+171,((1U & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                    & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                           >> 8U)) 
                                       & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward)))) 
                                   | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                       >> 2U) & ((~ 
                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U]) 
                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                    >> 8U)))))));
    bufp->fullIData(oldp+172,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata),32);
    bufp->fullBit(oldp+173,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rvalid_out));
    bufp->fullIData(oldp+174,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr),32);
    bufp->fullBit(oldp+175,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wen));
    bufp->fullIData(oldp+176,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata),32);
    bufp->fullIData(oldp+177,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout 
                                       >> 1U))),32);
    bufp->fullBit(oldp+178,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))));
    bufp->fullIData(oldp+179,((((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                                & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout 
                                           >> 0x20U))) 
                               | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                                   & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout 
                                              >> 0x20U))) 
                                  | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                                      & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout 
                                                 >> 0x20U))) 
                                     | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                        & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out))))),32);
    bufp->fullIData(oldp+180,((((- (IData)((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout)))) 
                                & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                               | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3))) 
                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout)) 
                                  | (((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en))) 
                                      & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)) 
                                     | ((- (IData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en))) 
                                        & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out))))),32);
    bufp->fullIData(oldp+181,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U])),32);
    bufp->fullSData(oldp+182,((0x3fcU & (((- (IData)(
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
                                                + (
                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                    << 0x16U) 
                                                   | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                      >> 0xaU))) 
                                               << 2U))))),10);
    bufp->fullSData(oldp+183,((0x3fcU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr)),10);
    bufp->fullIData(oldp+184,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout 
                                       >> 6U))),32);
    bufp->fullCData(oldp+185,((0x1fU & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout 
                                                >> 1U)))),5);
    bufp->fullBit(oldp+186,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout))));
    bufp->fullIData(oldp+187,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e3)
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[0U]
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3[1U])),32);
    bufp->fullCData(oldp+188,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e3),5);
    bufp->fullBit(oldp+189,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e3));
    bufp->fullIData(oldp+190,(((0xfU & ((- (IData)(
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
    bufp->fullCData(oldp+191,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr),5);
    bufp->fullBit(oldp+192,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_wr_en));
    bufp->fullIData(oldp+193,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data 
                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data_mask) 
                               | (((- (IData)((1U & (IData)(
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
    bufp->fullCData(oldp+194,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                        >> 1U))),5);
    bufp->fullBit(oldp+195,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_wb_rd_wr_en));
    bufp->fullIData(oldp+196,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+197,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
    bufp->fullIData(oldp+198,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+199,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout)),32);
    bufp->fullIData(oldp+200,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+201,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
    bufp->fullIData(oldp+202,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_tag_out),32);
    bufp->fullIData(oldp+203,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_lsu_instr_out),32);
    bufp->fullIData(oldp+204,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__alu_wb_data_i),32);
    bufp->fullBit(oldp+205,((1U & (IData)(((1U == (3U 
                                                   & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])) 
                                           & (0x22U 
                                              == (0x22U 
                                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U])))))));
    bufp->fullIData(oldp+206,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a),32);
    bufp->fullIData(oldp+207,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b),32);
    bufp->fullIData(oldp+208,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout),32);
    bufp->fullIData(oldp+209,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm),32);
    bufp->fullBit(oldp+210,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a)) 
                                                    + 
                                                    ((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm)) 
                                                     + (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                                           >> 0x19U)))))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+211,((1U & (((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                        >> 0x1fU)) 
                                    & ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm 
                                           >> 0x1fU)) 
                                       & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                          >> 0x1fU))) 
                                   | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                       >> 0x1fU) & 
                                      ((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                                           >> 0x1fU)) 
                                       & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__bm 
                                          >> 0x1fU)))))));
    bufp->fullBit(oldp+212,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__aout 
                             >> 0x1fU)));
    bufp->fullCData(oldp+213,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_11) 
                                << 1U) | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_12))),3);
    bufp->fullIData(oldp+214,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b 
                                   & (- (IData)((1U 
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
    bufp->fullIData(oldp+215,((((- (IData)((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                  >> 0x15U)))) 
                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                   << (0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))) 
                               | (((- (IData)((1U & 
                                               (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                >> 0x13U)))) 
                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a 
                                      >> (0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))) 
                                  | ((- (IData)((1U 
                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                                    >> 0x14U)))) 
                                     & VL_SHIFTRS_III(32,32,5, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a, 
                                                      (0x1fU 
                                                       & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b)))))),32);
    bufp->fullBit(oldp+216,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_10) 
                              & (IData)((1ULL & (((QData)((IData)(
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
                                & (IData)((1ULL & (
                                                   ((QData)((IData)(
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
    bufp->fullIData(oldp+217,((((IData)((0x1ffffffffULL 
                                         & (- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_10))))) 
                                & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                     << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                 >> 0x11U)) 
                                   + ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[5U] 
                                       << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                                 >> 0x1bU)))) 
                               | ((IData)((0x1ffffffffULL 
                                           & (- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_19))))) 
                                  & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                       << 0xfU) | (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                                   >> 0x11U)) 
                                     + ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
                                         << 5U) | (
                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                   >> 0x1bU)))))),32);
    bufp->fullBit(oldp+218,((1U & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                    >> 0xbU) | ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
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
    bufp->fullBit(oldp+219,((1U & (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
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
    bufp->fullBit(oldp+220,((0U != (7U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                          >> 0x16U)))));
    bufp->fullBit(oldp+221,((IData)((0U != (0x380000U 
                                            & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])))));
    bufp->fullBit(oldp+222,(((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                 >> 0x12U)) & (0U != 
                                               (0x6000000U 
                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U])))));
    bufp->fullBit(oldp+223,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                              >> 0x12U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt))));
    bufp->fullIData(oldp+224,(VL_SHIFTRS_III(32,32,5, vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__a, 
                                             (0x1fU 
                                              & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__b))),32);
    bufp->fullBit(oldp+225,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq));
    bufp->fullBit(oldp+226,((1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__eq)))));
    bufp->fullBit(oldp+227,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt));
    bufp->fullBit(oldp+228,((1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__lt)))));
    bufp->fullQData(oldp+229,((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT__alu_wb_data_i)) 
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
    bufp->fullQData(oldp+231,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__alu_wb_data_ff__dout),38);
    bufp->fullQData(oldp+233,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din),64);
    bufp->fullQData(oldp+235,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__instr_tag_ff__dout),64);
    bufp->fullQData(oldp+237,((((QData)((IData)((((IData)(
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
    bufp->fullQData(oldp+239,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout),33);
    bufp->fullBit(oldp+241,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1));
    bufp->fullBit(oldp+242,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early));
    bufp->fullBit(oldp+243,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish));
    bufp->fullBit(oldp+244,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                              | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state)) 
                             & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish)) 
                                & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff))))));
    bufp->fullCData(oldp+245,((0x3fU & ((- (IData)(
                                                   ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish)) 
                                                    & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state) 
                                                       & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                                                          & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable))))))) 
                                        & ((IData)(1U) 
                                           + ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count) 
                                              + (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff)))))),6);
    bufp->fullCData(oldp+246,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count),6);
    bufp->fullQData(oldp+247,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff),33);
    bufp->fullBit(oldp+249,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                             | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52))));
    bufp->fullBit(oldp+250,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                             | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52) 
                                 & (0x21U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count))) 
                                | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)))));
    bufp->fullQData(oldp+251,((0x1ffffffffULL & (((- (QData)((IData)(
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
    bufp->fullQData(oldp+253,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff),33);
    bufp->fullQData(oldp+255,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in),33);
    bufp->fullQData(oldp+257,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff),33);
    bufp->fullQData(oldp+259,((0x1ffffffffULL & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add)
                                                  ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff
                                                  : 
                                                 (~ vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__m_ff)))),33);
    __Vtemp_174[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
    __Vtemp_174[1U] = 0U;
    __Vtemp_174[2U] = 0U;
    VL_SHIFTL_WWI(65,65,6, __Vtemp_175, __Vtemp_174, (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff));
    bufp->fullQData(oldp+261,((0x1ffffffffULL & ((- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__run_state))) 
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
    bufp->fullBit(oldp+263,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                   >> 3U))));
    bufp->fullBit(oldp+264,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                   >> 2U))));
    bufp->fullIData(oldp+265,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp),32);
    bufp->fullIData(oldp+266,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff),32);
    bufp->fullIData(oldp+267,(((1U & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                       >> 1U) & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                                  >> 3U) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                                  >> 2U))))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_comp
                                : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff))),32);
    bufp->fullIData(oldp+268,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
                                << 1U) | (1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))),32);
    bufp->fullIData(oldp+269,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_46)
                                ? ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp 
                                    << 1U) | (1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)))
                                : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff))),32);
    bufp->fullBit(oldp+270,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout) 
                                   >> 1U))));
    bufp->fullBit(oldp+271,(((~ (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                 >> 0x11U)) & (0U != 
                                               ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U] 
                                                 << 5U) 
                                                | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+272,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))));
    bufp->fullBit(oldp+273,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__add));
    __Vtemp_178[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_eff;
    __Vtemp_178[1U] = 0U;
    __Vtemp_178[2U] = 0U;
    VL_SHIFTL_WWI(65,65,6, __Vtemp_179, __Vtemp_178, (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff));
    bufp->fullQData(oldp+274,((0x1ffffffffULL & (((- (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct))) 
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
    bufp->fullWData(oldp+276,(__Vtemp_184),65);
    bufp->fullBit(oldp+279,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct));
    bufp->fullBit(oldp+280,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff));
    bufp->fullBit(oldp+281,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__valid_ff_e1))));
    bufp->fullBit(oldp+282,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout) 
                                   >> 4U))));
    bufp->fullCData(oldp+283,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__smallnum),4);
    bufp->fullCData(oldp+284,((0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout))),4);
    bufp->fullBit(oldp+285,((IData)((6U == (6U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout))))));
    bufp->fullCData(oldp+286,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_50),5);
    bufp->fullCData(oldp+287,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_51),5);
    bufp->fullCData(oldp+288,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift),6);
    bufp->fullCData(oldp+289,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift_ff),6);
    bufp->fullBit(oldp+290,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable));
    bufp->fullBit(oldp+291,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout) 
                                   >> 4U))));
    bufp->fullQData(oldp+292,((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_24)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)))),33);
    bufp->fullCData(oldp+294,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_raw),4);
    bufp->fullCData(oldp+295,((0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout))),4);
    bufp->fullIData(oldp+296,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)),32);
    bufp->fullIData(oldp+297,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff_c__DOT__dout_temp),31);
    bufp->fullQData(oldp+298,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
                                | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____VdfgRegularize_h51211f6d_0_52) 
                                    & (0x21U != (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__count))) 
                                   | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__rem_correct)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_in
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__a_ff)),33);
    bufp->fullIData(oldp+300,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__q_ff)),32);
    bufp->fullIData(oldp+301,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__dividend_c__DOT__dout_temp),31);
    bufp->fullBit(oldp+302,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__flush_lower_ff)) 
                             & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en))));
    bufp->fullCData(oldp+303,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_enable) 
                                << 4U) | (0xfU & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__shortq_shift)))),5);
    bufp->fullCData(oldp+304,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__i_shortq_ff__dout),5);
    bufp->fullBit(oldp+305,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en));
    bufp->fullQData(oldp+306,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout),64);
    bufp->fullQData(oldp+308,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellinp__instr_tag_ff__din
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__instr_tag_ff__dout)),64);
    bufp->fullQData(oldp+310,((((QData)((IData)((1U 
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
    bufp->fullQData(oldp+312,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
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
    bufp->fullCData(oldp+314,((((8U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U] 
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
    bufp->fullCData(oldp+315,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__miscf__dout),4);
    bufp->fullCData(oldp+316,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
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
    bufp->fullCData(oldp+317,((0x1fU & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en)
                                         ? ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                             << 0x15U) 
                                            | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
                                               >> 0xbU))
                                         : (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_wb_rd_addr)))),5);
    bufp->fullQData(oldp+318,((0x1ffffffffULL & (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellinp__instr_tag_ff__en) 
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
    bufp->fullCData(oldp+320,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__finish_early) 
                                << 4U) | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT__smallnum))),5);
    bufp->fullCData(oldp+321,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__div_inst__DOT____Vcellout__smallnumff__dout),5);
    bufp->fullBit(oldp+322,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                   >> 6U))));
    bufp->fullBit(oldp+323,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                   >> 5U))));
    bufp->fullBit(oldp+324,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                   >> 4U))));
    bufp->fullBit(oldp+325,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                   >> 2U))));
    bufp->fullBit(oldp+326,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                   >> 3U))));
    bufp->fullBit(oldp+327,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout))));
    bufp->fullBit(oldp+328,((1U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout) 
                                   >> 1U))));
    bufp->fullBit(oldp+329,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__lsu_stall_q));
    bufp->fullBit(oldp+330,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid));
    bufp->fullIData(oldp+331,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[3U] 
                                << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+332,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+333,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] 
                                << 0x1bU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+334,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr),32);
    bufp->fullCData(oldp+335,((0x1fU & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U])),5);
    bufp->fullBit(oldp+336,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load));
    bufp->fullBit(oldp+337,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward));
    bufp->fullBit(oldp+338,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+339,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+340,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+341,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+342,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+343,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                   >> 9U))));
    bufp->fullBit(oldp+344,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+345,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                   >> 2U))));
    bufp->fullBit(oldp+346,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                   >> 8U))));
    bufp->fullIData(oldp+347,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                << 0x18U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+348,(((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                                ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] 
                                   >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                >> 5U)))
                                : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                                   >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                >> 5U))))),32);
    bufp->fullCData(oldp+349,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                        >> 3U))),5);
    bufp->fullIData(oldp+350,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                << 0x1fU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U] 
                                             >> 1U))),32);
    bufp->fullBit(oldp+351,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                   >> 1U))));
    bufp->fullBit(oldp+352,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])));
    bufp->fullIData(oldp+353,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U]),32);
    bufp->fullBit(oldp+354,(((IData)((0U != (0x1800U 
                                             & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U]))) 
                             & (IData)((((0x300U == 
                                          (0x300U & 
                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                         & (0x140U 
                                            == (0x140U 
                                                & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U]))) 
                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_waddr 
                                           == (((IData)(1U) 
                                                + (
                                                   (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                    << 0x16U) 
                                                   | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                      >> 0xaU))) 
                                               << 2U)))))));
    bufp->fullBit(oldp+355,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+356,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+357,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+358,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                   >> 8U))));
    bufp->fullBit(oldp+359,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                   >> 9U))));
    bufp->fullBit(oldp+360,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                   >> 6U))));
    bufp->fullBit(oldp+361,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                   >> 7U))));
    bufp->fullBit(oldp+362,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                   >> 0xdU))));
    bufp->fullIData(oldp+363,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                << 0x13U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                             >> 0xdU))),32);
    bufp->fullIData(oldp+364,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[4U] 
                                << 0x12U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[3U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+365,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data),32);
    bufp->fullIData(oldp+366,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc3_wb_data_mask),32);
    bufp->fullIData(oldp+367,((((- (IData)((1U & (IData)(
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
    bufp->fullCData(oldp+368,((0x18U & ((- ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                             << 0x13U) 
                                            | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                               >> 0xdU))) 
                                        << 3U))),5);
    bufp->fullCData(oldp+369,((7U & ((IData)(4U) - 
                                     (3U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                            >> 0xdU))))),3);
    bufp->fullIData(oldp+370,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[2U] 
                                << 0x1fU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U] 
                                             >> 1U))),32);
    bufp->fullIData(oldp+371,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_tag_out),32);
    bufp->fullIData(oldp+372,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_instr_out),32);
    bufp->fullIData(oldp+373,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_tag_out),32);
    bufp->fullIData(oldp+374,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_lsu_instr_out),32);
    bufp->fullIData(oldp+375,(((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U])
                                ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9 
                                   | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10 
                                      & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U]))
                                : (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_9 
                                   | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____VdfgRegularize_hc2d89e63_1_10 
                                      & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata)))),32);
    bufp->fullBit(oldp+376,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[1U])));
    bufp->fullIData(oldp+377,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout[0U]),32);
    bufp->fullQData(oldp+378,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask_base),64);
    bufp->fullQData(oldp+380,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc2_store_mask),64);
    bufp->fullQData(oldp+382,(((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
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
                                        << 0x1cU) | 
                                       (0xffffffeU 
                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[1U] 
                                           >> 4U)))) 
                       | (IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_forward)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_wdata))) 
                                  >> 0x20U)));
    __Vtemp_187[2U] = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)) 
                                  << 0x21U) | (((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_lsu_stall)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_computed_addr))))) 
                        << 8U) | ((0xfffffffeU & ((0xf8U 
                                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[0U] 
                                                      << 3U)) 
                                                  | (((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_lsu_valid) 
                                                      << 2U) 
                                                     | ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT__dc1_store_needs_load) 
                                                        << 1U)))) 
                                  | (1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout[2U] 
                                           >> 4U))));
    __Vtemp_187[3U] = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout)) 
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
    bufp->fullWData(oldp+384,(__Vtemp_187),112);
    bufp->fullWData(oldp+388,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout),112);
    __Vtemp_191[0U] = (IData)((((QData)((IData)(((IData)(
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
    __Vtemp_191[2U] = (((IData)((0x1ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                                    << 0x18U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])) 
                                                      >> 8U)))) 
                        << 0xdU) | ((0xfffffffeU & 
                                     ((0x1fc0U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U] 
                                                  >> 3U)) 
                                      | (0x3eU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                                  >> 2U)))) 
                                    | (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])));
    __Vtemp_191[3U] = ((((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                          ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] 
                             >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                          >> 5U))) : 
                         (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                          >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                       >> 5U)))) << 0xeU) 
                       | (((IData)((0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])) 
                                        >> 8U)))) >> 0x13U) 
                          | ((IData)(((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[3U])) 
                                           << 0x18U) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U])) 
                                             >> 8U))) 
                                      >> 0x20U)) << 0xdU)));
    __Vtemp_191[4U] = (((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[1U])
                         ? (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[0U] 
                            >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                         >> 5U))) : 
                        (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__dccm_rdata 
                         >> (0x18U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc2_dccm_rdata_reg__dout[2U] 
                                      >> 5U)))) >> 0x12U);
    bufp->fullWData(oldp+392,(__Vtemp_191),142);
    bufp->fullWData(oldp+397,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__dc3_dccm_rdata_reg__dout),142);
    bufp->fullCData(oldp+402,(((0x70U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                         >> 4U)) | 
                               ((0xcU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                         >> 0x1aU)) 
                                | ((2U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U] 
                                          >> 0x10U)) 
                                   | (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[0U]))))),7);
    bufp->fullCData(oldp+403,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_ctrl_reg__dout),7);
    __Vtemp_193[0U] = (((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U] 
                         << 0x14U) | (0xfffe0U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[1U] 
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
    __Vtemp_193[2U] = (((IData)((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
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
    __Vtemp_193[3U] = ((IData)(((((QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[4U])) 
                                  << 0x25U) | (((QData)((IData)(
                                                                vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[3U])) 
                                                << 5U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_out[2U])) 
                                                  >> 0x1bU))) 
                                >> 0x20U)) >> 0x1bU);
    bufp->fullWData(oldp+404,(__Vtemp_193),101);
    bufp->fullWData(oldp+408,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__lsu_inst__DOT____Vcellout__lsu_data_reg__dout),101);
    bufp->fullBit(oldp+412,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e1));
    bufp->fullBit(oldp+413,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__valid_e2));
    bufp->fullIData(oldp+414,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1),32);
    bufp->fullIData(oldp+415,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1),32);
    bufp->fullBit(oldp+416,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1));
    bufp->fullBit(oldp+417,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1) 
                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1 
                                >> 0x1fU))));
    bufp->fullBit(oldp+418,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1));
    bufp->fullBit(oldp+419,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1) 
                             & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1 
                                >> 0x1fU))));
    bufp->fullQData(oldp+420,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e2),33);
    bufp->fullQData(oldp+422,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e2),33);
    bufp->fullWData(oldp+424,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__prod_e3),65);
    bufp->fullBit(oldp+427,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e1));
    bufp->fullBit(oldp+428,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e2));
    bufp->fullBit(oldp+429,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__low_e3));
    bufp->fullCData(oldp+430,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e1),5);
    bufp->fullCData(oldp+431,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_addr_e2),5);
    bufp->fullBit(oldp+432,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e1));
    bufp->fullBit(oldp+433,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__out_rd_wr_en_e2));
    bufp->fullIData(oldp+434,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+435,((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+436,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout)),32);
    bufp->fullIData(oldp+437,((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout)),32);
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
    bufp->fullWData(oldp+438,(__Vtemp_202),66);
    bufp->fullQData(oldp+441,((((QData)((IData)(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs1_sign_e1) 
                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1 
                                                    >> 0x1fU)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__a_ff_e1)))),33);
    bufp->fullQData(oldp+443,((((QData)((IData)(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__rs2_sign_e1) 
                                                 & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1 
                                                    >> 0x1fU)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT__b_ff_e1)))),33);
    bufp->fullQData(oldp+445,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_ff__dout),64);
    bufp->fullQData(oldp+447,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e2_ff__dout),64);
    bufp->fullQData(oldp+449,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellout__instr_tag_e3_ff__dout),64);
    bufp->fullBit(oldp+451,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__mul_inst__DOT____Vcellinp__out_rd_wr_en_ff__din));
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
    bufp->fullWData(oldp+452,(__Vtemp_214),65);
    bufp->fullSData(oldp+455,((0x3ffU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q 
                                         >> 2U))),10);
    bufp->fullQData(oldp+456,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data),64);
    bufp->fullQData(oldp+458,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                               >> (3U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q))),64);
    bufp->fullIData(oldp+460,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[4U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+461,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[3U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                          >> 0x1bU))),32);
    bufp->fullCData(oldp+462,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+463,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                        >> 0x11U))),5);
    bufp->fullIData(oldp+464,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[2U] 
                                << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                            >> 0x11U))),32);
    bufp->fullBit(oldp+465,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+466,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+467,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                        >> 6U))),5);
    bufp->fullBit(oldp+468,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 5U))));
    bufp->fullBit(oldp+469,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+470,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+471,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+472,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+473,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[1U])));
    bufp->fullBit(oldp+474,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+475,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+476,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+477,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+478,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+479,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+480,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+481,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+482,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+483,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+484,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+485,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+486,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+487,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+488,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+489,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+490,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+491,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+492,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+493,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+494,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+495,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+496,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+497,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+498,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+499,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+500,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+501,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+502,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+503,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+504,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+505,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i[0U])));
    bufp->fullBit(oldp+506,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+507,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+508,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+509,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+510,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+511,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+512,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+513,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+514,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+515,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+516,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+517,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+518,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+519,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+520,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+521,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+522,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+523,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+524,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+525,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+526,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+527,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+528,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+529,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+530,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+531,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+532,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+533,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+534,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 9U)))));
    bufp->fullBit(oldp+535,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 8U)))));
    bufp->fullBit(oldp+536,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 7U)))));
    bufp->fullBit(oldp+537,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 6U)))));
    bufp->fullBit(oldp+538,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 5U)))));
    bufp->fullBit(oldp+539,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 4U)))));
    bufp->fullBit(oldp+540,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 3U)))));
    bufp->fullBit(oldp+541,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 2U)))));
    bufp->fullBit(oldp+542,((1U & (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out 
                                           >> 1U)))));
    bufp->fullBit(oldp+543,((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__decode_out))));
    bufp->fullWData(oldp+544,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_i),155);
    bufp->fullBit(oldp+549,((1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))));
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
    bufp->fullWData(oldp+550,(__Vtemp_217),155);
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
    bufp->fullWData(oldp+555,(__Vtemp_220),155);
    bufp->fullWData(oldp+560,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i),155);
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
    bufp->fullWData(oldp+565,(__Vtemp_224),155);
    bufp->fullIData(oldp+570,((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
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
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+571,((IData)(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                        ? 0ULL : (((QData)((IData)(
                                                                   vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[4U])) 
                                                   << 0x25U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[3U])) 
                                                      << 5U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                                        >> 0x1bU)))))),32);
    bufp->fullCData(oldp+572,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                          ? 0U : (0x7ffffffU 
                                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+573,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                          ? 0U : (0x7ffffffU 
                                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                        >> 0x11U))),5);
    bufp->fullIData(oldp+574,(((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                  ? 0U : (0x7ffffffU 
                                          & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[2U])) 
                                << 0xfU) | (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                              ? 0U : 
                                             vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                            >> 0x11U))),32);
    bufp->fullBit(oldp+575,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                   >> 0x10U))));
    bufp->fullCData(oldp+576,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                          ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+577,((0x1fU & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                          ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                        >> 6U))),5);
    bufp->fullBit(oldp+578,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                   >> 5U))));
    bufp->fullBit(oldp+579,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                   >> 4U))));
    bufp->fullBit(oldp+580,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                   >> 3U))));
    bufp->fullBit(oldp+581,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                   >> 2U))));
    bufp->fullBit(oldp+582,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]) 
                                   >> 1U))));
    bufp->fullBit(oldp+583,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                              ? 0U : (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U]))));
    bufp->fullBit(oldp+584,((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                               ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+585,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+586,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+587,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+588,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+589,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+590,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+591,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+592,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+593,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+594,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+595,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+596,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+597,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+598,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+599,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+600,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+601,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+602,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+603,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+604,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+605,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+606,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 9U))));
    bufp->fullBit(oldp+607,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 8U))));
    bufp->fullBit(oldp+608,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 7U))));
    bufp->fullBit(oldp+609,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 6U))));
    bufp->fullBit(oldp+610,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 5U))));
    bufp->fullBit(oldp+611,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 4U))));
    bufp->fullBit(oldp+612,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 3U))));
    bufp->fullBit(oldp+613,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 2U))));
    bufp->fullBit(oldp+614,((1U & (((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                     ? 0U : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]) 
                                   >> 1U))));
    bufp->fullBit(oldp+615,(((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                              ? 0U : (1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[0U]))));
    bufp->fullIData(oldp+616,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[6U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[5U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+617,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[5U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[4U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+618,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[4U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[3U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+619,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[3U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] 
                                          >> 0x1bU))),32);
    bufp->fullCData(oldp+620,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+621,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] 
                                        >> 0x11U))),5);
    bufp->fullIData(oldp+622,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[2U] 
                                << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                            >> 0x11U))),32);
    bufp->fullBit(oldp+623,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+624,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+625,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                        >> 6U))),5);
    bufp->fullBit(oldp+626,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                   >> 5U))));
    bufp->fullBit(oldp+627,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+628,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+629,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+630,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+631,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[1U])));
    bufp->fullBit(oldp+632,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+633,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+634,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+635,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+636,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+637,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+638,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+639,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+640,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+641,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+642,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+643,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+644,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+645,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+646,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+647,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+648,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+649,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+650,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+651,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+652,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+653,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+654,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+655,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+656,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+657,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+658,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+659,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+660,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+661,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+662,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+663,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd[0U])));
    bufp->fullIData(oldp+664,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[6U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[5U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+665,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[5U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+666,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[4U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+667,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[3U] 
                                << 5U) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                          >> 0x1bU))),32);
    bufp->fullCData(oldp+668,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+669,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                        >> 0x11U))),5);
    bufp->fullIData(oldp+670,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[2U] 
                                << 0xfU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                            >> 0x11U))),32);
    bufp->fullBit(oldp+671,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+672,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+673,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                        >> 6U))),5);
    bufp->fullBit(oldp+674,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 5U))));
    bufp->fullBit(oldp+675,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+676,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+677,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+678,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+679,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[1U])));
    bufp->fullBit(oldp+680,((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+681,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+682,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+683,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+684,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+685,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+686,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+687,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+688,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+689,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+690,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+691,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+692,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+693,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+694,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+695,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+696,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+697,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+698,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+699,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+700,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+701,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+702,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+703,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+704,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+705,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+706,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+707,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+708,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+709,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+710,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+711,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_gated[0U])));
    bufp->fullIData(oldp+712,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[2U] 
                                << 0xdU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[1U] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+713,(((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[1U] 
                                << 0xdU) | (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                            >> 0x13U))),32);
    bufp->fullCData(oldp+714,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                        >> 0xeU))),5);
    bufp->fullCData(oldp+715,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                        >> 9U))),5);
    bufp->fullCData(oldp+716,((0x1fU & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                        >> 4U))),5);
    bufp->fullBit(oldp+717,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+718,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+719,((1U & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+720,((1U & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr[0U])));
    bufp->fullWData(oldp+721,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_before_fwd),219);
    bufp->fullWData(oldp+728,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i),219);
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
                                        ? 0U : (0x3ffU 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U] 
                                                   >> 0x11U))) 
                                      << 9U) | ((((1U 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                   ? 0U
                                                   : 
                                                  (0x1fU 
                                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                      >> 0xbU))) 
                                                 << 4U) 
                                                | (((8U 
                                                     & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                         << 3U) 
                                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
                                                           >> 4U))) 
                                                    | (4U 
                                                       & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                           << 2U) 
                                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                             >> 3U)))) 
                                                   | ((2U 
                                                       & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
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
                        >> 0xdU) | ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                               ? 0ULL
                                               : (((QData)((IData)(
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
    bufp->fullWData(oldp+735,(__Vtemp_489),83);
    bufp->fullWData(oldp+738,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr),83);
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
                                        ? 0U : (0x3ffU 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U] 
                                                   >> 0x11U))) 
                                      << 9U) | ((((1U 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                   ? 0U
                                                   : 
                                                  (0x1fU 
                                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                      >> 0xbU))) 
                                                 << 4U) 
                                                | (((8U 
                                                     & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                         << 3U) 
                                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
                                                           >> 4U))) 
                                                    | (4U 
                                                       & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                           << 2U) 
                                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                             >> 3U)))) 
                                                   | ((2U 
                                                       & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
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
        __Vtemp_493[2U] = ((IData)((((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
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
    }
    bufp->fullWData(oldp+741,(__Vtemp_493),83);
    bufp->fullWData(oldp+744,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__last_issued_instr_reg__DOT__dout_i),83);
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
                                        ? 0U : (0x3ffU 
                                                & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[2U] 
                                                   >> 0x11U))) 
                                      << 9U) | ((((1U 
                                                   & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))
                                                   ? 0U
                                                   : 
                                                  (0x1fU 
                                                   & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                      >> 0xbU))) 
                                                 << 4U) 
                                                | (((8U 
                                                     & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                         << 3U) 
                                                        & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[0U] 
                                                           >> 4U))) 
                                                    | (4U 
                                                       & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                           << 2U) 
                                                          & (vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__idu1_out_reg__DOT__dout_i[1U] 
                                                             >> 3U)))) 
                                                   | ((2U 
                                                       & (((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
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
    }
    bufp->fullWData(oldp+747,(__Vtemp_498),83);
    bufp->fullCData(oldp+750,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs1_addr),5);
    bufp->fullCData(oldp+751,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____Vcellinp__reg_file_i__rs2_addr),5);
    bufp->fullBit(oldp+752,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                             & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                 >> 4U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))));
    bufp->fullBit(oldp+753,(((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                             & ((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu0_inst__DOT__idu0_out_flop_inst__DOT__dout_i[1U] 
                                 >> 3U) & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT____VdfgRegularize_hbab07eb2_0_0)))));
    bufp->fullBit(oldp+754,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xaU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+755,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+756,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xaU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__10__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+757,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xbU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+758,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+759,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xbU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__11__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+760,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xcU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+761,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+762,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xcU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__12__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+763,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xdU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+764,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+765,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xdU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__13__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+766,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xeU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+767,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+768,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xeU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__14__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+769,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0xfU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+770,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+771,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0xfU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__15__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+772,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x10U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+773,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+774,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x10U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__16__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+775,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x11U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+776,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+777,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x11U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__17__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+778,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x12U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+779,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+780,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x12U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__18__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+781,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x13U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+782,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+783,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x13U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__19__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+784,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+785,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+786,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (1U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__1__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+787,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x14U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+788,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+789,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x14U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__20__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+790,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x15U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+791,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+792,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x15U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__21__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+793,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x16U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+794,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+795,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x16U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__22__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+796,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x17U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+797,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+798,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x17U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__23__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+799,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x18U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+800,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+801,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x18U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__24__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+802,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x19U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+803,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+804,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x19U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__25__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+805,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1aU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+806,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+807,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1aU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__26__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+808,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1bU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+809,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+810,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1bU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__27__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+811,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1cU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+812,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+813,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1cU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__28__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+814,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1dU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+815,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+816,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1dU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__29__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+817,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (2U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+818,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+819,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (2U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__2__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+820,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1eU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+821,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+822,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1eU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__30__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+823,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (0x1fU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+824,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+825,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (0x1fU == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__31__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+826,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (3U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+827,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+828,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (3U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__3__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+829,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (4U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+830,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+831,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (4U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__4__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+832,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (5U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+833,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+834,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (5U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__5__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+835,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (6U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+836,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+837,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (6U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__6__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+838,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (7U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+839,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+840,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (7U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__7__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+841,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (8U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+842,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+843,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (8U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__8__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+844,(((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                             & (9U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))));
    bufp->fullIData(oldp+845,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout),32);
    bufp->fullIData(oldp+846,((((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_wr_en) 
                                & (9U == (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_rd_addr)))
                                ? vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_wb_data
                                : vlSelfRef.core_top_tb__DOT__core_top_i__DOT__idu1_inst__DOT__reg_file_i__DOT____Vcellout__g_reg_file__BRA__9__KET____DOT__g_reg_file_gen__DOT__reg_i__dout)),32);
    bufp->fullBit(oldp+847,(((4U == (5U & ((4U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                << 1U)) 
                                              | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall))))) 
                             || (2U == ((4U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                               << 2U)) 
                                        | ((2U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))))));
    __Vtemp_499[0U] = (IData)((((QData)((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                 >> 
                                                 (3U 
                                                  & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))));
    __Vtemp_499[1U] = (IData)(((((QData)((IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__iccm_inst__DOT__line_data 
                                                  >> 
                                                  (3U 
                                                   & vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)))) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))) 
                               >> 0x20U));
    __Vtemp_499[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
    bufp->fullWData(oldp+848,(__Vtemp_499),65);
    if ((1U & (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout))) {
        __Vtemp_502[0U] = 0U;
        __Vtemp_502[1U] = 0U;
        __Vtemp_502[2U] = 0U;
    } else {
        __Vtemp_502[0U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[0U];
        __Vtemp_502[1U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[1U];
        __Vtemp_502[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i[2U];
    }
    bufp->fullWData(oldp+851,(__Vtemp_502),65);
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
                                     << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))) 
                                   >> 0x20U));
        __Vtemp_506[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
    }
    bufp->fullWData(oldp+854,(__Vtemp_506),65);
    bufp->fullWData(oldp+857,(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__instr_dff_inst__DOT__dout_i),65);
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
                                     << 0x20U) | (QData)((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_tag_in))) 
                                   >> 0x20U));
        __Vtemp_511[2U] = vlSelfRef.core_top_tb__DOT__core_top_i__DOT__instr_mem_rdata_valid;
    }
    bufp->fullWData(oldp+860,(__Vtemp_511),65);
    bufp->fullBit(oldp+863,((1U & (~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)))));
    bufp->fullIData(oldp+864,(((4U == (5U & ((4U & 
                                              ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                    << 1U)) 
                                                | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))))
                                ? (IData)((vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout 
                                           >> 1U)) : 
                               ((2U == ((4U & ((IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout) 
                                               << 2U)) 
                                        | ((2U & ((~ (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__exu_inst__DOT__alu_inst__DOT____Vcellout__pc_ff__dout)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall))))
                                 ? ((IData)(4U) + vlSelfRef.core_top_tb__DOT__core_top_i__DOT__ifu_inst__DOT__pc_inst__DOT__pc_q)
                                 : 0U))),32);
    bufp->fullIData(oldp+865,((((4U == (5U & ((4U & 
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
                                              | (IData)(vlSelfRef.core_top_tb__DOT__core_top_i__DOT__pipe_stall)))))
                                ? ((4U == (5U & ((4U 
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
    bufp->fullBit(oldp+866,(vlSelfRef.core_top_tb__DOT__clk));
    bufp->fullBit(oldp+867,(vlSelfRef.core_top_tb__DOT__rst_n));
    bufp->fullIData(oldp+868,(vlSelfRef.core_top_tb__DOT__fd),32);
    bufp->fullIData(oldp+869,(vlSelfRef.core_top_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+870,(vlSelfRef.core_top_tb__DOT__unnamedblk2__DOT__i),32);
}
