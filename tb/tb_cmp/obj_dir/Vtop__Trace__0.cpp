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
    bufp->chgBit(oldp+0,(vlSelf->clk_i));
    bufp->chgIData(oldp+1,(vlSelf->operand_a),32);
    bufp->chgIData(oldp+2,(vlSelf->operand_b),32);
    bufp->chgIData(oldp+3,(vlSelf->min),32);
    bufp->chgIData(oldp+4,(vlSelf->max),32);
    bufp->chgBit(oldp+5,(vlSelf->equal));
    bufp->chgBit(oldp+6,(vlSelf->less));
    bufp->chgBit(oldp+7,(vlSelf->less_equal));
    bufp->chgBit(oldp+8,((vlSelf->operand_a >> 0x1fU)));
    bufp->chgBit(oldp+9,((vlSelf->operand_b >> 0x1fU)));
    bufp->chgIData(oldp+10,((0x7fffffU & vlSelf->operand_a)),23);
    bufp->chgIData(oldp+11,((0x7fffffU & vlSelf->operand_b)),23);
    bufp->chgCData(oldp+12,((0xffU & (vlSelf->operand_a 
                                      >> 0x17U))),8);
    bufp->chgCData(oldp+13,((0xffU & (vlSelf->operand_b 
                                      >> 0x17U))),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
