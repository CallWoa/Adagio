// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"

class VTop__Syms;
class VTop___024root;
class VerilatedVcdC;
class VTop_Octet;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VTop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VTop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_in_ready,0,0);
    VL_IN8(&io_in_valid,0,0);
    VL_IN8(&io_in_bits_ctrl_matBSel,0,0);
    VL_IN8(&io_in_bits_ctrl_mixPcMode,0,0);
    VL_IN8(&io_in_bits_ctrl_roundingMode,0,0);
    VL_IN8(&io_out_ready,0,0);
    VL_OUT8(&io_out_valid,0,0);
    VL_INW(&io_in_bits_tc0_ot0_tg0_matrix_a,255,0,8);
    VL_INW(&io_in_bits_tc0_ot0_tg0_matrix_b,255,0,8);
    VL_INW(&io_in_bits_tc0_ot0_tg0_matrix_c,255,0,8);
    VL_INW(&io_in_bits_tc0_ot0_tg4_matrix_a,255,0,8);
    VL_INW(&io_in_bits_tc0_ot0_tg4_matrix_b,255,0,8);
    VL_INW(&io_in_bits_tc0_ot0_tg4_matrix_c,255,0,8);
    VL_INW(&io_in_bits_tc0_ot1_tg0_matrix_a,255,0,8);
    VL_INW(&io_in_bits_tc0_ot1_tg0_matrix_b,255,0,8);
    VL_INW(&io_in_bits_tc0_ot1_tg0_matrix_c,255,0,8);
    VL_INW(&io_in_bits_tc0_ot1_tg4_matrix_a,255,0,8);
    VL_INW(&io_in_bits_tc0_ot1_tg4_matrix_b,255,0,8);
    VL_INW(&io_in_bits_tc0_ot1_tg4_matrix_c,255,0,8);
    VL_INW(&io_in_bits_tc1_ot0_tg0_matrix_a,255,0,8);
    VL_INW(&io_in_bits_tc1_ot0_tg0_matrix_b,255,0,8);
    VL_INW(&io_in_bits_tc1_ot0_tg0_matrix_c,255,0,8);
    VL_INW(&io_in_bits_tc1_ot0_tg4_matrix_a,255,0,8);
    VL_INW(&io_in_bits_tc1_ot0_tg4_matrix_b,255,0,8);
    VL_INW(&io_in_bits_tc1_ot0_tg4_matrix_c,255,0,8);
    VL_INW(&io_in_bits_tc1_ot1_tg0_matrix_a,255,0,8);
    VL_INW(&io_in_bits_tc1_ot1_tg0_matrix_b,255,0,8);
    VL_INW(&io_in_bits_tc1_ot1_tg0_matrix_c,255,0,8);
    VL_INW(&io_in_bits_tc1_ot1_tg4_matrix_a,255,0,8);
    VL_INW(&io_in_bits_tc1_ot1_tg4_matrix_b,255,0,8);
    VL_INW(&io_in_bits_tc1_ot1_tg4_matrix_c,255,0,8);
    VL_OUTW(&io_out_bits_tc0_octet0_threadgroup0_matrix_d_data,255,0,8);
    VL_OUTW(&io_out_bits_tc0_octet0_threadgroup4_matrix_d_data,255,0,8);
    VL_OUTW(&io_out_bits_tc0_octet1_threadgroup0_matrix_d_data,255,0,8);
    VL_OUTW(&io_out_bits_tc0_octet1_threadgroup4_matrix_d_data,255,0,8);
    VL_OUTW(&io_out_bits_tc1_octet0_threadgroup0_matrix_d_data,255,0,8);
    VL_OUTW(&io_out_bits_tc1_octet0_threadgroup4_matrix_d_data,255,0,8);
    VL_OUTW(&io_out_bits_tc1_octet1_threadgroup0_matrix_d_data,255,0,8);
    VL_OUTW(&io_out_bits_tc1_octet1_threadgroup4_matrix_d_data,255,0,8);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VTop_Octet* const __PVT__Top__DOT__tc__DOT__ot;
    VTop_Octet* const __PVT__Top__DOT__tc__DOT__ot_1;
    VTop_Octet* const __PVT__Top__DOT__tc_1__DOT__ot;
    VTop_Octet* const __PVT__Top__DOT__tc_1__DOT__ot_1;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VTop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VTop(VerilatedContext* contextp, const char* name = "TOP");
    explicit VTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VTop();
  private:
    VL_UNCOPYABLE(VTop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
