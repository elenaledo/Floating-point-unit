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
    // Body
    if ((0U == (0xffU & (vlSelf->operand_b >> 0x17U)))) {
        vlSelf->top__DOT__divider__DOT__b_mantissa 
            = (0x7fffffU & vlSelf->operand_b);
        vlSelf->top__DOT__divider__DOT__b_exponent = 1U;
    } else {
        vlSelf->top__DOT__divider__DOT__b_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->operand_b));
        vlSelf->top__DOT__divider__DOT__b_exponent 
            = (0xffU & (vlSelf->operand_b >> 0x17U));
    }
    vlSelf->top__DOT__divider__DOT__b_sign = (vlSelf->operand_b 
                                              >> 0x1fU);
    if ((0U == (0xffU & (vlSelf->operand_a >> 0x17U)))) {
        vlSelf->top__DOT__divider__DOT__a_exponent = 1U;
        vlSelf->top__DOT__divider__DOT__a_mantissa 
            = (0x7fffffU & vlSelf->operand_a);
    } else {
        vlSelf->top__DOT__divider__DOT__a_exponent 
            = (0xffU & (vlSelf->operand_a >> 0x17U));
        vlSelf->top__DOT__divider__DOT__a_mantissa 
            = (0x800000U | (0x7fffffU & vlSelf->operand_a));
    }
    vlSelf->top__DOT__divider__DOT__a_sign = (vlSelf->operand_a 
                                              >> 0x1fU);
    vlSelf->div_result = ((((IData)(vlSelf->top__DOT__divider__DOT__a_sign) 
                            ^ (IData)(vlSelf->top__DOT__divider__DOT__b_sign)) 
                           << 0x1fU) | ((0x7f800000U 
                                         & (((IData)(0x7fU) 
                                             + ((IData)(vlSelf->top__DOT__divider__DOT__a_exponent) 
                                                - (IData)(vlSelf->top__DOT__divider__DOT__b_exponent))) 
                                            << 0x17U)) 
                                        | (0x7fffffU 
                                           & VL_DIV_III(24, vlSelf->top__DOT__divider__DOT__a_mantissa, vlSelf->top__DOT__divider__DOT__b_mantissa))));
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
}
#endif  // VL_DEBUG
