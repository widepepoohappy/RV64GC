module shftbrl_cell #(
		parameter BITWIDTH = 16,
		parameter MAX_SHIFT_AMOUNT = 1,
		parameter SHIFT_DIR = 0
	) (
		input [BITWIDTH-1:0] A_t_i,
		input [BITWIDTH-1:0] A_t_shft_i,
		input shft_sel_i,
		output [BITWIDTH-1:0] A_o
	);

	assign A_o = shft_sel_i ? A_t_shft_i : A_t_i;

endmodule
