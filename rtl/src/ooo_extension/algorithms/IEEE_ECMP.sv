module IEEE_ECMP #(
    /// #n of output forwarding ports
    parameter int unsigned FORWARDING_PORTS = 32,
    /// #n of inputs
    parameter int unsigned N_INPUTS_SWITCHES = 32
)(
    input logic [31:0] Bridge_SPB_MAC_i,
    output logic [$clog2(FORWARDING_PORTS)-1:0] sel_o,
    input logic [FORWARDING_PORTS-1:0][48-1:0] Nbors_SPB_MAC_i,
    input logic [31:0] Dip_i;
);

localparam int unsigned BEST_32OFFSET = 32'h0xFFFFFFFF;
localparam int unsigned 32OFFSET = 32'h0x811C9DC5;
localparam int unsigned OFFSET_MUL = 32'h0x01000193;
// Oj is the MAC address of each switch, formed by 6 octect,
// being the Least Significant Octect the Octect 5 and MSO the 0
logic [31:0] bestHash32 = BEST_32OFFSET;
logic [31:0] hash32;
logic [31:0] hash_a;
logic [15:0] hash_b;
logic [3:0] hash_c;
logic [10:0] lb_key_value;

always_comb begin
    for(int unsigned i = 0; i < N_INPUTS_SWITCHES); i++) begin
        hash_a = Bridge_SPB_MAC_i ^ Dip_i;
        hash_b = hash_a[31:16] ^ hash_a[15:0];
        hash_c = hash_b[15:12] ^ hash_b[11:8];
        hash_b[11:8] = hash_c;
        lb_key_value = hash_b;
        
    end
end

endmodule