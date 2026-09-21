module Clos_NoC #(
/// Parameter defining the #N of input modules
  parameter int unsigned N_INP_SWITCHES   = 2,
/// Parameter defining the #N of middle modules
  parameter int unsigned N_MID_SWITCHES   = 3,
/// Parameter defining the #N of output modules
  parameter int unsigned N_OUT_SWITCHES   = 3,
/// Parameter defining #N of output ports
  parameter int unsigned N_OUT_SWITCH_PORTS = 3,
/// Parameter that defines the #N of input ports
  parameter int unsigned SWITCH_PORTS     = 2,
/// DATA WIDTH
  parameter int unsigned DATA_WIDTH       = 32,
/// Payload type of the data ports, only usage of parameter `DataWidth`.
  parameter type         payload_t = logic[DATA_WIDTH-1:0],
/// Adds a spill register stage at each output.
  parameter bit          OutSpillReg = 1'b0

) (
  // Stadio di ingresso: input switches
  input  payload_t [N_INP_SWITCHES-1:0][SWITCH_PORTS-1:0]             data_in,
  input  logic     [N_INP_SWITCHES-1:0][SWITCH_PORTS-1:0]             valid_in,
  output logic     [N_INP_SWITCHES-1:0][SWITCH_PORTS-1:0]             ready_out,
  input  logic     [N_OUT_SWITCHES-1:0][N_MID_SWITCHES-1:0][$clog2(N_OUT_SWITCH_PORTS)-1:0] sel_out_stage,
  input  logic [N_INP_SWITCHES-1:0][SWITCH_PORTS-1:0][$clog2(N_MID_SWITCHES)-1:0] sel_inp_stage,
  input  logic [N_MID_SWITCHES-1:0][SWITCH_PORTS-1:0][$clog2(N_OUT_SWITCHES)-1:0] sel_inp_stage_stage,
  // Stadio di uscita: output switches
  output payload_t [N_OUT_SWITCHES-1:0][SWITCH_PORTS-1:0]             out_data,
  output logic     [N_OUT_SWITCHES-1:0][SWITCH_PORTS-1:0]             out_valid,
  input logic      [N_OUT_SWITCHES-1:0][N_OUT_SWITCH_PORTS-1:0]       out_rdy_i,
  input logic                                                         clk_i, rst_ni, flush_i
);

  payload_t [N_INP_SWITCHES-1:0][N_MID_SWITCHES-1:0]             stg1_data_o;
  payload_t [N_MID_SWITCHES-1:0][N_INP_SWITCHES-1:0]             stg2_data_i;
  payload_t [N_MID_SWITCHES-1:0][N_OUT_SWITCHES-1:0]             stg2_data_o;
  payload_t [N_OUT_SWITCHES-1:0][N_OUT_SWITCH_PORTS-1:0]         stg3_data_i;
  payload_t [N_OUT_SWITCHES-1:0][N_OUT_SWITCH_PORTS-1:0]         stg3_data_o;
  logic [N_INP_SWITCHES-1:0][SWITCH_PORTS-1:0]                   stg1_valid_i;
  logic [N_INP_SWITCHES-1:0][N_MID_SWITCHES-1:0]                 stg1_valid_o;
  logic [N_INP_SWITCHES-1:0][N_MID_SWITCHES-1:0]                 stg1_rdy_i;    //the rdy_i signals incoming from the outputs side
  logic [N_INP_SWITCHES-1:0][SWITCH_PORTS-1:0]                   stg1_rdy_o;    //the rdy_o signals propagate towards the inputs
  logic [N_MID_SWITCHES-1:0][N_INP_SWITCHES-1:0]                 stg2_valid_i;
  logic [N_MID_SWITCHES-1:0][N_OUT_SWITCHES-1:0]                 stg2_valid_o;
  logic [N_MID_SWITCHES-1:0][N_OUT_SWITCHES-1:0]                 stg2_rdy_i;
  logic [N_MID_SWITCHES-1:0][N_INP_SWITCHES-1:0]                 stg2_rdy_o;
  logic [N_OUT_SWITCHES-1:0][N_MID_SWITCHES-1:0]             stg3_valid_i;
  logic [N_OUT_SWITCHES-1:0][N_OUT_SWITCH_PORTS-1:0]             stg3_valid_o;
  logic [N_OUT_SWITCHES-1:0][N_OUT_SWITCH_PORTS-1:0]                 stg3_rdy_i;
  logic [N_OUT_SWITCHES-1:0][N_MID_SWITCHES-1:0]                 stg3_rdy_o;
  assign ready_out = stg1_rdy_o;
  genvar i, j;
  generate
    // INPUT STAGE
  assign stg1_valid_i = valid_in;
    for (i = 0; i < N_INP_SWITCHES; i++) begin : gen_inp_sw
      for (j = 0; j < N_MID_SWITCHES; j++) begin : gen_inp_to_mid_ports
        assign stg1_rdy_i[i][j] = stg2_rdy_o[j][i];
      end
        stream_xbar #(
            .NumInp(SWITCH_PORTS),
            .NumOut(N_MID_SWITCHES),
            .DataWidth(DATA_WIDTH),
            .payload_t(payload_t),
            .OutSpillReg(OutSpillReg),            // deactivate output reg from crossbar switch output (pipe is off)
            .ExtPrio(0),
            .AxiVldRdy(1),              // protocol conformed for AXI
            .LockIn(1)                  // protocol confermed for AXI
        ) input_xbar (
            .clk_i,
            .rst_ni,
            .flush_i,
            .rr_i     ('0),
            .data_i   (data_in[i]),
            .sel_i    (sel_inp_stage[i]),
            .valid_i  (stg1_valid_i[i]),
            .ready_o  (stg1_rdy_o[i]),        // AXI signals
            .data_o   (stg1_data_o[i]),
            /* verilator lint_off IMPLICIT */
            .idx_o    (do_not_connect_in_idx/* IDX OF INPUT */),
            /* verilator lint_off IMPLICIT */
            .valid_o  (stg1_valid_o[i]),
            .ready_i  (stg1_rdy_i[i])         // AXI signals
        );
    end
    // MID STAGE
    for (i = 0; i < N_MID_SWITCHES; i++) begin : gen_mid_sw
        for (j = 0; j < N_INP_SWITCHES; j++) begin : gen_mid_to_inp_ports
          assign stg2_valid_i[i][j] = stg1_valid_o[j][i];
          assign stg2_data_i[i][j] = stg1_data_o[j][i];
        end
        for (j = 0; j < N_OUT_SWITCHES; j++) begin : gen_mid_to_out_ports
          assign stg2_rdy_i[i][j] = stg3_rdy_o[j][i];
        end
        stream_xbar #(
            .NumInp(N_INP_SWITCHES),
            .NumOut(N_OUT_SWITCHES),
            .DataWidth(DATA_WIDTH),
            .payload_t(payload_t),
            .OutSpillReg(OutSpillReg),            // deactivate output reg from crossbar switch output (pipe is off)
            .ExtPrio(0),
            .AxiVldRdy(1),              // protocol conformed for AXI
            .LockIn(1)                  // protocol confermed for AXI
        ) input_xbar (
            .clk_i,
            .rst_ni,
            .flush_i,
            .rr_i     ('0),
            .data_i   (stg2_data_i[i]),
            .sel_i    (sel_inp_stage_stage[i]),
            .valid_i  (stg2_valid_i[i]),
            .ready_o  (stg2_rdy_o[i]),        // AXI signals
            .data_o   (stg2_data_o[i]),
            /* verilator lint_off IMPLICIT */
            .idx_o    (do_not_connect_mid_idx/* IDX OF INPUT */),
            /* verilator lint_off IMPLICIT */
            .valid_o  (stg2_valid_o[i]),
            .ready_i  (stg2_rdy_i[i])         // AXI signals
        );
    end 
    // OUT STAGE
    for (i = 0; i < N_OUT_SWITCHES; i++) begin : gen_out_sw
        for (j = 0; j < N_MID_SWITCHES; j++) begin : gen_mid_to_mid_ports
          assign stg3_valid_i[i][j] = stg2_valid_o[j][i];
          assign stg3_rdy_i[i][j] = out_rdy_i[j][i];
          assign stg3_data_i[i][j] = stg2_data_o[j][i];          
        end
        stream_xbar #(
            .NumInp(N_MID_SWITCHES),
            .NumOut(N_OUT_SWITCH_PORTS),
            .DataWidth(DATA_WIDTH),
            .payload_t(payload_t),
            .OutSpillReg(OutSpillReg),            // deactivate output reg from crossbar switch output (pipe is off)
            .ExtPrio(0),
            .AxiVldRdy(1),              // protocol conformed for AXI
            .LockIn(1)                  // protocol confermed for AXI
        ) input_xbar (
            .clk_i,
            .rst_ni,
            .flush_i,
            .rr_i     ('0),
            .data_i   (stg3_data_i[i]),
            .sel_i    (sel_out_stage[i]),
            .valid_i  (stg3_valid_i[i]),
            .ready_o  (stg3_rdy_o[i]),        // AXI signals
            .data_o   (stg3_data_o[i]),
            /* verilator lint_off IMPLICIT */
            .idx_o    (do_not_connect_out_idx/* IDX OF INPUT */),
            /* verilator lint_off IMPLICIT */
            .valid_o  (stg3_valid_o[i]),
            .ready_i  (stg3_rdy_i[i])         // AXI signals
        );
    end
  endgenerate
  /// MAPPING OUTPUT
  for (i = 0; i < N_OUT_SWITCHES; i++) begin
    for (j = 0; j < SWITCH_PORTS; j++) begin
      assign out_data[i][j] = stg3_data_o[i][j];
      assign out_valid[i][j] = stg3_valid_o[i][j];
    end
  end

endmodule


