// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__adder__DOT__a_exponent) 
         == (IData)(vlSelf->top__DOT__adder__DOT__b_exponent))) {
        vlSelf->top__DOT__adder__DOT__result_exponent 
            = vlSelf->top__DOT__adder__DOT__a_exponent;
        if (((IData)(vlSelf->top__DOT__adder__DOT__a_sign) 
             == (IData)(vlSelf->top__DOT__adder__DOT__b_sign))) {
            vlSelf->top__DOT__adder__DOT__result_sign 
                = vlSelf->top__DOT__adder__DOT__a_sign;
            vlSelf->top__DOT__adder__DOT__result_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__adder__DOT__a_mantissa 
                                 + vlSelf->top__DOT__adder__DOT__b_mantissa));
        } else if ((vlSelf->top__DOT__adder__DOT__a_mantissa 
                    > vlSelf->top__DOT__adder__DOT__b_mantissa)) {
            vlSelf->top__DOT__adder__DOT__result_sign 
                = vlSelf->top__DOT__adder__DOT__a_sign;
            vlSelf->top__DOT__adder__DOT__result_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__adder__DOT__a_mantissa 
                                 - vlSelf->top__DOT__adder__DOT__b_mantissa));
        } else {
            vlSelf->top__DOT__adder__DOT__result_sign 
                = vlSelf->top__DOT__adder__DOT__b_sign;
            vlSelf->top__DOT__adder__DOT__result_mantissa 
                = (0x1ffffffU & (vlSelf->top__DOT__adder__DOT__b_mantissa 
                                 - vlSelf->top__DOT__adder__DOT__a_mantissa));
        }
    } else if (((IData)(vlSelf->top__DOT__adder__DOT__a_exponent) 
                > (IData)(vlSelf->top__DOT__adder__DOT__b_exponent))) {
        vlSelf->top__DOT__adder__DOT__diff = (0xffU 
                                              & ((IData)(vlSelf->top__DOT__adder__DOT__a_exponent) 
                                                 - (IData)(vlSelf->top__DOT__adder__DOT__b_exponent)));
        vlSelf->top__DOT__adder__DOT__result_sign = vlSelf->top__DOT__adder__DOT__a_sign;
        vlSelf->top__DOT__adder__DOT__result_exponent 
            = vlSelf->top__DOT__adder__DOT__a_exponent;
        vlSelf->top__DOT__adder__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->top__DOT__adder__DOT__diff))
                ? (0xffffffU & (vlSelf->top__DOT__adder__DOT__b_mantissa 
                                >> (IData)(vlSelf->top__DOT__adder__DOT__diff)))
                : 0U);
        vlSelf->top__DOT__adder__DOT__result_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__adder__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__adder__DOT__b_sign))
                              ? (vlSelf->top__DOT__adder__DOT__a_mantissa 
                                 + vlSelf->top__DOT__adder__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__adder__DOT__a_mantissa 
                                 - vlSelf->top__DOT__adder__DOT__tmp_mantissa)));
    } else {
        vlSelf->top__DOT__adder__DOT__diff = (0xffU 
                                              & ((IData)(vlSelf->top__DOT__adder__DOT__b_exponent) 
                                                 - (IData)(vlSelf->top__DOT__adder__DOT__a_exponent)));
        vlSelf->top__DOT__adder__DOT__result_sign = vlSelf->top__DOT__adder__DOT__b_sign;
        vlSelf->top__DOT__adder__DOT__result_exponent 
            = vlSelf->top__DOT__adder__DOT__b_exponent;
        vlSelf->top__DOT__adder__DOT__tmp_mantissa 
            = ((0x17U >= (IData)(vlSelf->top__DOT__adder__DOT__diff))
                ? (0xffffffU & (vlSelf->top__DOT__adder__DOT__a_mantissa 
                                >> (IData)(vlSelf->top__DOT__adder__DOT__diff)))
                : 0U);
        vlSelf->top__DOT__adder__DOT__result_mantissa 
            = (0x1ffffffU & (((IData)(vlSelf->top__DOT__adder__DOT__a_sign) 
                              == (IData)(vlSelf->top__DOT__adder__DOT__b_sign))
                              ? (vlSelf->top__DOT__adder__DOT__b_mantissa 
                                 + vlSelf->top__DOT__adder__DOT__tmp_mantissa)
                              : (vlSelf->top__DOT__adder__DOT__b_mantissa 
                                 - vlSelf->top__DOT__adder__DOT__tmp_mantissa)));
    }
    if ((0x1000000U & vlSelf->top__DOT__adder__DOT__result_mantissa)) {
        vlSelf->top__DOT__adder__DOT__result_exponent 
            = (1U ^ (IData)(vlSelf->top__DOT__adder__DOT__result_exponent));
        vlSelf->top__DOT__adder__DOT__result_mantissa 
            = (0x1ffffffU & (vlSelf->top__DOT__adder__DOT__result_mantissa 
                             >> 1U));
    }
    vlSelf->result_o = (((IData)(vlSelf->top__DOT__adder__DOT__result_sign) 
                         << 0x1fU) | (((IData)(vlSelf->top__DOT__adder__DOT__result_exponent) 
                                       << 0x17U) | 
                                      (0x7fffffU & vlSelf->top__DOT__adder__DOT__result_mantissa)));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->operand_a = VL_RAND_RESET_I(32);
    vlSelf->operand_b = VL_RAND_RESET_I(32);
    vlSelf->result_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__adder__DOT__a_exponent = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__adder__DOT__b_exponent = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__adder__DOT__result_exponent = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__adder__DOT__a_mantissa = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__adder__DOT__b_mantissa = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__adder__DOT__result_mantissa = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__adder__DOT__a_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__b_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder__DOT__tmp_mantissa = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__adder__DOT__in_e = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__adder__DOT__out_e = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__adder__DOT__in_m = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__adder__DOT__out_m = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__adder__DOT__diff = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
