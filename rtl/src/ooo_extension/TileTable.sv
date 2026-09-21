`include "registers.svh"

module TileTable #(
    parameter int   unsigned ADDR_WIDTH = 32,
    parameter int   unsigned TT_ENTRIES = 10,
    parameter int   unsigned SUPERSCALARITY = 1,
    parameter int   unsigned N_IN_ENTRY_PORTS = 8,   // This value is defined this way based on the 
                                                                    // number of Reserve Station Cells written each
                                                                    // cycle
    parameter int   unsigned N_OUT_ENTRY_PORTS = TT_ENTRIES,        /* all entries will have its own port in order to 
                                                                    provide maximum throuput for the reserve stations. 
                                                                    This is an ortogonal problem to how many entries
                                                                    we can read per clock cycle. E.g. if we allow to 
                                                                    read 1 reg per time, iphotetically, the whole map
                                                                    could contain that reg as Rs_id */
    parameter int   unsigned N_IN_RD_PORTS = 10,
    //parameter int   unsigned CELL_PER_TILE = 4,
    //parameter int   unsigned RS_NUMBER = 7,
    //parameter int   unsigned RS_DEPTH = 8,
	  //parameter int   unsigned RS_WIDTH_DIM = 2,
    //parameter int   unsigned NUMBER_OF_TILES = (RS_NUMBER*RS_DEPTH*RS_WIDTH_DIM)/CELL_PER_TILE,  
    //parameter int   unsigned PRF_DEPTH = 128,
    parameter type  payload_t = TileTable_entry_t
)(
    input logic clk_i, rst_ni, flush_i, en_i, 
    /* ===== input portion signals ==== */
    input payload_t [N_IN_ENTRY_PORTS-1:0] Tile_entry_in,               // This signals comes from the decoded uOp 
                                                                        // writing to the reservestation entry after 
                                                                        // being encoded with the RS id + RS entry tag
    
    input logic [N_IN_RD_PORTS-1:0][ADDR_WIDTH-1:0] Rd_in,   // This signal is the output of the PE
                                                                        // outputting the value (that s going to
                                                                        // be stored in the PRF) + the Rd and based
                                                                        // on the tile founds, propagate the valid 
                                                                        // bit to the RS
    
    /* ===== output portion signals ==== */
    output Clos_pkg_t [TT_ENTRIES-1:0] Clos_pkg_o
);

// MEM ARRAY
    TileTable_entry_t [TT_ENTRIES-1:0] tile_mem_array ;
    
/* ===================== READ LUT LIKE START ====================  */
    logic [TT_ENTRIES-1:0] clear_mem_entry;
    payload_t [N_IN_ENTRY_PORTS-1:0] Tile_entry_in_internal;
    logic hit_j;


    always_comb begin
      clear_mem_entry = '0;
      Clos_pkg_o      = '0;
      hit_j = 0;
      // Per ogni entry di memoria j, verifica se QUALSIASI i matcha
      for (int j = 0; j < TT_ENTRIES; j++) begin
          // Raccogli il match su j da tutti gli input i
          for (int i = 0; i < N_IN_RD_PORTS; i++) begin
              if (Rd_in[i] === tile_mem_array[j].Rs_id) begin
                hit_j = 1'b1; 
              end
          end
          if(hit_j) begin
            Clos_pkg_o[j].Valid = tile_mem_array[j].Valid;
            //Clos_pkg_o[j].Valid     = 1'b1;

            Clos_pkg_o[j].Tile_ptr  = tile_mem_array[j].Tile_ptr;
            Clos_pkg_o[j].Tile_view = tile_mem_array[j].Tile_view;

            clear_mem_entry[j]     = 1'b1;
          end
          hit_j = 0;
      end

      // Comparazione con gli input si puo avere una read during write
      for (int j = 0; j < N_IN_ENTRY_PORTS; j++) begin

        if(Tile_entry_in[j].Rs_id == 0) begin
          Tile_entry_in_internal[j].Valid = 1'b0;
        end else begin
          Tile_entry_in_internal[j].Valid = Tile_entry_in[j].Valid;
        end
        Tile_entry_in_internal[j].Rs_id = Tile_entry_in[j].Rs_id;
        Tile_entry_in_internal[j].Tile_ptr = Tile_entry_in[j].Tile_ptr;
        Tile_entry_in_internal[j].Tile_view = Tile_entry_in[j].Tile_view;
        

        if (Tile_entry_in[j].Valid) begin
          // Raccogli il match su j da tutti gli input i
          for (int i = 0; i < N_IN_RD_PORTS; i++) begin
            if (Rd_in[i] === Tile_entry_in[j].Rs_id) begin
              hit_j = 1'b1; 
            end
          end
          if(hit_j) begin
            // we do not write this value inside TT entries as we are already
            // setting the valid bit of the Rs to 1 in the higher levels 
            Tile_entry_in_internal[j].Valid = 1'b0;
          end
          hit_j = 0;
        end
      end
    end
    
/* ===================== READ LUT LIKE END ====================  */

/* ===================== WRITE SECTION START ====================  */

// The number of writes per clock cycle is equal to the number of uOp that we are allowing
// to perform per cycle --> this will be equal to the number of Reserve Stations Cells 
// that will be written with a certain Rs
TileTable_entry_t [TT_ENTRIES-1:0] reg_array_in;
TileTable_entry_t [TT_ENTRIES-1:0] signal1_merge_i;
TileTable_entry_t [TT_ENTRIES-1:0] signal2_merge_i;
TileTable_entry_t [TT_ENTRIES-1:0] Merged_signal_o;
// memory assignment
generate 
    for(genvar i = 0; i < TT_ENTRIES; i++) begin: mem_assignment_reg_array
        `FFL(tile_mem_array[i], reg_array_in[i], en_i, '0, clk_i, rst_ni);
    end
endgenerate

//merge modules #n equal to #n of mem entries (1 per entry)
generate 
    for(genvar i = 0; i < TT_ENTRIES; i++) begin: merge_modules_assignment
        merge_vects #(
            .DATA_WIDTH(1),
            .payload_t(payload_t)
        ) TT_merge_view_u (
            .Signal1_in(signal1_merge_i[i]),
            .Signal2_in(signal2_merge_i[i]),
            .Merged_signal_o(Merged_signal_o[i])
        );
    end
