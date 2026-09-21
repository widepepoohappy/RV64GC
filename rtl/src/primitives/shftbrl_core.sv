module shftbrl_core #(
	parameter BITWIDTH = 16,
	parameter SHIFT_AMOUNT = 1,
	parameter SHIFT_DIR = 0,
	parameter MAX_SHIFT_AMOUNT = 16
	
	) (
		input logic [BITWIDTH-1:0] A_i,
 		input logic [$clog2(MAX_SHIFT_AMOUNT)-1:0] shamt,
		output logic [BITWIDTH-1:0] A_o		
	);

	local parameter STAGES = $clog2(MAX_SHIFT_AMOUNT);
	logic [$clog2(MAX_SHIFT_AMOUNT)-1:0] shft_sel_i;
	logic [BITWIDTH-1:0][STAGES-1:0] A_t_i, A_t_shft_i, A_o_int; 

	assign shft_sel_i = shamt;

	generate
		for(genvar i = 0; i < STAGES; i++) begin
			shftbrl_cell #(
				.BITWIDTH(BITWIDTH),
				.SHIFT_AMOUNT(i),
				.SHIFT_DIR(SHIFT_DIR),
				.MAX_SHIFT_AMOUNT(i)
			) shftbrl_core_u (
				.A_t_i(A_t_i[i-1]),
				.A_t_shft_i(A_t_shft_i[i-1]),
				.shft_sel_i(shft_sel_i[i]),
				.A_o(A_o_int[i])
			);
		end
	end

	always_comb begin
		A_t_i[0] = A_i;
		for(int i = 1; i < STAGES; i++) begin
			A_t_i[i] = A_o_int[i-1]
		end
		for(int i = 1; i < STAGES; i++) begin
			if( i == 0 ) begin
			end
			if ( SHIFT_DIR ) begin
				A_t_shft_i[i] = (A_o_int[i-1] >> ( 1 << i )); 
			end else begin
				A_t_shft_i[i] = (A_o_int[i-1] << ( 1 << i )); 
			end
		end
	end

	assign A_o = A_o_int[STAGES-1]; 

endmodule

