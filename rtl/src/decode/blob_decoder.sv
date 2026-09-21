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
    input startup_i,
		input logic [INSTR_PARALLELISM-1:0][BUNIT-1:0] instr_i,
    input logic instr_valid_i,
  // isntr_o need to have +1 BUNIT, in order to deliver n-1 last 16 bits that
  // were valid and uncertain
		output logic [INSTR_PARALLELISM:0][BUNIT-1:0] instr_o,	
  // Even the decoded state need to have +1 space due to the brought over
  // instruction
    output logic data_valid_o,
		output dcd_packages::instr_t [HW_PER_BLOB:0] decoded_state_o
	);

  import dcd_packages::*;
	localparam HW_WIDTH = 16;

// this signal states if a new batch of instruction is being processed. This
// will be 1 in case of jump or at the start up of the processor
  logic new_batch;
  logic next_last_input_was_aligned;
  logic last_input_was_aligned;
  logic [BUNIT-1:0] last_instr_minus1;
  logic [BUNIT-1:0] next_last_instr_minus1;
	logic [HW_PER_BLOB-1:0] h;
	logic [HW_PER_BLOB:0] h_parsed;
	instr_t [HW_PER_BLOB:0] instr_dcd;
  logic h_minus1; 

	always_comb begin
		for (int i = 0; i < HW_PER_BLOB; i++) begin
			h[i] = instr_i[i][1] & instr_i[i][0];
		end
	end

  `FFL(new_batch, startup_i, en_i, 1, clk_i, rst_ni);  

	always_comb begin
		h_parsed = '0;
    // for new batches of instruction h_parsed (the one being processed byu
    // the decoding logic) will always have 0 as last bit. This means that
    // last 2 bit combination will always be: 00 or 01, one being compressed
    // or misaligned. However that is not correct. FOR THE LAST 16 BITS WE
    // ALWAYS NEED TO AVOID CATEGORIZING IT AND BRING IT TO THE NEXT CYCLE
    h_parsed[HW_PER_BLOB:1] = h; 
    h_parsed[0] = h_minus1; 
	end

	/*=== decoding logic stage ===*/
	always_comb begin
    // initializing first cycle when doing a jump or startup where first 16
    // bits are all 0s, so invalid, plus last 16 bits are not valid since the
    // first process will have last 16 bits as 0s.
		for( int i = 0; i < HW_PER_BLOB; i++) begin
      if(i == 0) begin
        instr_dcd[i].valid = ~new_batch & instr_valid_i & ~last_input_was_aligned;
      end else if(i == HW_PER_BLOB-1) begin
        instr_dcd[i].valid = ~new_batch & instr_valid_i;
      end else begin
        instr_dcd[i].valid = 1'b1 & instr_valid_i;
      end
    end    
    // When entering normal operation mode, first 16 bits will always be from
    // the previous cycle and last 16 now will be valid (they will always
    // depend from the last 16 bits from the new incoming operation, but they
    // will be physically placed in the last 16 bits of the vector that is
    // being processed to decode the operations)
		for( int i = 0; i < HW_PER_BLOB; i++) begin
			
			if(instr_dcd[i].valid) begin
        if( {h_parsed[i],h_parsed[i+1]} == 2'b00 ) begin
					instr_dcd[i].instr_type = COMPRESSED;
        end else if( {h_parsed[i],h_parsed[i+1]} == 2'b01 ) begin
          if(h_parsed[i+2] == 1'b1) begin
            instr_dcd[i].instr_type = COMPRESSED;
          end else begin
            instr_dcd[i].instr_type = UNCOMPRESSED;
            instr_dcd[i+1].valid = 1'b0;
          end
        end else if( {h_parsed[i],h_parsed[i+1]} == 2'b10 ) begin
					instr_dcd[i].instr_type = MISALIGNED;
        end else if( {h_parsed[i],h_parsed[i+1]} == 2'b11 ) begin
          instr_dcd[i].instr_type = UNCOMPRESSED;
          instr_dcd[i+1].valid = 1'b0;
        end
        // TODO nel caso che l ultima operazione sia UNCOMPRESSED devo fare in
        // modo di far uscire i 32 bit tutti insieme, lo posso fare magari
        // aggiungendo 16 bit all uscita e usarli solo se questo e vero, nel
        // caso non lo fosse li lascio a 0 (un po uno spreco ma vabbe)
			end
		end	
	end
  
  logic is_last_uncompressed;
  assign is_last_uncompressed = instr_dcd[HW_PER_BLOB-1].instr_type == UNCOMPRESSED && instr_dcd[HW_PER_BLOB-1].valid == 1'b1;

  always_comb begin 
    instr_o = '0;
    instr_o[INSTR_PARALLELISM-1:1] = instr_i[INSTR_PARALLELISM-2:0];
    instr_o[0] = last_instr_minus1;
    if(is_last_uncompressed) begin 
      instr_o[INSTR_PARALLELISM] = instr_i[INSTR_PARALLELISM-1];
      next_last_instr_minus1 = '0;
      next_last_input_was_aligned = 1'b1;
    end else begin
      instr_o[INSTR_PARALLELISM] = '0;
      next_last_instr_minus1 = instr_i[INSTR_PARALLELISM-1];
      next_last_input_was_aligned = 1'b0;
    end
  end


// Reg to track h_minus1
	`FFL(last_input_was_aligned, next_last_input_was_aligned, en_i, 0, clk_i, rst_ni); 	

// Reg to track h_minus1
	`FFL(h_minus1, h[HW_PER_BLOB-1], en_i, 0, clk_i, rst_ni); 	

// Reg to store last misaligned 16 bits
  `FFL(last_instr_minus1, next_last_instr_minus1, en_i, '0, clk_i, rst_ni);

  always_comb begin
    decoded_state_o = instr_dcd;
  //last operazione is always not valid, this because if valid we need to wait
  //for next blob to assert the validity
    decoded_state_o[HW_PER_BLOB].valid = 1'b0;
  end

  assign data_valid_o = instr_valid_i;
// TODO AGGIUSTA COME LE OPERAZIONI VENGONO DETERMINATE COMPRESSE E NON
endmodule
