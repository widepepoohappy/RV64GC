// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCLOS_NOC_H_
#define VERILATED_VCLOS_NOC_H_  // guard

#include "verilated.h"

class VClos_NoC__Syms;
class VClos_NoC___024root;
class VerilatedVcdC;
class VClos_NoC_stream_xbar__pi1;
class VClos_NoC_stream_xbar__pi2;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VClos_NoC VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VClos_NoC__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&valid_in,3,0);
    VL_OUT8(&ready_out,3,0);
    VL_IN(&sel_out_stage,17,0);
    VL_IN8(&sel_inp_stage,7,0);
    VL_IN16(&sel_inp_stage_stage,11,0);
    VL_OUT8(&out_valid,5,0);
    VL_IN16(&out_rdy_i,8,0);
    VL_IN8(&flush_i,0,0);
    VL_INW(&data_in,127,0,4);
    VL_OUTW(&out_data,191,0,6);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VClos_NoC_stream_xbar__pi1* const __PVT__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1* const __PVT__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1* const __PVT__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1* const __PVT__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi1* const __PVT__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi2* const __PVT__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi2* const __PVT__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar;
    VClos_NoC_stream_xbar__pi2* const __PVT__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VClos_NoC___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VClos_NoC(VerilatedContext* contextp, const char* name = "TOP");
    explicit VClos_NoC(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VClos_NoC();
  private:
    VL_UNCOPYABLE(VClos_NoC);  ///< Copying not allowed

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
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
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
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
