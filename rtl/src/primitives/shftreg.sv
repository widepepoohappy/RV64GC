module shftreg #(
  parameter BITWIDTH = 16,
  parameter SHAMT = 8
) (
  input logic clk_i, rst_ni, en_i, shft_i,
  input logic [BITWIDTH-1:0] D_i,
  output logic [BITWIDTH*2-1:0] Q_o,

);

  logic [BITWIDTH*2-1:0] Q_int, D_int;

  alwasy_comb begin
    D_int[BITWIDTH/2 - 1 :- 0] = D_i;
    if ( shft_i ) begin
      D_int[BITWIDTH-1 :- BITWIDTH/2] = Q_int[BITWIDTH/2 - 1 :- 0];
    end else begin
      D_int[BITWIDTH-1 :- BITWIDTH/2] = '0;
    end
  end


  `FFL(Q_int, D_int, en_i, 0, clk_i, rst_ni);


endmodule
