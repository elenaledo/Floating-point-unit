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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_sign));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_sign));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__a_sign));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__b_sign));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_sign));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+5,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_sign) 
                                 << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_exponent) 
                                               << 0x17U) 
                                              | (0x7fffffU 
                                                 & vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_mantissa)))),32);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__a_exponent),8);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__a_mantissa),24);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__b_exponent),8);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__b_mantissa),24);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_exponent),8);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_mantissa),25);
        bufp->chgQData(oldp+12,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__product),48);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__i_e),8);
        bufp->chgQData(oldp+15,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__i_m),48);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_e),8);
        bufp->chgQData(oldp+18,(vlSelf->top__DOT__fpu_dut__DOT__M1__DOT__o_m),48);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__fpu_dut__DOT__adder_out),32);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__a_sign));
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__a_exponent),8);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__a_mantissa),24);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__b_sign));
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__b_exponent),8);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__b_mantissa),24);
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__o_sign));
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__o_exponent),8);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__o_mantissa),25);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__diff),8);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__tmp_mantissa),24);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_e),8);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m),25);
        bufp->chgCData(oldp+34,((0xffU & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_e) 
                                          - (0x1fU 
                                             & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__shift)))))),8);
        bufp->chgIData(oldp+35,((0x1ffffffU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                               << (0x1fU 
                                                   & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__shift)))))),25);
        bufp->chgIData(oldp+36,((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                 << 7U)),32);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__shift),5);
        bufp->chgCData(oldp+38,((0x1fU & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__shift)))),8);
        bufp->chgBit(oldp+39,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                                     | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)))));
        bufp->chgCData(oldp+40,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0) 
                                  << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                              | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                             << 2U) 
                                            | (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                     & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                                 | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                                << 1U) 
                                               | (1U 
                                                  & ((((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
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
        bufp->chgCData(oldp+41,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                                  << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                             << 2U) 
                                            | (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                     & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                    & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                                       | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                          & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                                                << 1U) 
                                               | (1U 
                                                  & ((((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
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
        bufp->chgBit(oldp+42,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0));
        bufp->chgBit(oldp+44,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
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
                                        | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
        bufp->chgBit(oldp+45,((1U & (((((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
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
                                                        >> 0xaU))))))) 
                                     | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                        & ((((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
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
                                           | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))))));
        bufp->chgBit(oldp+46,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                  | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+47,(((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
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
        bufp->chgBit(oldp+48,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                  | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+49,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                  & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                     | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
        bufp->chgBit(oldp+50,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))));
        bufp->chgBit(oldp+51,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
        bufp->chgSData(oldp+52,((0xff80U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                            << 7U))),16);
        bufp->chgCData(oldp+53,(((4U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                        << 2U)) | (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m)))))),3);
        bufp->chgCData(oldp+54,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                  << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                             << 1U) 
                                            | (1U & 
                                               (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
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
        bufp->chgBit(oldp+55,((1U & vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m)));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0));
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1));
        bufp->chgBit(oldp+58,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                        >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                     >> 6U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                             >> 4U) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                  >> 2U))))) 
                                     | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+59,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
        bufp->chgBit(oldp+60,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
        bufp->chgCData(oldp+61,((0x80U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          << 7U))),8);
        bufp->chgCData(oldp+62,((3U & (- (IData)((1U 
                                                  & vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m))))),2);
        bufp->chgCData(oldp+63,((8U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       << 3U))),4);
        bufp->chgCData(oldp+64,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 1U))),8);
        bufp->chgCData(oldp+65,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                  << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                   >> 4U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                     & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                        >> 2U)))))),2);
        bufp->chgCData(oldp+66,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                  << 1U) | (1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                   >> 8U) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                     & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                        >> 6U)))))),2);
        bufp->chgBit(oldp+67,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
        bufp->chgBit(oldp+69,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                     & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                         >> 4U) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                      >> 2U)))))));
        bufp->chgBit(oldp+70,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                    >> 6U))) 
                                     | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                        & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                            >> 4U) 
                                           | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                              & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                 >> 2U))))))));
        bufp->chgBit(oldp+71,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                               & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+72,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+73,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                         >> 1U))),4);
        bufp->chgBit(oldp+74,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 1U))));
        bufp->chgBit(oldp+75,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 2U))));
        bufp->chgBit(oldp+76,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 3U))));
        bufp->chgBit(oldp+77,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 4U))));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+80,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+81,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                     & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                        >> 2U)))));
        bufp->chgBit(oldp+82,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                   >> 2U))))));
        bufp->chgCData(oldp+83,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                         >> 5U))),4);
        bufp->chgBit(oldp+84,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 5U))));
        bufp->chgBit(oldp+85,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 6U))));
        bufp->chgBit(oldp+86,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 7U))));
        bufp->chgBit(oldp+87,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                     >> 8U))));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+90,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+91,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                     & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                        >> 6U)))));
        bufp->chgBit(oldp+92,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                   >> 6U))))));
        bufp->chgSData(oldp+93,((0xffffU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                            >> 9U))),16);
        bufp->chgCData(oldp+94,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1) 
                                  << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))) 
                                             << 1U) 
                                            | (1U & 
                                               (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
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
        bufp->chgCData(oldp+95,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                  << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                              | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                 & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                             << 1U) 
                                            | (1U & 
                                               (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
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
        bufp->chgBit(oldp+96,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
        bufp->chgBit(oldp+97,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
        bufp->chgBit(oldp+98,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
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
                                                    >> 0xaU)))))))));
        bufp->chgBit(oldp+99,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                        >> 0x18U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
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
        bufp->chgBit(oldp+100,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))));
        bufp->chgBit(oldp+101,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                         & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))))));
        bufp->chgBit(oldp+102,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
        bufp->chgBit(oldp+103,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)))));
        bufp->chgCData(oldp+104,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                           >> 9U))),8);
        bufp->chgCData(oldp+105,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                    >> 0xcU) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                         >> 0xaU)))))),2);
        bufp->chgCData(oldp+106,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                    >> 0x10U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                         >> 0xeU)))))),2);
        bufp->chgBit(oldp+107,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1));
        bufp->chgBit(oldp+109,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0xcU) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+110,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                        >> 0x10U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                           >> 0xeU))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                             >> 0xcU) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                  >> 0xaU))))))));
        bufp->chgBit(oldp+111,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+112,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+113,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 9U))),4);
        bufp->chgBit(oldp+114,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 9U))));
        bufp->chgBit(oldp+115,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0xaU))));
        bufp->chgBit(oldp+116,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0xbU))));
        bufp->chgBit(oldp+117,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0xcU))));
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+120,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+121,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+122,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 0xcU) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                      >> 0xaU))))));
        bufp->chgCData(oldp+123,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0xdU))),4);
        bufp->chgBit(oldp+124,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0xdU))));
        bufp->chgBit(oldp+125,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0xeU))));
        bufp->chgBit(oldp+126,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0xfU))));
        bufp->chgBit(oldp+127,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x10U))));
        bufp->chgBit(oldp+128,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+129,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+130,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+131,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+132,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 0x10U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0xeU))))));
        bufp->chgCData(oldp+133,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                           >> 0x11U))),8);
        bufp->chgCData(oldp+134,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                    >> 0x14U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                         >> 0x12U)))))),2);
        bufp->chgCData(oldp+135,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                    >> 0x18U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                         >> 0x16U)))))),2);
        bufp->chgBit(oldp+136,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+137,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
        bufp->chgBit(oldp+138,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0x14U) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+139,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                        >> 0x18U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                           >> 0x16U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                             >> 0x14U) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                                  >> 0x12U))))))));
        bufp->chgBit(oldp+140,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+141,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+142,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+143,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x11U))));
        bufp->chgBit(oldp+144,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x12U))));
        bufp->chgBit(oldp+145,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x13U))));
        bufp->chgBit(oldp+146,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x14U))));
        bufp->chgBit(oldp+147,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+148,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+149,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+150,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+151,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 0x14U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0x12U))))));
        bufp->chgCData(oldp+152,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0x15U))),4);
        bufp->chgBit(oldp+153,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x15U))));
        bufp->chgBit(oldp+154,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x16U))));
        bufp->chgBit(oldp+155,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x17U))));
        bufp->chgBit(oldp+156,((1U & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                      >> 0x18U))));
        bufp->chgBit(oldp+157,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+158,(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+159,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+160,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+161,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                       >> 0x18U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__A1__DOT__i_m 
                                          >> 0x16U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+162,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_sign) 
                                   << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_mantissa)))),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0_in),32);
        bufp->chgCData(oldp+164,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_exponent),8);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_mantissa),24);
        bufp->chgCData(oldp+166,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent),8);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_mantissa),25);
        bufp->chgQData(oldp+168,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product),48);
        bufp->chgCData(oldp+170,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e),8);
        bufp->chgQData(oldp+171,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m),48);
        bufp->chgCData(oldp+173,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e),8);
        bufp->chgQData(oldp+174,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__N0),32);
        bufp->chgBit(oldp+177,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign));
        bufp->chgCData(oldp+178,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent),8);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa),24);
        bufp->chgBit(oldp+180,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign));
        bufp->chgCData(oldp+181,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent),8);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa),24);
        bufp->chgBit(oldp+183,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign));
        bufp->chgCData(oldp+184,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent),8);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa),25);
        bufp->chgCData(oldp+186,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff),8);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa),24);
        bufp->chgCData(oldp+188,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e),8);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m),25);
        bufp->chgCData(oldp+190,((0xffU & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                                           - (0x1fU 
                                              & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__shift)))))),8);
        bufp->chgIData(oldp+191,((0x1ffffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                << 
                                                (0x1fU 
                                                 & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__shift)))))),25);
        bufp->chgIData(oldp+192,((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                  << 7U)),32);
        bufp->chgCData(oldp+193,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__shift),5);
        bufp->chgCData(oldp+194,((0x1fU & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__shift)))),8);
        bufp->chgBit(oldp+195,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)))));
        bufp->chgCData(oldp+196,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0) 
                                   << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                              << 2U) 
                                             | (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                                  | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                                 << 1U) 
                                                | (1U 
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
                                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))))),4);
        bufp->chgCData(oldp+197,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                                   << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                              << 2U) 
                                             | (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                     & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                                        | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                           & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                                                 << 1U) 
                                                | (1U 
                                                   & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
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
        bufp->chgBit(oldp+198,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
        bufp->chgBit(oldp+199,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0));
        bufp->chgBit(oldp+200,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
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
                                         | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
        bufp->chgBit(oldp+201,((1U & (((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
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
        bufp->chgBit(oldp+202,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+203,(((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
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
        bufp->chgBit(oldp+204,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+205,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                   & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
        bufp->chgBit(oldp+206,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))));
        bufp->chgBit(oldp+207,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
        bufp->chgSData(oldp+208,((0xff80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                             << 7U))),16);
        bufp->chgCData(oldp+209,(((4U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                         << 2U)) | 
                                  (3U & (- (IData)(
                                                   (1U 
                                                    & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m)))))),3);
        bufp->chgCData(oldp+210,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                   << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                              << 1U) 
                                             | (1U 
                                                & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
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
        bufp->chgBit(oldp+211,((1U & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m)));
        bufp->chgBit(oldp+212,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0));
        bufp->chgBit(oldp+213,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1));
        bufp->chgBit(oldp+214,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
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
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+215,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
        bufp->chgBit(oldp+216,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
        bufp->chgCData(oldp+217,((0x80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                           << 7U))),8);
        bufp->chgCData(oldp+218,((3U & (- (IData)((1U 
                                                   & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m))))),2);
        bufp->chgCData(oldp+219,((8U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                        << 3U))),4);
        bufp->chgCData(oldp+220,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                           >> 1U))),8);
        bufp->chgCData(oldp+221,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 4U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                         >> 2U)))))),2);
        bufp->chgCData(oldp+222,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 8U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                         >> 6U)))))),2);
        bufp->chgBit(oldp+223,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+224,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
        bufp->chgBit(oldp+225,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 4U) | 
                                         ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                             >> 2U)))))));
        bufp->chgBit(oldp+226,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                        >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                     >> 6U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                             >> 4U) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                  >> 2U))))))));
        bufp->chgBit(oldp+227,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+228,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+229,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 1U))),4);
        bufp->chgBit(oldp+230,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 1U))));
        bufp->chgBit(oldp+231,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 2U))));
        bufp->chgBit(oldp+232,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 3U))));
        bufp->chgBit(oldp+233,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 4U))));
        bufp->chgBit(oldp+234,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+235,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+236,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+237,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                         >> 2U)))));
        bufp->chgBit(oldp+238,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 2U))))));
        bufp->chgCData(oldp+239,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 5U))),4);
        bufp->chgBit(oldp+240,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 5U))));
        bufp->chgBit(oldp+241,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 6U))));
        bufp->chgBit(oldp+242,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 7U))));
        bufp->chgBit(oldp+243,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 8U))));
        bufp->chgBit(oldp+244,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+245,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+246,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+247,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                         >> 6U)))));
        bufp->chgBit(oldp+248,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 6U))))));
        bufp->chgSData(oldp+249,((0xffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                             >> 9U))),16);
        bufp->chgCData(oldp+250,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1) 
                                   << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))) 
                                              << 1U) 
                                             | (1U 
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
                                                               >> 0xaU))))))))),3);
        bufp->chgCData(oldp+251,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                   << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                              << 1U) 
                                             | (1U 
                                                & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
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
        bufp->chgBit(oldp+252,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                 | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
        bufp->chgBit(oldp+253,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
        bufp->chgBit(oldp+254,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
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
                                                     >> 0xaU)))))))));
        bufp->chgBit(oldp+255,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
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
                                                        >> 0xaU))))))))));
        bufp->chgBit(oldp+256,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))));
        bufp->chgBit(oldp+257,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                         & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))))));
        bufp->chgBit(oldp+258,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
        bufp->chgBit(oldp+259,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)))));
        bufp->chgCData(oldp+260,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                           >> 9U))),8);
        bufp->chgCData(oldp+261,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 0xcU) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                         >> 0xaU)))))),2);
        bufp->chgCData(oldp+262,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 0x10U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                         >> 0xeU)))))),2);
        bufp->chgBit(oldp+263,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+264,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1));
        bufp->chgBit(oldp+265,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0xcU) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+266,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                        >> 0x10U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                           >> 0xeU))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                             >> 0xcU) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                  >> 0xaU))))))));
        bufp->chgBit(oldp+267,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+268,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+269,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 9U))),4);
        bufp->chgBit(oldp+270,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 9U))));
        bufp->chgBit(oldp+271,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0xaU))));
        bufp->chgBit(oldp+272,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0xbU))));
        bufp->chgBit(oldp+273,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0xcU))));
        bufp->chgBit(oldp+274,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+275,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+276,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+277,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+278,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 0xcU) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                      >> 0xaU))))));
        bufp->chgCData(oldp+279,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0xdU))),4);
        bufp->chgBit(oldp+280,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0xdU))));
        bufp->chgBit(oldp+281,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0xeU))));
        bufp->chgBit(oldp+282,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0xfU))));
        bufp->chgBit(oldp+283,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x10U))));
        bufp->chgBit(oldp+284,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+285,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+286,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+287,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+288,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 0x10U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0xeU))))));
        bufp->chgCData(oldp+289,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                           >> 0x11U))),8);
        bufp->chgCData(oldp+290,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 0x14U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                         >> 0x12U)))))),2);
        bufp->chgCData(oldp+291,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                    >> 0x18U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                         >> 0x16U)))))),2);
        bufp->chgBit(oldp+292,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+293,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
        bufp->chgBit(oldp+294,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0x14U) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+295,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                        >> 0x18U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                           >> 0x16U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                             >> 0x14U) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                                  >> 0x12U))))))));
        bufp->chgBit(oldp+296,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+297,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+298,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+299,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x11U))));
        bufp->chgBit(oldp+300,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x12U))));
        bufp->chgBit(oldp+301,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x13U))));
        bufp->chgBit(oldp+302,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x14U))));
        bufp->chgBit(oldp+303,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+304,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+305,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+306,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+307,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 0x14U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0x12U))))));
        bufp->chgCData(oldp+308,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0x15U))),4);
        bufp->chgBit(oldp+309,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x15U))));
        bufp->chgBit(oldp+310,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x16U))));
        bufp->chgBit(oldp+311,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x17U))));
        bufp->chgBit(oldp+312,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                      >> 0x18U))));
        bufp->chgBit(oldp+313,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+314,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+315,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+316,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+317,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                       >> 0x18U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+318,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_sign));
        bufp->chgBit(oldp+319,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_sign));
        bufp->chgBit(oldp+320,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+321,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b),32);
        bufp->chgCData(oldp+322,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_exponent),8);
        bufp->chgIData(oldp+323,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_mantissa),24);
        bufp->chgCData(oldp+324,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_exponent),8);
        bufp->chgIData(oldp+325,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_mantissa),24);
        bufp->chgCData(oldp+326,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent),8);
        bufp->chgIData(oldp+327,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa),25);
        bufp->chgQData(oldp+328,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product),48);
        bufp->chgCData(oldp+330,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e),8);
        bufp->chgQData(oldp+331,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m),48);
        bufp->chgCData(oldp+333,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e),8);
        bufp->chgQData(oldp+334,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+336,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out),32);
        bufp->chgBit(oldp+337,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign));
        bufp->chgCData(oldp+338,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent),8);
        bufp->chgIData(oldp+339,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa),24);
        bufp->chgBit(oldp+340,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign));
        bufp->chgCData(oldp+341,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent),8);
        bufp->chgIData(oldp+342,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa),24);
        bufp->chgBit(oldp+343,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign));
        bufp->chgCData(oldp+344,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent),8);
        bufp->chgIData(oldp+345,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa),25);
        bufp->chgCData(oldp+346,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff),8);
        bufp->chgIData(oldp+347,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa),24);
        bufp->chgCData(oldp+348,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e),8);
        bufp->chgIData(oldp+349,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m),25);
        bufp->chgCData(oldp+350,((0xffU & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                                           - (0x1fU 
                                              & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__shift)))))),8);
        bufp->chgIData(oldp+351,((0x1ffffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                << 
                                                (0x1fU 
                                                 & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__shift)))))),25);
        bufp->chgIData(oldp+352,((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                  << 7U)),32);
        bufp->chgCData(oldp+353,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__shift),5);
        bufp->chgCData(oldp+354,((0x1fU & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__shift)))),8);
        bufp->chgBit(oldp+355,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)))));
        bufp->chgCData(oldp+356,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0) 
                                   << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                              << 2U) 
                                             | (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                                  | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                                 << 1U) 
                                                | (1U 
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
                                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))))),4);
        bufp->chgCData(oldp+357,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                                   << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                              << 2U) 
                                             | (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                     & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                                        | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                           & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                                                 << 1U) 
                                                | (1U 
                                                   & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
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
        bufp->chgBit(oldp+358,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
        bufp->chgBit(oldp+359,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0));
        bufp->chgBit(oldp+360,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
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
                                         | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
        bufp->chgBit(oldp+361,((1U & (((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
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
        bufp->chgBit(oldp+362,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+363,(((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
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
        bufp->chgBit(oldp+364,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+365,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                   & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
        bufp->chgBit(oldp+366,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))));
        bufp->chgBit(oldp+367,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
        bufp->chgSData(oldp+368,((0xff80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                             << 7U))),16);
        bufp->chgCData(oldp+369,(((4U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                         << 2U)) | 
                                  (3U & (- (IData)(
                                                   (1U 
                                                    & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m)))))),3);
        bufp->chgCData(oldp+370,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                   << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                              << 1U) 
                                             | (1U 
                                                & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
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
        bufp->chgBit(oldp+371,((1U & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m)));
        bufp->chgBit(oldp+372,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0));
        bufp->chgBit(oldp+373,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1));
        bufp->chgBit(oldp+374,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
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
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+375,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
        bufp->chgBit(oldp+376,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
        bufp->chgCData(oldp+377,((0x80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                           << 7U))),8);
        bufp->chgCData(oldp+378,((3U & (- (IData)((1U 
                                                   & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m))))),2);
        bufp->chgCData(oldp+379,((8U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                        << 3U))),4);
        bufp->chgCData(oldp+380,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                           >> 1U))),8);
        bufp->chgCData(oldp+381,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 4U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                         >> 2U)))))),2);
        bufp->chgCData(oldp+382,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 8U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                         >> 6U)))))),2);
        bufp->chgBit(oldp+383,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+384,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
        bufp->chgBit(oldp+385,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 4U) | 
                                         ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                             >> 2U)))))));
        bufp->chgBit(oldp+386,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                        >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                     >> 6U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                             >> 4U) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                  >> 2U))))))));
        bufp->chgBit(oldp+387,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+388,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+389,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 1U))),4);
        bufp->chgBit(oldp+390,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 1U))));
        bufp->chgBit(oldp+391,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 2U))));
        bufp->chgBit(oldp+392,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 3U))));
        bufp->chgBit(oldp+393,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 4U))));
        bufp->chgBit(oldp+394,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+395,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+396,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+397,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                         >> 2U)))));
        bufp->chgBit(oldp+398,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 2U))))));
        bufp->chgCData(oldp+399,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 5U))),4);
        bufp->chgBit(oldp+400,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 5U))));
        bufp->chgBit(oldp+401,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 6U))));
        bufp->chgBit(oldp+402,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 7U))));
        bufp->chgBit(oldp+403,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 8U))));
        bufp->chgBit(oldp+404,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+405,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+406,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+407,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                         >> 6U)))));
        bufp->chgBit(oldp+408,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 6U))))));
        bufp->chgSData(oldp+409,((0xffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                             >> 9U))),16);
        bufp->chgCData(oldp+410,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1) 
                                   << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))) 
                                              << 1U) 
                                             | (1U 
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
                                                               >> 0xaU))))))))),3);
        bufp->chgCData(oldp+411,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                   << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                              << 1U) 
                                             | (1U 
                                                & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
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
        bufp->chgBit(oldp+412,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                 | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
        bufp->chgBit(oldp+413,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
        bufp->chgBit(oldp+414,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
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
                                                     >> 0xaU)))))))));
        bufp->chgBit(oldp+415,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
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
                                                        >> 0xaU))))))))));
        bufp->chgBit(oldp+416,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))));
        bufp->chgBit(oldp+417,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                         & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))))));
        bufp->chgBit(oldp+418,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
        bufp->chgBit(oldp+419,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)))));
        bufp->chgCData(oldp+420,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                           >> 9U))),8);
        bufp->chgCData(oldp+421,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 0xcU) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                         >> 0xaU)))))),2);
        bufp->chgCData(oldp+422,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 0x10U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                         >> 0xeU)))))),2);
        bufp->chgBit(oldp+423,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+424,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1));
        bufp->chgBit(oldp+425,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0xcU) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+426,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                        >> 0x10U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                           >> 0xeU))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                             >> 0xcU) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                  >> 0xaU))))))));
        bufp->chgBit(oldp+427,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+428,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+429,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 9U))),4);
        bufp->chgBit(oldp+430,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 9U))));
        bufp->chgBit(oldp+431,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0xaU))));
        bufp->chgBit(oldp+432,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0xbU))));
        bufp->chgBit(oldp+433,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0xcU))));
        bufp->chgBit(oldp+434,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+435,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+436,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+437,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+438,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 0xcU) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                      >> 0xaU))))));
        bufp->chgCData(oldp+439,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0xdU))),4);
        bufp->chgBit(oldp+440,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0xdU))));
        bufp->chgBit(oldp+441,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0xeU))));
        bufp->chgBit(oldp+442,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0xfU))));
        bufp->chgBit(oldp+443,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x10U))));
        bufp->chgBit(oldp+444,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+445,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+446,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+447,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+448,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 0x10U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0xeU))))));
        bufp->chgCData(oldp+449,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                           >> 0x11U))),8);
        bufp->chgCData(oldp+450,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 0x14U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                         >> 0x12U)))))),2);
        bufp->chgCData(oldp+451,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                    >> 0x18U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                         >> 0x16U)))))),2);
        bufp->chgBit(oldp+452,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+453,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
        bufp->chgBit(oldp+454,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0x14U) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+455,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                        >> 0x18U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                           >> 0x16U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                             >> 0x14U) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                                  >> 0x12U))))))));
        bufp->chgBit(oldp+456,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+457,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+458,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+459,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x11U))));
        bufp->chgBit(oldp+460,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x12U))));
        bufp->chgBit(oldp+461,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x13U))));
        bufp->chgBit(oldp+462,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x14U))));
        bufp->chgBit(oldp+463,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+464,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+465,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+466,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+467,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 0x14U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0x12U))))));
        bufp->chgCData(oldp+468,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0x15U))),4);
        bufp->chgBit(oldp+469,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x15U))));
        bufp->chgBit(oldp+470,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x16U))));
        bufp->chgBit(oldp+471,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x17U))));
        bufp->chgBit(oldp+472,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                      >> 0x18U))));
        bufp->chgBit(oldp+473,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+474,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+475,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+476,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+477,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                       >> 0x18U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+478,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_sign));
        bufp->chgBit(oldp+479,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_sign));
        bufp->chgBit(oldp+480,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_sign));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+481,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__N1),32);
        bufp->chgCData(oldp+482,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_exponent),8);
        bufp->chgIData(oldp+483,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_mantissa),24);
        bufp->chgCData(oldp+484,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_exponent),8);
        bufp->chgIData(oldp+485,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_mantissa),24);
        bufp->chgCData(oldp+486,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent),8);
        bufp->chgIData(oldp+487,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_mantissa),25);
        bufp->chgQData(oldp+488,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product),48);
        bufp->chgCData(oldp+490,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e),8);
        bufp->chgQData(oldp+491,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m),48);
        bufp->chgCData(oldp+493,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e),8);
        bufp->chgQData(oldp+494,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m),48);
        bufp->chgBit(oldp+496,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_sign));
        bufp->chgBit(oldp+497,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_sign));
        bufp->chgBit(oldp+498,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+499,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b),32);
        bufp->chgCData(oldp+500,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_exponent),8);
        bufp->chgIData(oldp+501,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_mantissa),24);
        bufp->chgCData(oldp+502,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_exponent),8);
        bufp->chgIData(oldp+503,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_mantissa),24);
        bufp->chgCData(oldp+504,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent),8);
        bufp->chgIData(oldp+505,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa),25);
        bufp->chgQData(oldp+506,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product),48);
        bufp->chgCData(oldp+508,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e),8);
        bufp->chgQData(oldp+509,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m),48);
        bufp->chgCData(oldp+511,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e),8);
        bufp->chgQData(oldp+512,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgIData(oldp+514,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1_out),32);
        bufp->chgBit(oldp+515,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign));
        bufp->chgCData(oldp+516,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent),8);
        bufp->chgIData(oldp+517,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa),24);
        bufp->chgBit(oldp+518,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign));
        bufp->chgCData(oldp+519,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent),8);
        bufp->chgIData(oldp+520,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa),24);
        bufp->chgBit(oldp+521,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign));
        bufp->chgCData(oldp+522,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent),8);
        bufp->chgIData(oldp+523,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa),25);
        bufp->chgCData(oldp+524,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff),8);
        bufp->chgIData(oldp+525,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa),24);
        bufp->chgCData(oldp+526,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e),8);
        bufp->chgIData(oldp+527,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m),25);
        bufp->chgCData(oldp+528,((0xffU & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                                           - (0x1fU 
                                              & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__shift)))))),8);
        bufp->chgIData(oldp+529,((0x1ffffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                << 
                                                (0x1fU 
                                                 & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__shift)))))),25);
        bufp->chgIData(oldp+530,((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                  << 7U)),32);
        bufp->chgCData(oldp+531,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__shift),5);
        bufp->chgCData(oldp+532,((0x1fU & (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__shift)))),8);
        bufp->chgBit(oldp+533,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)))));
        bufp->chgCData(oldp+534,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0) 
                                   << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                               | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                              << 2U) 
                                             | (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                                  | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)) 
                                                 << 1U) 
                                                | (1U 
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
                                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))))),4);
        bufp->chgCData(oldp+535,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                                   << 3U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                              << 2U) 
                                             | (((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                                  | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                                     & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                                        | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                           & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))) 
                                                 << 1U) 
                                                | (1U 
                                                   & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
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
        bufp->chgBit(oldp+536,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
        bufp->chgBit(oldp+537,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0));
        bufp->chgBit(oldp+538,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
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
                                         | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
        bufp->chgBit(oldp+539,((1U & (((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
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
        bufp->chgBit(oldp+540,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                    | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                       & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+541,(((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
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
        bufp->chgBit(oldp+542,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                   | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+543,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                   & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))))));
        bufp->chgBit(oldp+544,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))));
        bufp->chgBit(oldp+545,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)))));
        bufp->chgSData(oldp+546,((0xff80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                             << 7U))),16);
        bufp->chgCData(oldp+547,(((4U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                         << 2U)) | 
                                  (3U & (- (IData)(
                                                   (1U 
                                                    & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m)))))),3);
        bufp->chgCData(oldp+548,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                   << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                              << 1U) 
                                             | (1U 
                                                & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
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
        bufp->chgBit(oldp+549,((1U & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m)));
        bufp->chgBit(oldp+550,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0));
        bufp->chgBit(oldp+551,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1));
        bufp->chgBit(oldp+552,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
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
                                      | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))));
        bufp->chgBit(oldp+553,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
        bufp->chgBit(oldp+554,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1))));
        bufp->chgCData(oldp+555,((0x80U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                           << 7U))),8);
        bufp->chgCData(oldp+556,((3U & (- (IData)((1U 
                                                   & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m))))),2);
        bufp->chgCData(oldp+557,((8U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                        << 3U))),4);
        bufp->chgCData(oldp+558,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                           >> 1U))),8);
        bufp->chgCData(oldp+559,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 4U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                         >> 2U)))))),2);
        bufp->chgCData(oldp+560,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 8U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                         >> 6U)))))),2);
        bufp->chgBit(oldp+561,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+562,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
        bufp->chgBit(oldp+563,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 4U) | 
                                         ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                          & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                             >> 2U)))))));
        bufp->chgBit(oldp+564,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                        >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                  & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                     >> 6U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                             >> 4U) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                  >> 2U))))))));
        bufp->chgBit(oldp+565,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+566,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+567,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 1U))),4);
        bufp->chgBit(oldp+568,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 1U))));
        bufp->chgBit(oldp+569,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 2U))));
        bufp->chgBit(oldp+570,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 3U))));
        bufp->chgBit(oldp+571,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 4U))));
        bufp->chgBit(oldp+572,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+573,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+574,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+575,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                         >> 2U)))));
        bufp->chgBit(oldp+576,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 4U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 2U))))));
        bufp->chgCData(oldp+577,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 5U))),4);
        bufp->chgBit(oldp+578,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 5U))));
        bufp->chgBit(oldp+579,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 6U))));
        bufp->chgBit(oldp+580,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 7U))));
        bufp->chgBit(oldp+581,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 8U))));
        bufp->chgBit(oldp+582,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+583,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+584,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+585,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                         >> 6U)))));
        bufp->chgBit(oldp+586,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 8U) | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                 & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 6U))))));
        bufp->chgSData(oldp+587,((0xffffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                             >> 9U))),16);
        bufp->chgCData(oldp+588,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1) 
                                   << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))) 
                                              << 1U) 
                                             | (1U 
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
                                                               >> 0xaU))))))))),3);
        bufp->chgCData(oldp+589,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                   << 2U) | ((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                               | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                                  & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                              << 1U) 
                                             | (1U 
                                                & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
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
        bufp->chgBit(oldp+590,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                 | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
        bufp->chgBit(oldp+591,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
        bufp->chgBit(oldp+592,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
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
                                                     >> 0xaU)))))))));
        bufp->chgBit(oldp+593,((1U & ((((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
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
                                                        >> 0xaU))))))))));
        bufp->chgBit(oldp+594,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))))));
        bufp->chgBit(oldp+595,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                 | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                    & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & ((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                         & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))))));
        bufp->chgBit(oldp+596,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))));
        bufp->chgBit(oldp+597,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)))));
        bufp->chgCData(oldp+598,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                           >> 9U))),8);
        bufp->chgCData(oldp+599,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 0xcU) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                         >> 0xaU)))))),2);
        bufp->chgCData(oldp+600,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 0x10U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                         >> 0xeU)))))),2);
        bufp->chgBit(oldp+601,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+602,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1));
        bufp->chgBit(oldp+603,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0xcU) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+604,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                        >> 0x10U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                           >> 0xeU))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                             >> 0xcU) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                  >> 0xaU))))))));
        bufp->chgBit(oldp+605,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+606,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+607,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 9U))),4);
        bufp->chgBit(oldp+608,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 9U))));
        bufp->chgBit(oldp+609,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0xaU))));
        bufp->chgBit(oldp+610,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0xbU))));
        bufp->chgBit(oldp+611,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0xcU))));
        bufp->chgBit(oldp+612,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+613,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+614,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+615,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+616,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 0xcU) | (
                                                   (~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0)) 
                                                   & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                      >> 0xaU))))));
        bufp->chgCData(oldp+617,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0xdU))),4);
        bufp->chgBit(oldp+618,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0xdU))));
        bufp->chgBit(oldp+619,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0xeU))));
        bufp->chgBit(oldp+620,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0xfU))));
        bufp->chgBit(oldp+621,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x10U))));
        bufp->chgBit(oldp+622,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+623,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+624,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+625,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+626,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 0x10U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0xeU))))));
        bufp->chgCData(oldp+627,((0xffU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                           >> 0x11U))),8);
        bufp->chgCData(oldp+628,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 0x14U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                         >> 0x12U)))))),2);
        bufp->chgCData(oldp+629,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                   << 1U) | (1U & (
                                                   (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                    >> 0x18U) 
                                                   | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                         >> 0x16U)))))),2);
        bufp->chgBit(oldp+630,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1))));
        bufp->chgBit(oldp+631,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
        bufp->chgBit(oldp+632,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                      & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0x14U) 
                                         | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                            & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+633,((1U & (((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                        >> 0x18U) | 
                                       ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                        & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                           >> 0x16U))) 
                                      | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                         & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                             >> 0x14U) 
                                            | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                               & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                                  >> 0x12U))))))));
        bufp->chgBit(oldp+634,(((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+635,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
                                | ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1)) 
                                   & (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)))));
        bufp->chgCData(oldp+636,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0x11U))),4);
        bufp->chgBit(oldp+637,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x11U))));
        bufp->chgBit(oldp+638,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x12U))));
        bufp->chgBit(oldp+639,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x13U))));
        bufp->chgBit(oldp+640,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x14U))));
        bufp->chgBit(oldp+641,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0));
        bufp->chgBit(oldp+642,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1));
        bufp->chgBit(oldp+643,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0))));
        bufp->chgBit(oldp+644,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+645,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 0x14U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0x12U))))));
        bufp->chgCData(oldp+646,((0xfU & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0x15U))),4);
        bufp->chgBit(oldp+647,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x15U))));
        bufp->chgBit(oldp+648,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x16U))));
        bufp->chgBit(oldp+649,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x17U))));
        bufp->chgBit(oldp+650,((1U & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                      >> 0x18U))));
        bufp->chgBit(oldp+651,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0));
        bufp->chgBit(oldp+652,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
        bufp->chgBit(oldp+653,(((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1) 
                                | (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0))));
        bufp->chgBit(oldp+654,((1U & ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                      & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+655,((1U & ((vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                       >> 0x18U) | 
                                      ((~ (IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__norm1__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0)) 
                                       & (vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+656,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_sign));
        bufp->chgBit(oldp+657,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_sign));
        bufp->chgBit(oldp+658,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_sign));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgIData(oldp+659,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__b_reciprocal),32);
        bufp->chgBit(oldp+660,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__a_sign));
        bufp->chgBit(oldp+661,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__b_sign));
        bufp->chgBit(oldp+662,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_sign));
        bufp->chgCData(oldp+663,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent),8);
        bufp->chgIData(oldp+664,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa),24);
        bufp->chgCData(oldp+665,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_exponent),8);
        bufp->chgIData(oldp+666,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_mantissa),24);
        bufp->chgCData(oldp+667,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent),8);
        bufp->chgIData(oldp+668,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa),25);
        bufp->chgQData(oldp+669,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product),48);
        bufp->chgCData(oldp+671,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e),8);
        bufp->chgQData(oldp+672,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m),48);
        bufp->chgCData(oldp+674,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e),8);
        bufp->chgQData(oldp+675,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgCData(oldp+677,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__a_exponent),8);
        bufp->chgIData(oldp+678,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__a_mantissa),24);
        bufp->chgCData(oldp+679,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__b_exponent),8);
        bufp->chgIData(oldp+680,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__b_mantissa),24);
        bufp->chgCData(oldp+681,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_exponent),8);
        bufp->chgIData(oldp+682,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_mantissa),25);
        bufp->chgQData(oldp+683,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__product),48);
        bufp->chgCData(oldp+685,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__i_e),8);
        bufp->chgQData(oldp+686,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__i_m),48);
        bufp->chgCData(oldp+688,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_e),8);
        bufp->chgQData(oldp+689,(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_m),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+691,(vlSelf->top__DOT__fpu_dut__DOT__o_sign));
        bufp->chgCData(oldp+692,(vlSelf->top__DOT__fpu_dut__DOT__o_exponent),8);
        bufp->chgIData(oldp+693,(vlSelf->top__DOT__fpu_dut__DOT__o_mantissa),25);
        bufp->chgIData(oldp+694,(vlSelf->top__DOT__fpu_dut__DOT__adder_a_in),32);
        bufp->chgIData(oldp+695,(vlSelf->top__DOT__fpu_dut__DOT__adder_b_in),32);
    }
    bufp->chgBit(oldp+696,(vlSelf->clk_i));
    bufp->chgIData(oldp+697,(vlSelf->A),32);
    bufp->chgIData(oldp+698,(vlSelf->B),32);
    bufp->chgCData(oldp+699,(vlSelf->opcode),2);
    bufp->chgIData(oldp+700,(vlSelf->O),32);
    bufp->chgCData(oldp+701,((0xffU & (vlSelf->A >> 0x17U))),8);
    bufp->chgIData(oldp+702,(vlSelf->top__DOT__fpu_dut__DOT__a_mantissa),24);
    bufp->chgCData(oldp+703,((0xffU & (vlSelf->B >> 0x17U))),8);
    bufp->chgIData(oldp+704,(vlSelf->top__DOT__fpu_dut__DOT__b_mantissa),24);
    bufp->chgIData(oldp+705,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_sign) 
                               << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_exponent) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__mult__DOT__o_mantissa)))),32);
    bufp->chgBit(oldp+706,((vlSelf->A >> 0x1fU)));
    bufp->chgBit(oldp+707,((vlSelf->B >> 0x1fU)));
    bufp->chgIData(oldp+708,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_sign) 
                               << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa)))),32);
    bufp->chgIData(oldp+709,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign) 
                               << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa)))),32);
    bufp->chgIData(oldp+710,((((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign) 
                               << 0x1fU) | (((IData)(vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & vlSelf->top__DOT__fpu_dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa)))),32);
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
