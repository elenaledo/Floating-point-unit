// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->top__DOT__dut__DOT__A1__DOT__o_e) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__A1__DOT__o_e)) 
                                      | (vlSelf->top__DOT__dut__DOT__A1__DOT__o_m 
                                         != vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__A1__DOT__o_m));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->top__DOT__dut__DOT__M1__DOT__o_e) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__M1__DOT__o_e)) 
                                      | (vlSelf->top__DOT__dut__DOT__M1__DOT__o_m 
                                         != vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__M1__DOT__o_m));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e)) 
                                      | (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m 
                                         != vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m));
    vlSelf->__VactTriggered.at(3U) = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e)) 
                                      | (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
                                         != vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m));
    vlSelf->__VactTriggered.at(4U) = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e)) 
                                      | (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m 
                                         != vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m));
    vlSelf->__VactTriggered.at(5U) = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e)) 
                                      | (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
                                         != vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m));
    vlSelf->__VactTriggered.at(6U) = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e)) 
                                      | (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m 
                                         != vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m));
    vlSelf->__VactTriggered.at(7U) = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e)) 
                                      | (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m 
                                         != vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m));
    vlSelf->__VactTriggered.at(8U) = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e)) 
                                      | (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
                                         != vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m));
    vlSelf->__VactTriggered.at(9U) = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e)) 
                                      | (vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m 
                                         != vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m));
    vlSelf->__VactTriggered.at(0xaU) = (((IData)(vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e)) 
                                        | (vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m 
                                           != vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m));
    vlSelf->__VactTriggered.at(0xbU) = ((IData)(vlSelf->clk_i) 
                                        & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk_i)));
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__A1__DOT__o_e 
        = vlSelf->top__DOT__dut__DOT__A1__DOT__o_e;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__A1__DOT__o_m 
        = vlSelf->top__DOT__dut__DOT__A1__DOT__o_m;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__M1__DOT__o_e 
        = vlSelf->top__DOT__dut__DOT__M1__DOT__o_e;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__M1__DOT__o_m 
        = vlSelf->top__DOT__dut__DOT__M1__DOT__o_m;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_e;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_2D__DOT__o_m;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_e;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S0_N0__DOT__o_m;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_e;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_DN0__DOT__o_m;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_e;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_2minDN0__DOT__o_m;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_e;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S1_N1__DOT__o_m;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_e;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_DN1__DOT__o_m;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_e;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_2minDN1__DOT__o_m;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_e;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__recip__DOT__S2_N2__DOT__o_m;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_e;
    vlSelf->__Vtrigrprev__TOP__top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m 
        = vlSelf->top__DOT__dut__DOT__D1__DOT__mult__DOT__o_m;
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
        vlSelf->__VactTriggered.at(8U) = 1U;
        vlSelf->__VactTriggered.at(9U) = 1U;
        vlSelf->__VactTriggered.at(0xaU) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
