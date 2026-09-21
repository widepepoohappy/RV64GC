module free_list #(
  parameter N_UOP_CYCLE = 4,
  parameter N_FREE_PER_CYCLE = 1,
  parameter PRF_DEPTH = 10,
  parameter ADDR_WIDTH = $clog2(PRF_DEPTH)
) ( 
  input logic clk_i, rst_ni, flush_i, en_i,
  input logic [N_UOP_CYCLE-1:0] pull_req_i,
  input logic [N_UOP_CYCLE-1:0] is_arch, free_req_arch,
  input logic [N_FREE_PER_CYCLE-1:0][ADDR_WIDTH-1:0] free_req_i,
  output logic [N_UOP_CYCLE-1:0][ADDR_WIDTH-1:0] free_curr_regs_o

);

/* ================= START MEM COMPOENENT =============== */
  logic [PRF_DEPTH-1:0] free_list_arr;
  logic [PRF_DEPTH-1:0] free_list_arch;
  logic [PRF_DEPTH-1:0] entry_is_arch;
  logic [PRF_DEPTH-1:0] free_list_arr_in;
 
  generate 
    for(genvar i = 0; i < PRF_DEPTH; i++) begin: list_assignement
      `FFL(free_list_arr[i], free_list_arr_in[i], en_i, '0, clk_i, rst_ni);
      `FFL(free_list_arch[i], entry_is_arch[i], en_i, '0, clk_i, rst_ni);
    end
  endgenerate

/* ================= END MEM COMPOENENT =============== */


/* ================= START INDEX COMPOENENT =============== */

  logic [N_UOP_CYCLE-1:0][ADDR_WIDTH-1:0] FL_content_arbitered_idx;
  logic [N_UOP_CYCLE-1:0][PRF_DEPTH-1:0] FL_content_to_arb;

  generate
   for(genvar i = 0; i < N_UOP_CYCLE; i++) begin
    rr_arb_tree #(
      .NumIn(PRF_DEPTH),
      .DataType(logic)
    ) FL_reg_arbiter_u (
      .clk_i,
      .rst_ni,
      .flush_i,
      .rr_i('0),
      .req_i(FL_content_to_arb[i]),
      .data_i(/* unused */),
      .req_o(/* unused */),
      .gnt_i(/* unused */),
      .data_o( /* unused */ ),
      .idx_o(FL_content_arbitered_idx[i]),
      .gnt_o(/* unused */)
      /*we only need the index of the available entry*/
      );
   end
 endgenerate 

 assign FL_content_to_arb[0] = ~free_list_arr ;
 logic [N_UOP_CYCLE-1:0][PRF_DEPTH-1:0] arbitring_mask;

  always_comb begin
    arbitring_mask = '1;
    arbitring_mask[0] = ({PRF_DEPTH{1'b1}} ^ (1'b1 << FL_content_arbitered_idx[0]));
    for ( int i = 1; i < N_UOP_CYCLE; i++) begin
      arbitring_mask[i] = ({PRF_DEPTH{1'b1}} ^ (1'b1 << FL_content_arbitered_idx[i])) & arbitring_mask[i-1];
    end

    for ( int i = 1; i < N_UOP_CYCLE; i++) begin
      FL_content_to_arb[i] = ~free_list_arr & arbitring_mask[i-1];
    end
  end
/* ================= END INDEX COMPOENENT =============== */


/* ================= START OUTPUT COMPOENENT =============== */
  always_comb begin
    free_curr_regs_o = '0;
    for ( int i = 0; i < N_UOP_CYCLE; i++) begin  
      if(pull_req_i[i]) begin
        free_curr_regs_o[i] = FL_content_arbitered_idx[i];
      end
    end
  end
/* ================= END OUTPUT  COMPOENENT =============== */

/* ================= START SET COMPOENENT =============== */
  
  always_comb begin
    free_list_arr_in = free_list_arr;
    entry_is_arch = free_list_arch;
    for ( int i = 0; i < N_UOP_CYCLE; i++) begin  
      if(pull_req_i[i]) begin
        free_list_arr_in[FL_content_arbitered_idx[i]] = 1'b1;
        if(is_arch[i]) begin
          entry_is_arch[FL_content_arbitered_idx[i]] = 1'b1;
        end
      end
    end    
    for ( int i = 0; i < N_FREE_PER_CYCLE; i ++) begin
      if( |free_req_i[i] ) begin
      // this is needed to distinguish deacollaction from uop during internal
      // phases and commit
        if ( free_req_arch[i] == free_list_arch[free_req_i[i]] ) begin
        // The list has to be freed when we produce the values for the
        // internal operations.
          free_list_arr_in[free_req_i[i]] = 1'b0;
        end
        // the upper comment suggests that the original Rd value will not
        // matter, this is reflected in this portion meaning when the exec
        // stage will be done, we will receive the renamed value of Rd not the
        // original value, reflecting the array line in mem.
      end
    end
  end

endmodule

