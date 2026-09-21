module urom #(
  parameter int unsigned INSTR_THROUGHPUT = 4,
  parameter int unsigned MAX_UOP_NUM_DECODED = 6,
	parameter int unsigned BUNIT = 16,
  parameter int unsigned UROM_DEPTH = 64, 
  parameter int unsigned UOP_EXEC_INSTR_THROUGHPUT = 4
) (
  input logic clk_i, flush_i, rst_ni, ready_i,
  input logic [INSTR_THROUGHPUT-1:0][MAX_UOP_NUM_DECODED-1:0][BUNIT*2-1:0] instr_i,	
  input logic [INSTR_THROUGHPUT-1:0][MAX_UOP_NUM_DECODED-1:0] instr_valid_i,
// Even the decoded state need to have +1 space due to the brought over
// instruction 
  output logic ready_o,
  output logic uop_valid_o,
  output logic [UOP_EXEC_INSTR_THROUGHPUT-1:0][BUNIT*2-1:0] uop_o
);

  localparam type       PIPO_stacks_payload_t =   logic[BUNIT*2-1:0];
  PIPO_stacks_payload_t  [INSTR_THROUGHPUT*MAX_UOP_NUM_DECODED-1:0]        PIPO_stack_payload_in;
  logic                  [INSTR_THROUGHPUT*MAX_UOP_NUM_DECODED-1:0]        PIPO_stack_valid_in;
  logic                                                 PIPO_stack_ready_in;
  logic                                                 PIPO_stack_ready_o;
  logic                                                 PIPO_stack_payload_valid_o ; 	
  PIPO_stacks_payload_t  [UOP_EXEC_INSTR_THROUGHPUT-1:0]   PIPO_stack_payload_o ; 	

  always_comb begin
    PIPO_stack_payload_in = instr_i;
    PIPO_stack_valid_in = instr_valid_i;
  end

  pipo #(
    .N_PARALLEL_INPUT(MAX_UOP_NUM_DECODED*INSTR_THROUGHPUT),
    .PIPO_DEPTH(UROM_DEPTH),
    .N_OUT(UOP_EXEC_INSTR_THROUGHPUT),
    .payload_t(logic[BUNIT*2-1:0])
  ) urom_core_u (
    .clk_i,
    .rst_ni,
    .flush_i,
    .ready_i(PIPO_stack_ready_in),
    .payload_valid_in(PIPO_stack_valid_in),
    .payload_in(PIPO_stack_payload_in),
    .payload_o(PIPO_stack_payload_o),
    .payload_valid_o(PIPO_stack_payload_valid_o),
    .ready_o(PIPO_stack_ready_o)
  );

  assign uop_o = PIPO_stack_payload_o;
  assign uop_valid_o = PIPO_stack_payload_valid_o;
  assign ready_o = PIPO_stack_ready_o;
  assign PIPO_stack_ready_in = ready_i;
endmodule
