module cu_core #(
  parameter int unsigned UOP_EXEC_INSTR_THROUGHPUT = 4
) ( 
  input logic [UOP_EXEC_INSTR_THROUGHPUT-1:0][6:0] op,
  input logic [UOP_EXEC_INSTR_THROUGHPUT-1:0][2:0] funct3,
  input logic [UOP_EXEC_INSTR_THROUGHPUT-1:0][6:0] funct7,
  input logic [UOP_EXEC_INSTR_THROUGHPUT-1:0][6:0] op,
);


generate
  for(genvar i

endmodule
