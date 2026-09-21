
module RS #(
    parameter BITWIDTH = 32,
    parameter DEPTH = 8,	    //Possible operation waiting for the PE
    parameter ID = 1,		    //This will be needed to identify and making this RS unique
    parameter RES_WIDTH_DIM = 2
)(
    input logic clk_i, rst_ni, en_i,
    input rs_entry_t Res_in,
    input logic [DEPTH*RES_WIDTH_DIM-1:0] Tag_valid_in,
    output rs_entry_t Res_o,
    output logic Res_valid_o,
    // output logic [11:0] Imm_o,
    // output logic is_imm_o,
    output logic Entry_ready_o,
    output logic [$clog2(DEPTH)-1:0] Entry_Idx_slot_o,
    output logic [BITWIDTH-1:0] Rs_id_o
);

  localparam int unsigned LOG2_RES_WIDTH_DRIM = $clog2(RES_WIDTH_DIM);
// MEMORY ELEMENT
    rs_entry_t [DEPTH-1:0] RS_entry ;
    
// ASSIGN PROCEDURE
    logic [DEPTH-1:0] PE_entry_assignment_in;
    wire [$clog2(DEPTH)-1:0] Idx_RS_slot;
    wire Entry_Idx_valid;					                // THIS SIGNALS INDICATE IF THERE IS AT LEAST ONE ENTRY SLOT FREE
    logic [DEPTH-1:0] we_valid;

    always_comb begin
      for( int i = 0; i < DEPTH; i++) begin
        we_valid[i] = Tag_valid_in[i*2] | Tag_valid_in[i*2+1];
      end
    end
// Setting valid bit to 1/0 based on valid bit generator, default is 0.
    logic [DEPTH*RES_WIDTH_DIM-1:0] tmp;

   // always_comb begin

   //   for(int i = 0; i < DEPTH*RES_WIDTH_DIM; i++) begin
   //       tmp[i[0]] = Tag_valid_in[i] ;
   //   end
   // end
    always_ff @(posedge clk_i or negedge rst_ni) begin
    
      if ( ~rst_ni) begin
        for(int i = 0; i < DEPTH*RES_WIDTH_DIM; i++) begin
            RS_entry[i].RAT_Entry[i % RES_WIDTH_DIM].Valid <= 0;
        end
      end else if ( en_i ) begin
        for(int unsigned i = 0; i < DEPTH*RES_WIDTH_DIM; i++) begin
          //tmp = Tag_valid_in;
          if(we_valid[i >> 1]) begin
            RS_entry[i >> 1].RAT_Entry[i[0]].Valid <= Tag_valid_in[i] ;
          end
        end
      end
    end


    always_ff @(posedge clk_i or negedge rst_ni) begin
        if ( ~rst_ni) begin
            for( int i = 0; i < DEPTH; i++) begin
                RS_entry[i].is_imm <= 0;
                RS_entry[i].Imm <= '0;
                RS_entry[i].RAT_Entry[0].Tag <= '0;
                RS_entry[i].RAT_Entry[1].Tag <= '0;
                RS_entry[i].Entry_free <= 1'b1;
            end
        end else if ( en_i && Entry_Idx_valid && Res_in.Entry_free) begin
                // Assigning everything except valid bit not to cause multiple driven signal error
                RS_entry[Idx_RS_slot] <= Res_in;
                RS_entry[Idx_RS_slot].Entry_free <= ~Res_in.Entry_free;
                //RS_entry[Idx_RS_slot].is_imm <= Res_in.is_imm;
                //RS_entry[Idx_RS_slot].Imm <= Res_in.Imm;
                //RS_entry[Idx_RS_slot].Rd <= Res_in.Rd;
                //RS_entry[Idx_RS_slot].RAT_Entry[0].Tag <= Res_in.RAT_Entry[0].Tag;
                //RS_entry[Idx_RS_slot].RAT_Entry[1].Tag <= Res_in.RAT_Entry[1].Tag;
                //RS_entry[Idx_RS_slot].Entry_free <= 0;		    // MARK THAT THE ENTRY SLOT IS NOT FREE ANYMORE
                // Superseeded by modifying it directly from package sent 
                // from RES_STACK
            end
    end
  assign Entry_Idx_slot_o = Idx_RS_slot;
  assign Rs_id_o = ID << BITWIDTH/2;
    
