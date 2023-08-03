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
    vlSelf->top__DOT__exception_dut__DOT__a_nan = (IData)(
                                                          ((0x7f800000U 
                                                            == 
                                                            (0x7f800000U 
                                                             & vlSelf->fp_operand_a)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & vlSelf->fp_operand_a))));
    vlSelf->top__DOT__exception_dut__DOT__a_inf = (IData)(
                                                          (0x7f800000U 
                                                           == 
                                                           (0x7fffffffU 
                                                            & vlSelf->fp_operand_a)));
    vlSelf->top__DOT__exception_dut__DOT__a_zero = (IData)(
                                                           (0U 
                                                            == 
                                                            (0x7fffffffU 
                                                             & vlSelf->fp_operand_a)));
    vlSelf->top__DOT__exception_dut__DOT__b_nan = (IData)(
                                                          ((0x7f800000U 
                                                            == 
                                                            (0x7f800000U 
                                                             & vlSelf->fp_operand_b)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & vlSelf->fp_operand_b))));
    vlSelf->top__DOT__exception_dut__DOT__b_zero = (IData)(
                                                           (0U 
                                                            == 
                                                            (0x7fffffffU 
                                                             & vlSelf->fp_operand_b)));
    vlSelf->top__DOT__exception_dut__DOT__b_inf = (IData)(
                                                          (0x7f800000U 
                                                           == 
                                                           (0x7fffffffU 
                                                            & vlSelf->fp_operand_b)));
    vlSelf->top__DOT__exception_dut__DOT__c_inf = (IData)(
                                                          (0x7f800000U 
                                                           == 
                                                           (0x7fffffffU 
                                                            & vlSelf->fp_operand_c)));
    vlSelf->top__DOT__exception_dut__DOT__c_nan = (IData)(
                                                          ((0x7f800000U 
                                                            == 
                                                            (0x7f800000U 
                                                             & vlSelf->fp_operand_c)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & vlSelf->fp_operand_c))));
    vlSelf->top__DOT__exception_dut__DOT__f_ab_inf 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelf->fp_f_ab)));
    vlSelf->top__DOT__exception_dut__DOT__f_ab_dnr 
        = (IData)(((0U == (0x7f800000U & vlSelf->fp_f_ab)) 
                   & (0U != (0x7fffffU & vlSelf->fp_f_ab))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

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
    if ((0x10U & (IData)(vlSelf->opcode))) {
        vlSelf->inexact = (1U & (IData)((0U == (0xeU 
                                                & (IData)(vlSelf->opcode)))));
        vlSelf->underflow = 0U;
        vlSelf->overflow = (IData)(((0U == (0xeU & (IData)(vlSelf->opcode))) 
                                    & ((1U & (IData)(vlSelf->opcode))
                                        ? ((IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf) 
                                           | (((~ (
                                                   (vlSelf->fp_f_ab 
                                                    ^ vlSelf->fp_operand_c) 
                                                   >> 0x1fU)) 
                                               & (IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf)) 
                                              & (IData)(vlSelf->top__DOT__exception_dut__DOT__c_inf)))
                                        : ((IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf) 
                                           | (((~ (
                                                   (vlSelf->fp_f_ab 
                                                    ^ vlSelf->fp_operand_c) 
                                                   >> 0x1fU)) 
                                               & (IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf)) 
                                              & (IData)(vlSelf->top__DOT__exception_dut__DOT__c_inf))))));
        vlSelf->invalid = (1U & ((8U & (IData)(vlSelf->opcode))
                                  ? (((IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan) 
                                      | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                     | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan))
                                  : ((4U & (IData)(vlSelf->opcode))
                                      ? (((IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan) 
                                          | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                         | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan))
                                      : ((2U & (IData)(vlSelf->opcode))
                                          ? (((IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan) 
                                              | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                             | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan))
                                          : ((1U & (IData)(vlSelf->opcode))
                                              ? (((
                                                   (((IData)(vlSelf->top__DOT__exception_dut__DOT__a_inf) 
                                                     & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_zero)) 
                                                    | ((IData)(vlSelf->top__DOT__exception_dut__DOT__a_zero) 
                                                       & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_inf))) 
                                                   | (IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan)) 
                                                  | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                                 | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan))
                                              : (((
                                                   (((IData)(vlSelf->top__DOT__exception_dut__DOT__a_inf) 
                                                     & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_zero)) 
                                                    | ((IData)(vlSelf->top__DOT__exception_dut__DOT__a_zero) 
                                                       & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_inf))) 
                                                   | (IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan)) 
                                                  | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                                 | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan)))))));
    } else if ((8U & (IData)(vlSelf->opcode))) {
        vlSelf->inexact = (1U & (IData)((6U == (6U 
                                                & (IData)(vlSelf->opcode)))));
        vlSelf->underflow = 0U;
        vlSelf->overflow = (IData)(((6U == (6U & (IData)(vlSelf->opcode))) 
                                    & ((1U & (IData)(vlSelf->opcode))
                                        ? ((IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf) 
                                           | (((~ (
                                                   (vlSelf->fp_f_ab 
                                                    ^ vlSelf->fp_operand_c) 
                                                   >> 0x1fU)) 
                                               & (IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf)) 
                                              & (IData)(vlSelf->top__DOT__exception_dut__DOT__c_inf)))
                                        : ((IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf) 
                                           | (((~ (
                                                   (vlSelf->fp_f_ab 
                                                    ^ vlSelf->fp_operand_c) 
                                                   >> 0x1fU)) 
                                               & (IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf)) 
                                              & (IData)(vlSelf->top__DOT__exception_dut__DOT__c_inf))))));
        vlSelf->invalid = (1U & ((4U & (IData)(vlSelf->opcode))
                                  ? ((2U & (IData)(vlSelf->opcode))
                                      ? ((1U & (IData)(vlSelf->opcode))
                                          ? ((((((IData)(vlSelf->top__DOT__exception_dut__DOT__a_inf) 
                                                 & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_zero)) 
                                                | ((IData)(vlSelf->top__DOT__exception_dut__DOT__a_zero) 
                                                   & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_inf))) 
                                               | (IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan)) 
                                              | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                             | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan))
                                          : ((((((IData)(vlSelf->top__DOT__exception_dut__DOT__a_inf) 
                                                 & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_zero)) 
                                                | ((IData)(vlSelf->top__DOT__exception_dut__DOT__a_zero) 
                                                   & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_inf))) 
                                               | (IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan)) 
                                              | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                             | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan)))
                                      : (((IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan) 
                                          | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                         | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan)))
                                  : (((IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan) 
                                      | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                     | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan))));
    } else if ((4U & (IData)(vlSelf->opcode))) {
        vlSelf->inexact = (1U & (~ ((IData)(vlSelf->opcode) 
                                    >> 1U)));
        vlSelf->underflow = ((~ ((IData)(vlSelf->opcode) 
                                 >> 1U)) & (IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_dnr));
        vlSelf->overflow = ((~ ((IData)(vlSelf->opcode) 
                                >> 1U)) & (IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf));
        vlSelf->invalid = (1U & ((2U & (IData)(vlSelf->opcode))
                                  ? (((IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan) 
                                      | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                     | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan))
                                  : ((1U & (IData)(vlSelf->opcode))
                                      ? ((vlSelf->fp_operand_a 
                                          >> 0x1fU) 
                                         | (IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan))
                                      : (((((IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan) 
                                            | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                           | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan)) 
                                          | ((IData)(vlSelf->top__DOT__exception_dut__DOT__a_zero) 
                                             & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_zero))) 
                                         | ((IData)(vlSelf->top__DOT__exception_dut__DOT__a_inf) 
                                            & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_inf))))));
    } else {
        vlSelf->inexact = (1U & (((IData)(vlSelf->opcode) 
                                  >> 1U) | (IData)(vlSelf->opcode)));
        if ((2U & (IData)(vlSelf->opcode))) {
            if ((1U & (IData)(vlSelf->opcode))) {
                vlSelf->underflow = vlSelf->top__DOT__exception_dut__DOT__f_ab_dnr;
                vlSelf->overflow = vlSelf->top__DOT__exception_dut__DOT__f_ab_inf;
                vlSelf->invalid = (1U & (((((IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan) 
                                            | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                           | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan)) 
                                          | ((IData)(vlSelf->top__DOT__exception_dut__DOT__a_inf) 
                                             & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_zero))) 
                                         | ((IData)(vlSelf->top__DOT__exception_dut__DOT__a_zero) 
                                            & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_inf))));
            } else {
                vlSelf->underflow = vlSelf->top__DOT__exception_dut__DOT__f_ab_dnr;
                vlSelf->underflow = vlSelf->top__DOT__exception_dut__DOT__f_ab_dnr;
                vlSelf->overflow = ((IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf) 
                                    | (((~ ((vlSelf->fp_f_ab 
                                             ^ vlSelf->fp_operand_c) 
                                            >> 0x1fU)) 
                                        & (IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf)) 
                                       & (IData)(vlSelf->top__DOT__exception_dut__DOT__c_inf)));
                vlSelf->invalid = (1U & ((((IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan) 
                                           | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                          | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan)) 
                                         | ((((vlSelf->fp_f_ab 
                                               ^ vlSelf->fp_operand_c) 
                                              >> 0x1fU) 
                                             & (IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf)) 
                                            & (IData)(vlSelf->top__DOT__exception_dut__DOT__c_inf))));
            }
        } else {
            if ((1U & (IData)(vlSelf->opcode))) {
                vlSelf->underflow = vlSelf->top__DOT__exception_dut__DOT__f_ab_dnr;
                vlSelf->underflow = vlSelf->top__DOT__exception_dut__DOT__f_ab_dnr;
                vlSelf->invalid = (1U & ((((IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan) 
                                           | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                          | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan)) 
                                         | ((((vlSelf->fp_f_ab 
                                               ^ vlSelf->fp_operand_c) 
                                              >> 0x1fU) 
                                             & (IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf)) 
                                            & (IData)(vlSelf->top__DOT__exception_dut__DOT__c_inf))));
            } else {
                vlSelf->underflow = 0U;
                vlSelf->invalid = (1U & (((IData)(vlSelf->top__DOT__exception_dut__DOT__a_nan) 
                                          | (IData)(vlSelf->top__DOT__exception_dut__DOT__b_nan)) 
                                         | (IData)(vlSelf->top__DOT__exception_dut__DOT__c_nan)));
            }
            vlSelf->overflow = ((IData)(vlSelf->opcode) 
                                & ((IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf) 
                                   | (((~ ((vlSelf->fp_f_ab 
                                            ^ vlSelf->fp_operand_c) 
                                           >> 0x1fU)) 
                                       & (IData)(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf)) 
                                      & (IData)(vlSelf->top__DOT__exception_dut__DOT__c_inf))));
        }
    }
    vlSelf->div_zero = (IData)(((4U == (IData)(vlSelf->opcode)) 
                                & (IData)(vlSelf->top__DOT__exception_dut__DOT__b_zero)));
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
    VlTriggerVec<1> __VpreTriggered;
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
    if (VL_UNLIKELY((vlSelf->opcode & 0xe0U))) {
        Verilated::overWidthError("opcode");}
}
#endif  // VL_DEBUG
