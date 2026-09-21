module RES_buffer #(
  parameter int unsigned N_UOP_PER_CYCLE = 4,
  parameter int unsigned DATA_WIDTH = 1,
  parameter int unsigned RES_FIFO_DEPTH = 4,
  parameter type         payload_t = rs_entry_t
)(
  input logic clk_i, rst_ni, flush_i,
  input rs_entry_t [N_UOP_PER_CYCLE-1:0][DATA_WIDTH-1:0] payload_in,
  input logic [N_UOP_PER_CYCLE-1:0] payload_valid_in,
  input rs_entry_t [N_UOP_PER_CYCLE-1:0][DATA_WIDTH-1:0] payload_in,
  output rs_entry_t [DATA_WIDTH-1:0] payload_o,
  output logic [N_UOP_PER_CYCLE-1:0] rdy_o,
);


stream_fifo_optimal_wrap #(
  .Depth(RES_FIFO_DEPTH),
  .type_t(payload_t),
  .PrintInfo(1'b0),
  .AddrDepth  = (Depth > 32'd1) ? $clog2(Depth) : 32'd1
) stream_stack_res_u (
  .clk_i,                                     // Clock
  .rst_ni,                                    // Asynchronous reset active low
  .flush_i(/* connect to global flush */),    // flush the fifo
  .testmode_i(/* unused */),                  // test_mode to bypass clock gating
  .usage_o(/* unused? */),                    // fill pointer
  .data_i(payload_in[i]),                     // data to push into the fifo
  .valid_i(payload_valid_in[i]),              // input data valid
  .ready_o(rdy_o[i]),                         // fifo is not full
  .data_o(RES_fifo_data_o[i]),                // output data
  .valid_o(RES_fifo_valid_o[i]),              // fifo is not empty
  .ready_i(RES_fifo_ready_i[i])               // pop head from fifo
);


endmodule