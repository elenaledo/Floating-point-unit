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
    vlSelf->top__DOT__cordic_dut__DOT__atan = vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta
        [(0x1fU & ((IData)(1U) + (IData)(vlSelf->stage)))];
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
    if (vlSelf->rst_ni) {
        if (vlSelf->mode) {
            vlSelf->mode_out = 1U;
            if ((vlSelf->y >> 0x1fU)) {
                if (((vlSelf->x ^ vlSelf->y) >> 0x1fU)) {
                    if (((vlSelf->x ^ vlSelf->y) >> 0x1fU)) {
                        vlSelf->x_out = ((0x80000000U 
                                          & vlSelf->x) 
                                         | (0x7fffffffU 
                                            & (vlSelf->x 
                                               + ((0x7fffffffU 
                                                   & vlSelf->y) 
                                                  >> (IData)(vlSelf->stage)))));
                    }
                    vlSelf->x_out = (((0x7fffffffU 
                                       & vlSelf->y) 
                                      > (0x7fffffffU 
                                         & ((0x7fffffffU 
                                             & vlSelf->x) 
                                            >> (IData)(vlSelf->stage))))
                                      ? ((0x80000000U 
                                          & vlSelf->y) 
                                         | (0x7fffffffU 
                                            & (vlSelf->y 
                                               - ((0x7fffffffU 
                                                   & vlSelf->x) 
                                                  >> (IData)(vlSelf->stage)))))
                                      : (((~ (vlSelf->y 
                                              >> 0x1fU)) 
                                          << 0x1fU) 
                                         | (0x7fffffffU 
                                            & (((0x7fffffffU 
                                                 & vlSelf->x) 
                                                >> (IData)(vlSelf->stage)) 
                                               - vlSelf->y))));
                } else {
                    vlSelf->x_out = (((0x7fffffffU 
                                       & vlSelf->x) 
                                      > (0x7fffffffU 
                                         & ((0x7fffffffU 
                                             & vlSelf->y) 
                                            >> (IData)(vlSelf->stage))))
                                      ? ((0x80000000U 
                                          & vlSelf->x) 
                                         | (0x7fffffffU 
                                            & (vlSelf->x 
                                               - ((0x7fffffffU 
                                                   & vlSelf->y) 
                                                  >> (IData)(vlSelf->stage)))))
                                      : (((~ (vlSelf->x 
                                              >> 0x1fU)) 
                                          << 0x1fU) 
                                         | (0x7fffffffU 
                                            & (((0x7fffffffU 
                                                 & vlSelf->y) 
                                                >> (IData)(vlSelf->stage)) 
                                               - vlSelf->x))));
                    if ((1U & (~ ((vlSelf->x ^ vlSelf->y) 
                                  >> 0x1fU)))) {
                        vlSelf->x_out = ((0x80000000U 
                                          & vlSelf->y) 
                                         | (0x7fffffffU 
                                            & (vlSelf->y 
                                               + ((0x7fffffffU 
                                                   & vlSelf->x) 
                                                  >> (IData)(vlSelf->stage)))));
                    }
                }
                if ((vlSelf->z >> 0x1fU)) {
                    if ((vlSelf->z >> 0x1fU)) {
                        vlSelf->x_out = ((0x80000000U 
                                          & vlSelf->z) 
                                         | (0x7fffffffU 
                                            & (vlSelf->z 
                                               + vlSelf->top__DOT__cordic_dut__DOT__atan)));
                    }
                } else {
                    vlSelf->x_out = (((0x7fffffffU 
                                       & vlSelf->z) 
                                      > (0x7fffffffU 
                                         & vlSelf->top__DOT__cordic_dut__DOT__atan))
                                      ? ((0x80000000U 
                                          & vlSelf->z) 
                                         | (0x7fffffffU 
                                            & (vlSelf->z 
                                               - vlSelf->top__DOT__cordic_dut__DOT__atan)))
                                      : (((~ (vlSelf->z 
                                              >> 0x1fU)) 
                                          << 0x1fU) 
                                         | (0x7fffffffU 
                                            & (vlSelf->top__DOT__cordic_dut__DOT__atan 
                                               - vlSelf->z))));
                }
                vlSelf->x_out = (vlSelf->x - (vlSelf->y 
                                              >> (IData)(vlSelf->stage)));
                vlSelf->x_out = (vlSelf->y + (vlSelf->x 
                                              >> (IData)(vlSelf->stage)));
                vlSelf->x_out = (vlSelf->z - vlSelf->top__DOT__cordic_dut__DOT__atan);
            } else {
                if (((vlSelf->x ^ vlSelf->y) >> 0x1fU)) {
                    vlSelf->x_out = (((0x7fffffffU 
                                       & vlSelf->x) 
                                      > (0x7fffffffU 
                                         & ((0x7fffffffU 
                                             & vlSelf->y) 
                                            >> (IData)(vlSelf->stage))))
                                      ? ((0x80000000U 
                                          & vlSelf->x) 
                                         | (0x7fffffffU 
                                            & (vlSelf->x 
                                               - ((0x7fffffffU 
                                                   & vlSelf->y) 
                                                  >> (IData)(vlSelf->stage)))))
                                      : (((~ (vlSelf->x 
                                              >> 0x1fU)) 
                                          << 0x1fU) 
                                         | (0x7fffffffU 
                                            & (((0x7fffffffU 
                                                 & vlSelf->y) 
                                                >> (IData)(vlSelf->stage)) 
                                               - vlSelf->x))));
                    if (((vlSelf->x ^ vlSelf->y) >> 0x1fU)) {
                        vlSelf->x_out = ((0x80000000U 
                                          & vlSelf->y) 
                                         | (0x7fffffffU 
                                            & (vlSelf->y 
                                               + ((0x7fffffffU 
                                                   & vlSelf->x) 
                                                  >> (IData)(vlSelf->stage)))));
                    }
                } else {
                    if ((1U & (~ ((vlSelf->x ^ vlSelf->y) 
                                  >> 0x1fU)))) {
                        vlSelf->x_out = ((0x80000000U 
                                          & vlSelf->x) 
                                         | (0x7fffffffU 
                                            & (vlSelf->x 
                                               + ((0x7fffffffU 
                                                   & vlSelf->y) 
                                                  >> (IData)(vlSelf->stage)))));
                    }
                    vlSelf->x_out = (((0x7fffffffU 
                                       & vlSelf->y) 
                                      > (0x7fffffffU 
                                         & ((0x7fffffffU 
                                             & vlSelf->x) 
                                            >> (IData)(vlSelf->stage))))
                                      ? ((0x80000000U 
                                          & vlSelf->y) 
                                         | (0x7fffffffU 
                                            & (vlSelf->y 
                                               - ((0x7fffffffU 
                                                   & vlSelf->x) 
                                                  >> (IData)(vlSelf->stage)))))
                                      : (((~ (vlSelf->y 
                                              >> 0x1fU)) 
                                          << 0x1fU) 
                                         | (0x7fffffffU 
                                            & (((0x7fffffffU 
                                                 & vlSelf->x) 
                                                >> (IData)(vlSelf->stage)) 
                                               - vlSelf->y))));
                }
                if ((vlSelf->z >> 0x1fU)) {
                    vlSelf->x_out = (((0x7fffffffU 
                                       & vlSelf->z) 
                                      > (0x7fffffffU 
                                         & vlSelf->top__DOT__cordic_dut__DOT__atan))
                                      ? ((0x80000000U 
                                          & vlSelf->z) 
                                         | (0x7fffffffU 
                                            & (vlSelf->z 
                                               - vlSelf->top__DOT__cordic_dut__DOT__atan)))
                                      : (((~ (vlSelf->z 
                                              >> 0x1fU)) 
                                          << 0x1fU) 
                                         | (0x7fffffffU 
                                            & (vlSelf->top__DOT__cordic_dut__DOT__atan 
                                               - vlSelf->z))));
                } else if ((1U & (~ (vlSelf->z >> 0x1fU)))) {
                    vlSelf->x_out = ((0x80000000U & vlSelf->z) 
                                     | (0x7fffffffU 
                                        & (vlSelf->z 
                                           + vlSelf->top__DOT__cordic_dut__DOT__atan)));
                }
                vlSelf->x_out = (vlSelf->x + (vlSelf->y 
                                              >> (IData)(vlSelf->stage)));
                vlSelf->x_out = (vlSelf->y - (vlSelf->x 
                                              >> (IData)(vlSelf->stage)));
                vlSelf->x_out = (vlSelf->z + vlSelf->top__DOT__cordic_dut__DOT__atan);
            }
        } else {
            vlSelf->mode_out = 0U;
            if ((vlSelf->z >> 0x1fU)) {
                if (((vlSelf->x ^ vlSelf->y) >> 0x1fU)) {
                    vlSelf->x_out = (((0x7fffffffU 
                                       & vlSelf->x) 
                                      > (0x7fffffffU 
                                         & ((0x7fffffffU 
                                             & vlSelf->y) 
                                            >> (IData)(vlSelf->stage))))
                                      ? ((0x80000000U 
                                          & vlSelf->x) 
                                         | (0x7fffffffU 
                                            & (vlSelf->x 
                                               - ((0x7fffffffU 
                                                   & vlSelf->y) 
                                                  >> (IData)(vlSelf->stage)))))
                                      : (((~ (vlSelf->x 
                                              >> 0x1fU)) 
                                          << 0x1fU) 
                                         | (0x7fffffffU 
                                            & (((0x7fffffffU 
                                                 & vlSelf->y) 
                                                >> (IData)(vlSelf->stage)) 
                                               - vlSelf->x))));
                    if (((vlSelf->x ^ vlSelf->y) >> 0x1fU)) {
                        vlSelf->x_out = ((0x80000000U 
                                          & vlSelf->y) 
                                         | (0x7fffffffU 
                                            & (vlSelf->y 
                                               + ((0x7fffffffU 
                                                   & vlSelf->x) 
                                                  >> (IData)(vlSelf->stage)))));
                    }
                } else {
                    if ((1U & (~ ((vlSelf->x ^ vlSelf->y) 
                                  >> 0x1fU)))) {
                        vlSelf->x_out = ((0x80000000U 
                                          & vlSelf->x) 
                                         | (0x7fffffffU 
                                            & (vlSelf->x 
                                               + ((0x7fffffffU 
                                                   & vlSelf->y) 
                                                  >> (IData)(vlSelf->stage)))));
                    }
                    vlSelf->x_out = (((0x7fffffffU 
                                       & vlSelf->y) 
                                      > (0x7fffffffU 
                                         & ((0x7fffffffU 
                                             & vlSelf->x) 
                                            >> (IData)(vlSelf->stage))))
                                      ? ((0x80000000U 
                                          & vlSelf->y) 
                                         | (0x7fffffffU 
                                            & (vlSelf->y 
                                               - ((0x7fffffffU 
                                                   & vlSelf->x) 
                                                  >> (IData)(vlSelf->stage)))))
                                      : (((~ (vlSelf->y 
                                              >> 0x1fU)) 
                                          << 0x1fU) 
                                         | (0x7fffffffU 
                                            & (((0x7fffffffU 
                                                 & vlSelf->x) 
                                                >> (IData)(vlSelf->stage)) 
                                               - vlSelf->y))));
                }
                vlSelf->x_out = (((0x7fffffffU & vlSelf->z) 
                                  > (0x7fffffffU & vlSelf->top__DOT__cordic_dut__DOT__atan))
                                  ? (vlSelf->z - vlSelf->top__DOT__cordic_dut__DOT__atan)
                                  : (((~ (vlSelf->z 
                                          >> 0x1fU)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (vlSelf->top__DOT__cordic_dut__DOT__atan 
                                                      - vlSelf->z))));
            } else {
                if (((vlSelf->x ^ vlSelf->y) >> 0x1fU)) {
                    if (((vlSelf->x ^ vlSelf->y) >> 0x1fU)) {
                        vlSelf->x_out = ((0x80000000U 
                                          & vlSelf->x) 
                                         | (0x7fffffffU 
                                            & (vlSelf->x 
                                               + ((0x7fffffffU 
                                                   & vlSelf->y) 
                                                  >> (IData)(vlSelf->stage)))));
                    }
                    vlSelf->x_out = (((0x7fffffffU 
                                       & vlSelf->y) 
                                      > (0x7fffffffU 
                                         & ((0x7fffffffU 
                                             & vlSelf->x) 
                                            >> (IData)(vlSelf->stage))))
                                      ? ((0x80000000U 
                                          & vlSelf->y) 
                                         | (0x7fffffffU 
                                            & (vlSelf->y 
                                               - ((0x7fffffffU 
                                                   & vlSelf->x) 
                                                  >> (IData)(vlSelf->stage)))))
                                      : (((~ (vlSelf->y 
                                              >> 0x1fU)) 
                                          << 0x1fU) 
                                         | (0x7fffffffU 
                                            & (((0x7fffffffU 
                                                 & vlSelf->x) 
                                                >> (IData)(vlSelf->stage)) 
                                               - vlSelf->y))));
                } else {
                    vlSelf->x_out = (((0x7fffffffU 
                                       & vlSelf->x) 
                                      > (0x7fffffffU 
                                         & ((0x7fffffffU 
                                             & vlSelf->y) 
                                            >> (IData)(vlSelf->stage))))
                                      ? ((0x80000000U 
                                          & vlSelf->x) 
                                         | (0x7fffffffU 
                                            & (vlSelf->x 
                                               - ((0x7fffffffU 
                                                   & vlSelf->y) 
                                                  >> (IData)(vlSelf->stage)))))
                                      : (((~ (vlSelf->x 
                                              >> 0x1fU)) 
                                          << 0x1fU) 
                                         | (0x7fffffffU 
                                            & (((0x7fffffffU 
                                                 & vlSelf->y) 
                                                >> (IData)(vlSelf->stage)) 
                                               - vlSelf->x))));
                    if ((1U & (~ ((vlSelf->x ^ vlSelf->y) 
                                  >> 0x1fU)))) {
                        vlSelf->x_out = ((0x80000000U 
                                          & vlSelf->y) 
                                         | (0x7fffffffU 
                                            & (vlSelf->y 
                                               + ((0x7fffffffU 
                                                   & vlSelf->x) 
                                                  >> (IData)(vlSelf->stage)))));
                    }
                }
                vlSelf->x_out = (((0x7fffffffU & vlSelf->z) 
                                  > (0x7fffffffU & vlSelf->top__DOT__cordic_dut__DOT__atan))
                                  ? (vlSelf->z - vlSelf->top__DOT__cordic_dut__DOT__atan)
                                  : (((~ (vlSelf->z 
                                          >> 0x1fU)) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (vlSelf->top__DOT__cordic_dut__DOT__atan 
                                                      - vlSelf->z))));
            }
        }
    } else {
        vlSelf->mode_out = 0U;
        vlSelf->x_out = 0U;
        vlSelf->x_out = 0U;
        vlSelf->x_out = 0U;
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
                VL_FATAL_MT("top.sv", 4, "", "Input combinational region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->mode & 0xfeU))) {
        Verilated::overWidthError("mode");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->stage & 0xe0U))) {
        Verilated::overWidthError("stage");}
}
#endif  // VL_DEBUG
