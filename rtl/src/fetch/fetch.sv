`include "registers.svh"

module fetch #(
  // FETCH MODUEL IMPLEMENTING AXI PROTOCOL
  parameter int unsigned MEM_BUS_WIDTH = 128,
  parameter int unsigned XLEN          = MEM_BUS_WIDTH,     // larghezza istruzione/dato
  parameter int unsigned LINE_BYTES    = 32,                // dimensione linea (es. 32B) -> quante istruzioni per line
  parameter int unsigned BURST_LENGTH  = 4,
  parameter int unsigned PREFETCH_BUFF_DEPTH    = 20,
  parameter int unsigned PC_COUNTER_WIDTH = 64
) (
  input logic clk_i, rst_ni, flush_i, en_i,
  input logic pull_instr_rq_i,                              // coming from decode stage
  input logic PCSrcE, 
  input logic [PC_COUNTER_WIDTH-1:0] PCTargetE_i,
  output logic [PC_COUNTER_WIDTH-1:0] PCCurr_o,
  output logic [MEM_BUS_WIDTH-1:0] istr_o,
  output logic                     istr_valid_o,
  output logic                     startup_o,
  // --------------- Memoria (AXI4-Read only, semplificata) ---------------
  output logic                        mem_ar_valid_o,
  input  logic                        mem_ar_ready_i,
  output logic [PC_COUNTER_WIDTH-1:0] mem_ar_addr_o,
  output logic [7:0]                  mem_ar_len_o,         // burst length - 1
  output logic [2:0]                  mem_ar_size_o,        // log2(bytes per beat). 2 -> 4B
  input  logic                        mem_r_valid_i,
  output logic                        mem_r_ready_o,
  //input  logic [1:0]                  mem_r_resp_i,         // ignorato
  input  logic [MEM_BUS_WIDTH-1:0]    mem_r_data_i,
  input  logic                        mem_r_last_i
);

// assuming to fetch one mem line per clock
  localparam int unsigned RCA_4CONST_ADD = MEM_BUS_WIDTH/8;
  localparam type payload_if_fifo_t = logic[MEM_BUS_WIDTH-1:0];

/* ==== IF_FIFO SIGNALS ==== */
  logic [$clog2(PREFETCH_BUFF_DEPTH)-1:0]  IF_fifo_ptr_o;
  payload_if_fifo_t IF_fifo_data_in;
  payload_if_fifo_t IF_fifo_data_o;
  logic     IF_fifo_valid_in;
  logic     IF_fifo_ready_o;  // unused
  logic     IF_fifo_valid_o;
  logic     IF_fifo_data_to_pop;
  logic     IF_fifo_flush_i;

  wire [PC_COUNTER_WIDTH-1:0] PCPlusX;
	wire [PC_COUNTER_WIDTH-1:0] pcmux_in [2-1:0];
	wire [PC_COUNTER_WIDTH-1:0] PCNext;
  wire incr_pc;
	logic [PC_COUNTER_WIDTH-1:0] PCCurr;
  assign PCCurr_o = PCCurr;
	assign pcmux_in[0] = PCPlusX;
	assign pcmux_in[1] = PCTargetE_i;	 //coming from execute stage for jump

  always_comb begin: PREFETCH_BUFFER
    IF_fifo_data_in = mem_r_data_i;
    IF_fifo_valid_in = mem_r_valid_i;
    istr_o = IF_fifo_data_o;
    istr_valid_o = IF_fifo_valid_o;
  // fetching from FIFO only when DECODE request it
    IF_fifo_data_to_pop = pull_instr_rq_i;
  // We need to flush the FIFO if we get jumps, because FIFO was loaded with
  // speculative addresses, currently, with no branch prediction, we speculate
  // to always do not take the branch (not so bad decision since loops might
  // be long)
    IF_fifo_flush_i = PCSrcE;
  end

	mux #(
		.BITWIDTH(PC_COUNTER_WIDTH),
    .NINPUTS(2)
  ) pcmux (
    .In(pcmux_in),
    .Sel(PCSrcE),		   //coming from execute stage
    .Out(PCNext)
  );


  stream_fifo_optimal_wrap #(
      .Depth(PREFETCH_BUFF_DEPTH),
      .type_t(payload_if_fifo_t),
      .PrintInfo(1'b0)
    ) if_fifo_u (
      .clk_i,      // Clock
      .rst_ni,     // Asynchronous reset active low
      .flush_i(IF_fifo_flush_i),    // flush the fifo
      .testmode_i(/* unused */), // test_mode to bypass clock gating
      .usage_o(IF_fifo_ptr_o),    // fill pointer
      .data_i(IF_fifo_data_in),     // data to push into the fifo
      .valid_i(IF_fifo_valid_in),    // input data valid
      .ready_o(IF_fifo_ready_o),    // fifo is not full
      .data_o(IF_fifo_data_o),     // output data
      .valid_o(IF_fifo_valid_o),    // fifo is not empty
      .ready_i(IF_fifo_data_to_pop)     // pop head from fifo
  );

/* verilator lint_off SYNCASYNCNET */
//we got an OKAY response for AXI4 only if first bit is 0
  `FFL(PCCurr, PCNext, (en_i & incr_pc), '0, clk_i, (rst_ni || flush_i));
/* verilator lint_on SYNCASYNCNET */

	ALU #(
		.BITWIDTH(PC_COUNTER_WIDTH),
    .SINGLE_UNIT(1),                    // SINGLE UNIT FOR ALU
    .OP_TYPE(0),                        // PERFORMING ADDITIONS
    .NRALUOP(1)
	) pcadd_x (
    .A(PCCurr),
    .B(RCA_4CONST_ADD),
    .Rd_in(/* unused */),
    .Valid_in(1'b1),
    .Rd_out(/* unused */),
    .ALUResult(PCPlusX),
    .en(en_i),
    .ALUControl(1'b0),                          // addition
    .Cout(/* unused */),
    .Zero(/* unused */)
	);
  

  fetch_fsm #(
    .MEM_BUS_WIDTH(MEM_BUS_WIDTH),
    .BURST_LENGTH(BURST_LENGTH),  
    .PREFETCH_BUFF_DEPTH(PREFETCH_BUFF_DEPTH),
    .PC_COUNTER_WIDTH(PC_COUNTER_WIDTH)
  ) fetch_fsm_u ( 
    .clk_i, 
    .rst_ni, 
    .flush_i, 
    .en_i, 
    .mem_ar_ready_i,
    .mem_r_valid_i,
    .mem_r_last_i(mem_r_last_i),

    .PCCurr,
    .IF_fifo_ptr_o,
    .IF_fifo_ready_o(IF_fifo_ready_o),

    .startup_o,
    .incr_pc,

    .mem_ar_addr_o,  
    .mem_ar_valid_o,
    .mem_ar_len_o,         // burst length - 1
    .mem_ar_size_o        // log2(bytes per beat). 2 -> 4B
  );

  assign mem_r_ready_o = IF_fifo_ready_o;

endmodule
