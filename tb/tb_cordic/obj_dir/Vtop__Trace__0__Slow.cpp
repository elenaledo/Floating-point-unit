// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+33,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"stage",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+37,"x",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"z",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"x_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"y_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"z_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+43,"mode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+33,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"stage",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+37,"x",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"z",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"x_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"y_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"z_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+43,"mode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("cordic_dut ");
    tracep->declBit(c+33,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"stage",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+37,"x",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"z",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"x_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"y_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"z_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+43,"mode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"stage_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,"atan",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("lut ");
    tracep->declBus(c+44,"angle",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+45,"atan",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"beta",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__cordic_dut__DOT__lut__DOT__beta[31]),32);
    bufp->fullBit(oldp+33,(vlSelf->clk_i));
    bufp->fullBit(oldp+34,(vlSelf->mode));
    bufp->fullBit(oldp+35,(vlSelf->rst_ni));
    bufp->fullCData(oldp+36,(vlSelf->stage),5);
    bufp->fullIData(oldp+37,(vlSelf->x),32);
    bufp->fullIData(oldp+38,(vlSelf->y),32);
    bufp->fullIData(oldp+39,(vlSelf->z),32);
    bufp->fullIData(oldp+40,(vlSelf->x_out),32);
    bufp->fullIData(oldp+41,(vlSelf->y_out),32);
    bufp->fullIData(oldp+42,(vlSelf->z_out),32);
    bufp->fullBit(oldp+43,(vlSelf->mode_out));
    bufp->fullCData(oldp+44,((0x1fU & ((IData)(1U) 
                                       + (IData)(vlSelf->stage)))),5);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__cordic_dut__DOT__atan),32);
}
