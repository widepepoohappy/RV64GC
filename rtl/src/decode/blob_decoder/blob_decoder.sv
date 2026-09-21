`include "registers.svh"
`include "dcd_packages.sv"


module blob_decoder #(
	// 4 instruction of 32 bits 
	// 8 instruction of 16 bits
	parameter INSTR_PARALLELISM = 8,
	parameter N_UOP_CYCLE = 4,
	parameter BUNIT = 16,
	parameter HW_PER_BLOB = INSTR_PARALLELISM*BUNIT/16

	) ( 
		input logic clk_i, rst_ni, en_i,
		input logic [INSTR_PARALLELISM-1:0][BUNIT-1:0] instr_i,
  // isntr_o need to have +1 BUNIT, in order to deliver n-1 last 16 bits that
  // were valid and uncertain
		output logic [INSTR_PARALLELISM:0][BUNIT-1:0] instr_o,	
  // Even the decoded state need to have +1 space due to the brought over
  // instruction 
		output dcd_packages::instr_t [HW_PER_BLOB:0] decoded_state_o
	);

  import dcd_packages::*;
	localparam HW_WIDTH = 16;

  logic [BUNIT-1:0] last_instr_minus1;
	logic [HW_PER_BLOB-1:0] h;
	logic [HW_PER_BLOB:0] h_parsed;
	instr_t [HW_PER_BLOB:0] instr_dcd;
  logic h_minus1; 

	always_comb begin
		for (int i = 0; i < HW_PER_BLOB; i++) begin
			h[i] = instr_i[i][1] & instr_i[i][0];
		end
	end

	always_comb begin
		h_parsed = '0;
		h_parsed[HW_PER_BLOB-1:0] = h; 
		if(h_minus1) begin
			h_parsed = h_parsed << h_minus1;
			h_parsed[0] = h_minus1; 
		end
			
	end

	/*=== decoding logic stage ===*/
	always_comb begin
		for( int i = 0; i < HW_PER_BLOB; i++) begin
      instr_dcd[i].valid = 1'b1;
			// With this logic, the last operation will always be
			// signed as misaligned when the last h is not valid,
			// meaning when we do not bring over the last h from
			// cycle n-1. Is it problem? 
			// If n-1 instruction is uncrompressed, then last
			// instruction will be invalid, so no problem.
			// If n-1 instruction is compressed then it depends on
			// the value of h[-1] meaning that the last 16 bits
			// can refer to the first halfword of an uncompressed
			// instr or it is a compressed one but we need to see
			// the next 16 bits to be sure of it. So being
			// misaligned it means that the valid bit (which is
			// the one that decides if the bits are getting sent
			// to the output or not) is set to 1'b1 and the bits
			// will be sent to the next stage but will be
			// sorted once the next blob is parsed
			if(instr_dcd[i].valid) begin
				if( {h_parsed[i],h_parsed[i+1]} == 2'b00 ) begin 	
					instr_dcd[i].instr_type = COMPRESSED; 
        end else if( {h_parsed[i],h_parsed[i+1]} == 2'b01 ) begin 	
					instr_dcd[i].instr_type = UNCOMPRESSED; 
					instr_dcd[i+1].valid = 1'b0;
        end else if( {h_parsed[i],h_parsed[i+1]} == 2'b10 ) begin 	
					instr_dcd[i].instr_type = MISALIGNED; 
        end else if( {h_parsed[i],h_parsed[i+1]} == 2'b11 ) begin 	
          instr_dcd[i].instr_type = UNCOMPRESSED; 
          instr_dcd[i+1].valid = 1'b0;
        end
			end
		end	
	end

  always_comb begin 
    instr_o = '0;
    if(h_minus1) begin
      instr_o[INSTR_PARALLELISM:1] = instr_i;
      instr_o[0] = last_instr_minus1;
    end else begin
      instr_o[INSTR_PARALLELISM-1:0] = instr_i;
    end
  end

// Reg to track h_minus1
	`FFL(h_minus1, h[HW_PER_BLOB-1], en_i, 0, clk_i, rst_ni); 	

// Reg to store last misaligned 16 bits
  wire en_m1;
  `FFL(last_instr_minus1 ,instr_i[INSTR_PARALLELISM-1], en_m1, '0, clk_i, rst_ni);
// if last h is valid, we need to store the 16 bits.
  assign en_m1 = en_i & h[HW_PER_BLOB-1];

  always_comb begin
    decoded_state_o = instr_dcd;
  //last operazione is always not valid, this because if valid we need to wait
  //for next blob to assert the validity
    decoded_state_o[HW_PER_BLOB-1].valid = 1'b0;
  end

endmodule
