module fulladder #(
    //parameter BITWIDTH = 16
)(
  /* verilator lint_off UNUSEDSIGNAL */
    input wire en,A,B,Cin,
  /* verilator lint_on UNUSEDSIGNAL */
    output Sout,Cout);

assign Sout = A ^ B ^ Cin;
assign Cout = (A & B) | (A ^ B) & Cin;

endmodule
