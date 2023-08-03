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
    if (((0xffU & (vlSelf->operand_a >> 0x17U)) == 
         (0xffU & (vlSelf->operand_b >> 0x17U)))) {
        if (((0x7fffffU & vlSelf->operand_a) == (0x7fffffU 
                                                 & vlSelf->operand_b))) {
            if ((0U == ((vlSelf->operand_a ^ vlSelf->operand_b) 
                        >> 0x1fU))) {
                vlSelf->less_equal = 1U;
                vlSelf->equal = 1U;
                vlSelf->less = 0U;
                vlSelf->min = vlSelf->operand_a;
                vlSelf->max = vlSelf->operand_a;
            } else if ((1U == ((vlSelf->operand_a ^ vlSelf->operand_b) 
                               >> 0x1fU))) {
                if ((vlSelf->operand_a >> 0x1fU)) {
                    vlSelf->less_equal = 1U;
                    vlSelf->equal = 0U;
                    vlSelf->less = 1U;
                    vlSelf->min = vlSelf->operand_a;
                    vlSelf->max = vlSelf->operand_b;
                } else {
                    vlSelf->less_equal = 0U;
                    vlSelf->equal = 0U;
                    vlSelf->less = 0U;
                    vlSelf->min = vlSelf->operand_b;
                    vlSelf->max = vlSelf->operand_a;
                }
            }
        }
    } else {
        if (((0xffU & (vlSelf->operand_a >> 0x17U)) 
             > (0xffU & (vlSelf->operand_b >> 0x17U)))) {
            if ((vlSelf->operand_a >> 0x1fU)) {
                vlSelf->less_equal = 1U;
                vlSelf->less = 1U;
                vlSelf->min = vlSelf->operand_a;
                vlSelf->max = vlSelf->operand_b;
            } else {
                vlSelf->less_equal = 0U;
                vlSelf->less = 0U;
                vlSelf->min = vlSelf->operand_b;
                vlSelf->max = vlSelf->operand_a;
            }
        } else {
            vlSelf->less_equal = (1U & (~ (vlSelf->operand_b 
                                           >> 0x1fU)));
            vlSelf->less = (1U & (~ (vlSelf->operand_b 
                                     >> 0x1fU)));
            if ((vlSelf->operand_a >> 0x1fU)) {
                vlSelf->min = vlSelf->operand_b;
                vlSelf->max = vlSelf->operand_a;
            } else {
                vlSelf->min = vlSelf->operand_a;
                vlSelf->max = vlSelf->operand_b;
            }
        }
        vlSelf->equal = 0U;
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
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