endgenerate
// The idea is to reuse the merge modules for each write, but changing the
// inputs based on the necessity (read below)
always_comb begin
    for(int i = 0; i < TT_ENTRIES; i++) begin
        if ( clear_mem_entry[i] ) begin
          signal2_merge_i[i] = '0;
        // TODO in this way it's possible to concurrently use this mem space making it available for an immediate usage.
        end else begin
          signal2_merge_i[i] = tile_mem_array[i];
        end
        reg_array_in[i] = Merged_signal_o[i];
    end
end

// might need to check the logic of this piece
// Idea is that, we perform CAM over the TT content, if match by content or 
// match by arbiter id we assign the corrisponding entry input to the input of the
// merge input. In the case of match, the merge second port will contain the 
// content of the memory entry, otherwise it will contain '0, meaning
// that the memory cell was free (empty)
logic [N_IN_ENTRY_PORTS-1:0][TT_ENTRIES-1:0] TT_entry_to_mem_match;
logic [N_IN_ENTRY_PORTS-1:0] TT_entry_match;
logic [N_IN_ENTRY_PORTS-1:0][TT_ENTRIES-1:0] arb_sel;

always_comb begin: CAM_PROCESS_TILE_VIEW
    signal1_merge_i = '0;
    for(int i = 0; i < N_IN_ENTRY_PORTS; i++ ) begin
        for(int j = 0; j < TT_ENTRIES; j++ ) begin
        /* we want to check if a certain input has a match for a certain mem
        * cell, so each mem cell will have a "match" wire for each entry.
        * MEM CELL A <- INPUT A, B, C, D. */
            TT_entry_to_mem_match[i][j] = ( (Tile_entry_in_internal[i].Rs_id == tile_mem_array[j].Rs_id)) &&
                                ( (Tile_entry_in_internal[i].Tile_ptr == tile_mem_array[j].Tile_ptr));        
            TT_entry_match[i] = |TT_entry_to_mem_match[i];
            if(TT_entry_to_mem_match[i][j] & Tile_entry_in_internal[i].Valid ) begin
                signal1_merge_i[j].Tile_view = Tile_entry_in_internal[i].Tile_view;
            end else if ( arb_sel[i][j] && ~TT_entry_match[i])begin
                signal1_merge_i[j] = Tile_entry_in_internal[i];            
                //signal1_merge_i[j] = '1;            
            end
        end 
    end
