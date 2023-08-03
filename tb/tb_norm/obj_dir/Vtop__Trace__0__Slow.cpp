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
    tracep->declBit(c+146,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+148,"operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+149,"rmode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+150,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+146,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+148,"operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+149,"rmode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+150,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"round",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,"grs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->pushNamePrefix("adder ");
    tracep->declBit(c+146,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+148,"operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"grs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"a_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,"b_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,"result_exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,"a_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+7,"b_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+8,"result_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBit(c+9,"a_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"b_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"result_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+12,"tmp_mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+13,"diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,"prenor_exp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,"prenor_mant",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+14,"postnor_exp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,"postnor_mant",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->pushNamePrefix("norm ");
    tracep->declBus(c+5,"exp_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+8,"mant_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+14,"exp_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+15,"mant_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 24,0);
    tracep->declBus(c+16,"tmp_mant",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,"shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,"diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->pushNamePrefix("lzc32 ");
    tracep->declBus(c+16,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+17,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+19,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+22,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+24,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+25,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+26,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+27,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+28,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+29,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+30,"s7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+31,"s8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_16_comp_0 ");
    tracep->declBus(c+32,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+20,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+22,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+35,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+36,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+22,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+37,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+38,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+37,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+39,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+37,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+40,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_8_comp_0 ");
    tracep->declBus(c+41,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+33,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+35,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+153,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+154,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+155,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+153,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+154,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+43,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+42,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+35,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzc_8_comp_1 ");
    tracep->declBus(c+44,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+34,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+36,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+47,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+48,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+36,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+49,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+50,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+51,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+52,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+53,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+45,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+47,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+55,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+57,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+59,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+60,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+61,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+62,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+63,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+46,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+48,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+65,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+66,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+67,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+68,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+69,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+70,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+71,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+72,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lzc_16_comp_1 ");
    tracep->declBus(c+73,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+21,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+23,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+76,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+77,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+78,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+79,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+80,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+81,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+82,"s5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+83,"s6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_8_comp_0 ");
    tracep->declBus(c+84,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+74,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+76,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+85,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+87,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+88,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+76,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+89,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+90,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+91,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+92,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+93,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+85,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+87,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+95,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+96,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+97,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+98,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+99,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+100,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+101,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+102,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+103,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+86,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+88,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+105,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+106,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+107,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+108,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+109,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+110,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+111,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+112,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzc_8_comp_1 ");
    tracep->declBus(c+113,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+75,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+77,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+114,"z0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+115,"z1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,"v0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+117,"v1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+77,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+118,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+119,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+120,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+121,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("lzc_4_comp_0 ");
    tracep->declBus(c+122,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+114,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+116,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+124,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+125,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+126,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+127,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+128,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+129,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+130,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+131,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzc_4_comp_1 ");
    tracep->declBus(c+132,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+115,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+117,"v",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"a0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+134,"a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+135,"a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+136,"a3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+137,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+138,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+139,"s2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+140,"s3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+141,"s4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("rounder ");
    tracep->declBit(c+146,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+149,"rmode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+2,"grs",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+150,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+156,"mantissa_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 22,0);
    tracep->declBus(c+14,"exponent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,"mantissa",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 22,0);
    tracep->declBus(c+151,"mantissa_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 22,0);
    tracep->declBit(c+143,"guard",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+144,"roundb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+145,"sticky",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+152,"roundnum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
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
    bufp->fullIData(oldp+1,((((IData)(vlSelf->top__DOT__adder__DOT__result_sign) 
                              << 0x1fU) | (((IData)(vlSelf->top__DOT__adder__DOT__postnor_exp) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                 >> 2U))))),32);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__grs),3);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__adder__DOT__a_exponent),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__adder__DOT__b_exponent),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__adder__DOT__result_exponent),8);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__adder__DOT__a_mantissa),24);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__adder__DOT__b_mantissa),24);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__adder__DOT__result_mantissa),25);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__adder__DOT__a_sign));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__adder__DOT__b_sign));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__adder__DOT__result_sign));
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__adder__DOT__tmp_mantissa),24);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__adder__DOT__diff),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__adder__DOT__postnor_exp),8);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__adder__DOT__postnor_mant),25);
    bufp->fullIData(oldp+16,((vlSelf->top__DOT__adder__DOT__result_mantissa 
                              << 7U)),32);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__adder__DOT__norm__DOT__shift),5);
    bufp->fullCData(oldp+18,((0x1fU & (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__shift)))),8);
    bufp->fullBit(oldp+19,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                                  | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)))));
    bufp->fullCData(oldp+20,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0) 
                               << 3U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                          << 2U) | 
                                         (((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                             | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                           << 1U) | 
                                          (1U & (((
                                                   (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                    >> 8U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                         >> 6U))) 
                                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                     & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                         >> 4U) 
                                                        | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                           & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                              >> 2U))))) 
                                                 | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))))),4);
    bufp->fullCData(oldp+21,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                               << 3U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                           | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                              & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                          << 2U) | 
                                         (((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                             | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                            | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                               & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                     & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                                           << 1U) | 
                                          (1U & (((
                                                   (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                    >> 0x18U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                         >> 0x16U))) 
                                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                     & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                         >> 0x14U) 
                                                        | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                           & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                              >> 0x12U))))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                    & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                         >> 0x10U) 
                                                        | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                           & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                              >> 0xeU))) 
                                                       | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                          & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                              >> 0xcU) 
                                                             | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                                & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                                   >> 0xaU)))))))))))),4);
    bufp->fullBit(oldp+22,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0));
    bufp->fullBit(oldp+24,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                  & ((((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                        >> 8U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 6U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                             >> 4U) 
                                            | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                  >> 2U))))) 
                                     | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+25,((1U & (((((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x18U) | (
                                                   (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                      >> 0x16U))) 
                                    | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                           >> 0x14U) 
                                          | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                             & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                >> 0x12U))))) 
                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                      & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                           >> 0x10U) 
                                          | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                             & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                >> 0xeU))) 
                                         | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                            & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                >> 0xcU) 
                                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 0xaU))))))) 
                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                     & ((((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                           >> 8U) | 
                                          ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                           & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                              >> 6U))) 
                                         | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                            & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                >> 4U) 
                                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 2U))))) 
                                        | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))))));
    bufp->fullBit(oldp+26,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                            & (((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                               | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+27,(((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                              | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                 & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                             | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                            | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & (((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                  | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+28,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                            & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                               | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+29,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                             | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                            | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                  | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
    bufp->fullBit(oldp+30,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                            & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))));
    bufp->fullBit(oldp+31,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                            | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
    bufp->fullSData(oldp+32,((0xff80U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         << 7U))),16);
    bufp->fullCData(oldp+33,(((4U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     << 2U)) | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__adder__DOT__result_mantissa)))))),3);
    bufp->fullCData(oldp+34,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                               << 2U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                           | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                              & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                          << 1U) | 
                                         (1U & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                  >> 8U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 6U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 4U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                            >> 2U))))))))),3);
    bufp->fullBit(oldp+35,((1U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1));
    bufp->fullBit(oldp+38,((1U & ((((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 8U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                               & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                  >> 6U))) 
                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 4U) | 
                                         ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                          & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                             >> 2U))))) 
                                  | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
    bufp->fullBit(oldp+39,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
    bufp->fullBit(oldp+40,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
    bufp->fullCData(oldp+41,((0x80U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       << 7U))),8);
    bufp->fullCData(oldp+42,((3U & (- (IData)((1U & vlSelf->top__DOT__adder__DOT__result_mantissa))))),2);
    bufp->fullCData(oldp+43,((8U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                    << 3U))),4);
    bufp->fullCData(oldp+44,((0xffU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 1U))),8);
    bufp->fullCData(oldp+45,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                               << 1U) | (1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                >> 4U) 
                                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 2U)))))),2);
    bufp->fullCData(oldp+46,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                               << 1U) | (1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                >> 8U) 
                                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 6U)))))),2);
    bufp->fullBit(oldp+47,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
    bufp->fullBit(oldp+49,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                  & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 4U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+50,((1U & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                    >> 8U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                              & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                 >> 6U))) 
                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                     & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 4U) | (
                                                   (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                      >> 2U))))))));
    bufp->fullBit(oldp+51,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                            & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+52,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                            | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                               & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+53,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 1U))),4);
    bufp->fullBit(oldp+54,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 1U))));
    bufp->fullBit(oldp+55,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 2U))));
    bufp->fullBit(oldp+56,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 3U))));
    bufp->fullBit(oldp+57,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 4U))));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+60,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+61,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 2U)))));
    bufp->fullBit(oldp+62,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 4U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                             & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                >> 2U))))));
    bufp->fullCData(oldp+63,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 5U))),4);
    bufp->fullBit(oldp+64,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 5U))));
    bufp->fullBit(oldp+65,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 6U))));
    bufp->fullBit(oldp+66,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 7U))));
    bufp->fullBit(oldp+67,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 8U))));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+71,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 6U)))));
    bufp->fullBit(oldp+72,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 8U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                             & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                >> 6U))))));
    bufp->fullSData(oldp+73,((0xffffU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 9U))),16);
    bufp->fullCData(oldp+74,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1) 
                               << 2U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                           | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                              & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))) 
                                          << 1U) | 
                                         (1U & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                  >> 0x10U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 0xeU))) 
                                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 0xcU) 
                                                      | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                            >> 0xaU))))))))),3);
    bufp->fullCData(oldp+75,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                               << 2U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                           | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                              & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                          << 1U) | 
                                         (1U & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                  >> 0x18U) 
                                                 | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                    & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 0x16U))) 
                                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                   & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                       >> 0x14U) 
                                                      | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                         & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                            >> 0x12U))))))))),3);
    bufp->fullBit(oldp+76,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
                            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
    bufp->fullBit(oldp+78,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                  & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 0x10U) | 
                                      ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0xeU))) 
                                     | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                        & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                            >> 0xcU) 
                                           | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                              & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                 >> 0xaU)))))))));
    bufp->fullBit(oldp+79,((1U & ((((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 0x18U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 0x16U))) 
                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0x14U) 
                                         | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                               >> 0x12U))))) 
                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                     & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0x10U) 
                                         | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                            & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                               >> 0xeU))) 
                                        | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                           & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                               >> 0xcU) 
                                              | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                    >> 0xaU))))))))));
    bufp->fullBit(oldp+80,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                            & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                  & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))));
    bufp->fullBit(oldp+81,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                            | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                               & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                     & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))))));
    bufp->fullBit(oldp+82,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                            & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                            | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                               & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)))));
    bufp->fullCData(oldp+84,((0xffU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 9U))),8);
    bufp->fullCData(oldp+85,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                               << 1U) | (1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                >> 0xcU) 
                                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 0xaU)))))),2);
    bufp->fullCData(oldp+86,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                               << 1U) | (1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                >> 0x10U) 
                                               | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 0xeU)))))),2);
    bufp->fullBit(oldp+87,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1));
    bufp->fullBit(oldp+89,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                  & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0xcU) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+90,((1U & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                    >> 0x10U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                    >> 0xeU))) 
                                  | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                     & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                         >> 0xcU) | 
                                        ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                         & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                            >> 0xaU))))))));
    bufp->fullBit(oldp+91,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                            & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                            | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                               & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+93,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 9U))),4);
    bufp->fullBit(oldp+94,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 9U))));
    bufp->fullBit(oldp+95,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 0xaU))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 0xbU))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                  >> 0xcU))));
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+100,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+101,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+102,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                    >> 0xcU) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                   >> 0xaU))))));
    bufp->fullCData(oldp+103,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 0xdU))),4);
    bufp->fullBit(oldp+104,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0xdU))));
    bufp->fullBit(oldp+105,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0xeU))));
    bufp->fullBit(oldp+106,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0xfU))));
    bufp->fullBit(oldp+107,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0x10U))));
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+110,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+111,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+112,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                    >> 0x10U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                    >> 0xeU))))));
    bufp->fullCData(oldp+113,((0xffU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                        >> 0x11U))),8);
    bufp->fullCData(oldp+114,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                 >> 0x14U) 
                                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                      >> 0x12U)))))),2);
    bufp->fullCData(oldp+115,((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                << 1U) | (1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                 >> 0x18U) 
                                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                   & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                      >> 0x16U)))))),2);
    bufp->fullBit(oldp+116,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                             | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
    bufp->fullBit(oldp+118,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 0x14U) | 
                                      ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                       & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0x12U)))))));
    bufp->fullBit(oldp+119,((1U & (((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                     >> 0x18U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     >> 0x16U))) 
                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                          >> 0x14U) 
                                         | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                               >> 0x12U))))))));
    bufp->fullBit(oldp+120,(((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                             & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                             | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
    bufp->fullCData(oldp+122,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 0x11U))),4);
    bufp->fullBit(oldp+123,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0x11U))));
    bufp->fullBit(oldp+124,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0x12U))));
    bufp->fullBit(oldp+125,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0x13U))));
    bufp->fullBit(oldp+126,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0x14U))));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
    bufp->fullBit(oldp+130,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                   & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+131,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                    >> 0x14U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                    >> 0x12U))))));
    bufp->fullCData(oldp+132,((0xfU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                       >> 0x15U))),4);
    bufp->fullBit(oldp+133,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0x15U))));
    bufp->fullBit(oldp+134,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0x16U))));
    bufp->fullBit(oldp+135,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0x17U))));
    bufp->fullBit(oldp+136,((1U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   >> 0x18U))));
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    bufp->fullBit(oldp+139,(((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                             | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
    bufp->fullBit(oldp+140,((1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                   & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+141,((1U & ((vlSelf->top__DOT__adder__DOT__result_mantissa 
                                    >> 0x18U) | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                    >> 0x16U))))));
    bufp->fullIData(oldp+142,((0x7fffffU & (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                            >> 2U))),23);
    bufp->fullBit(oldp+143,((1U & (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                   >> 2U))));
    bufp->fullBit(oldp+144,((1U & (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                   >> 1U))));
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__rounder__DOT__sticky));
    bufp->fullBit(oldp+146,(vlSelf->clk_i));
    bufp->fullIData(oldp+147,(vlSelf->operand_a),32);
    bufp->fullIData(oldp+148,(vlSelf->operand_b),32);
    bufp->fullCData(oldp+149,(vlSelf->rmode),3);
    bufp->fullIData(oldp+150,(vlSelf->result_o),32);
    bufp->fullIData(oldp+151,((0x7fffffU & ((4U & (IData)(vlSelf->rmode))
                                             ? ((2U 
                                                 & (IData)(vlSelf->rmode))
                                                 ? 
                                                (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                 >> 2U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->rmode))
                                                  ? 
                                                 (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                  >> 2U)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                   >> 2U))))
                                             : ((2U 
                                                 & (IData)(vlSelf->rmode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->rmode))
                                                  ? 
                                                 ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                   >> 2U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->top__DOT__adder__DOT__result_sign)) 
                                                   & (IData)(vlSelf->top__DOT__rounder__DOT____VdfgTmp_h028a8c76__0)))
                                                  : 
                                                 ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                   >> 2U) 
                                                  + 
                                                  ((IData)(vlSelf->top__DOT__adder__DOT__result_sign) 
                                                   & (IData)(vlSelf->top__DOT__rounder__DOT____VdfgTmp_h028a8c76__0))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->rmode))
                                                  ? 
                                                 (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                  >> 2U)
                                                  : 
                                                 ((1U 
                                                   & ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                ((0U 
                                                                  != 
                                                                  (6U 
                                                                   & vlSelf->top__DOT__adder__DOT__postnor_mant)) 
                                                                 | (IData)(vlSelf->top__DOT__rounder__DOT__sticky)))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                    >> 2U))
                                                   : 
                                                  (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                   >> 2U))))))),23);
    bufp->fullIData(oldp+152,((((IData)(vlSelf->top__DOT__adder__DOT__result_sign) 
                                << 0x1fU) | (((IData)(vlSelf->top__DOT__adder__DOT__postnor_exp) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & ((4U 
                                                    & (IData)(vlSelf->rmode))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->rmode))
                                                     ? 
                                                    (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                     >> 2U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->rmode))
                                                      ? 
                                                     (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                      >> 2U)
                                                      : 
                                                     ((IData)(1U) 
                                                      + 
                                                      (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                       >> 2U))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->rmode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->rmode))
                                                      ? 
                                                     ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                       >> 2U) 
                                                      + 
                                                      ((~ (IData)(vlSelf->top__DOT__adder__DOT__result_sign)) 
                                                       & (IData)(vlSelf->top__DOT__rounder__DOT____VdfgTmp_h028a8c76__0)))
                                                      : 
                                                     ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                       >> 2U) 
                                                      + 
                                                      ((IData)(vlSelf->top__DOT__adder__DOT__result_sign) 
                                                       & (IData)(vlSelf->top__DOT__rounder__DOT____VdfgTmp_h028a8c76__0))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->rmode))
                                                      ? 
                                                     (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                      >> 2U)
                                                      : 
                                                     ((1U 
                                                       & ((vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                           >> 2U) 
                                                          & (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (6U 
                                                                       & vlSelf->top__DOT__adder__DOT__postnor_mant)) 
                                                                     | (IData)(vlSelf->top__DOT__rounder__DOT__sticky)))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                        >> 2U))
                                                       : 
                                                      (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                       >> 2U))))))))),32);
    bufp->fullCData(oldp+153,(0U),2);
    bufp->fullBit(oldp+154,(0U));
    bufp->fullCData(oldp+155,(0U),4);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__rounder__DOT__mantissa_i),23);
}
