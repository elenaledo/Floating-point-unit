// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__a_mantissa = ((0U == 
                                               (0xffU 
                                                & (vlSelf->A 
                                                   >> 0x17U)))
                                               ? (0x7fffffU 
                                                  & vlSelf->A)
                                               : (0x800000U 
                                                  | (0x7fffffU 
                                                     & vlSelf->A)));
    vlSelf->top__DOT__dut__DOT__b_mantissa = ((0U == 
                                               (0xffU 
                                                & (vlSelf->B 
                                                   >> 0x17U)))
                                               ? (0x7fffffU 
                                                  & vlSelf->B)
                                               : (0x800000U 
                                                  | (0x7fffffU 
                                                     & vlSelf->B)));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Body
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__multiplier_a_in 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__M1__DOT__a_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__multiplier_a_in))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__M1__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__multiplier_a_in);
    } else {
        vlSelf->top__DOT__dut__DOT__M1__DOT__a_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__multiplier_a_in 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__M1__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__multiplier_a_in));
    }
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__multiplier_b_in 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__M1__DOT__b_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__multiplier_b_in))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__M1__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__multiplier_b_in);
    } else {
        vlSelf->top__DOT__dut__DOT__M1__DOT__b_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__multiplier_b_in 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__M1__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__multiplier_b_in));
    }
    vlSelf->top__DOT__dut__DOT__M1__DOT__o_exponent 
        = (0xffU & (((IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__a_exponent) 
                     + (IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__b_exponent)) 
                    - (IData)(0x7fU)));
    vlSelf->top__DOT__dut__DOT__M1__DOT__product = 
        (0xffffffffffffULL & ((QData)((IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__a_mantissa)) 
                              * (QData)((IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->top__DOT__dut__DOT__M1__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__o_exponent)));
        vlSelf->top__DOT__dut__DOT__M1__DOT__product 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__M1__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->top__DOT__dut__DOT__M1__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__o_exponent)))) {
        vlSelf->top__DOT__dut__DOT__M1__DOT__i_e = vlSelf->top__DOT__dut__DOT__M1__DOT__o_exponent;
        vlSelf->top__DOT__dut__DOT__M1__DOT__i_m = vlSelf->top__DOT__dut__DOT__M1__DOT__product;
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__M1__DOT__o_e;
        vlSelf->top__DOT__dut__DOT__M1__DOT__product 
            = vlSelf->top__DOT__dut__DOT__M1__DOT__o_m;
    }
    vlSelf->top__DOT__dut__DOT__M1__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->top__DOT__dut__DOT__M1__DOT__product 
                                >> 0x17U)));
    if ((1U == (0x3fU & (IData)((vlSelf->top__DOT__dut__DOT__M1__DOT__i_m 
                                 >> 0x29U))))) {
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_m = 
            (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__M1__DOT__i_m 
                                  << 5U));
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__i_e) 
                      - (IData)(5U)));
    } else if ((1U == (0x1fU & (IData)((vlSelf->top__DOT__dut__DOT__M1__DOT__i_m 
                                        >> 0x2aU))))) {
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_m = 
            (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__M1__DOT__i_m 
                                  << 4U));
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__i_e) 
                      - (IData)(4U)));
    } else if ((1U == (0xfU & (IData)((vlSelf->top__DOT__dut__DOT__M1__DOT__i_m 
                                       >> 0x2bU))))) {
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_m = 
            (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__M1__DOT__i_m 
                                  << 3U));
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__i_e) 
                      - (IData)(3U)));
    } else if ((1U == (7U & (IData)((vlSelf->top__DOT__dut__DOT__M1__DOT__i_m 
                                     >> 0x2cU))))) {
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_m = 
            (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__M1__DOT__i_m 
                                  << 2U));
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__i_e) 
                      - (IData)(2U)));
    } else if ((1U == (3U & (IData)((vlSelf->top__DOT__dut__DOT__M1__DOT__i_m 
                                     >> 0x2dU))))) {
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_m = 
            (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__M1__DOT__i_m 
                                  << 1U));
        vlSelf->top__DOT__dut__DOT__M1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__i_e) 
                      - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__A1__DOT__a_sign = (vlSelf->top__DOT__dut__DOT__adder_a_in 
                                                   >> 0x1fU);
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__adder_a_in 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__a_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__adder_a_in))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__A1__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__adder_a_in);
    } else {
        vlSelf->top__DOT__dut__DOT__A1__DOT__a_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__adder_a_in 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__adder_a_in));
    }
    vlSelf->top__DOT__dut__DOT__A1__DOT__b_sign = (vlSelf->top__DOT__dut__DOT__adder_b_in 
                                                   >> 0x1fU);
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__adder_b_in 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__b_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__adder_b_in))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__A1__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__adder_b_in);
    } else {
        vlSelf->top__DOT__dut__DOT__A1__DOT__b_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__adder_b_in 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__adder_b_in));
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__a_exponent) 
         == (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__A1__DOT__a_exponent;
        if (((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__a_sign) 
             == (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__b_sign))) {
            vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__a_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__A1__DOT__b_mantissa));
            vlSelf->top__DOT__dut__DOT__A1__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__A1__DOT__a_sign;
            vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa 
                = (0x1000000U | vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa);
        } else if ((vlSelf->top__DOT__dut__DOT__A1__DOT__a_mantissa 
                    > vlSelf->top__DOT__dut__DOT__A1__DOT__b_mantissa)) {
            vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__a_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__A1__DOT__b_mantissa));
            vlSelf->top__DOT__dut__DOT__A1__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__A1__DOT__a_sign;
        } else {
            vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__b_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__A1__DOT__a_mantissa));
            vlSelf->top__DOT__dut__DOT__A1__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__A1__DOT__b_sign;
        }
    } else if (((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__a_exponent) 
                > (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__A1__DOT__a_exponent;
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_sign 
            = vlSelf->top__DOT__dut__DOT__A1__DOT__a_sign;
        vlSelf->top__DOT__dut__DOT__A1__DOT__diff = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__a_exponent) 
                      - (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__b_exponent)));
        vlSelf->top__DOT__dut__DOT__A1__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__diff))
                ? (0xffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__b_mantissa 
                                >> (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__diff)))
                : 0U);
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__b_sign))
                              ? (vlSelf->top__DOT__dut__DOT__A1__DOT__a_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__A1__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__dut__DOT__A1__DOT__a_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__A1__DOT__tmp_mantissa)));
    } else if (((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__a_exponent) 
                < (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__A1__DOT__b_exponent;
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_sign 
            = vlSelf->top__DOT__dut__DOT__A1__DOT__b_sign;
        vlSelf->top__DOT__dut__DOT__A1__DOT__diff = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__b_exponent) 
                      - (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__a_exponent)));
        vlSelf->top__DOT__dut__DOT__A1__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__diff))
                ? (0xffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__a_mantissa 
                                >> (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__diff)))
                : 0U);
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__b_sign))
                              ? (vlSelf->top__DOT__dut__DOT__A1__DOT__b_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__A1__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__dut__DOT__A1__DOT__b_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__A1__DOT__tmp_mantissa)));
    }
    if ((0x1000000U & vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa)) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__o_exponent)));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa 
                             >> 1U));
    } else if (((~ (vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa 
                    >> 0x17U)) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__o_exponent)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__i_e = vlSelf->top__DOT__dut__DOT__A1__DOT__o_exponent;
        vlSelf->top__DOT__dut__DOT__A1__DOT__i_m = vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa;
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__A1__DOT__o_e;
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa 
            = vlSelf->top__DOT__dut__DOT__A1__DOT__o_m;
    }
    vlSelf->top__DOT__dut__DOT__adder_out = (((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__o_sign) 
                                              << 0x1fU) 
                                             | (((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__o_exponent) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & vlSelf->top__DOT__dut__DOT__A1__DOT__o_mantissa)));
    if ((1U == (0x1fffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                             >> 3U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 0x14U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(0x14U)));
    } else if ((1U == (0xfffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                   >> 4U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 0x13U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(0x13U)));
    } else if ((1U == (0x7ffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                   >> 5U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 0x12U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(0x12U)));
    } else if ((1U == (0x3ffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                   >> 6U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 0x11U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(0x11U)));
    } else if ((1U == (0x1ffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                   >> 7U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 0x10U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(0x10U)));
    } else if ((1U == (0xffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                  >> 8U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 0xfU));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(0xfU)));
    } else if ((1U == (0x7fffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                  >> 9U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 0xeU));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(0xeU)));
    } else if ((1U == (0x3fffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                  >> 0xaU)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 0xdU));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(0xdU)));
    } else if ((1U == (0x1fffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                  >> 0xbU)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 0xcU));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(0xcU)));
    } else if ((1U == (0xfffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                 >> 0xcU)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 0xbU));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(0xbU)));
    } else if ((1U == (0x7ffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                 >> 0xdU)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 0xaU));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(0xaU)));
    } else if ((1U == (0x3ffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                 >> 0xeU)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 9U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(9U)));
    } else if ((1U == (0x1ffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                 >> 0xfU)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 8U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(8U)));
    } else if ((1U == (0xffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                >> 0x10U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 7U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(7U)));
    } else if ((1U == (0x7fU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                >> 0x11U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 6U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(6U)));
    } else if ((1U == (0x3fU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                >> 0x12U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 5U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(5U)));
    } else if ((1U == (0x1fU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                                >> 0x13U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 4U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(4U)));
    } else if ((1U == (0xfU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                               >> 0x14U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 3U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(3U)));
    } else if ((1U == (7U & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                             >> 0x15U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 2U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(2U)));
    } else if ((1U == (3U & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                             >> 0x16U)))) {
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_m = 
            (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__A1__DOT__i_m 
                           << 1U));
        vlSelf->top__DOT__dut__DOT__A1__DOT__o_e = 
            (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__i_e) 
                      - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_exponent = 0x80U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_mantissa 
        = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__divider_b_in));
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent = 0x80U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product 
        = (0xffffffffffffULL & (0xf0f0f1ULL * (QData)((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m;
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__product 
                                >> 0x17U)));
    if ((1U == (0x3fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                 >> 0x29U))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                    << 5U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e) 
                        - (IData)(5U)));
    } else if ((1U == (0x1fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                        >> 0x2aU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                    << 4U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e) 
                        - (IData)(4U)));
    } else if ((1U == (0xfU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                       >> 0x2bU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                    << 3U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e) 
                        - (IData)(3U)));
    } else if ((1U == (7U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                     >> 0x2cU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                    << 2U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e) 
                        - (IData)(2U)));
    } else if ((1U == (3U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                     >> 0x2dU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_m 
                                    << 1U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__i_e) 
                        - (IData)(1U)));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0_in 
        = (((~ (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_sign)) 
            << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_mantissa)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign = 0U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent = 0x80U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa = 0xb4b4b5U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign 
        = (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0_in 
           >> 0x1fU);
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0_in 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0_in))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0_in);
    } else {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0_in 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0_in));
    }
    if ((0x80U == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent;
        if (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign) 
             == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign))) {
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa));
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign;
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                = (0x1000000U | vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa);
        } else if ((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                    > vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa)) {
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa));
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign;
        } else {
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa));
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign;
        }
    } else if (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent) 
                > (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent) 
                        - (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff))
                ? (0xffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
                                >> (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff)))
                : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign))
                              ? (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa)));
    } else if (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent) 
                < (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_exponent) 
                        - (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff))
                ? (0xffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_mantissa 
                                >> (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__diff)))
                : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_sign))
                              ? (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__b_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__tmp_mantissa)));
    }
    if ((0x1000000U & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa)) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                             >> 1U));
    } else if (((~ (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
                    >> 0x17U)) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m;
    }
    if ((1U == (0x1fffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             >> 3U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 0x14U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(0x14U)));
    } else if ((1U == (0xfffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 4U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 0x13U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(0x13U)));
    } else if ((1U == (0x7ffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 5U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 0x12U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(0x12U)));
    } else if ((1U == (0x3ffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 6U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 0x11U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(0x11U)));
    } else if ((1U == (0x1ffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                   >> 7U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 0x10U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(0x10U)));
    } else if ((1U == (0xffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                  >> 8U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 0xfU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(0xfU)));
    } else if ((1U == (0x7fffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                  >> 9U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 0xeU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(0xeU)));
    } else if ((1U == (0x3fffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                  >> 0xaU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 0xdU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(0xdU)));
    } else if ((1U == (0x1fffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                  >> 0xbU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 0xcU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(0xcU)));
    } else if ((1U == (0xfffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                 >> 0xcU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 0xbU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(0xbU)));
    } else if ((1U == (0x7ffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                 >> 0xdU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 0xaU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(0xaU)));
    } else if ((1U == (0x3ffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                 >> 0xeU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 9U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(9U)));
    } else if ((1U == (0x1ffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                 >> 0xfU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 8U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(8U)));
    } else if ((1U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                >> 0x10U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 7U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(7U)));
    } else if ((1U == (0x7fU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                >> 0x11U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 6U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(6U)));
    } else if ((1U == (0x3fU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                >> 0x12U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 5U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(5U)));
    } else if ((1U == (0x1fU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                                >> 0x13U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 4U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(4U)));
    } else if ((1U == (0xfU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                               >> 0x14U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 3U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(3U)));
    } else if ((1U == (7U & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             >> 0x15U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 2U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(2U)));
    } else if ((1U == (3U & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             >> 0x16U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_m 
                             << 1U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__i_e) 
                        - (IData)(1U)));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0 
        = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_mantissa)));
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_sign = 0U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_sign 
        = (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_sign;
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_exponent = 0x80U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_mantissa 
        = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__divider_b_in));
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0);
    } else {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_exponent)));
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__a_mantissa)) 
                                * (QData)((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m;
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__product 
                                >> 0x17U)));
    if ((1U == (0x3fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                 >> 0x29U))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                    << 5U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e) 
                        - (IData)(5U)));
    } else if ((1U == (0x1fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                        >> 0x2aU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                    << 4U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e) 
                        - (IData)(4U)));
    } else if ((1U == (0xfU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                       >> 0x2bU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                    << 3U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e) 
                        - (IData)(3U)));
    } else if ((1U == (7U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                     >> 0x2cU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                    << 2U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e) 
                        - (IData)(2U)));
    } else if ((1U == (3U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                     >> 0x2dU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_m 
                                    << 1U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__i_e) 
                        - (IData)(1U)));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b 
        = (((~ (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_sign)) 
            << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_mantissa)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign = 0U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent = 0x80U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa = 0x800000U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign 
        = (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b 
           >> 0x1fU);
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b);
    } else {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S1_2minDN0__b));
    }
    if ((0x80U == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent;
        if (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign) 
             == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign))) {
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa));
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign;
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                = (0x1000000U | vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa);
        } else if ((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                    > vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa)) {
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa));
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign;
        } else {
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa));
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign;
        }
    } else if (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent) 
                > (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent) 
                        - (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff))
                ? (0xffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
                                >> (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff)))
                : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign))
                              ? (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa)));
    } else if (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent) 
                < (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_exponent) 
                        - (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff))
                ? (0xffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_mantissa 
                                >> (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__diff)))
                : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_sign))
                              ? (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__b_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__tmp_mantissa)));
    }
    if ((0x1000000U & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa)) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                             >> 1U));
    } else if (((~ (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
                    >> 0x17U)) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m;
    }
    if ((1U == (0x1fffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             >> 3U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 0x14U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(0x14U)));
    } else if ((1U == (0xfffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 4U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 0x13U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(0x13U)));
    } else if ((1U == (0x7ffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 5U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 0x12U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(0x12U)));
    } else if ((1U == (0x3ffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 6U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 0x11U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(0x11U)));
    } else if ((1U == (0x1ffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                   >> 7U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 0x10U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(0x10U)));
    } else if ((1U == (0xffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                  >> 8U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 0xfU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(0xfU)));
    } else if ((1U == (0x7fffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                  >> 9U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 0xeU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(0xeU)));
    } else if ((1U == (0x3fffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                  >> 0xaU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 0xdU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(0xdU)));
    } else if ((1U == (0x1fffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                  >> 0xbU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 0xcU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(0xcU)));
    } else if ((1U == (0xfffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                 >> 0xcU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 0xbU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(0xbU)));
    } else if ((1U == (0x7ffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                 >> 0xdU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 0xaU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(0xaU)));
    } else if ((1U == (0x3ffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                 >> 0xeU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 9U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(9U)));
    } else if ((1U == (0x1ffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                 >> 0xfU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 8U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(8U)));
    } else if ((1U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                >> 0x10U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 7U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(7U)));
    } else if ((1U == (0x7fU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                >> 0x11U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 6U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(6U)));
    } else if ((1U == (0x3fU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                >> 0x12U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 5U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(5U)));
    } else if ((1U == (0x1fU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                                >> 0x13U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 4U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(4U)));
    } else if ((1U == (0xfU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                               >> 0x14U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 3U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(3U)));
    } else if ((1U == (7U & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             >> 0x15U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 2U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(2U)));
    } else if ((1U == (3U & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             >> 0x16U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_m 
                             << 1U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__i_e) 
                        - (IData)(1U)));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out 
        = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_mantissa)));
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_sign 
        = (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_sign 
        = (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_sign 
        = ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_sign) 
           ^ (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_sign));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__3\n"); );
    // Body
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0);
    } else {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N0));
    }
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out);
    } else {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2min_DN0_out));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent 
        = (0xffU & (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_exponent) 
                     + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_exponent)) 
                    - (IData)(0x7fU)));
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__a_mantissa)) 
                                * (QData)((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m;
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__product 
                                >> 0x17U)));
    if ((1U == (0x3fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                 >> 0x29U))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                    << 5U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e) 
                        - (IData)(5U)));
    } else if ((1U == (0x1fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                        >> 0x2aU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                    << 4U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e) 
                        - (IData)(4U)));
    } else if ((1U == (0xfU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                       >> 0x2bU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                    << 3U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e) 
                        - (IData)(3U)));
    } else if ((1U == (7U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                     >> 0x2cU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                    << 2U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e) 
                        - (IData)(2U)));
    } else if ((1U == (3U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                     >> 0x2dU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_m 
                                    << 1U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__i_e) 
                        - (IData)(1U)));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1 
        = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_mantissa)));
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_sign = 0U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_sign 
        = (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_sign;
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_exponent = 0x80U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_mantissa 
        = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__divider_b_in));
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1);
    } else {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_exponent)));
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__a_mantissa)) 
                                * (QData)((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m;
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__product 
                                >> 0x17U)));
    if ((1U == (0x3fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                 >> 0x29U))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                    << 5U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e) 
                        - (IData)(5U)));
    } else if ((1U == (0x1fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                        >> 0x2aU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                    << 4U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e) 
                        - (IData)(4U)));
    } else if ((1U == (0xfU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                       >> 0x2bU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                    << 3U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e) 
                        - (IData)(3U)));
    } else if ((1U == (7U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                     >> 0x2cU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                    << 2U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e) 
                        - (IData)(2U)));
    } else if ((1U == (3U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                     >> 0x2dU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_m 
                                    << 1U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__i_e) 
                        - (IData)(1U)));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b 
        = (((~ (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_sign)) 
            << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_mantissa)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign = 0U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent = 0x80U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa = 0x800000U;
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign 
        = (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b 
           >> 0x1fU);
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b);
    } else {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT____Vcellinp__S2_2minDN1__b));
    }
    if ((0x80U == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent;
        if (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign) 
             == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign))) {
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa));
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign;
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                = (0x1000000U | vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa);
        } else if ((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                    > vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa)) {
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa));
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign;
        } else {
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa));
            vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign 
                = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign;
        }
    } else if (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent) 
                > (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent) 
                        - (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff))
                ? (0xffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
                                >> (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff)))
                : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign))
                              ? (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa)));
    } else if (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent) 
                < (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_exponent) 
                        - (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff))
                ? (0xffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_mantissa 
                                >> (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__diff)))
                : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_sign))
                              ? (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
                                 + vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__b_mantissa 
                                 - vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__tmp_mantissa)));
    }
    if ((0x1000000U & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa)) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                             >> 1U));
    } else if (((~ (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
                    >> 0x17U)) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m;
    }
    if ((1U == (0x1fffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             >> 3U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 0x14U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(0x14U)));
    } else if ((1U == (0xfffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 4U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 0x13U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(0x13U)));
    } else if ((1U == (0x7ffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 5U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 0x12U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(0x12U)));
    } else if ((1U == (0x3ffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 6U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 0x11U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(0x11U)));
    } else if ((1U == (0x1ffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                   >> 7U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 0x10U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(0x10U)));
    } else if ((1U == (0xffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                  >> 8U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 0xfU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(0xfU)));
    } else if ((1U == (0x7fffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                  >> 9U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 0xeU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(0xeU)));
    } else if ((1U == (0x3fffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                  >> 0xaU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 0xdU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(0xdU)));
    } else if ((1U == (0x1fffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                  >> 0xbU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 0xcU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(0xcU)));
    } else if ((1U == (0xfffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                 >> 0xcU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 0xbU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(0xbU)));
    } else if ((1U == (0x7ffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                 >> 0xdU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 0xaU));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(0xaU)));
    } else if ((1U == (0x3ffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                 >> 0xeU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 9U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(9U)));
    } else if ((1U == (0x1ffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                 >> 0xfU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 8U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(8U)));
    } else if ((1U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                >> 0x10U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 7U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(7U)));
    } else if ((1U == (0x7fU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                >> 0x11U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 6U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(6U)));
    } else if ((1U == (0x3fU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                >> 0x12U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 5U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(5U)));
    } else if ((1U == (0x1fU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                                >> 0x13U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 4U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(4U)));
    } else if ((1U == (0xfU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                               >> 0x14U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 3U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(3U)));
    } else if ((1U == (7U & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             >> 0x15U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 2U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(2U)));
    } else if ((1U == (3U & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             >> 0x16U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
            = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_m 
                             << 1U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__i_e) 
                        - (IData)(1U)));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1_out 
        = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_sign) 
            << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_exponent) 
                          << 0x17U) | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_mantissa)));
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_sign 
        = (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_sign 
        = (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1_out 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_sign 
        = ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_sign) 
           ^ (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_sign));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__6\n"); );
    // Body
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1);
    } else {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__N1));
    }
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1_out 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1_out))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1_out);
    } else {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1_out 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1_out));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent 
        = (0xffU & (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_exponent) 
                     + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_exponent)) 
                    - (IData)(0x7fU)));
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__a_mantissa)) 
                                * (QData)((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e;
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m;
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__product 
                                >> 0x17U)));
    if ((1U == (0x3fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                 >> 0x29U))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                    << 5U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e) 
                        - (IData)(5U)));
    } else if ((1U == (0x1fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                        >> 0x2aU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                    << 4U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e) 
                        - (IData)(4U)));
    } else if ((1U == (0xfU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                       >> 0x2bU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                    << 3U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e) 
                        - (IData)(3U)));
    } else if ((1U == (7U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                     >> 0x2cU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                    << 2U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e) 
                        - (IData)(2U)));
    } else if ((1U == (3U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                     >> 0x2dU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_m 
                                    << 1U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__i_e) 
                        - (IData)(1U)));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__b_reciprocal 
        = ((0x80000000U & vlSelf->top__DOT__dut__DOT__divider_b_in) 
           | ((0x7f800000U & (((IData)(1U) - (vlSelf->top__DOT__dut__DOT__divider_b_in 
                                              >> 0x17U)) 
                              << 0x17U)) | (0x7fffffU 
                                            & vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_mantissa)));
    vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__a_sign 
        = (vlSelf->top__DOT__dut__DOT__divider_a_in 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__b_sign 
        = (vlSelf->top__DOT__dut__DOT__D1__DOT__b_reciprocal 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_sign 
        = ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__a_sign) 
           ^ (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__b_sign));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__7\n"); );
    // Body
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__divider_a_in 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__a_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__divider_a_in))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__divider_a_in);
    } else {
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__a_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__divider_a_in 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__divider_a_in));
    }
    if ((0U == (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__b_reciprocal 
                         >> 0x17U)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__b_exponent 
            = ((0U != (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__b_reciprocal))
                ? 1U : 0U);
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__b_reciprocal);
    } else {
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__b_exponent 
            = (0xffU & (vlSelf->top__DOT__dut__DOT__D1__DOT__b_reciprocal 
                        >> 0x17U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->top__DOT__dut__DOT__D1__DOT__b_reciprocal));
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_exponent 
        = (0xffU & (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__a_exponent) 
                     + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__b_exponent)) 
                    - (IData)(0x7fU)));
    vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__product 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__a_mantissa)) 
                                * (QData)((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__b_mantissa))));
    if ((1U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__product 
                       >> 0x2fU)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_exponent)));
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__product 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__product 
                                    >> 1U));
    } else if (((~ (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__product 
                            >> 0x2eU))) & (0U != (IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_exponent)))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_e 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_exponent;
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__product;
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_exponent 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e;
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__product 
            = vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m;
    }
    vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_mantissa 
        = (0xffffffU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__product 
                                >> 0x17U)));
    if ((1U == (0x3fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m 
                                 >> 0x29U))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m 
                                    << 5U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_e) 
                        - (IData)(5U)));
    } else if ((1U == (0x1fU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m 
                                        >> 0x2aU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m 
                                    << 4U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_e) 
                        - (IData)(4U)));
    } else if ((1U == (0xfU & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m 
                                       >> 0x2bU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m 
                                    << 3U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_e) 
                        - (IData)(3U)));
    } else if ((1U == (7U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m 
                                     >> 0x2cU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m 
                                    << 2U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_e) 
                        - (IData)(2U)));
    } else if ((1U == (3U & (IData)((vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m 
                                     >> 0x2dU))))) {
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m 
            = (0xffffffffffffULL & (vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_m 
                                    << 1U));
        vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e 
            = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__i_e) 
                        - (IData)(1U)));
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        Vtop___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        Vtop___024root___act_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U))) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U)) 
         | vlSelf->__VactTriggered.at(4U))) {
        Vtop___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U)) 
          | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(5U))) {
        Vtop___024root___act_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U)) 
           | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(6U))) {
        Vtop___024root___act_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U)) 
            | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(5U)) 
          | vlSelf->__VactTriggered.at(6U)) | vlSelf->__VactTriggered.at(7U))) {
        Vtop___024root___act_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if (((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U)) 
             | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(5U)) 
           | vlSelf->__VactTriggered.at(6U)) | vlSelf->__VactTriggered.at(7U)) 
         | vlSelf->__VactTriggered.at(8U))) {
        Vtop___024root___act_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U)) 
              | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(5U)) 
            | vlSelf->__VactTriggered.at(6U)) | vlSelf->__VactTriggered.at(7U)) 
          | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(9U))) {
        Vtop___024root___act_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if (((((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U)) 
               | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(5U)) 
             | vlSelf->__VactTriggered.at(6U)) | vlSelf->__VactTriggered.at(7U)) 
           | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(9U)) 
         | vlSelf->__VactTriggered.at(0xaU))) {
        Vtop___024root___act_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (((IData)(((0x7f800000U == (0x7f800000U & vlSelf->A)) 
                  & (0U != vlSelf->top__DOT__dut__DOT__a_mantissa))) 
         | (IData)(((0U == (0x7f800000U & vlSelf->B)) 
                    & (0U == vlSelf->top__DOT__dut__DOT__b_mantissa))))) {
        vlSelf->top__DOT__dut__DOT__o_sign = (1U & 
                                              (vlSelf->A 
                                               >> 0x1fU));
        vlSelf->top__DOT__dut__DOT__o_exponent = (0xffU 
                                                  & (vlSelf->A 
                                                     >> 0x17U));
        vlSelf->top__DOT__dut__DOT__o_mantissa = vlSelf->top__DOT__dut__DOT__a_mantissa;
    } else if (((IData)(((0x7f800000U == (0x7f800000U 
                                          & vlSelf->B)) 
                         & (0U != vlSelf->top__DOT__dut__DOT__b_mantissa))) 
                | (IData)(((0U == (0x7f800000U & vlSelf->A)) 
                           & (0U == vlSelf->top__DOT__dut__DOT__a_mantissa))))) {
        vlSelf->top__DOT__dut__DOT__o_sign = (1U & 
                                              (vlSelf->B 
                                               >> 0x1fU));
        vlSelf->top__DOT__dut__DOT__o_exponent = (0xffU 
                                                  & (vlSelf->B 
                                                     >> 0x17U));
        vlSelf->top__DOT__dut__DOT__o_mantissa = vlSelf->top__DOT__dut__DOT__b_mantissa;
    } else if (((0xffU == (0xffU & (vlSelf->A >> 0x17U))) 
                | (0xffU == (0xffU & (vlSelf->B >> 0x17U))))) {
        vlSelf->top__DOT__dut__DOT__o_sign = (1U & 
                                              ((vlSelf->A 
                                                ^ vlSelf->B) 
                                               >> 0x1fU));
        vlSelf->top__DOT__dut__DOT__o_exponent = (0xffU 
                                                  & 0xffU);
        vlSelf->top__DOT__dut__DOT__o_mantissa = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__o_sign = (1U & 
                                              (vlSelf->top__DOT__dut__DOT__adder_out 
                                               >> 0x1fU));
        vlSelf->top__DOT__dut__DOT__o_exponent = (0xffU 
                                                  & (vlSelf->top__DOT__dut__DOT__adder_out 
                                                     >> 0x17U));
        vlSelf->top__DOT__dut__DOT__o_mantissa = (0x7fffffU 
                                                  & vlSelf->top__DOT__dut__DOT__adder_out);
    }
    if ((1U & (~ ((IData)(((0x7f800000U == (0x7f800000U 
                                            & vlSelf->A)) 
                           & (0U != vlSelf->top__DOT__dut__DOT__a_mantissa))) 
                  | (IData)(((0U == (0x7f800000U & vlSelf->B)) 
                             & (0U == vlSelf->top__DOT__dut__DOT__b_mantissa))))))) {
        if ((1U & (~ ((IData)(((0x7f800000U == (0x7f800000U 
                                                & vlSelf->B)) 
                               & (0U != vlSelf->top__DOT__dut__DOT__b_mantissa))) 
                      | (IData)(((0U == (0x7f800000U 
                                         & vlSelf->A)) 
                                 & (0U == vlSelf->top__DOT__dut__DOT__a_mantissa))))))) {
            if ((1U & (~ ((0xffU == (0xffU & (vlSelf->A 
                                              >> 0x17U))) 
                          | (0xffU == (0xffU & (vlSelf->B 
                                                >> 0x17U))))))) {
                vlSelf->top__DOT__dut__DOT__adder_b_in 
                    = (((~ (vlSelf->B >> 0x1fU)) << 0x1fU) 
                       | (0x7fffffffU & vlSelf->B));
                vlSelf->top__DOT__dut__DOT__adder_a_in 
                    = vlSelf->A;
            }
        }
    }
    vlSelf->O = (((IData)(vlSelf->top__DOT__dut__DOT__o_sign) 
                  << 0x1fU) | (((IData)(vlSelf->top__DOT__dut__DOT__o_exponent) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->top__DOT__dut__DOT__o_mantissa)));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(0xbU))) {
        Vtop___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<12> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
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
                    VL_FATAL_MT("top.sv", 3, "", "Active region did not converge.");
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
                VL_FATAL_MT("top.sv", 3, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->opcode & 0xfcU))) {
        Verilated::overWidthError("opcode");}
}
#endif  // VL_DEBUG
