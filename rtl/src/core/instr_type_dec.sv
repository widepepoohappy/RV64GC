module instr_type_dec (
  input logic [6:0] op,
  output logic [1:0] ResultSrc,     
  output logic MemWrite,
  output logic Branch, ALUSrc,
  output logic RegWrite, Jump,
  output logic [1:0] ImmSrc,
  output logic [1:0] ALUOp
);
  logic [10:0] controls;
  assign {RegWrite, ImmSrc, ALUSrc, MemWrite,
          ResultSrc, Branch, ALUOp, Jump} = controls;
  always_comb begin
      case(op)
      // The CU unit decoder is super simplified since we are using uops
      // RegWrite_ImmSrc_ALUSrc_MemWrite_ResultSrc_Branch_ALUOp_Jump
          OPCODE_LOAD: controls = 11'b1_00_1_0_01_0_00_0; // lw
          OPCODE_STORE: controls = 11'b0_01_1_1_00_0_00_0; // sw
          OPCODE_OP: controls = 11'b1_00_0_0_00_0_10_0; // R–type
          OPCODE_BRANCH: controls = 11'b0_10_0_0_00_1_01_0; // beq
          OPCODE_OP_IMM: controls = 11'b1_00_1_0_00_0_10_0; // I–type ALU
          OPCODE_JALR: controls = 11'b1_11_0_0_10_0_00_1; 
          OPCODE_JAL: controls = 11'b1_11_0_0_10_0_00_1; // jal
          default: controls = 11'b0_00_0_0_00_0_00_0; // ??? 
      endcase
  end
  

endmodule
