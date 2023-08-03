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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[31]),32);
    }
    bufp->chgBit(oldp+32,(vlSelf->clk_i));
    bufp->chgBit(oldp+33,(vlSelf->mode));
    bufp->chgBit(oldp+34,(vlSelf->rst_ni));
    bufp->chgCData(oldp+35,(vlSelf->stage),5);
    bufp->chgIData(oldp+36,(vlSelf->x),32);
    bufp->chgIData(oldp+37,(vlSelf->y),32);
    bufp->chgIData(oldp+38,(vlSelf->z),32);
    bufp->chgIData(oldp+39,(vlSelf->x_out),32);
    bufp->chgIData(oldp+40,(vlSelf->y_out),32);
    bufp->chgIData(oldp+41,(vlSelf->z_out),32);
    bufp->chgBit(oldp+42,(vlSelf->mode_out));
    bufp->chgCData(oldp+43,((0x1fU & ((IData)(1U) + (IData)(vlSelf->stage)))),5);
    bufp->chgIData(oldp+44,(vlSelf->top__DOT__cordic_dut__DOT__atan),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
