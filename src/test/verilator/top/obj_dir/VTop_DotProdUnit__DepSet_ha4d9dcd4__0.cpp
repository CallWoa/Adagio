// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_1_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_2_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dp_3_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_1_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
}
