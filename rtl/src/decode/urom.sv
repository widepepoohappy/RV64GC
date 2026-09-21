module urom #(
  parameter int unsigned INPUT_WIDTH = 8,
  parameter int unsigned ARCH_BITWIDTH = 32,
  parameter int unsigned OUTPUT_WIDTH = 4,
  parameter int unsigned BUNIT = 16
) ( 
  input logic clk_i, rst_nt, flush_i, en_i,
  input lgoic [INPUT_WIDTH-1:0][ARCH_BITWIDTH-1:0] instr_i,
  output logic [OUTPUT_WIDTH-1:0][ARCH_BITWIDTH-1:0] instr_o
  
);



endmodule;
