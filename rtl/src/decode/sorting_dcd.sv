`include "registers.svh"
`include "dcd_packages.sv"

module sorting_dcd #(
  //This means we can have a total of 8 instruction of 16 bits (BUNIT)
	parameter INSTR_PARALLELISM = 8,
	parameter N_UOP_CYCLE = 4,
	parameter BUNIT = 16,
  parameter PIPO_DEPTH = 16,
  parameter INSTR_THROUGHPUT = 4,
	parameter HW_PER_BLOB = INSTR_PARALLELISM*BUNIT/16	
  
	) ( 
    input logic clk_i, rst_ni, flush_i, 
		input dcd_packages::instr_t [HW_PER_BLOB:0] decoded_state_i,
  // we are receive basic blocks of instructions
		input logic [INSTR_PARALLELISM:0][BUNIT-1:0] instr_i,
    input logic instr_valid_i,

  // outputting 32 bit mapped instruction
    output logic [INSTR_THROUGHPUT-1:0][BUNIT*2-1:0] instr_o,
    output logic valid_o,
    output logic ready_o
	);

  import dcd_packages::*;  

  localparam type       PIPO_stacks_payload_t =   logic[BUNIT*2-1:0];
  logic                 [INSTR_PARALLELISM-1:0]   PIPO_stack_valid_in;
  logic                                           PIPO_stack_ready_in;
  logic                                           PIPO_stack_ready_o;
  PIPO_stacks_payload_t  [INSTR_PARALLELISM-1:0]  PIPO_stack_payload_in;
  PIPO_stacks_payload_t  [INSTR_THROUGHPUT-1:0]   PIPO_stack_payload_o ; 	
  logic                                           PIPO_stack_payload_valid_o ; 	
  //We need a PIPO made of shift reg


  always_comb begin
    PIPO_stack_payload_in = '0;
    PIPO_stack_valid_in = '0;    
    for(int unsigned i = 0; i < HW_PER_BLOB; i++) begin
      if(instr_valid_i) begin
        if(decoded_state_i[i].valid) begin
          case (decoded_state_i[i].instr_type)
            COMPRESSED: begin
              PIPO_stack_payload_in[i][BUNIT-1:0] =  instr_i[i];
              PIPO_stack_valid_in[i] = 1'b1;
            end
            UNCOMPRESSED: begin
              // little-endian: lane i holds the low halfword (opcode bits),
              // lane i+1 the high halfword
              PIPO_stack_payload_in[i][BUNIT-1:0] =  instr_i[i];
              PIPO_stack_payload_in[i][BUNIT*2-1:BUNIT] = instr_i[i+1];
              PIPO_stack_valid_in[i] = 1'b1;
            end
            default: begin
              // Dovrei tirare una eccezione ma per ora lascio cosi
            end
          endcase
        end
      end
    end
  end 

  assign PIPO_stack_ready_in = 1'b1;

  pipo #(
    .N_PARALLEL_INPUT(INSTR_PARALLELISM+1),
    .PIPO_DEPTH(PIPO_DEPTH),
    .N_OUT(INSTR_THROUGHPUT),
    .payload_t(logic[BUNIT*2-1:0])
  ) PIPO_DCD_u (
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

  assign instr_o = PIPO_stack_payload_o;
  assign ready_o = PIPO_stack_ready_o;
  assign valid_o = PIPO_stack_payload_valid_o; 
endmodule
