// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VClos_NoC__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VClos_NoC::VClos_NoC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VClos_NoC__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , valid_in{vlSymsp->TOP.valid_in}
    , ready_out{vlSymsp->TOP.ready_out}
    , sel_out_stage{vlSymsp->TOP.sel_out_stage}
    , sel_inp_stage{vlSymsp->TOP.sel_inp_stage}
    , sel_inp_stage_stage{vlSymsp->TOP.sel_inp_stage_stage}
    , out_valid{vlSymsp->TOP.out_valid}
    , out_rdy_i{vlSymsp->TOP.out_rdy_i}
    , flush_i{vlSymsp->TOP.flush_i}
    , data_in{vlSymsp->TOP.data_in}
    , out_data{vlSymsp->TOP.out_data}
    , __PVT__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar{vlSymsp->TOP.__PVT__Clos_NoC__DOT__gen_inp_sw__BRA__0__KET____DOT__input_xbar}
    , __PVT__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar{vlSymsp->TOP.__PVT__Clos_NoC__DOT__gen_inp_sw__BRA__1__KET____DOT__input_xbar}
    , __PVT__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar{vlSymsp->TOP.__PVT__Clos_NoC__DOT__gen_mid_sw__BRA__0__KET____DOT__input_xbar}
    , __PVT__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar{vlSymsp->TOP.__PVT__Clos_NoC__DOT__gen_mid_sw__BRA__1__KET____DOT__input_xbar}
    , __PVT__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar{vlSymsp->TOP.__PVT__Clos_NoC__DOT__gen_mid_sw__BRA__2__KET____DOT__input_xbar}
    , __PVT__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar{vlSymsp->TOP.__PVT__Clos_NoC__DOT__gen_out_sw__BRA__0__KET____DOT__input_xbar}
    , __PVT__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar{vlSymsp->TOP.__PVT__Clos_NoC__DOT__gen_out_sw__BRA__1__KET____DOT__input_xbar}
    , __PVT__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar{vlSymsp->TOP.__PVT__Clos_NoC__DOT__gen_out_sw__BRA__2__KET____DOT__input_xbar}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VClos_NoC::VClos_NoC(const char* _vcname__)
    : VClos_NoC(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VClos_NoC::~VClos_NoC() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VClos_NoC___024root___eval_debug_assertions(VClos_NoC___024root* vlSelf);
#endif  // VL_DEBUG
void VClos_NoC___024root___eval_static(VClos_NoC___024root* vlSelf);
void VClos_NoC___024root___eval_initial(VClos_NoC___024root* vlSelf);
void VClos_NoC___024root___eval_settle(VClos_NoC___024root* vlSelf);
void VClos_NoC___024root___eval(VClos_NoC___024root* vlSelf);

void VClos_NoC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VClos_NoC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VClos_NoC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VClos_NoC___024root___eval_static(&(vlSymsp->TOP));
        VClos_NoC___024root___eval_initial(&(vlSymsp->TOP));
        VClos_NoC___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VClos_NoC___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VClos_NoC::eventsPending() { return false; }

uint64_t VClos_NoC::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VClos_NoC::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VClos_NoC___024root___eval_final(VClos_NoC___024root* vlSelf);

VL_ATTR_COLD void VClos_NoC::final() {
    VClos_NoC___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VClos_NoC::hierName() const { return vlSymsp->name(); }
const char* VClos_NoC::modelName() const { return "VClos_NoC"; }
unsigned VClos_NoC::threads() const { return 1; }
void VClos_NoC::prepareClone() const { contextp()->prepareClone(); }
void VClos_NoC::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VClos_NoC::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VClos_NoC___024root__trace_decl_types(VerilatedVcd* tracep);

void VClos_NoC___024root__trace_init_top(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VClos_NoC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VClos_NoC___024root*>(voidSelf);
    VClos_NoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VClos_NoC___024root__trace_decl_types(tracep);
    VClos_NoC___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VClos_NoC___024root__trace_register(VClos_NoC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VClos_NoC::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VClos_NoC::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VClos_NoC___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
