`include "registers.svh"

module fetch_fsm #(
  parameter int unsigned MEM_BUS_WIDTH = 128,
  parameter int unsigned BURST_LENGTH  = 4,
  parameter int unsigned PREFETCH_BUFF_DEPTH    = 20,  
  parameter int unsigned PC_COUNTER_WIDTH = 64  
) ( 
  input logic clk_i, rst_ni, flush_i, en_i,  
  input  logic                        mem_ar_ready_i,
  input  logic                        mem_r_last_i,
  input logic                         mem_r_valid_i,

  input logic [PC_COUNTER_WIDTH-1:0] PCCurr,
  input logic [$clog2(PREFETCH_BUFF_DEPTH)-1:0] IF_fifo_ptr_o,
  input logic IF_fifo_ready_o,

  output logic incr_pc,
  output logic startup_o,

  output logic [PC_COUNTER_WIDTH-1:0] mem_ar_addr_o,  
  output logic                        mem_ar_valid_o,
  output logic [7:0]                  mem_ar_len_o,         // burst length - 1
  output logic [2:0]                  mem_ar_size_o        // log2(bytes per beat). 2 -> 4B
);

localparam int unsigned NUM_STATES = 2;
localparam int unsigned BYTE_PER_BURST = $clog2(MEM_BUS_WIDTH/8);  // using the whole bus


typedef enum logic [$clog2(NUM_STATES)-1:0] {REQ, SLEEP} state_t;

state_t curr_state, next_state;
//logic res_startup;


always_comb begin: OUTPUT_SIGNALS_DEFINITION
  mem_ar_valid_o = 1'b0;
  mem_ar_size_o = '0;
  mem_ar_addr_o = '0;
  mem_ar_len_o ='0;
  incr_pc = 0;
  case (curr_state) 
    REQ: begin
      //if(mem_ar_ready_i && (IF_fifo_ptr_o < (PREFETCH_BUFF_DEPTH-BURST_LENGTH) || IF_fifo_ptr_o == (PREFETCH_BUFF_DEPTH-BURST_LENGTH))) begin
      if(mem_ar_ready_i && IF_fifo_ready_o) begin
        mem_ar_valid_o = 1'b1;
        //mem_ar_size_o = 3'(BYTE_PER_BURST);
        mem_ar_size_o = 3'b100;
        mem_ar_addr_o = PCCurr;
        mem_ar_len_o = 8'(BURST_LENGTH);
      end
    end
    SLEEP: begin
      incr_pc = mem_r_last_i;
    end
  endcase
end

always_comb begin: NEXT_STATE_DEFINITION
  next_state = curr_state;
  case(curr_state) 
    REQ: begin
      // we wait in request state until the fifo is able to receive 
      if(mem_ar_ready_i && (IF_fifo_ptr_o < PREFETCH_BUFF_DEPTH-BURST_LENGTH || IF_fifo_ptr_o == PREFETCH_BUFF_DEPTH-BURST_LENGTH)) begin
        next_state = SLEEP;
        //res_startup = 0;
      end
    end
    SLEEP: begin
      if(mem_r_last_i) begin
        next_state = REQ;
      end
    end
  endcase
end

`FFL(curr_state, next_state, en_i, state_t'(REQ), clk_i, (rst_ni || flush_i));
// TODO DEVO COMABIARE COME QUESTO SEGNALE CAMBIA, LA PRIMA VOLTA CHE RICEVO
// UN DATO DALLA MEMORIA O QUANDO ESEGUO UN JUMP
`FFL(startup_o, 1'b0, (en_i & mem_r_valid_i), 1, clk_i, rst_ni);
endmodule