end

// =================== ARBITER SECTION START =====================
/* verilator lint_off UNOPTFLAT */ 
logic [N_IN_ENTRY_PORTS-1:0][$clog2(TT_ENTRIES)-1:0] TT_content_arbitered_idx;
//wire [N_IN_ENTRY_PORTS-1:0] Arbitration_valid;

payload_t [TT_ENTRIES-1:0] TT_content_to_arbiter_i  ;

generate 
    for(genvar k = 0; k < N_IN_ENTRY_PORTS; k++) begin
      // equal to lzc
        rr_arb_tree #(
            .NumIn(TT_ENTRIES),
            .DataType(logic)
        ) TT_input_arbiter_u (
        .clk_i,
        .rst_ni,
        .flush_i,
        .rr_i('0),
        .req_i(TT_arbitring_valid_i[k]),
        .data_i(/* unused */),
        .req_o(/* unused */),
        .gnt_i(/* unused */),
        .data_o( /* unused */ ),
        .idx_o(TT_content_arbitered_idx[k]),
        .gnt_o(/* unused */)
        /* we only need the index of the available entry to
        direct the incoming data */
        );
    end
endgenerate

logic [N_IN_ENTRY_PORTS-1:0][TT_ENTRIES-1:0] TT_arbitring_valid_i;
logic [N_IN_ENTRY_PORTS-1:0][TT_ENTRIES-1:0] arbitring_mask ;       /* Mask needed only for N-1 inputs, because one is indepenedent
                                                                    *we will have N mask that will be modified based on the previous 
                                                                    mask, this is needed to let the arbiters point to a different
                                                                    cell memory*/
assign TT_content_to_arbiter_i = ~tile_mem_array;

// This portion is needed to have 4 or N arbiters where each of them 
// will point to a different entry, this is done by looking at what 
// the previous one decided and remove the valid from that cell.
always_comb begin
  for ( int j = 0 ; j < TT_ENTRIES ; j++ ) begin
    TT_arbitring_valid_i[0][j] = TT_content_to_arbiter_i[j].Valid;
  end
  arbitring_mask = '1;
  arbitring_mask[0] = ({TT_ENTRIES{1'b1}} ^ (1'b1 << TT_content_arbitered_idx[0]));
  for ( int i = 1 ; i < N_IN_ENTRY_PORTS ; i ++) begin
      arbitring_mask[i] = ({TT_ENTRIES{1'b1}} ^ (Tile_entry_in_internal[i].Valid << TT_content_arbitered_idx[i])) & arbitring_mask[i-1];
  end
  for ( int i = 1 ; i < N_IN_ENTRY_PORTS ; i ++) begin
    for ( int j = 0 ; j < TT_ENTRIES ; j++ ) begin
      TT_arbitring_valid_i[i][j] = TT_content_to_arbiter_i[j].Valid & arbitring_mask[i-1][j];
    end
  end
end

always_comb begin
  arb_sel = '0;
    for (int j = 0; j < TT_ENTRIES; j++) begin
        for (int i = 0; i < N_IN_ENTRY_PORTS; i ++) begin
            arb_sel[i][j] = (TT_content_arbitered_idx[i] == (j[$clog2(TT_ENTRIES)-1:0])) & Tile_entry_in_internal[i].Valid;   
            // if we have a match between one of the idx given by the arbiter and the 
            // line addr, it means we are trying to write the input data to this memory
            // cell. All of this only if entry is valid.
        end
    end
end
/* verilator lint_on UNOPTFLAT */
// =================== ARBITER SECTION END ===================== 
// =================== WRITE SECTION END ===================== 
endmodule