// ==========================================# START INPUT PORTION ==========================================# //
//PE FOR ENTRY ASSIGNMENT
  assign Entry_ready_o = Entry_Idx_valid;

  always_comb begin
    for(int i = 0; i < DEPTH; i ++) begin
        PE_entry_assignment_in[i] = RS_entry[i].Entry_free;
    end
  end
  priority_encoder #(						                // NEEDED TO RESOLVE CONFLICT ON WHERE TO PLACE THE DATA
    .N(DEPTH)
  ) PE_entry_assignment (
    .in(PE_entry_assignment_in),
    .out(Idx_RS_slot),
    .valid(Entry_Idx_valid)    
  );
// ============================================# END INPUT PORTION ========================================== //


// ========================================== START OUTPUT PORTION ==========================================# //
//PE FOR ALU DATA DELIVERY
    logic rst_entry_free;
    logic [DEPTH-1:0] PE_ALU_dispatch_in;
    wire [$clog2(DEPTH)-1:0] Idx_RS_dispatch;
    wire Dispatch_Idx_valid;					            // SIGNAL USED TO NOTE IF THERE IS A VALID ENTRY SLOT
    logic [DEPTH-1:0] Entry_ready;

    always_comb begin
        // local variable, no need to export it
    Entry_ready = 1'b1;

        for(int i = 0; i < DEPTH; i ++) begin     
            //for(int j = 0; j < RES_WIDTH_DIM; j++) begin
                if(RS_entry[i].is_imm) begin
                    Entry_ready[i] = RS_entry[i].RAT_Entry[0].Valid ;   //if op is imm, we only need Rs1 reg to be valid
                end else begin
                    Entry_ready[i] = RS_entry[i].RAT_Entry[0].Valid ;   //if op not imm, both regs need to be valid
                    Entry_ready[i] &= RS_entry[i].RAT_Entry[1].Valid ;   //if op not imm, both regs need to be valid
                end
            //end
            PE_ALU_dispatch_in[i] = Entry_ready[i] & ~RS_entry[i].Entry_free;                       // MARK WHICH ENTRY SLOT IS READY FOR OUTPUT DISPATCH
        end
    end

    priority_encoder #(	    // NEEDED TO RESOLVE MULTIPLE READY CONFLICT
	    .N(DEPTH)
    ) PE_ALU_dispatch (
        .in(PE_ALU_dispatch_in),
        .out(Idx_RS_dispatch),
        .valid(Dispatch_Idx_valid)
    );

//ALU DISPATCH ASSIGNMENT
    always_comb begin
      Res_o = '0;
      Res_valid_o = 1'b0;
      rst_entry_free = 1'b0;
      if ( Dispatch_Idx_valid ) begin
        Res_o = RS_entry[Idx_RS_dispatch];
        Res_valid_o = Dispatch_Idx_valid;
        // Res_o <= RS_entry[Idx_RS_dispatch].RAT_Entry;
        // and imm
        // Imm_o <= RS_entry[Idx_RS_dispatch].Imm;
        // is_imm_o <= RS_entry[Idx_RS_dispatch].is_imm;
        //RS_entry[Idx_RS_dispatch].Entry_free = 1;	
        rst_entry_free = 1'b1;
      end
    end

    always_ff @(posedge clk_i or negedge rst_ni) begin
      if (rst_entry_free) begin
          RS_entry[Idx_RS_dispatch].Entry_free <= 1;
      end
    end

    //always_ff @(posedge clk_i or negedge rst_ni) begin
    //    if ( ~rst_ni ) begin
    //      Res_o <= '0;
    //      Res_valid_o <= '0;
    //    end else if ( en_i && Dispatch_Idx_valid) begin
    //        // we need to output only the Rs pointers
    //        Res_o <= RS_entry[Idx_RS_dispatch];
    //        Res_valid_o <= Dispatch_Idx_valid;
    //        // Res_o <= RS_entry[Idx_RS_dispatch].RAT_Entry;
    //        // and imm
    //        // Imm_o <= RS_entry[Idx_RS_dispatch].Imm;
    //        // is_imm_o <= RS_entry[Idx_RS_dispatch].is_imm;
    //        RS_entry[Idx_RS_dispatch].Entry_free <= 1;			            // ONCE USED THE ENTRY SLOT CAN BE REASSIGNED
    //    end 
    //end
// ==========================================# END OUTPUT PORTION ==========================================# //

endmodule
