// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(opcode,1,0);
        CData/*0:0*/ top__DOT__dut__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__o_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__A1__DOT__a_sign;
        CData/*7:0*/ top__DOT__dut__DOT__A1__DOT__a_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__A1__DOT__b_sign;
        CData/*7:0*/ top__DOT__dut__DOT__A1__DOT__b_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__A1__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__A1__DOT__o_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__A1__DOT__diff;
        CData/*7:0*/ top__DOT__dut__DOT__A1__DOT__tmp_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__A1__DOT__i_e;
        CData/*7:0*/ top__DOT__dut__DOT__A1__DOT__o_e;
        CData/*0:0*/ top__DOT__dut__DOT__M1__DOT__a_sign;
        CData/*7:0*/ top__DOT__dut__DOT__M1__DOT__a_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__M1__DOT__b_sign;
        CData/*7:0*/ top__DOT__dut__DOT__M1__DOT__b_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__M1__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__M1__DOT__o_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__M1__DOT__i_e;
        CData/*7:0*/ top__DOT__dut__DOT__M1__DOT__o_e;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e;
    };
    struct {
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__a_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__a_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__b_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__b_exponent;
        CData/*0:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__o_sign;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__o_exponent;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__i_e;
        CData/*7:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e;
        CData/*7:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__A1__DOT__o_e;
        CData/*7:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__M1__DOT__o_e;
        CData/*7:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e;
        CData/*7:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e;
        CData/*7:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e;
        CData/*7:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e;
        CData/*7:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e;
        CData/*7:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e;
        CData/*7:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e;
        CData/*7:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e;
        CData/*7:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk_i;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_IN(A,31,0);
        VL_IN(B,31,0);
        VL_OUT(O,31,0);
        IData/*23:0*/ top__DOT__dut__DOT__a_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__b_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__o_mantissa;
        IData/*31:0*/ top__DOT__dut__DOT__adder_a_in;
        IData/*31:0*/ top__DOT__dut__DOT__adder_b_in;
        IData/*31:0*/ top__DOT__dut__DOT__adder_out;
        IData/*31:0*/ top__DOT__dut__DOT__multiplier_a_in;
        IData/*31:0*/ top__DOT__dut__DOT__multiplier_b_in;
        IData/*31:0*/ top__DOT__dut__DOT__divider_a_in;
        IData/*31:0*/ top__DOT__dut__DOT__divider_b_in;
        IData/*23:0*/ top__DOT__dut__DOT__A1__DOT__a_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__A1__DOT__b_mantissa;
    };
    struct {
        IData/*24:0*/ top__DOT__dut__DOT__A1__DOT__o_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__A1__DOT__tmp_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__A1__DOT__i_m;
        IData/*24:0*/ top__DOT__dut__DOT__A1__DOT__o_m;
        IData/*23:0*/ top__DOT__dut__DOT__M1__DOT__a_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__M1__DOT__b_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__M1__DOT__o_mantissa;
        IData/*31:0*/ top__DOT__dut__DOT__D1__DOT__b_reciprocal;
        IData/*31:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__N0;
        IData/*31:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__N1;
        IData/*31:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out;
        IData/*31:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1_out;
        IData/*31:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0_in;
        IData/*31:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b;
        IData/*31:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__a_mantissa;
        IData/*23:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__b_mantissa;
        IData/*24:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__o_mantissa;
        IData/*24:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__A1__DOT__o_m;
        IData/*24:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m;
        IData/*24:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m;
        IData/*24:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ top__DOT__dut__DOT__M1__DOT__product;
        QData/*47:0*/ top__DOT__dut__DOT__M1__DOT__i_m;
        QData/*47:0*/ top__DOT__dut__DOT__M1__DOT__o_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product;
    };
    struct {
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__product;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m;
        QData/*47:0*/ top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m;
        QData/*47:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__M1__DOT__o_m;
        QData/*47:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m;
        QData/*47:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m;
        QData/*47:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m;
        QData/*47:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m;
        QData/*47:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m;
        QData/*47:0*/ __Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m;
        VlUnpacked<CData/*0:0*/, 14> __Vm_traceActivity;
    };
    VlTriggerVec<12> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<12> __VactTriggered;
    VlTriggerVec<12> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard