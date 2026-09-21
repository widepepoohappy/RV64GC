module extend(
    input logic [11:0] instr_in,
    input logic [1:0] immsrc_in,
    output logic [31:0] immext_o
);
  always_comb begin
    assign immext_o = {{20{instr_in[11]}},instr_in[11:0]};
  //case(immsrc_in)
  //// I−type
  //    2'b00: immext_o = {{20{instr_in[31]}}, instr_in[31:20]};
  //// S−type (stores)
  //    2'b01: immext_o = {{20{instr_in[31]}}, instr_in[31:25], 
  //instr_in[11:7]};
  //// B−type (branches)
  //    2'b10:   immext_o = {{20{instr_in[31]}}, instr_in[7], 
  //	     instr_in[30:25], instr_in[11:8], 1'b0}; 
  //// J−type (jal)
  //    2'b11:   immext_o = {{12{instr_in[31]}}, instr_in[19:12], 
  //	     instr_in[20], instr_in[30:21], 1'b0};
  //    default: immext_o = 32'bx; // undefined
  //endcase
  end
endmodule

