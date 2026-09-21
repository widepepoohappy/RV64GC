module Res_valid_generation #(
    /* === RES STATIONS PARAMETERS === */
    parameter int unsigned NRALUOP = 8,
    parameter int unsigned RES_DEPTH = 8,

    /* === FUNCTIONAL PARAMETERS === */
    //parameter int unsigned N_UOP_PER_CYCLE = 1,    
    //parameter int unsigned BITWIDTH = 32,
    parameter int unsigned RES_WIDTH_DIM = 2,
    parameter int unsigned TT_ENTRIES = 10,
    parameter int unsigned CELLS_PER_TILE = 4,
    parameter int unsigned CELL_PER_TILE = CELLS_PER_TILE
    
) (
    input Clos_pkg_t [TT_ENTRIES-1:0] Clos_pkg_in,
    //input logic [NRALUOP*2-1:0] reg_ready_in,
    //input Clos_pkg_t [NRALUOP*2-1:0] encoded_tile_in,
    output logic [NRALUOP-1:0][RES_DEPTH*RES_WIDTH_DIM-1:0] Rs_valid_o
);
localparam int unsigned ROW_PER_TILE = RES_DEPTH/CELL_PER_TILE;
localparam int unsigned TILES_PER_RS = RES_DEPTH/ROW_PER_TILE;
localparam int unsigned TILES_PER_RS_MIN1 = TILES_PER_RS;
localparam int unsigned CELL_PT_DIV_2 = CELLS_PER_TILE/2;
localparam int unsigned LOG_2_NRALUOP = $clog2(NRALUOP);
localparam int unsigned LOG_2_TILES_PER_RS = $clog2(TILES_PER_RS);
localparam int unsigned LOG_2_CELLS_PER_TILE = $clog2(CELLS_PER_TILE);
localparam int unsigned LOG_2_CELLS_PER_TILE_M1 = $clog2(CELLS_PER_TILE)-1;
    
    logic [TT_ENTRIES-1:0][$clog2(NRALUOP)-1:0] res_id_TT; 
    //logic [$clog2(TILES_PER_RS)-1:0] tile_within_res_TT;
    logic [TT_ENTRIES-1:0][$clog2(TILES_PER_RS)-1:0] tile_within_res_TT;
    //logic [TT_ENTRIES-1:0][$clog2(NRALUOP)-1:0] res_id_Bypass; 
    //logic [TT_ENTRIES-1:0][$clog2(TILES_PER_RS)-1:0] tile_within_res_Bypass;

always_comb begin
    // variabili locali al processo di comb
    // cosi non creano latch e non hanno bisogno
    // di ulteriore assegnazione 
    //res_id_Bypass = '0; 
    //tile_within_res_Bypass = '0;
    res_id_TT = '0;
    tile_within_res_TT = '0;
    Rs_valid_o = '0;
    for(int i = 0; i < TT_ENTRIES; i++) begin
      if(Clos_pkg_in[i].Valid == 1'b1) begin
        res_id_TT[i] = (Clos_pkg_in[i].Tile_ptr[(LOG_2_NRALUOP + CELL_PT_DIV_2)-1 -: LOG_2_NRALUOP]);
        // Indicates RES STAT ID
        // This operation cannot give as maximum argument MAX(TILE) - 1, because of 
        //tile_within_res_TT = TILES_PER_RS - (Clos_pkg_in[i].Tile_ptr % TILES_PER_RS) ; // "TILES_PER_RS -" is needed because we want
                                                                                    // the MSB to be the upper left
                                                                                    // of the Reserve Station, meaning:
                                                                                    // if tile_ptr = N, we want the [CELL_PER_TILE:0]
                                                                                    // portion of the vect 
                                        // We can remove % TILES_PER_RS just by letting the
                                        // signal overflow
        
        //tile_within_res_TT = LOG_2_TILES_PER_RS'(TILES_PER_RS - (Clos_pkg_in[i].Tile_ptr[LOG_2_TILES_PER_RS-1:0])) ; // "TILES_PER_RS -" is needed because we want
        tile_within_res_TT[i] = LOG_2_CELLS_PER_TILE'(Clos_pkg_in[i].Tile_ptr) ;
        // The idea is to do tile_witing_res*CELLS_PER_TILE
        // since cells per tile is always a power of 2
        // we can do log2(cells_per_tile) and shift
        // tile_within_res_TT by it
        //Rs_valid_o[res_id_TT][tile_within_res_TT<<LOG_2_CELLS_PER_TILE : tile_within_res_TT<<LOG_2_CELLS_PER_TILE-CELLS_PER_TILE] |= Clos_pkg_in[i].Tile_view;
        //Rs_valid_o[res_id_TT][(tile_within_res_TT<<LOG_2_CELLS_PER_TILE) -: CELLS_PER_TILE] |= Clos_pkg_in[i].Tile_view;
        //tmp[i] = (tile_within_res_TT<<LOG_2_TILES_PER_RS);
        Rs_valid_o[res_id_TT[i]][4'(tile_within_res_TT[i]<<LOG_2_TILES_PER_RS) +: CELLS_PER_TILE] |= Clos_pkg_in[i].Tile_view;

        // I can perform Rs_valid_o[res_id_TT] since all reserve stations cells 
        // are required to store unique data, meaning that a single cell
        // cannot be shared among different resource registers

        // Above operation does: MOD1[x x x x] x x x x = [1 0 0 0] -> Set to 1 first output port of MOD1
        //                                                                     first meaning most upper     
      end 
    end

    //for( int i = 0; i < NRALUOP*2 ; i++) begin
    //  if(reg_ready_in[i] && encoded_tile_in[i].Valid) begin
    //    res_id_Bypass[i] = encoded_tile_in[i].Tile_ptr >> LOG_2_TILES_PER_RS;
    //    tile_within_res_Bypass[i] = LOG_2_CELLS_PER_TILE'(encoded_tile_in[i].Tile_ptr) ;
    //    Rs_valid_o[res_id_Bypass[i]][4'(tile_within_res_Bypass[i]<<LOG_2_TILES_PER_RS) +: CELLS_PER_TILE] |= encoded_tile_in[i].Tile_view;

    //  end
    //end
end


endmodule 

