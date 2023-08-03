// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__top__DOT__adder__DOT__result_exponent;
    IData/*24:0*/ __Vdly__top__DOT__adder__DOT__result_mantissa;
    // Body
    __Vdly__top__DOT__adder__DOT__result_exponent = vlSelf->top__DOT__adder__DOT__result_exponent;
    __Vdly__top__DOT__adder__DOT__result_mantissa = vlSelf->top__DOT__adder__DOT__result_mantissa;
    if (((IData)(vlSelf->top__DOT__adder__DOT__a_exponent) 
         == (IData)(vlSelf->top__DOT__adder__DOT__b_exponent))) {
        __Vdly__top__DOT__adder__DOT__result_exponent 
            = vlSelf->top__DOT__adder__DOT__a_exponent;
        __Vdly__top__DOT__adder__DOT__result_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__adder__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__adder__DOT__b_sign))
                              ? (vlSelf->top__DOT__adder__DOT__a_mantissa 
                                 + vlSelf->top__DOT__adder__DOT__b_mantissa)
                              : ((vlSelf->top__DOT__adder__DOT__a_mantissa 
                                  > vlSelf->top__DOT__adder__DOT__b_mantissa)
                                  ? (vlSelf->top__DOT__adder__DOT__a_mantissa 
                                     - vlSelf->top__DOT__adder__DOT__b_mantissa)
                                  : (vlSelf->top__DOT__adder__DOT__b_mantissa 
                                     - vlSelf->top__DOT__adder__DOT__a_mantissa))));
    } else if (((IData)(vlSelf->top__DOT__adder__DOT__a_exponent) 
                > (IData)(vlSelf->top__DOT__adder__DOT__b_exponent))) {
        __Vdly__top__DOT__adder__DOT__result_exponent 
            = vlSelf->top__DOT__adder__DOT__a_exponent;
        __Vdly__top__DOT__adder__DOT__result_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__adder__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__adder__DOT__b_sign))
                              ? (vlSelf->top__DOT__adder__DOT__a_mantissa 
                                 + vlSelf->top__DOT__adder__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__adder__DOT__a_mantissa 
                                 - vlSelf->top__DOT__adder__DOT__tmp_mantissa)));
    } else {
        __Vdly__top__DOT__adder__DOT__result_exponent 
            = vlSelf->top__DOT__adder__DOT__b_exponent;
        __Vdly__top__DOT__adder__DOT__result_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__adder__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__adder__DOT__b_sign))
                              ? (vlSelf->top__DOT__adder__DOT__b_mantissa 
                                 + vlSelf->top__DOT__adder__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__adder__DOT__b_mantissa 
                                 - vlSelf->top__DOT__adder__DOT__tmp_mantissa)));
    }
    if ((0x1000000U & vlSelf->top__DOT__adder__DOT__result_mantissa)) {
        __Vdly__top__DOT__adder__DOT__result_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__adder__DOT__result_exponent)));
        __Vdly__top__DOT__adder__DOT__result_mantissa 
            = (0x1ffffffU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                             >> 1U));
    }
    vlSelf->result_o = (((IData)(vlSelf->top__DOT__adder__DOT__result_sign) 
                         << 0x1fU) | (((IData)(vlSelf->top__DOT__adder__DOT__postnor_exp) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((4U & (IData)(vlSelf->rmode))
                                         ? ((2U & (IData)(vlSelf->rmode))
                                             ? (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                >> 2U)
                                             : ((1U 
                                                 & (IData)(vlSelf->rmode))
                                                 ? 
                                                (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                 >> 2U)
                                                 : 
                                                ((IData)(1U) 
                                                 + 
                                                 (vlSelf->top__DOT__adder__DOT__postnor_mant 
                                                  >> 2U))))
                                         : ((2U & (IData)(vlSelf->rmode))
                                             ? ((1U 
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
                                             : ((1U 
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
                                                  >> 2U))))))));
    vlSelf->top__DOT__adder__DOT__result_sign = (((IData)(vlSelf->top__DOT__adder__DOT__a_exponent) 
                                                  == (IData)(vlSelf->top__DOT__adder__DOT__b_exponent))
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__adder__DOT__a_sign) 
                                                   == (IData)(vlSelf->top__DOT__adder__DOT__b_sign))
                                                   ? (IData)(vlSelf->top__DOT__adder__DOT__a_sign)
                                                   : 
                                                  ((vlSelf->top__DOT__adder__DOT__a_mantissa 
                                                    > vlSelf->top__DOT__adder__DOT__b_mantissa)
                                                    ? (IData)(vlSelf->top__DOT__adder__DOT__a_sign)
                                                    : (IData)(vlSelf->top__DOT__adder__DOT__b_sign)))
                                                  : 
                                                 (((IData)(vlSelf->top__DOT__adder__DOT__a_exponent) 
                                                   > (IData)(vlSelf->top__DOT__adder__DOT__b_exponent))
                                                   ? (IData)(vlSelf->top__DOT__adder__DOT__a_sign)
                                                   : (IData)(vlSelf->top__DOT__adder__DOT__b_sign)));
    vlSelf->top__DOT__adder__DOT__result_exponent = __Vdly__top__DOT__adder__DOT__result_exponent;
    vlSelf->top__DOT__adder__DOT__result_mantissa = __Vdly__top__DOT__adder__DOT__result_mantissa;
    if (((IData)(vlSelf->top__DOT__adder__DOT__a_exponent) 
         != (IData)(vlSelf->top__DOT__adder__DOT__b_exponent))) {
        if (((IData)(vlSelf->top__DOT__adder__DOT__a_exponent) 
             > (IData)(vlSelf->top__DOT__adder__DOT__b_exponent))) {
            vlSelf->top__DOT__adder__DOT__tmp_mantissa 
                = (0xffffffU & ((0x17U >= (IData)(vlSelf->top__DOT__adder__DOT__diff))
                                 ? (vlSelf->top__DOT__adder__DOT__b_mantissa 
                                    >> (IData)(vlSelf->top__DOT__adder__DOT__diff))
                                 : 0U));
            vlSelf->top__DOT__adder__DOT__diff = (0xffU 
                                                  & ((IData)(vlSelf->top__DOT__adder__DOT__a_exponent) 
                                                     - (IData)(vlSelf->top__DOT__adder__DOT__b_exponent)));
        } else {
            vlSelf->top__DOT__adder__DOT__tmp_mantissa 
                = (0xffffffU & ((0x17U >= (IData)(vlSelf->top__DOT__adder__DOT__diff))
                                 ? (vlSelf->top__DOT__adder__DOT__a_mantissa 
                                    >> (IData)(vlSelf->top__DOT__adder__DOT__diff))
                                 : 0U));
            vlSelf->top__DOT__adder__DOT__diff = (0xffU 
                                                  & ((IData)(vlSelf->top__DOT__adder__DOT__b_exponent) 
                                                     - (IData)(vlSelf->top__DOT__adder__DOT__a_exponent)));
        }
    }
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1 
        = (IData)((0U != (0x600U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0 
        = (IData)((0U != (0x1800U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1 
        = (IData)((0U != (6U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1 
        = (IData)((0U != (0x6000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1 
        = (IData)((0U != (0x60000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0 
        = (IData)((0U != (0x18U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0 
        = (IData)((0U != (0x18000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0 
        = (IData)((0U != (0x180000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1 
        = (IData)((0U != (0x60U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1 
        = (IData)((0U != (0x600000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0 
        = (IData)((0U != (0x180U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0 
        = (IData)((0U != (0x1800000U & vlSelf->top__DOT__adder__DOT__result_mantissa)));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1 
        = ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s0) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_1__DOT__s1));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1 
        = ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1 
        = ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s1));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0 
        = (((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1)) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0 
        = (((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s0) 
            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_0__DOT__s1)) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1));
    vlSelf->top__DOT__adder__DOT__a_sign = (vlSelf->operand_a 
                                            >> 0x1fU);
    vlSelf->top__DOT__adder__DOT__b_sign = (vlSelf->operand_b 
                                            >> 0x1fU);
    if ((0U == (0xffU & (vlSelf->operand_a >> 0x17U)))) {
        vlSelf->top__DOT__adder__DOT__a_mantissa = 
            (0x7fffffU & vlSelf->operand_a);
        vlSelf->top__DOT__adder__DOT__a_exponent = 
            (0xffU & ((0U != (0x7fffffU & vlSelf->operand_a))
                       ? 1U : 0U));
    } else {
        vlSelf->top__DOT__adder__DOT__a_mantissa = 
            (0x800000U | (0x7fffffU & vlSelf->operand_a));
        vlSelf->top__DOT__adder__DOT__a_exponent = 
            (0xffU & (vlSelf->operand_a >> 0x17U));
    }
    if ((0U == (0xffU & (vlSelf->operand_b >> 0x17U)))) {
        vlSelf->top__DOT__adder__DOT__b_mantissa = 
            (0x7fffffU & vlSelf->operand_b);
        vlSelf->top__DOT__adder__DOT__b_exponent = 
            (0xffU & ((0U != (0x7fffffU & vlSelf->operand_b))
                       ? 1U : 0U));
    } else {
        vlSelf->top__DOT__adder__DOT__b_mantissa = 
            (0x800000U | (0x7fffffU & vlSelf->operand_b));
        vlSelf->top__DOT__adder__DOT__b_exponent = 
            (0xffU & (vlSelf->operand_b >> 0x17U));
    }
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1 
        = (1U & ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0)) 
                 & vlSelf->top__DOT__adder__DOT__result_mantissa));
    vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0 
        = ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s0) 
             | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__lzc_4_comp_0__DOT__s1)) 
            | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1)) 
           | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0));
    vlSelf->top__DOT__adder__DOT__norm__DOT__shift 
        = (((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0) 
            << 4U) | ((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0) 
                        | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                           & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__s0))) 
                       << 3U) | (((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__v1) 
                                    | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__s0)) 
                                       & (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_0__DOT__v1))) 
                                   | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                      & ((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__lzc_8_comp_1__DOT__v1) 
                                         | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))) 
                                  << 2U) | ((((((IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__lzc_8_comp_1__DOT__lzc_4_comp_1__DOT__s0) 
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
                                                    | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))) 
                                             << 1U) 
                                            | (1U & 
                                               (((((vlSelf->top__DOT__adder__DOT__result_mantissa 
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
                                                                   >> 0xaU))))))) 
                                                | ((~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_1__DOT__s0)) 
                                                   & ((((vlSelf->top__DOT__adder__DOT__result_mantissa 
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
                                                      | (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__lzc32__DOT__lzc_16_comp_0__DOT__s1)))))))));
    vlSelf->top__DOT__grs = (7U & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                   << (0x1fU & (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__shift)))));
    vlSelf->top__DOT__adder__DOT__postnor_exp = (0xffU 
                                                 & ((IData)(vlSelf->top__DOT__adder__DOT__result_exponent) 
                                                    - 
                                                    (0x1fU 
                                                     & (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__shift)))));
    vlSelf->top__DOT__adder__DOT__postnor_mant = (0x1ffffffU 
                                                  & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                                     << 
                                                     (0x1fU 
                                                      & (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__shift)))));
    vlSelf->top__DOT__rounder__DOT__sticky = (1U & 
                                              (vlSelf->top__DOT__adder__DOT__result_mantissa 
                                               << (0x1fU 
                                                   & (~ (IData)(vlSelf->top__DOT__adder__DOT__norm__DOT__shift)))));
    vlSelf->top__DOT__rounder__DOT____VdfgTmp_h028a8c76__0 
        = (1U & (IData)(((0U != (6U & vlSelf->top__DOT__adder__DOT__postnor_mant)) 
                         | (IData)(vlSelf->top__DOT__rounder__DOT__sticky))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top.sv", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rmode & 0xf8U))) {
        Verilated::overWidthError("rmode");}
}
#endif  // VL_DEBUG
