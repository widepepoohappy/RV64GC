

module Encoder #(
    parameter int unsigned NRALUOP = 8,
    parameter int unsigned BITWIDTH = 32,
    parameter int unsigned ADDR_WIDTH = 32,
    parameter int unsigned RS_DEPTH = 8,
    parameter int unsigned CELL_PER_TILE = 4,
    parameter int unsigned ROW_PER_TILE = RS_DEPTH/CELL_PER_TILE,
    parameter int unsigned TILES_PER_RS = RS_DEPTH/ROW_PER_TILE

) (
    input logic [NRALUOP-1:0][BITWIDTH-1:0] Res_id_in,
    input logic [NRALUOP-1:0][$clog2(RS_DEPTH)-1:0] Res_entry_idx_in,
    input logic [NRALUOP-1:0] Res_response_valid_in,
    input logic [NRALUOP-1:0][ADDR_WIDTH-1:0] Rs1_in, Rs2_in,
    output Encoded_entry_t [NRALUOP*2-1:0] Encoded_tile_o
);



//localparam int unsigned RS1_VIEW_CONST = 2**(CELL_PER_TILE-1) ;
localparam int unsigned RS1_VIEW_CONST = 1'b1 ;
//localparam int unsigned RS2_VIEW_CONST = 2**(CELL_PER_TILE-1) >> 1 ;
localparam int unsigned RS2_VIEW_CONST = 2'b10 ;
//localparam int unsigned RS_VIEW_CONST = 3 << $clog2(CELL_PER_TILE);
localparam int unsigned RS_VIEW_CONST = 2'b11 ;
localparam int unsigned TILES_PER_RS_DIV_2 = TILES_PER_RS/2;
localparam int unsigned ROW_PER_TILE_DIV_2 = ROW_PER_TILE/2;
localparam int unsigned LOG2_ROWPTILE = $clog2(ROW_PER_TILE);
//localparam int unsigned BITWIDTH_DIV_2 = BITWIDTH/2;
localparam int unsigned LOG2_NRALUOP = $clog2(NRALUOP);

// need to have one tile encoded per uOp
logic [NRALUOP-1:0][$clog2(NRALUOP)+TILES_PER_RS_DIV_2-1:0]        id_enc;
logic [NRALUOP-1:0][$clog2(RS_DEPTH)-1:0]                          entry_id;
logic [NRALUOP-1:0][$clog2(NRALUOP)+TILES_PER_RS_DIV_2-1:0]        tile_encoded;
logic [NRALUOP-1:0][$clog2(ROW_PER_TILE)-1:0]upper_lower;
logic [NRALUOP-1:0][CELL_PER_TILE-1:0]     Rs1_tile_view,  Rs2_tile_view;

// MSB IS THE MOST UPPER LEFT CELL FOR RESERVE STATION



always_comb begin
  logic [NRALUOP-1:0][31:0] tmp;
  tmp = '0;
    for(int i = 0; i < NRALUOP; i++) begin
        id_enc[i] = ($clog2(NRALUOP)+TILES_PER_RS_DIV_2)'(LOG2_NRALUOP'(Res_id_in[i] >> 16) << (TILES_PER_RS_DIV_2));
        entry_id[i] = Res_entry_idx_in[i];
        tile_encoded[i] = id_enc[i] + {{ROW_PER_TILE_DIV_2{1'b0}},{(entry_id[i] >> ROW_PER_TILE_DIV_2)}};
        //upper_lower[i] = entry_id[i] % ROW_PER_TILE;
        upper_lower[i] = entry_id[i][LOG2_ROWPTILE-1:0];
        if(Rs1_in[i]==Rs2_in[i]) begin
            tmp[i] = upper_lower[i] << 1;
            Rs1_tile_view[i] = CELL_PER_TILE'(RS_VIEW_CONST << tmp[i]);
            Rs2_tile_view[i] = CELL_PER_TILE'(0);
            Encoded_tile_o[(i*2)+1].Valid = 0;

        end else begin
            tmp[i] = upper_lower[i] << 1;
            Rs1_tile_view[i] = CELL_PER_TILE'(RS1_VIEW_CONST << tmp[i]);
            Rs2_tile_view[i] = CELL_PER_TILE'(RS2_VIEW_CONST << tmp[i]);
            Encoded_tile_o[(i*2)+1].Valid = Res_response_valid_in[i];
        end
        //tmp[i] = upper_lower[i] << 1;
        Encoded_tile_o[i*2].Valid = Res_response_valid_in[i];
        Encoded_tile_o[i*2].Rs_id = Rs1_in[i];
        Encoded_tile_o[(i*2)+1].Rs_id = Rs2_in[i];
        Encoded_tile_o[i*2].Tile_ptr = tile_encoded[i];
        Encoded_tile_o[(i*2)+1].Tile_ptr = tile_encoded[i];
        Encoded_tile_o[i*2].Tile_view = Rs1_tile_view[i];
        Encoded_tile_o[(i*2)+1].Tile_view = Rs2_tile_view[i];
        //Encoded_tile_o[i*2].Valid = 1'b1;
        //Encoded_tile_o[i*2].Rs_id = '1;
        //Encoded_tile_o[(i*2)+1].Rs_id = Rs2_in[i];
        //Encoded_tile_o[i*2].Tile_ptr = tile_encoded[i];
        //Encoded_tile_o[(i*2)+1].Tile_ptr = tile_encoded[i];
        //Encoded_tile_o[i*2].Tile_view = Rs1_tile_view[i];
        //Encoded_tile_o[(i*2)+1].Tile_view = Rs2_tile_view[i];
    end
end

endmodule
