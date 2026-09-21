module rn_stage #(
  parameter N_UOP_CYCLE = 4,
  parameter N_FREE_PER_CYCLE = 1,
  parameter PRF_DEPTH = 32,      // used for FREE LIST
  parameter ADDR_WIDTH = $clog2(PRF_DEPTH)
) ( 
  input logic clk_i, rst_ni, flush_i, en_i,
  input logic [N_FREE_PER_CYCLE-1:0][ADDR_WIDTH-1:0] free_req_i,
  input logic [N_UOP_CYCLE-1:0][ADDR_WIDTH-1:0] Rs1_i, Rs2_i, Rd_i,
// This parameter indicates if the Rd is an architectural reg or not this
// comes directly from the decoded instruction and it is needed in order to
// understand when to deallocate a free reg or not. The intermediate
// destination regs which are nor uarch regs need to be freed only when commit
// meanwhile intermediate ones need to be deallocated immediately when an
// intermediate uop is terminated. 
  input logic [N_UOP_CYCLE-1:0] is_arch, free_req_arch,
  output logic [N_UOP_CYCLE-1:0][ADDR_WIDTH-1:0] Rs1_rn_o, Rs2_rn_o, Rd_rn_o

);

  logic [N_UOP_CYCLE-1:0][ADDR_WIDTH-1:0] Rs1_rn, Rs2_rn, Rd_rn;
  logic [N_UOP_CYCLE-1:0] Rd_pull_req;

  // ====== FREE LIST SIGNALS ======
  logic [N_FREE_PER_CYCLE-1:0][ADDR_WIDTH-1:0] FL_free_req_i;
  logic [N_UOP_CYCLE-1:0][ADDR_WIDTH-1:0] FL_free_curr_regs_o;
  logic [N_UOP_CYCLE-1:0] FL_pull_req_i;
  
  // ====== FRMuop SIGNALS ======
  logic [N_UOP_CYCLE-1:0][ADDR_WIDTH-1:0] FRMuop_write_addr_in;
  logic [N_UOP_CYCLE-1:0][ADDR_WIDTH-1:0] FRMuop_write_data_in;
  logic [N_UOP_CYCLE*2-1:0][ADDR_WIDTH-1:0] FRMuop_read_addr_in;
  logic [N_UOP_CYCLE*2-1:0][ADDR_WIDTH-1:0] FRMuop_data_o;
  
  always_comb begin
    for ( int i = 0; i < N_UOP_CYCLE; i++) begin
      Rd_pull_req[i] = |Rd_i[i];

      FRMuop_read_addr_in[i*2] = Rs1_i[i];
      FRMuop_read_addr_in[i*2+1] = Rs2_i[i];
      Rs1_rn[i] = FRMuop_data_o[i*2];
      Rs2_rn[i] = FRMuop_data_o[i*2+1];
    end

    FL_free_req_i = free_req_i;
    FL_pull_req_i = Rd_pull_req;
    Rd_rn = FL_free_curr_regs_o;

    FRMuop_write_addr_in = Rd_i;
    FRMuop_write_data_in = Rd_rn;

  end

  free_list #(
    .N_UOP_CYCLE(N_UOP_CYCLE),
    .N_FREE_PER_CYCLE(N_FREE_PER_CYCLE),
    .PRF_DEPTH(PRF_DEPTH),
    .ADDR_WIDTH(ADDR_WIDTH)

  ) free_list_u (
    .clk_i,
    .rst_ni,
    .flush_i,
    .en_i,
    .is_arch,
    .free_req_arch(free_req_arch),
    .pull_req_i(FL_pull_req_i),
    .free_req_i(FL_free_req_i),
    .free_curr_regs_o(FL_free_curr_regs_o)
  );

  PRF #(
    .N_WR_PORTS(N_UOP_CYCLE),
    .N_RD_PORTS(N_UOP_CYCLE*2),
    .DATA_WIDTH(ADDR_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH),
    .MEMLINES(PRF_DEPTH),
    //.NRALUOP(NRALUOP),
    .payload_t(RAT_t)
  ) FRMuop_u (
    .clk_i,
	  .rst_ni,
    .write_reg_in(FRMuop_write_addr_in),
    .write_entry_in(FRMuop_write_data_in),    
    .read_reg_in(FRMuop_read_addr_in),
    .read_data_o(FRMuop_data_o),
    .data_valid_o(/* unused */),
    .read_addr_valid_in(/* unused */),
    .read_valid_o(/* unused */)
  );

  assign Rs1_rn_o = Rs1_rn;
  assign Rs2_rn_o = Rs2_rn;
  assign Rd_rn_o = Rd_rn;


endmodule
