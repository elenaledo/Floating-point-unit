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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__exception_dut__DOT__a_nan));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__exception_dut__DOT__a_zero));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__exception_dut__DOT__a_inf));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__exception_dut__DOT__b_nan));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__exception_dut__DOT__b_zero));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__exception_dut__DOT__b_inf));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__exception_dut__DOT__f_ab_inf));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__exception_dut__DOT__f_ab_dnr));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__exception_dut__DOT__c_nan));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__exception_dut__DOT__c_inf));
    }
    bufp->chgBit(oldp+10,(vlSelf->clk_i));
    bufp->chgIData(oldp+11,(vlSelf->fp_operand_a),32);
    bufp->chgIData(oldp+12,(vlSelf->fp_operand_b),32);
    bufp->chgIData(oldp+13,(vlSelf->fp_operand_c),32);
    bufp->chgIData(oldp+14,(vlSelf->fp_f_ab),32);
    bufp->chgCData(oldp+15,(vlSelf->opcode),5);
    bufp->chgBit(oldp+16,(vlSelf->overflow));
    bufp->chgBit(oldp+17,(vlSelf->underflow));
    bufp->chgBit(oldp+18,(vlSelf->invalid));
    bufp->chgBit(oldp+19,(vlSelf->div_zero));
    bufp->chgBit(oldp+20,(vlSelf->inexact));
    bufp->chgBit(oldp+21,((vlSelf->fp_operand_a >> 0x1fU)));
    bufp->chgBit(oldp+22,((vlSelf->fp_operand_b >> 0x1fU)));
    bufp->chgBit(oldp+23,((vlSelf->fp_operand_c >> 0x1fU)));
    bufp->chgBit(oldp+24,((vlSelf->fp_f_ab >> 0x1fU)));
    bufp->chgCData(oldp+25,((0xffU & (vlSelf->fp_operand_a 
                                      >> 0x17U))),8);
    bufp->chgCData(oldp+26,((0xffU & (vlSelf->fp_operand_b 
                                      >> 0x17U))),8);
    bufp->chgCData(oldp+27,((0xffU & (vlSelf->fp_operand_c 
                                      >> 0x17U))),8);
    bufp->chgCData(oldp+28,((0xffU & (vlSelf->fp_f_ab 
                                      >> 0x17U))),8);
    bufp->chgIData(oldp+29,((0x7fffffU & vlSelf->fp_operand_a)),23);
    bufp->chgIData(oldp+30,((0x7fffffU & vlSelf->fp_operand_b)),23);
    bufp->chgIData(oldp+31,((0x7fffffU & vlSelf->fp_operand_c)),23);
    bufp->chgIData(oldp+32,((0x7fffffU & vlSelf->fp_f_ab)),23);
    bufp->chgBit(oldp+33,((IData)(((0U == (0x7f800000U 
                                           & vlSelf->fp_operand_a)) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->fp_operand_a))))));
    bufp->chgBit(oldp+34,((IData)(((0U == (0x7f800000U 
                                           & vlSelf->fp_operand_b)) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->fp_operand_b))))));
    bufp->chgBit(oldp+35,((IData)(((0x7f800000U == 
                                    (0x7f800000U & vlSelf->fp_f_ab)) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->fp_f_ab))))));
    bufp->chgBit(oldp+36,((IData)((0U == (0x7fffffffU 
                                          & vlSelf->fp_f_ab)))));
    bufp->chgBit(oldp+37,((IData)((0U == (0x7fffffffU 
                                          & vlSelf->fp_operand_c)))));
    bufp->chgBit(oldp+38,((IData)(((0U == (0x7f800000U 
                                           & vlSelf->fp_operand_c)) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->fp_operand_c))))));
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
}
