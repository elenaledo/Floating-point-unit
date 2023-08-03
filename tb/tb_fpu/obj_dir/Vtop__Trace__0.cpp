// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_sign));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_sign));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__dut__DOT__M1__DOT__a_sign));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__dut__DOT__M1__DOT__b_sign));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__dut__DOT__M1__DOT__o_sign));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+5,((((IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__o_sign) 
                                 << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__o_exponent) 
                                               << 0x17U) 
                                              | (0x7fffffU 
                                                 & vlSelf->top__DOT__dut__DOT__M1__DOT__o_mantissa)))),32);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__dut__DOT__M1__DOT__a_exponent),8);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__dut__DOT__M1__DOT__a_mantissa),24);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__dut__DOT__M1__DOT__b_exponent),8);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__dut__DOT__M1__DOT__b_mantissa),24);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__M1__DOT__o_exponent),8);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__dut__DOT__M1__DOT__o_mantissa),25);
        bufp->chgQData(oldp+12,(vlSelf->top__DOT__dut__DOT__M1__DOT__product),48);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__dut__DOT__M1__DOT__i_e),8);
        bufp->chgQData(oldp+15,(vlSelf->top__DOT__dut__DOT__M1__DOT__i_m),48);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__dut__DOT__M1__DOT__o_e),8);
        bufp->chgQData(oldp+18,(vlSelf->top__DOT__dut__DOT__M1__DOT__o_m),48);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__dut__DOT__adder_out),32);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__dut__DOT__A1__DOT__a_sign));
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__dut__DOT__A1__DOT__a_exponent),8);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__dut__DOT__A1__DOT__a_mantissa),24);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__dut__DOT__A1__DOT__b_sign));
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__dut__DOT__A1__DOT__b_exponent),8);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__dut__DOT__A1__DOT__b_mantissa),24);
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__dut__DOT__A1__DOT__o_sign));
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__dut__DOT__A1__DOT__o_exponent),8);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa),25);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__dut__DOT__A1__DOT__diff),8);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__dut__DOT__A1__DOT__tmp_mantissa),24);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e),8);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__dut__DOT__A1__DOT__i_m),25);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__dut__DOT__A1__DOT__o_e),8);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__dut__DOT__A1__DOT__o_m),25);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+36,((((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_sign) 
                                  << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent) 
                                                << 0x17U) 
                                               | (0x7fffffU 
                                                  & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_mantissa)))),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0_in),32);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_exponent),8);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_mantissa),24);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent),8);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_mantissa),25);
        bufp->chgQData(oldp+42,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product),48);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e),8);
        bufp->chgQData(oldp+45,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m),48);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e),8);
        bufp->chgQData(oldp+48,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0),32);
        bufp->chgBit(oldp+51,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign));
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent),8);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa),24);
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign));
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent),8);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa),24);
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign));
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent),8);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa),25);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff),8);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa),24);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e),8);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m),25);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e),8);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m),25);
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_sign));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_sign));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b),32);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_exponent),8);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_mantissa),24);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_exponent),8);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_mantissa),24);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent),8);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa),25);
        bufp->chgQData(oldp+76,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product),48);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e),8);
        bufp->chgQData(oldp+79,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m),48);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e),8);
        bufp->chgQData(oldp+82,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out),32);
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign));
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent),8);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa),24);
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign));
        bufp->chgCData(oldp+89,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent),8);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa),24);
        bufp->chgBit(oldp+91,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign));
        bufp->chgCData(oldp+92,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent),8);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa),25);
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff),8);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa),24);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e),8);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m),25);
        bufp->chgCData(oldp+98,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e),8);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m),25);
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_sign));
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_sign));
        bufp->chgBit(oldp+102,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_sign));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1),32);
        bufp->chgCData(oldp+104,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_exponent),8);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_mantissa),24);
        bufp->chgCData(oldp+106,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_exponent),8);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_mantissa),24);
        bufp->chgCData(oldp+108,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent),8);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_mantissa),25);
        bufp->chgQData(oldp+110,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product),48);
        bufp->chgCData(oldp+112,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e),8);
        bufp->chgQData(oldp+113,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m),48);
        bufp->chgCData(oldp+115,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e),8);
        bufp->chgQData(oldp+116,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m),48);
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_sign));
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_sign));
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b),32);
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_exponent),8);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_mantissa),24);
        bufp->chgCData(oldp+124,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_exponent),8);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_mantissa),24);
        bufp->chgCData(oldp+126,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent),8);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa),25);
        bufp->chgQData(oldp+128,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product),48);
        bufp->chgCData(oldp+130,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e),8);
        bufp->chgQData(oldp+131,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m),48);
        bufp->chgCData(oldp+133,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e),8);
        bufp->chgQData(oldp+134,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1_out),32);
        bufp->chgBit(oldp+137,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign));
        bufp->chgCData(oldp+138,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent),8);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa),24);
        bufp->chgBit(oldp+140,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign));
        bufp->chgCData(oldp+141,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent),8);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa),24);
        bufp->chgBit(oldp+143,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign));
        bufp->chgCData(oldp+144,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent),8);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa),25);
        bufp->chgCData(oldp+146,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff),8);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa),24);
        bufp->chgCData(oldp+148,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e),8);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m),25);
        bufp->chgCData(oldp+150,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e),8);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m),25);
        bufp->chgBit(oldp+152,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_sign));
        bufp->chgBit(oldp+153,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_sign));
        bufp->chgBit(oldp+154,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_sign));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__dut__DOT__D1__DOT__b_reciprocal),32);
        bufp->chgBit(oldp+156,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__a_sign));
        bufp->chgBit(oldp+157,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__b_sign));
        bufp->chgBit(oldp+158,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_sign));
        bufp->chgCData(oldp+159,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent),8);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa),24);
        bufp->chgCData(oldp+161,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_exponent),8);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_mantissa),24);
        bufp->chgCData(oldp+163,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent),8);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa),25);
        bufp->chgQData(oldp+165,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product),48);
        bufp->chgCData(oldp+167,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e),8);
        bufp->chgQData(oldp+168,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m),48);
        bufp->chgCData(oldp+170,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e),8);
        bufp->chgQData(oldp+171,(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgCData(oldp+173,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__a_exponent),8);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__a_mantissa),24);
        bufp->chgCData(oldp+175,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__b_exponent),8);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__b_mantissa),24);
        bufp->chgCData(oldp+177,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_exponent),8);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_mantissa),25);
        bufp->chgQData(oldp+179,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__product),48);
        bufp->chgCData(oldp+181,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_e),8);
        bufp->chgQData(oldp+182,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m),48);
        bufp->chgCData(oldp+184,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e),8);
        bufp->chgQData(oldp+185,(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+187,(vlSelf->top__DOT__dut__DOT__o_sign));
        bufp->chgCData(oldp+188,(vlSelf->top__DOT__dut__DOT__o_exponent),8);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__dut__DOT__o_mantissa),25);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__dut__DOT__adder_a_in),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__dut__DOT__adder_b_in),32);
    }
    bufp->chgBit(oldp+192,(vlSelf->clk_i));
    bufp->chgIData(oldp+193,(vlSelf->A),32);
    bufp->chgIData(oldp+194,(vlSelf->B),32);
    bufp->chgCData(oldp+195,(vlSelf->opcode),2);
    bufp->chgIData(oldp+196,(vlSelf->O),32);
    bufp->chgCData(oldp+197,((0xffU & (vlSelf->A >> 0x17U))),8);
    bufp->chgIData(oldp+198,(vlSelf->top__DOT__dut__DOT__a_mantissa),24);
    bufp->chgCData(oldp+199,((0xffU & (vlSelf->B >> 0x17U))),8);
    bufp->chgIData(oldp+200,(vlSelf->top__DOT__dut__DOT__b_mantissa),24);
    bufp->chgIData(oldp+201,((((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_sign) 
                               << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_exponent) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_mantissa)))),32);
    bufp->chgBit(oldp+202,((vlSelf->A >> 0x1fU)));
    bufp->chgBit(oldp+203,((vlSelf->B >> 0x1fU)));
    bufp->chgIData(oldp+204,((((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_sign) 
                               << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa)))),32);
    bufp->chgIData(oldp+205,((((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign) 
                               << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa)))),32);
    bufp->chgIData(oldp+206,((((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign) 
                               << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa)))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
}
