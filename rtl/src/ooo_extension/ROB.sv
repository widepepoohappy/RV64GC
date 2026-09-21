module ROB #(
    parameter BITWIDTH = 32,
    parameter ENTRIES = 64
)(
    input logic [BITWIDTH-1:0] DestRegID, DestRegVal,
    input logic VALID, EXCEPTION, DestRegWritten
	input logic clk, rst, en,
	output logic DestRegWritten,
	output logic [BITWIDTH-1:0] DestRegVal
);

    ROB_t entries [ENTRIES-1:0];

// ##################  START MEM ASSIGNMENT ################## 

	always_ff @(posedge clk or posedge rst) begin
		if ( rst ) begin
			entries <= '0;
		end else if ( en ) begin
			entries[Idx_entry_slot_input].Entry_valid <= VALID;
			entries[Idx_entry_slot_input].DestRegID <= DestRegID;
			entries[Idx_entry_slot_input].DestRegVal <= DestRegVal;
			entries[Idx_entry_slot_input].DestRegWritten <= DestRegWritten;
			entries[Idx_entry_slot_input].EXCEPTION <= EXCEPTION;
		end

	end

	priority_encoder #(
		.N(ENTRIES),
	) ROB_PE_output_logic_u (
		.in(entries.Entry_valid),
		.out(Idx_entry_slot_input),
		.valid(In_Idx_valid)    
    );

// ################## END MEM ASSIGNMENT ################## 

// ################## START REG SHIFT INSTANCE ##################

// ################## END REG SHIFT INSTANCE ##################



// ######### START PE FOR OUTPUT DECISION ###################
	priority_encoder #(
		.N(ENTRIES),
	) ROB_PE_output_logic_u (
		.in(entries.DestRegWritten),
		.out(Idx_entry_slot),
		.valid(Idx_valid)    
    );
// ######### END PE FOR OUTPUT DECISION ###################


endmodule