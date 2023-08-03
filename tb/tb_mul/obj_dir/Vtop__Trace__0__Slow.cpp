// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+697,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+698,"A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+699,"B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+700,"opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+701,"O",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+697,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+698,"A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+699,"B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+700,"opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+701,"O",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("fpu_dut ");
    tracep->declBit(c+697,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+698,"A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+699,"B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+700,"opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+701,"O",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+702,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+703,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+704,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+705,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+692,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+693,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+694,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+695,"adder_a_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+696,"adder_b_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,"adder_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,"multiplier_a_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,"multiplier_b_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"multiplier_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,"divider_a_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+715,"divider_b_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,"divider_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+707,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+708,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+717,"SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"DIV",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+717,"MUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("A1 ");
    tracep->declBus(c+695,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+696,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+22,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+23,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+25,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+26,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+28,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+29,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+31,"diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,"tmp_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+718,"tmp_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,"i_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,"i_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+35,"o_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,"o_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->pushNamePrefix("norm1 ");
    tracep->declBus(c+33,"exp_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+34,"mant_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+35,"exp_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+36,"mant_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+37,"tmp_mant",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,"shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,"diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->pushNamePrefix("lzc32 ");
    tracep->declBus(c+37,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+40,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+41,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+43,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+44,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+40,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+45,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+46,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+47,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+48,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+49,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+50,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+51,"s7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+52,"s8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_16_comp_0 ");
    tracep->declBus(c+53,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+41,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+43,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+55,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+56,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+57,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+43,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+59,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+60,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+61,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_8_comp_0 ");
    tracep->declBus(c+62,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+54,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+56,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+719,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+63,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+716,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+720,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+719,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+716,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+64,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+63,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+56,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzc_8_comp_1 ");
    tracep->declBus(c+65,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+55,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+57,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+66,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+67,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+68,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+69,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+57,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+70,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+71,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+72,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+73,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+74,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+66,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+68,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+76,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+77,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+78,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+79,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+80,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+81,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+82,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+83,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+84,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+67,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+69,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+86,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+87,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+88,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+89,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+90,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+91,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+92,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+93,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lzc_16_comp_1 ");
    tracep->declBus(c+94,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+42,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+44,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+97,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+98,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+44,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+99,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+100,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+101,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+102,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+103,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+104,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_8_comp_0 ");
    tracep->declBus(c+105,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+95,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+97,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+106,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+107,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+108,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+109,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+97,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+110,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+111,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+112,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+113,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+114,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+106,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+108,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+116,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+117,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+118,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+119,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+120,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+121,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+122,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+123,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+124,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+107,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+109,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+126,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+127,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+128,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+129,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+130,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+131,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+132,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+133,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzc_8_comp_1 ");
    tracep->declBus(c+134,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+96,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+98,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+135,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+137,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+138,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+98,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+139,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+140,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+141,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+142,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+143,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+135,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+137,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+145,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+146,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+147,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+148,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+149,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+150,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+151,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+152,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+153,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+136,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+138,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+155,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+156,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+157,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+158,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+159,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+160,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+161,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+162,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("D1 ");
    tracep->declBus(c+714,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+715,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+706,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+660,"b_reciprocal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("mult ");
    tracep->declBus(c+714,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+660,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+706,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+661,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+678,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+679,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+662,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+680,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+681,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+663,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+682,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+683,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declQuad(c+684,"product",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+686,"i_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+687,"i_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+689,"o_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+690,"o_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->pushNamePrefix("norm1 ");
    tracep->declBus(c+686,"in_e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+687,"in_m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->declBus(c+689,"out_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+690,"out_m",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("recip ");
    tracep->declBus(c+715,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+660,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+721,"D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+722,"C1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+723,"C2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+724,"C3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,"N0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+482,"N1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+709,"N2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,"S0_2D_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+710,"S1_DN0_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,"S1_2min_DN0_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+711,"S2_DN1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+515,"S2_2minDN1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,"S0_N0_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("S0_2D ");
    tracep->declBus(c+723,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+721,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+163,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+716,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+725,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+726,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+1,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+165,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+166,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+2,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+167,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declQuad(c+169,"product",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+171,"i_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+172,"i_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+174,"o_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+175,"o_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->pushNamePrefix("norm1 ");
    tracep->declBus(c+171,"in_e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+172,"in_m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->declBus(c+174,"out_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+175,"out_m",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("S0_N0 ");
    tracep->declBus(c+722,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+164,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+177,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+178,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+179,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+181,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+182,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+184,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+185,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+187,"diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+188,"tmp_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+727,"tmp_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+189,"i_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+190,"i_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+191,"o_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+192,"o_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->pushNamePrefix("norm1 ");
    tracep->declBus(c+189,"exp_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+190,"mant_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+191,"exp_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+192,"mant_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+193,"tmp_mant",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,"shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,"diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->pushNamePrefix("lzc32 ");
    tracep->declBus(c+193,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+196,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+197,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+198,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+199,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+200,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+196,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+201,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+202,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+203,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+204,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+205,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+206,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+207,"s7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+208,"s8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_16_comp_0 ");
    tracep->declBus(c+209,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+197,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+199,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+210,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+211,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+212,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+213,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+199,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+214,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+215,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+214,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+216,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+214,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+217,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_8_comp_0 ");
    tracep->declBus(c+218,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+210,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+212,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+719,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+219,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+716,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+212,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+212,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+212,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+212,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+720,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+719,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+716,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+220,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+219,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+212,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+212,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+212,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+212,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+212,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzc_8_comp_1 ");
    tracep->declBus(c+221,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+211,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+213,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+222,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+223,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+224,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+225,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+213,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+226,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+227,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+228,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+229,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+230,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+222,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+224,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+232,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+233,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+234,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+235,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+236,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+237,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+238,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+239,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+240,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+223,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+225,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+242,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+243,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+244,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+245,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+246,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+247,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+248,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+249,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lzc_16_comp_1 ");
    tracep->declBus(c+250,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+198,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+200,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+251,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+252,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+253,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+254,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+200,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+255,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+256,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+257,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+258,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+259,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+260,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_8_comp_0 ");
    tracep->declBus(c+261,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+251,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+253,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+262,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+263,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+264,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+265,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+253,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+266,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+267,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+268,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+269,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+270,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+262,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+264,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+272,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+273,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+274,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+275,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+276,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+277,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+278,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+279,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+280,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+263,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+265,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+282,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+283,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+284,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+285,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+286,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+287,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+288,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+289,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzc_8_comp_1 ");
    tracep->declBus(c+290,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+252,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+254,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+291,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+292,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+293,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+294,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+254,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+295,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+296,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+297,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+298,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+299,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+291,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+293,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+301,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+302,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+303,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+304,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+305,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+306,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+307,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+308,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+309,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+292,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+294,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+310,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+311,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+312,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+313,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+314,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+315,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+316,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+317,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+318,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("S1_2minDN0 ");
    tracep->declBus(c+724,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+322,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+337,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+338,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+339,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+340,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+341,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+342,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+343,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+344,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+345,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+346,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+347,"diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+348,"tmp_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+728,"tmp_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+349,"i_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+350,"i_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+351,"o_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+352,"o_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->pushNamePrefix("norm1 ");
    tracep->declBus(c+349,"exp_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+350,"mant_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+351,"exp_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+352,"mant_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+353,"tmp_mant",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+354,"shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+355,"diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->pushNamePrefix("lzc32 ");
    tracep->declBus(c+353,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+354,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+356,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+357,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+358,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+359,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+360,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+356,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+361,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+362,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+363,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+364,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+365,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+366,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+367,"s7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+368,"s8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_16_comp_0 ");
    tracep->declBus(c+369,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+357,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+359,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+370,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+371,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+372,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+373,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+359,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+374,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+375,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+374,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+376,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+374,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+377,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_8_comp_0 ");
    tracep->declBus(c+378,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+370,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+372,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+719,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+379,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+716,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+372,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+372,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+372,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+372,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+720,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+719,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+716,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+380,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+379,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+372,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+372,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+372,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+372,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+372,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzc_8_comp_1 ");
    tracep->declBus(c+381,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+371,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+373,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+382,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+383,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+384,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+385,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+373,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+386,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+387,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+388,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+389,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+390,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+382,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+384,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+392,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+393,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+394,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+395,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+396,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+397,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+398,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+399,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+400,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+383,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+385,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+402,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+403,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+404,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+405,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+406,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+407,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+408,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+409,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lzc_16_comp_1 ");
    tracep->declBus(c+410,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+358,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+360,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+411,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+412,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+413,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+414,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+360,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+415,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+416,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+417,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+418,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+419,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+420,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_8_comp_0 ");
    tracep->declBus(c+421,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+411,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+413,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+422,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+423,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+424,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+425,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+413,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+426,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+427,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+428,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+429,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+430,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+422,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+424,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+432,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+433,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+434,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+435,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+436,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+437,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+438,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+439,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+440,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+423,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+425,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+442,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+443,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+444,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+445,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+446,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+447,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+448,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+449,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzc_8_comp_1 ");
    tracep->declBus(c+450,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+412,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+414,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+451,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+452,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+453,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+454,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+414,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+455,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+456,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+457,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+458,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+459,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+451,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+453,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+461,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+462,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+463,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+464,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+465,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+466,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+467,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+468,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+469,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+452,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+454,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+471,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+472,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+473,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+474,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+475,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+476,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+477,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+478,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("S1_DN0 ");
    tracep->declBus(c+721,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+177,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+710,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+319,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+323,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+324,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+320,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+325,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+321,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+327,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declQuad(c+329,"product",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+331,"i_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+332,"i_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+334,"o_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+335,"o_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->pushNamePrefix("norm1 ");
    tracep->declBus(c+331,"in_e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+332,"in_m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->declBus(c+334,"out_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+335,"out_m",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("S1_N1 ");
    tracep->declBus(c+177,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+337,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+482,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+479,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+483,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+484,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+480,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+485,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+486,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+481,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+487,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+488,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declQuad(c+489,"product",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+491,"i_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+492,"i_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+494,"o_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+495,"o_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->pushNamePrefix("norm1 ");
    tracep->declBus(c+491,"in_e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+492,"in_m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->declBus(c+494,"out_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+495,"out_m",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("S2_2minDN1 ");
    tracep->declBus(c+724,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+500,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+515,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+516,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+517,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+518,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+519,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+520,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+521,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+522,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+523,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+524,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+525,"diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+526,"tmp_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+729,"tmp_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+527,"i_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+528,"i_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+529,"o_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+530,"o_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->pushNamePrefix("norm1 ");
    tracep->declBus(c+527,"exp_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+528,"mant_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+529,"exp_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+530,"mant_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+531,"tmp_mant",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+532,"shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+533,"diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->pushNamePrefix("lzc32 ");
    tracep->declBus(c+531,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+532,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+534,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+535,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+536,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+537,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+538,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+534,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+539,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+540,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+541,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+542,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+543,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+544,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+545,"s7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+546,"s8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_16_comp_0 ");
    tracep->declBus(c+547,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+535,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+537,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+548,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+549,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+550,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+551,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+537,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+552,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+553,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+552,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+554,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+552,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+555,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_8_comp_0 ");
    tracep->declBus(c+556,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+548,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+550,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+719,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+557,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+716,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+550,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+550,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+550,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+550,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+720,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+719,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+716,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+558,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+557,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+550,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+550,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+550,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+550,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+550,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzc_8_comp_1 ");
    tracep->declBus(c+559,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+549,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+551,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+560,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+561,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+562,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+563,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+551,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+564,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+565,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+566,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+567,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+568,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+560,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+562,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+570,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+571,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+572,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+573,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+574,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+575,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+576,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+577,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+578,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+561,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+563,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+579,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+580,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+581,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+582,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+583,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+584,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+585,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+586,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+587,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lzc_16_comp_1 ");
    tracep->declBus(c+588,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+536,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+538,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+589,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+590,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+591,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+592,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+538,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+593,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+594,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+595,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+596,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+597,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+598,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_8_comp_0 ");
    tracep->declBus(c+599,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+589,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+591,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+600,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+601,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+602,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+603,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+591,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+604,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+605,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+606,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+607,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+608,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+600,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+602,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+609,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+610,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+611,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+612,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+613,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+614,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+615,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+616,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+617,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+618,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+601,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+603,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+619,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+620,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+621,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+622,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+623,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+624,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+625,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+626,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+627,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzc_8_comp_1 ");
    tracep->declBus(c+628,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+590,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+592,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+629,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+630,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+631,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+632,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+592,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+633,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+634,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+635,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+636,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+637,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+629,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+631,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+638,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+639,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+640,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+641,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+642,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+643,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+644,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+645,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+646,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+647,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+630,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+632,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+648,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+649,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+650,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+651,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+652,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+653,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+654,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+655,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+656,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("S2_DN1 ");
    tracep->declBus(c+721,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+482,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+711,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+497,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+501,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+502,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+498,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+503,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+504,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+499,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+505,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+506,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declQuad(c+507,"product",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+509,"i_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+510,"i_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+512,"o_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+513,"o_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->pushNamePrefix("norm1 ");
    tracep->declBus(c+509,"in_e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+510,"in_m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->declBus(c+512,"out_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+513,"out_m",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("S2_N2 ");
    tracep->declBus(c+482,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+515,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+709,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+657,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+664,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+665,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+658,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+666,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+667,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+659,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+668,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+669,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declQuad(c+670,"product",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+672,"i_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+673,"i_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+675,"o_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+676,"o_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->pushNamePrefix("norm1 ");
    tracep->declBus(c+672,"in_e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+673,"in_m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->declBus(c+675,"out_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+676,"out_m",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+712,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+713,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+7,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+4,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+9,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+5,"o_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+11,"o_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,"o_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declQuad(c+13,"product",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+15,"i_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+16,"i_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+18,"o_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+19,"o_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->pushNamePrefix("norm1 ");
    tracep->declBus(c+15,"in_e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+16,"in_m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->declBus(c+18,"out_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+19,"out_m",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 47,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_sign));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_sign));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__a_sign));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__b_sign));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_sign));
    bufp->fullIData(oldp+6,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_sign) 
                              << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_exponent) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_mantissa)))),32);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__a_exponent),8);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__a_mantissa),24);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__b_exponent),8);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__b_mantissa),24);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_exponent),8);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_mantissa),25);
    bufp->fullQData(oldp+13,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__product),48);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__i_e),8);
    bufp->fullQData(oldp+16,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__i_m),48);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_e),8);
    bufp->fullQData(oldp+19,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_m),48);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__fpu_dut__DOT__adder_out),32);
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__a_sign));
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__a_exponent),8);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__a_mantissa),24);
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__b_sign));
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__b_exponent),8);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__b_mantissa),24);
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__o_sign));
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__o_exponent),8);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__o_mantissa),25);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__diff),8);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__tmp_mantissa),24);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_e),8);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m),25);
    bufp->fullCData(oldp+35,((0xffU & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_e) 
                                       - (0x1fU & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__shift)))))),8);
    bufp->fullIData(oldp+36,((0x1ffffffU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                            << (0x1fU 
                                                & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__shift)))))),25);
    bufp->fullIData(oldp+37,((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                              << 7U)),32);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__shift),5);
    bufp->fullCData(oldp+39,((0x1fU & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__shift)))),8);
    bufp->fullBit(oldp+40,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                                  | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)))));
    bufp->fullCData(oldp+41,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0) 
                               << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                           | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                          << 2U) | 
                                         (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                            | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                           << 1U) | 
                                          (1U & (((
                                                   (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                    >> 8U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                         >> 6U))) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                     & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                         >> 4U) 
                                                        | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                           & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                              >> 2U))))) 
                                                 | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))))),4);
    bufp->fullCData(oldp+42,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                               << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                              & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                          << 2U) | 
                                         (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                               & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                     & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                                           << 1U) | 
                                          (1U & (((
                                                   (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                    >> 0x18U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                         >> 0x16U))) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                     & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                         >> 0x14U) 
                                                        | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                           & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                              >> 0x12U))))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                    & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                         >> 0x10U) 
                                                        | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                           & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                              >> 0xeU))) 
                                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                          & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                              >> 0xcU) 
                                                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                                & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                                   >> 0xaU)))))))))))),4);
    bufp->fullBit(oldp+43,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                  | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0));
    bufp->fullBit(oldp+45,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                  & ((((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                        >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                     >> 6U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                             >> 4U) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                  >> 2U))))) 
                                     | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+46,((1U & (((((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x18U) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                      >> 0x16U))) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                           >> 0x14U) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                >> 0x12U))))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                      & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                           >> 0x10U) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                >> 0xeU))) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                            & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                >> 0xcU) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                     >> 0xaU))))))) 
                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                     & ((((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                           >> 8U) | 
                                          ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                           & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                              >> 6U))) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                            & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                >> 4U) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                     >> 2U))))) 
                                        | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))))));
    bufp->fullBit(oldp+47,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                            & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+48,(((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                  | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+49,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                            & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+50,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                  | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+51,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                            & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))));
    bufp->fullBit(oldp+52,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
    bufp->fullSData(oldp+53,((0xff80U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                         << 7U))),16);
    bufp->fullCData(oldp+54,(((4U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     << 2U)) | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m)))))),3);
    bufp->fullCData(oldp+55,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                               << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                              & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                          << 1U) | 
                                         (1U & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                  >> 8U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                       >> 6U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                       >> 4U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                            >> 2U))))))))),3);
    bufp->fullBit(oldp+56,((1U & vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m)));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1));
    bufp->fullBit(oldp+59,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                  >> 6U))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 4U) | 
                                         ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                          & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                             >> 2U))))) 
                                  | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+60,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                            | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
    bufp->fullBit(oldp+61,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                            | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
    bufp->fullCData(oldp+62,((0x80U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       << 7U))),8);
    bufp->fullCData(oldp+63,((3U & (- (IData)((1U & vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m))))),2);
    bufp->fullCData(oldp+64,((8U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                    << 3U))),4);
    bufp->fullCData(oldp+65,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 1U))),8);
    bufp->fullCData(oldp+66,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                               << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                >> 4U) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                     >> 2U)))))),2);
    bufp->fullCData(oldp+67,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                               << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                >> 8U) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                     >> 6U)))))),2);
    bufp->fullBit(oldp+68,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                            | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
    bufp->fullBit(oldp+70,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                  & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+71,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                    >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                 >> 6U))) 
                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                     & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                         >> 4U) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                      >> 2U))))))));
    bufp->fullBit(oldp+72,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                            & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+73,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+74,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 1U))),4);
    bufp->fullBit(oldp+75,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                  >> 1U))));
    bufp->fullBit(oldp+76,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                  >> 2U))));
    bufp->fullBit(oldp+77,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                  >> 3U))));
    bufp->fullBit(oldp+78,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                  >> 4U))));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                            | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+82,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                  & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 2U)))));
    bufp->fullBit(oldp+83,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                >> 2U))))));
    bufp->fullCData(oldp+84,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 5U))),4);
    bufp->fullBit(oldp+85,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                  >> 5U))));
    bufp->fullBit(oldp+86,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                  >> 6U))));
    bufp->fullBit(oldp+87,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                  >> 7U))));
    bufp->fullBit(oldp+88,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                  >> 8U))));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+91,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                            | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+92,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                  & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 6U)))));
    bufp->fullBit(oldp+93,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                >> 6U))))));
    bufp->fullSData(oldp+94,((0xffffU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                         >> 9U))),16);
    bufp->fullCData(oldp+95,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1) 
                               << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                              & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))) 
                                          << 1U) | 
                                         (1U & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                  >> 0x10U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                       >> 0xeU))) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                       >> 0xcU) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                            >> 0xaU))))))))),3);
    bufp->fullCData(oldp+96,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                               << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                              & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                          << 1U) | 
                                         (1U & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                  >> 0x18U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                       >> 0x16U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                       >> 0x14U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                            >> 0x12U))))))))),3);
    bufp->fullBit(oldp+97,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
                            | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
    bufp->fullBit(oldp+99,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                  & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 0x10U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0xeU))) 
                                     | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                        & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                            >> 0xcU) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                 >> 0xaU)))))))));
    bufp->fullBit(oldp+100,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x18U) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                      >> 0x16U))) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                           >> 0x14U) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                >> 0x12U))))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                      & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                           >> 0x10U) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                >> 0xeU))) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                            & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                >> 0xcU) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                     >> 0xaU))))))))));
    bufp->fullBit(oldp+101,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                             & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))));
    bufp->fullBit(oldp+102,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))))));
    bufp->fullBit(oldp+103,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)))));
    bufp->fullCData(oldp+105,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                        >> 9U))),8);
    bufp->fullCData(oldp+106,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                 >> 0xcU) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                      >> 0xaU)))))),2);
    bufp->fullCData(oldp+107,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                 >> 0x10U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                      >> 0xeU)))))),2);
    bufp->fullBit(oldp+108,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1));
    bufp->fullBit(oldp+110,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 0xcU) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                      >> 0xaU)))))));
    bufp->fullBit(oldp+111,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 0x10U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                     >> 0xeU))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0xcU) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                               >> 0xaU))))))));
    bufp->fullBit(oldp+112,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+113,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+114,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 9U))),4);
    bufp->fullBit(oldp+115,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 9U))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0xaU))));
    bufp->fullBit(oldp+117,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0xbU))));
    bufp->fullBit(oldp+118,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0xcU))));
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+122,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+123,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                    >> 0xcU) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                   >> 0xaU))))));
    bufp->fullCData(oldp+124,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 0xdU))),4);
    bufp->fullBit(oldp+125,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0xdU))));
    bufp->fullBit(oldp+126,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0xeU))));
    bufp->fullBit(oldp+127,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0xfU))));
    bufp->fullBit(oldp+128,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0x10U))));
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+131,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+132,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+133,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                    >> 0x10U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                    >> 0xeU))))));
    bufp->fullCData(oldp+134,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                        >> 0x11U))),8);
    bufp->fullCData(oldp+135,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                 >> 0x14U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                      >> 0x12U)))))),2);
    bufp->fullCData(oldp+136,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                 >> 0x18U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                      >> 0x16U)))))),2);
    bufp->fullBit(oldp+137,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
    bufp->fullBit(oldp+139,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 0x14U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0x12U)))))));
    bufp->fullBit(oldp+140,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 0x18U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                     >> 0x16U))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0x14U) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                               >> 0x12U))))))));
    bufp->fullBit(oldp+141,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+142,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+143,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 0x11U))),4);
    bufp->fullBit(oldp+144,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0x11U))));
    bufp->fullBit(oldp+145,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0x12U))));
    bufp->fullBit(oldp+146,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0x13U))));
    bufp->fullBit(oldp+147,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0x14U))));
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+149,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+150,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+151,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+152,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                    >> 0x14U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                    >> 0x12U))))));
    bufp->fullCData(oldp+153,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 0x15U))),4);
    bufp->fullBit(oldp+154,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0x15U))));
    bufp->fullBit(oldp+155,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0x16U))));
    bufp->fullBit(oldp+156,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0x17U))));
    bufp->fullBit(oldp+157,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                   >> 0x18U))));
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+159,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+160,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+161,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+162,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                    >> 0x18U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                    >> 0x16U))))));
    bufp->fullIData(oldp+163,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_sign) 
                                << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_mantissa)))),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0_in),32);
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_exponent),8);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_mantissa),24);
    bufp->fullCData(oldp+167,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent),8);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_mantissa),25);
    bufp->fullQData(oldp+169,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product),48);
    bufp->fullCData(oldp+171,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e),8);
    bufp->fullQData(oldp+172,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m),48);
    bufp->fullCData(oldp+174,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e),8);
    bufp->fullQData(oldp+175,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m),48);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__N0),32);
    bufp->fullBit(oldp+178,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign));
    bufp->fullCData(oldp+179,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent),8);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa),24);
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign));
    bufp->fullCData(oldp+182,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent),8);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa),24);
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign));
    bufp->fullCData(oldp+185,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent),8);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa),25);
    bufp->fullCData(oldp+187,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff),8);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa),24);
    bufp->fullCData(oldp+189,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e),8);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m),25);
    bufp->fullCData(oldp+191,((0xffU & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                        - (0x1fU & 
                                           (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__shift)))))),8);
    bufp->fullIData(oldp+192,((0x1ffffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                             << (0x1fU 
                                                 & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__shift)))))),25);
    bufp->fullIData(oldp+193,((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                               << 7U)),32);
    bufp->fullCData(oldp+194,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__shift),5);
    bufp->fullCData(oldp+195,((0x1fU & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__shift)))),8);
    bufp->fullBit(oldp+196,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                    | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)))));
    bufp->fullCData(oldp+197,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0) 
                                << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                            | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                            << 1U) 
                                           | (1U & 
                                              ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                  >> 8U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                       >> 6U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                       >> 4U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                            >> 2U))))) 
                                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))))),4);
    bufp->fullCData(oldp+198,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                                << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                                            << 1U) 
                                           | (1U & 
                                              ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                  >> 0x18U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                       >> 0x16U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                       >> 0x14U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                            >> 0x12U))))) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                  & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                       >> 0x10U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                            >> 0xeU))) 
                                                     | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                        & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                            >> 0xcU) 
                                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                                 >> 0xaU)))))))))))),4);
    bufp->fullBit(oldp+199,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0));
    bufp->fullBit(oldp+201,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                   & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                         >> 8U) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 6U))) 
                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                          & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                              >> 4U) 
                                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                   >> 2U))))) 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+202,((1U & (((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 0x18U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0x16U))) 
                                     | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                        & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                            >> 0x14U) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 0x12U))))) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                       & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                            >> 0x10U) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 0xeU))) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                             & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 0xcU) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 0xaU))))))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                      & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                            >> 8U) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 6U))) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                             & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 4U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 2U))))) 
                                         | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))))));
    bufp->fullBit(oldp+203,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                             & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+204,(((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                 & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                       & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+205,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                             & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+206,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+207,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))));
    bufp->fullBit(oldp+208,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
    bufp->fullSData(oldp+209,((0xff80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          << 7U))),16);
    bufp->fullCData(oldp+210,(((4U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      << 2U)) | (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m)))))),3);
    bufp->fullCData(oldp+211,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                           << 1U) | 
                                          (1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                   >> 8U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                        >> 6U))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                    & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                        >> 4U) 
                                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                             >> 2U))))))))),3);
    bufp->fullBit(oldp+212,((1U & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m)));
    bufp->fullBit(oldp+213,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0));
    bufp->fullBit(oldp+214,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1));
    bufp->fullBit(oldp+215,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                   >> 6U))) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                           >> 4U) | 
                                          ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                           & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                              >> 2U))))) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+216,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
    bufp->fullBit(oldp+217,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
    bufp->fullCData(oldp+218,((0x80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                        << 7U))),8);
    bufp->fullCData(oldp+219,((3U & (- (IData)((1U 
                                                & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m))))),2);
    bufp->fullCData(oldp+220,((8U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                     << 3U))),4);
    bufp->fullCData(oldp+221,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                        >> 1U))),8);
    bufp->fullCData(oldp+222,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 4U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 2U)))))),2);
    bufp->fullCData(oldp+223,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 8U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 6U)))))),2);
    bufp->fullBit(oldp+224,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+225,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
    bufp->fullBit(oldp+226,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 2U)))))));
    bufp->fullBit(oldp+227,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                     >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                  >> 6U))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 4U) | 
                                         ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                             >> 2U))))))));
    bufp->fullBit(oldp+228,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+229,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+230,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 1U))),4);
    bufp->fullBit(oldp+231,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 1U))));
    bufp->fullBit(oldp+232,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 2U))));
    bufp->fullBit(oldp+233,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 3U))));
    bufp->fullBit(oldp+234,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 4U))));
    bufp->fullBit(oldp+235,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+237,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+238,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 2U)))));
    bufp->fullBit(oldp+239,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                    >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 2U))))));
    bufp->fullCData(oldp+240,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 5U))),4);
    bufp->fullBit(oldp+241,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 5U))));
    bufp->fullBit(oldp+242,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 6U))));
    bufp->fullBit(oldp+243,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 7U))));
    bufp->fullBit(oldp+244,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 8U))));
    bufp->fullBit(oldp+245,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+246,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+247,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+248,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 6U)))));
    bufp->fullBit(oldp+249,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                    >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 6U))))));
    bufp->fullSData(oldp+250,((0xffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 9U))),16);
    bufp->fullCData(oldp+251,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1) 
                                << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))) 
                                           << 1U) | 
                                          (1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                   >> 0x10U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                        >> 0xeU))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                    & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                        >> 0xcU) 
                                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                             >> 0xaU))))))))),3);
    bufp->fullCData(oldp+252,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                           << 1U) | 
                                          (1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                   >> 0x18U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                        >> 0x16U))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                    & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                        >> 0x14U) 
                                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                             >> 0x12U))))))))),3);
    bufp->fullBit(oldp+253,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                              | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
    bufp->fullBit(oldp+254,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
    bufp->fullBit(oldp+255,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                        >> 0x10U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                           >> 0xeU))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                             >> 0xcU) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                  >> 0xaU)))))))));
    bufp->fullBit(oldp+256,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x18U) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 0x16U))) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                           >> 0x14U) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                >> 0x12U))))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                      & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                           >> 0x10U) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                >> 0xeU))) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                            & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                >> 0xcU) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                     >> 0xaU))))))))));
    bufp->fullBit(oldp+257,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                             & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))));
    bufp->fullBit(oldp+258,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))))));
    bufp->fullBit(oldp+259,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
    bufp->fullBit(oldp+260,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)))));
    bufp->fullCData(oldp+261,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                        >> 9U))),8);
    bufp->fullCData(oldp+262,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 0xcU) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 0xaU)))))),2);
    bufp->fullCData(oldp+263,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 0x10U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 0xeU)))))),2);
    bufp->fullBit(oldp+264,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1));
    bufp->fullBit(oldp+266,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 0xcU) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 0xaU)))))));
    bufp->fullBit(oldp+267,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                     >> 0x10U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                     >> 0xeU))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0xcU) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                               >> 0xaU))))))));
    bufp->fullBit(oldp+268,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+269,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+270,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 9U))),4);
    bufp->fullBit(oldp+271,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 9U))));
    bufp->fullBit(oldp+272,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0xaU))));
    bufp->fullBit(oldp+273,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0xbU))));
    bufp->fullBit(oldp+274,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0xcU))));
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+276,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+277,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+278,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+279,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                    >> 0xcU) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                   >> 0xaU))))));
    bufp->fullCData(oldp+280,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 0xdU))),4);
    bufp->fullBit(oldp+281,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0xdU))));
    bufp->fullBit(oldp+282,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0xeU))));
    bufp->fullBit(oldp+283,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0xfU))));
    bufp->fullBit(oldp+284,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0x10U))));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+286,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+287,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+288,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+289,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                    >> 0x10U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 0xeU))))));
    bufp->fullCData(oldp+290,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                        >> 0x11U))),8);
    bufp->fullCData(oldp+291,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 0x14U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 0x12U)))))),2);
    bufp->fullCData(oldp+292,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                 >> 0x18U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 0x16U)))))),2);
    bufp->fullBit(oldp+293,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+294,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
    bufp->fullBit(oldp+295,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 0x14U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0x12U)))))));
    bufp->fullBit(oldp+296,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                     >> 0x18U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                     >> 0x16U))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0x14U) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                               >> 0x12U))))))));
    bufp->fullBit(oldp+297,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+298,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+299,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 0x11U))),4);
    bufp->fullBit(oldp+300,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0x11U))));
    bufp->fullBit(oldp+301,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0x12U))));
    bufp->fullBit(oldp+302,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0x13U))));
    bufp->fullBit(oldp+303,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0x14U))));
    bufp->fullBit(oldp+304,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+305,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+306,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+307,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+308,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                    >> 0x14U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 0x12U))))));
    bufp->fullCData(oldp+309,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 0x15U))),4);
    bufp->fullBit(oldp+310,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0x15U))));
    bufp->fullBit(oldp+311,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0x16U))));
    bufp->fullBit(oldp+312,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0x17U))));
    bufp->fullBit(oldp+313,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 0x18U))));
    bufp->fullBit(oldp+314,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+315,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+316,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+317,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+318,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                    >> 0x18U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+319,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_sign));
    bufp->fullBit(oldp+320,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_sign));
    bufp->fullBit(oldp+321,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign));
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b),32);
    bufp->fullCData(oldp+323,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_exponent),8);
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_mantissa),24);
    bufp->fullCData(oldp+325,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_exponent),8);
    bufp->fullIData(oldp+326,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_mantissa),24);
    bufp->fullCData(oldp+327,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent),8);
    bufp->fullIData(oldp+328,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa),25);
    bufp->fullQData(oldp+329,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product),48);
    bufp->fullCData(oldp+331,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e),8);
    bufp->fullQData(oldp+332,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m),48);
    bufp->fullCData(oldp+334,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e),8);
    bufp->fullQData(oldp+335,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m),48);
    bufp->fullIData(oldp+337,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out),32);
    bufp->fullBit(oldp+338,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign));
    bufp->fullCData(oldp+339,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent),8);
    bufp->fullIData(oldp+340,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa),24);
    bufp->fullBit(oldp+341,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign));
    bufp->fullCData(oldp+342,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent),8);
    bufp->fullIData(oldp+343,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa),24);
    bufp->fullBit(oldp+344,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign));
    bufp->fullCData(oldp+345,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent),8);
    bufp->fullIData(oldp+346,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa),25);
    bufp->fullCData(oldp+347,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff),8);
    bufp->fullIData(oldp+348,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa),24);
    bufp->fullCData(oldp+349,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e),8);
    bufp->fullIData(oldp+350,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m),25);
    bufp->fullCData(oldp+351,((0xffU & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                        - (0x1fU & 
                                           (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__shift)))))),8);
    bufp->fullIData(oldp+352,((0x1ffffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                             << (0x1fU 
                                                 & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__shift)))))),25);
    bufp->fullIData(oldp+353,((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                               << 7U)),32);
    bufp->fullCData(oldp+354,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__shift),5);
    bufp->fullCData(oldp+355,((0x1fU & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__shift)))),8);
    bufp->fullBit(oldp+356,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                    | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)))));
    bufp->fullCData(oldp+357,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0) 
                                << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                            | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                            << 1U) 
                                           | (1U & 
                                              ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                  >> 8U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                       >> 6U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                       >> 4U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                            >> 2U))))) 
                                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))))),4);
    bufp->fullCData(oldp+358,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                                << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                                            << 1U) 
                                           | (1U & 
                                              ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                  >> 0x18U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                       >> 0x16U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                       >> 0x14U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                            >> 0x12U))))) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                  & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                       >> 0x10U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                            >> 0xeU))) 
                                                     | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                        & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                            >> 0xcU) 
                                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                                 >> 0xaU)))))))))))),4);
    bufp->fullBit(oldp+359,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
    bufp->fullBit(oldp+360,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0));
    bufp->fullBit(oldp+361,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                   & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                         >> 8U) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 6U))) 
                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                          & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                              >> 4U) 
                                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                   >> 2U))))) 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+362,((1U & (((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 0x18U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0x16U))) 
                                     | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                        & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                            >> 0x14U) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 0x12U))))) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                       & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                            >> 0x10U) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 0xeU))) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                             & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 0xcU) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 0xaU))))))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                      & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                            >> 8U) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 6U))) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                             & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 4U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 2U))))) 
                                         | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))))));
    bufp->fullBit(oldp+363,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                             & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+364,(((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                 & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                       & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+365,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                             & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+366,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+367,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))));
    bufp->fullBit(oldp+368,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
    bufp->fullSData(oldp+369,((0xff80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          << 7U))),16);
    bufp->fullCData(oldp+370,(((4U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      << 2U)) | (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m)))))),3);
    bufp->fullCData(oldp+371,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                           << 1U) | 
                                          (1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                   >> 8U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                        >> 6U))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                    & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                        >> 4U) 
                                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                             >> 2U))))))))),3);
    bufp->fullBit(oldp+372,((1U & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m)));
    bufp->fullBit(oldp+373,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0));
    bufp->fullBit(oldp+374,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1));
    bufp->fullBit(oldp+375,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                   >> 6U))) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                           >> 4U) | 
                                          ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                           & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                              >> 2U))))) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+376,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
    bufp->fullBit(oldp+377,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
    bufp->fullCData(oldp+378,((0x80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                        << 7U))),8);
    bufp->fullCData(oldp+379,((3U & (- (IData)((1U 
                                                & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m))))),2);
    bufp->fullCData(oldp+380,((8U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                     << 3U))),4);
    bufp->fullCData(oldp+381,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                        >> 1U))),8);
    bufp->fullCData(oldp+382,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 4U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 2U)))))),2);
    bufp->fullCData(oldp+383,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 8U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 6U)))))),2);
    bufp->fullBit(oldp+384,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+385,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
    bufp->fullBit(oldp+386,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 2U)))))));
    bufp->fullBit(oldp+387,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                     >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                  >> 6U))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 4U) | 
                                         ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                             >> 2U))))))));
    bufp->fullBit(oldp+388,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+389,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+390,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 1U))),4);
    bufp->fullBit(oldp+391,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 1U))));
    bufp->fullBit(oldp+392,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 2U))));
    bufp->fullBit(oldp+393,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 3U))));
    bufp->fullBit(oldp+394,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 4U))));
    bufp->fullBit(oldp+395,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+396,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+397,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+398,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 2U)))));
    bufp->fullBit(oldp+399,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                    >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 2U))))));
    bufp->fullCData(oldp+400,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 5U))),4);
    bufp->fullBit(oldp+401,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 5U))));
    bufp->fullBit(oldp+402,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 6U))));
    bufp->fullBit(oldp+403,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 7U))));
    bufp->fullBit(oldp+404,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 8U))));
    bufp->fullBit(oldp+405,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+406,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+407,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+408,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 6U)))));
    bufp->fullBit(oldp+409,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                    >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 6U))))));
    bufp->fullSData(oldp+410,((0xffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 9U))),16);
    bufp->fullCData(oldp+411,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1) 
                                << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))) 
                                           << 1U) | 
                                          (1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                   >> 0x10U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                        >> 0xeU))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                    & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                        >> 0xcU) 
                                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                             >> 0xaU))))))))),3);
    bufp->fullCData(oldp+412,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                           << 1U) | 
                                          (1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                   >> 0x18U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                        >> 0x16U))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                    & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                        >> 0x14U) 
                                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                             >> 0x12U))))))))),3);
    bufp->fullBit(oldp+413,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                              | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
    bufp->fullBit(oldp+414,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
    bufp->fullBit(oldp+415,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                        >> 0x10U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                           >> 0xeU))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                             >> 0xcU) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                  >> 0xaU)))))))));
    bufp->fullBit(oldp+416,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x18U) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 0x16U))) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                           >> 0x14U) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                >> 0x12U))))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                      & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                           >> 0x10U) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                >> 0xeU))) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                            & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                >> 0xcU) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                     >> 0xaU))))))))));
    bufp->fullBit(oldp+417,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                             & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))));
    bufp->fullBit(oldp+418,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))))));
    bufp->fullBit(oldp+419,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
    bufp->fullBit(oldp+420,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)))));
    bufp->fullCData(oldp+421,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                        >> 9U))),8);
    bufp->fullCData(oldp+422,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 0xcU) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 0xaU)))))),2);
    bufp->fullCData(oldp+423,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 0x10U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 0xeU)))))),2);
    bufp->fullBit(oldp+424,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+425,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1));
    bufp->fullBit(oldp+426,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 0xcU) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 0xaU)))))));
    bufp->fullBit(oldp+427,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                     >> 0x10U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                     >> 0xeU))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0xcU) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                               >> 0xaU))))))));
    bufp->fullBit(oldp+428,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+429,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+430,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 9U))),4);
    bufp->fullBit(oldp+431,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 9U))));
    bufp->fullBit(oldp+432,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0xaU))));
    bufp->fullBit(oldp+433,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0xbU))));
    bufp->fullBit(oldp+434,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0xcU))));
    bufp->fullBit(oldp+435,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+436,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+437,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+438,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+439,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                    >> 0xcU) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                   >> 0xaU))))));
    bufp->fullCData(oldp+440,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 0xdU))),4);
    bufp->fullBit(oldp+441,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0xdU))));
    bufp->fullBit(oldp+442,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0xeU))));
    bufp->fullBit(oldp+443,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0xfU))));
    bufp->fullBit(oldp+444,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0x10U))));
    bufp->fullBit(oldp+445,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+446,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+447,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+448,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+449,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                    >> 0x10U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 0xeU))))));
    bufp->fullCData(oldp+450,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                        >> 0x11U))),8);
    bufp->fullCData(oldp+451,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 0x14U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 0x12U)))))),2);
    bufp->fullCData(oldp+452,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                 >> 0x18U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 0x16U)))))),2);
    bufp->fullBit(oldp+453,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+454,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
    bufp->fullBit(oldp+455,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 0x14U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0x12U)))))));
    bufp->fullBit(oldp+456,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                     >> 0x18U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                     >> 0x16U))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0x14U) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                               >> 0x12U))))))));
    bufp->fullBit(oldp+457,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+458,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+459,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 0x11U))),4);
    bufp->fullBit(oldp+460,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0x11U))));
    bufp->fullBit(oldp+461,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0x12U))));
    bufp->fullBit(oldp+462,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0x13U))));
    bufp->fullBit(oldp+463,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0x14U))));
    bufp->fullBit(oldp+464,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+465,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+466,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+467,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+468,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                    >> 0x14U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 0x12U))))));
    bufp->fullCData(oldp+469,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 0x15U))),4);
    bufp->fullBit(oldp+470,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0x15U))));
    bufp->fullBit(oldp+471,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0x16U))));
    bufp->fullBit(oldp+472,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0x17U))));
    bufp->fullBit(oldp+473,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 0x18U))));
    bufp->fullBit(oldp+474,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+475,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+476,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+477,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+478,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                    >> 0x18U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+479,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_sign));
    bufp->fullBit(oldp+480,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_sign));
    bufp->fullBit(oldp+481,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_sign));
    bufp->fullIData(oldp+482,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__N1),32);
    bufp->fullCData(oldp+483,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_exponent),8);
    bufp->fullIData(oldp+484,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_mantissa),24);
    bufp->fullCData(oldp+485,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_exponent),8);
    bufp->fullIData(oldp+486,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_mantissa),24);
    bufp->fullCData(oldp+487,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent),8);
    bufp->fullIData(oldp+488,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_mantissa),25);
    bufp->fullQData(oldp+489,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product),48);
    bufp->fullCData(oldp+491,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e),8);
    bufp->fullQData(oldp+492,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m),48);
    bufp->fullCData(oldp+494,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e),8);
    bufp->fullQData(oldp+495,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m),48);
    bufp->fullBit(oldp+497,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_sign));
    bufp->fullBit(oldp+498,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_sign));
    bufp->fullBit(oldp+499,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign));
    bufp->fullIData(oldp+500,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b),32);
    bufp->fullCData(oldp+501,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_exponent),8);
    bufp->fullIData(oldp+502,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_mantissa),24);
    bufp->fullCData(oldp+503,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_exponent),8);
    bufp->fullIData(oldp+504,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_mantissa),24);
    bufp->fullCData(oldp+505,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent),8);
    bufp->fullIData(oldp+506,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa),25);
    bufp->fullQData(oldp+507,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product),48);
    bufp->fullCData(oldp+509,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e),8);
    bufp->fullQData(oldp+510,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m),48);
    bufp->fullCData(oldp+512,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e),8);
    bufp->fullQData(oldp+513,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m),48);
    bufp->fullIData(oldp+515,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1_out),32);
    bufp->fullBit(oldp+516,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign));
    bufp->fullCData(oldp+517,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent),8);
    bufp->fullIData(oldp+518,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa),24);
    bufp->fullBit(oldp+519,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign));
    bufp->fullCData(oldp+520,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent),8);
    bufp->fullIData(oldp+521,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa),24);
    bufp->fullBit(oldp+522,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign));
    bufp->fullCData(oldp+523,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent),8);
    bufp->fullIData(oldp+524,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa),25);
    bufp->fullCData(oldp+525,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff),8);
    bufp->fullIData(oldp+526,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa),24);
    bufp->fullCData(oldp+527,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e),8);
    bufp->fullIData(oldp+528,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m),25);
    bufp->fullCData(oldp+529,((0xffU & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                        - (0x1fU & 
                                           (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__shift)))))),8);
    bufp->fullIData(oldp+530,((0x1ffffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                             << (0x1fU 
                                                 & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__shift)))))),25);
    bufp->fullIData(oldp+531,((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                               << 7U)),32);
    bufp->fullCData(oldp+532,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__shift),5);
    bufp->fullCData(oldp+533,((0x1fU & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__shift)))),8);
    bufp->fullBit(oldp+534,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                    | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)))));
    bufp->fullCData(oldp+535,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0) 
                                << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                            | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                            << 1U) 
                                           | (1U & 
                                              ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                  >> 8U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                       >> 6U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                       >> 4U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                            >> 2U))))) 
                                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))))),4);
    bufp->fullCData(oldp+536,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                                << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                                            << 1U) 
                                           | (1U & 
                                              ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                  >> 0x18U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                       >> 0x16U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                       >> 0x14U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                            >> 0x12U))))) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                  & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                       >> 0x10U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                         & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                            >> 0xeU))) 
                                                     | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                        & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                            >> 0xcU) 
                                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                                 >> 0xaU)))))))))))),4);
    bufp->fullBit(oldp+537,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
    bufp->fullBit(oldp+538,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0));
    bufp->fullBit(oldp+539,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                   & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                         >> 8U) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 6U))) 
                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                          & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                              >> 4U) 
                                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                   >> 2U))))) 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+540,((1U & (((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 0x18U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0x16U))) 
                                     | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                        & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                            >> 0x14U) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 0x12U))))) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                       & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                            >> 0x10U) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 0xeU))) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                             & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 0xcU) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 0xaU))))))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                      & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                            >> 8U) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 6U))) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                             & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 4U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 2U))))) 
                                         | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))))));
    bufp->fullBit(oldp+541,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                             & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+542,(((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                 & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                       & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+543,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                             & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+544,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+545,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))));
    bufp->fullBit(oldp+546,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
    bufp->fullSData(oldp+547,((0xff80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          << 7U))),16);
    bufp->fullCData(oldp+548,(((4U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      << 2U)) | (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m)))))),3);
    bufp->fullCData(oldp+549,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                           << 1U) | 
                                          (1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                   >> 8U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                        >> 6U))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                    & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                        >> 4U) 
                                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                             >> 2U))))))))),3);
    bufp->fullBit(oldp+550,((1U & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m)));
    bufp->fullBit(oldp+551,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0));
    bufp->fullBit(oldp+552,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1));
    bufp->fullBit(oldp+553,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                   >> 6U))) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                           >> 4U) | 
                                          ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                           & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                              >> 2U))))) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+554,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
    bufp->fullBit(oldp+555,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
    bufp->fullCData(oldp+556,((0x80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                        << 7U))),8);
    bufp->fullCData(oldp+557,((3U & (- (IData)((1U 
                                                & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m))))),2);
    bufp->fullCData(oldp+558,((8U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                     << 3U))),4);
    bufp->fullCData(oldp+559,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                        >> 1U))),8);
    bufp->fullCData(oldp+560,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 4U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 2U)))))),2);
    bufp->fullCData(oldp+561,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 8U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 6U)))))),2);
    bufp->fullBit(oldp+562,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+563,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
    bufp->fullBit(oldp+564,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 2U)))))));
    bufp->fullBit(oldp+565,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                     >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                  >> 6U))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 4U) | 
                                         ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                             >> 2U))))))));
    bufp->fullBit(oldp+566,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+567,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+568,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 1U))),4);
    bufp->fullBit(oldp+569,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 1U))));
    bufp->fullBit(oldp+570,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 2U))));
    bufp->fullBit(oldp+571,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 3U))));
    bufp->fullBit(oldp+572,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 4U))));
    bufp->fullBit(oldp+573,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+574,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+575,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+576,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 2U)))));
    bufp->fullBit(oldp+577,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                    >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 2U))))));
    bufp->fullCData(oldp+578,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 5U))),4);
    bufp->fullBit(oldp+579,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 5U))));
    bufp->fullBit(oldp+580,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 6U))));
    bufp->fullBit(oldp+581,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 7U))));
    bufp->fullBit(oldp+582,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 8U))));
    bufp->fullBit(oldp+583,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+584,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+585,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+586,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 6U)))));
    bufp->fullBit(oldp+587,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                    >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 6U))))));
    bufp->fullSData(oldp+588,((0xffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 9U))),16);
    bufp->fullCData(oldp+589,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1) 
                                << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))) 
                                           << 1U) | 
                                          (1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                   >> 0x10U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                        >> 0xeU))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                    & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                        >> 0xcU) 
                                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                             >> 0xaU))))))))),3);
    bufp->fullCData(oldp+590,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                           << 1U) | 
                                          (1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                   >> 0x18U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                        >> 0x16U))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                    & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                        >> 0x14U) 
                                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                             >> 0x12U))))))))),3);
    bufp->fullBit(oldp+591,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                              | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
    bufp->fullBit(oldp+592,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
    bufp->fullBit(oldp+593,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                        >> 0x10U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                           >> 0xeU))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                             >> 0xcU) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                  >> 0xaU)))))))));
    bufp->fullBit(oldp+594,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x18U) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 0x16U))) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                           >> 0x14U) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                >> 0x12U))))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                      & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                           >> 0x10U) 
                                          | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                             & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                >> 0xeU))) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                            & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                >> 0xcU) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                     >> 0xaU))))))))));
    bufp->fullBit(oldp+595,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                             & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))));
    bufp->fullBit(oldp+596,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))))));
    bufp->fullBit(oldp+597,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
    bufp->fullBit(oldp+598,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)))));
    bufp->fullCData(oldp+599,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                        >> 9U))),8);
    bufp->fullCData(oldp+600,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 0xcU) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 0xaU)))))),2);
    bufp->fullCData(oldp+601,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 0x10U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 0xeU)))))),2);
    bufp->fullBit(oldp+602,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+603,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1));
    bufp->fullBit(oldp+604,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 0xcU) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 0xaU)))))));
    bufp->fullBit(oldp+605,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                     >> 0x10U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                     >> 0xeU))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0xcU) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                               >> 0xaU))))))));
    bufp->fullBit(oldp+606,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+607,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+608,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 9U))),4);
    bufp->fullBit(oldp+609,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 9U))));
    bufp->fullBit(oldp+610,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0xaU))));
    bufp->fullBit(oldp+611,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0xbU))));
    bufp->fullBit(oldp+612,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0xcU))));
    bufp->fullBit(oldp+613,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+614,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+615,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+616,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+617,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                    >> 0xcU) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                   >> 0xaU))))));
    bufp->fullCData(oldp+618,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 0xdU))),4);
    bufp->fullBit(oldp+619,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0xdU))));
    bufp->fullBit(oldp+620,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0xeU))));
    bufp->fullBit(oldp+621,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0xfU))));
    bufp->fullBit(oldp+622,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0x10U))));
    bufp->fullBit(oldp+623,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+624,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+625,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+626,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+627,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                    >> 0x10U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 0xeU))))));
    bufp->fullCData(oldp+628,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                        >> 0x11U))),8);
    bufp->fullCData(oldp+629,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 0x14U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 0x12U)))))),2);
    bufp->fullCData(oldp+630,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                 >> 0x18U) 
                                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 0x16U)))))),2);
    bufp->fullBit(oldp+631,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+632,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
    bufp->fullBit(oldp+633,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 0x14U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0x12U)))))));
    bufp->fullBit(oldp+634,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                     >> 0x18U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                     >> 0x16U))) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0x14U) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                               >> 0x12U))))))));
    bufp->fullBit(oldp+635,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+636,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+637,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 0x11U))),4);
    bufp->fullBit(oldp+638,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0x11U))));
    bufp->fullBit(oldp+639,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0x12U))));
    bufp->fullBit(oldp+640,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0x13U))));
    bufp->fullBit(oldp+641,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0x14U))));
    bufp->fullBit(oldp+642,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+643,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+644,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+645,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+646,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                    >> 0x14U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 0x12U))))));
    bufp->fullCData(oldp+647,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 0x15U))),4);
    bufp->fullBit(oldp+648,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0x15U))));
    bufp->fullBit(oldp+649,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0x16U))));
    bufp->fullBit(oldp+650,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0x17U))));
    bufp->fullBit(oldp+651,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 0x18U))));
    bufp->fullBit(oldp+652,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+653,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+654,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+655,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+656,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                    >> 0x18U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+657,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_sign));
    bufp->fullBit(oldp+658,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_sign));
    bufp->fullBit(oldp+659,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_sign));
    bufp->fullIData(oldp+660,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__b_reciprocal),32);
    bufp->fullBit(oldp+661,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__a_sign));
    bufp->fullBit(oldp+662,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__b_sign));
    bufp->fullBit(oldp+663,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_sign));
    bufp->fullCData(oldp+664,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent),8);
    bufp->fullIData(oldp+665,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa),24);
    bufp->fullCData(oldp+666,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_exponent),8);
    bufp->fullIData(oldp+667,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_mantissa),24);
    bufp->fullCData(oldp+668,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent),8);
    bufp->fullIData(oldp+669,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa),25);
    bufp->fullQData(oldp+670,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product),48);
    bufp->fullCData(oldp+672,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e),8);
    bufp->fullQData(oldp+673,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m),48);
    bufp->fullCData(oldp+675,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e),8);
    bufp->fullQData(oldp+676,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m),48);
    bufp->fullCData(oldp+678,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__a_exponent),8);
    bufp->fullIData(oldp+679,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__a_mantissa),24);
    bufp->fullCData(oldp+680,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__b_exponent),8);
    bufp->fullIData(oldp+681,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__b_mantissa),24);
    bufp->fullCData(oldp+682,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_exponent),8);
    bufp->fullIData(oldp+683,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_mantissa),25);
    bufp->fullQData(oldp+684,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__product),48);
    bufp->fullCData(oldp+686,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__i_e),8);
    bufp->fullQData(oldp+687,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__i_m),48);
    bufp->fullCData(oldp+689,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_e),8);
    bufp->fullQData(oldp+690,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_m),48);
    bufp->fullBit(oldp+692,(vlSelf->top__DOT__fpu_dut__DOT__o_sign));
    bufp->fullCData(oldp+693,(vlSelf->top__DOT__fpu_dut__DOT__o_exponent),8);
    bufp->fullIData(oldp+694,(vlSelf->top__DOT__fpu_dut__DOT__o_mantissa),25);
    bufp->fullIData(oldp+695,(vlSelf->top__DOT__fpu_dut__DOT__adder_a_in),32);
    bufp->fullIData(oldp+696,(vlSelf->top__DOT__fpu_dut__DOT__adder_b_in),32);
    bufp->fullBit(oldp+697,(vlSelf->clk_i));
    bufp->fullIData(oldp+698,(vlSelf->A),32);
    bufp->fullIData(oldp+699,(vlSelf->B),32);
    bufp->fullCData(oldp+700,(vlSelf->opcode),2);
    bufp->fullIData(oldp+701,(vlSelf->O),32);
    bufp->fullCData(oldp+702,((0xffU & (vlSelf->A >> 0x17U))),8);
    bufp->fullIData(oldp+703,(vlSelf->top__DOT__fpu_dut__DOT__a_mantissa),24);
    bufp->fullCData(oldp+704,((0xffU & (vlSelf->B >> 0x17U))),8);
    bufp->fullIData(oldp+705,(vlSelf->top__DOT__fpu_dut__DOT__b_mantissa),24);
    bufp->fullIData(oldp+706,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_sign) 
                                << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_exponent) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_mantissa)))),32);
    bufp->fullBit(oldp+707,((vlSelf->A >> 0x1fU)));
    bufp->fullBit(oldp+708,((vlSelf->B >> 0x1fU)));
    bufp->fullIData(oldp+709,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_sign) 
                                << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa)))),32);
    bufp->fullIData(oldp+710,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign) 
                                << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa)))),32);
    bufp->fullIData(oldp+711,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign) 
                                << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa)))),32);
    bufp->fullIData(oldp+712,(vlSelf->top__DOT__fpu_dut__DOT__multiplier_a_in),32);
    bufp->fullIData(oldp+713,(vlSelf->top__DOT__fpu_dut__DOT__multiplier_b_in),32);
    bufp->fullIData(oldp+714,(vlSelf->top__DOT__fpu_dut__DOT__divider_a_in),32);
    bufp->fullIData(oldp+715,(vlSelf->top__DOT__fpu_dut__DOT__divider_b_in),32);
    bufp->fullBit(oldp+716,(0U));
    bufp->fullBit(oldp+717,(1U));
    bufp->fullCData(oldp+718,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__tmp_exponent),8);
    bufp->fullCData(oldp+719,(0U),2);
    bufp->fullCData(oldp+720,(0U),4);
    bufp->fullIData(oldp+721,((0x40000000U | (0x7fffffU 
                                              & vlSelf->top__DOT__fpu_dut__DOT__divider_b_in))),32);
    bufp->fullIData(oldp+722,(0x4034b4b5U),32);
    bufp->fullIData(oldp+723,(0x3ff0f0f1U),32);
    bufp->fullIData(oldp+724,(0x40000000U),32);
    bufp->fullCData(oldp+725,(0x7fU),8);
    bufp->fullIData(oldp+726,(0xf0f0f1U),24);
    bufp->fullCData(oldp+727,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_exponent),8);
    bufp->fullCData(oldp+728,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_exponent),8);
    bufp->fullCData(oldp+729,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_exponent),8);
}
