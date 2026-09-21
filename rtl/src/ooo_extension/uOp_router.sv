module uOp_router #(
    parameter int unsigned BITWIDTH = 32,
    parameter int unsigned ADDR_WIDTH = 32,
    parameter int unsigned N_UOP_PER_CYCLE = 1,
    parameter int unsigned NRALUOP = 8,
    parameter int unsigned RES_DEPTH = 8
) (
    // input logic [N_UOP_PER_CYCLE-1:0][6:0] op,          // belong to uOp
    input logic [N_UOP_PER_CYCLE-1:0][$clog2(NRALUOP)-1:0] ALUControl,
    input logic [N_UOP_PER_CYCLE-1:0][ADDR_WIDTH-1:0] Rs1_in, Rs2_in, Rd_in,     // belong to uOp
    input logic [N_UOP_PER_CYCLE-1:0][11:0] Imm_in,     // belong to uOp
    input logic [NRALUOP-1:0][BITWIDTH-1:0] Res_id_in,  // belong to Reserve stations
    input logic [NRALUOP-1:0][$clog2(RES_DEPTH)-1:0] Res_entry_idx_in,   // belong to Reserve stations

    /* ======= RES READY SIGNALS ======= */
    //input logic [NRALUOP-1:0] Res_ready_i,

    /* ======= OUTPUT SIGNALS ======= */
    output logic [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0][ADDR_WIDTH-1:0] Rs1_directed_o, Rs2_directed_o, Rd_directed_o,
    output logic [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0][11:0] Imm_directed_o,
    output logic [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0] Rs1_directed_valid_o, Rs2_directed_valid_o,
    output logic [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0] Rs_valid_o,
    output logic [NRALUOP-1:0][BITWIDTH-1:0] Res_id_directed_o,
    output logic [NRALUOP-1:0][$clog2(RES_DEPTH)-1:0] Res_entry_idx_directed_o
);

// this can later be defined ad hoc to have the wanted behaviour e.g. iadd = 000000, shift = 000001
typedef enum logic [$clog2(NRALUOP)-1:0] {iadd, shift, _logic, comp, bitmanip, push, pull} uop_t;

uop_t [N_UOP_PER_CYCLE-1:0] uop;
localparam logic [ADDR_WIDTH-1:0] RS_CONST_ZERO = '0; 

always_comb begin
    for(int i = 0; i < N_UOP_PER_CYCLE; i++) begin
        assign uop[i] = uop_t'(ALUControl[i]);    // explicit casting of op to uop_t
    end
end

/* ==== Rs + Reserve Stations response routing ==== */

always_comb begin
    for(int j = 0; j < NRALUOP; j ++) begin
      Imm_directed_o[j] = '0;
      Rs1_directed_o[j] = '0;
      Rs1_directed_valid_o[j] = '0;
      Rs2_directed_o[j] = '0;
      Rs2_directed_valid_o[j] = '0;
      Rd_directed_o[j] = '0;
      Rs_valid_o[j] = '0;
      for(int i = 0; i < N_UOP_PER_CYCLE; i++) begin
        if(j==uop[i]) begin
          if (Rs1_in[i] === RS_CONST_ZERO ) begin
            Rs1_directed_valid_o[j][i] = 1'b1;
          end 
          if (Rs2_in[i] === RS_CONST_ZERO ) begin
            Rs2_directed_valid_o[j][i] = 1'b1;
          end
          Imm_directed_o[j][i] = Imm_in[i];
          Rs1_directed_o[j][i] = Rs1_in[i];
          Rs2_directed_o[j][i] = Rs2_in[i];
          Rd_directed_o[j][i] = Rd_in[i];
          Rs_valid_o[j][i] = 1;
        end
            //case(uop[i])
            //    iadd : begin
            //            Imm_directed_o[i][0] = Imm_in[i];
            //            Rs1_directed_o[i][0] = Rs1_in[i];
            //            Rs2_directed_o[i][0] = Rs2_in[i];
            //            Rs_valid_o[i][0] = 1;
            //    end 
            //    shift: begin
            //            Imm_directed_o[i][1] = Imm_in[i];
            //            Rs1_directed_o[i][1] = Rs1_in[i];  
            //            Rs2_directed_o[i][1] = Rs2_in[i];  
            //            Rs_valid_o[i][1] = 1;
            //    end 
            //    _logic: begin
            //            Imm_directed_o[i][2] = Imm_in[i];
            //            Rs1_directed_o[i][2] = Rs1_in[i];  
            //            Rs2_directed_o[i][2] = Rs2_in[i];  
            //            Rs_valid_o[i][2] = 1;
            //    end 
            //    comp: begin
            //            Imm_directed_o[i][3] = Imm_in[i];
            //            Rs1_directed_o[i][3] = Rs1_in[i];  
            //            Rs2_directed_o[i][3] = Rs2_in[i];  
            //            Rs_valid_o[i][3] = 1;
            //    end 
            //    bitmanip: begin
            //            Imm_directed_o[i][4] = Imm_in[i];
            //            Rs1_directed_o[i][4] = Rs1_in[i];  
            //            Rs2_directed_o[i][4] = Rs2_in[i]; 
            //            Rs_valid_o[4][i] = 1;
            //    end 
            //    push: begin
            //            Imm_directed_o[i][5] = Imm_in[i];
            //            Rs1_directed_o[i][5] = Rs1_in[i];  
            //            Rs2_directed_o[i][5] = Rs2_in[i];
            //            Rs_valid_o[5][i] = 1;  
            //    end 
            //    pull: begin
            //            Imm_directed_o[i][6] = Imm_in[i];
            //            Rs1_directed_o[i][6] = Rs1_in[i];  
            //            Rs2_directed_o[i][6] = Rs2_in[i];
            //            Rs_valid_o[6][i] = 1;
            //    end 
            //    default: begin
            //      Imm_directed_o[i][0] = '0;
            //      Rs1_directed_o[i][0] = Rs1_in[i];  
            //      Rs2_directed_o[i][0] = Rs2_in[i];
            //      Rs_valid_o[0][i] = '0;
            //    end
            //endcase
        end
    end
end

/* ==== directing RS responses ==== */
// this is needed because due to multi uop to same RS
// it is possible that all RS can write a data in the
// same clock cylce
always_comb begin
    for(int i = 0; i < NRALUOP; i++) begin
        Res_id_directed_o[i] = Res_id_in[i];
        Res_entry_idx_directed_o[i] = Res_entry_idx_in[i];
    end
end

endmodule 

