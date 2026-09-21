/// Connects the input stream (valid-ready) handshake to many of `N_OUP` output stream handshakes.
///
/// This module has no data ports because stream data does not need to be demultiplexed: the data of
/// the input stream can just be applied at all output streams.
module stream_br_demux #(
  /// Number of connected outputs.
  parameter int unsigned N_OUP     = 32'd1
) (
  input  logic                 inp_valid_i,
  output logic                 inp_ready_o,

  input  logic [N_OUP-1:0]     oup_sel_i,

  output logic [N_OUP-1:0]     oup_valid_o,
  input  logic [N_OUP-1:0]     oup_ready_i
);

  always_comb begin
    inp_ready_o = 0;
    oup_valid_o = '0;
    
    for(int i = 0; i < N_OUP; i++) begin
      oup_valid_o[i] = inp_valid_i & oup_sel_i[i];
      if(oup_sel_i[i]) begin
        inp_ready_o &= oup_ready_i[i];    
      end else begin
        inp_ready_o |= 0;
      end
    end
  end

endmodule

