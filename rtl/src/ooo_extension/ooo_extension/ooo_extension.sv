`include "OoO_packages.pkg"



module ooo_extension #(
	/* ======== uArch params ======== */
  parameter int unsigned BITWIDTH = 32,
  parameter int unsigned DATA_WIDTH = 32,
	parameter int unsigned N_UOP_PER_CYCLE = 4,
  // this parameter can be optimized by knowing the maximum N of op
  // to the same FU per cycle. For now I'll keep it like this
  parameter int unsigned NRALUOP = 8,

  /* ======== RESERVE STATION PARAMS ======== */
  parameter int unsigned RES_DEPTH= 8,
	parameter int unsigned RES_WIDTH_DIM= 2,			// Should be a multiple of 2, superscalar term
  parameter int unsigned RES_FIFO_DEPTH = 4,

  /* ======== PE FIFO PARAMS ======== */
  parameter int unsigned PE_FIFO_DEPTH = 4,

  /* ======== PRF PARAMS ======== */
  parameter int unsigned PRF_N_RD_PORTS = NRALUOP,
  parameter int unsigned PRF_N_WR_PORTS = NRALUOP,
  parameter int unsigned PRF_DEPTH = 32,  
  //parameter int unsigned PRF_MEMSIZE = PRF_DEPTH*8,     // this indicate the number of B 128B =1,024 bits
  parameter int unsigned ADDR_WIDTH = 32,

	/* ======== TILE ENCODING PARAMS ======== */
	parameter int unsigned CELL_PER_TILE = 4,
  parameter int unsigned ROW_PER_TILE = RES_DEPTH/CELL_PER_TILE,
  parameter int unsigned TILES_PER_RS = RES_DEPTH/ROW_PER_TILE,
  //parameter int   unsigned NUMBER_OF_TILES = (NRALUOP*RES_DEPTH*RES_WIDTH_DIM)/CELL_PER_TILE,  
  
  /* ======== TILE TABLE PARAMS ======== */
  parameter int   unsigned TT_ENTRIES = 20,
  parameter int   unsigned SUPERSCALARITY = 1,
  parameter int   unsigned TT_N_OUT_ENTRY_PORTS = TT_ENTRIES, 
  parameter int   unsigned TT_N_IN_ENTRY_PORTS = NRALUOP*2, 
  parameter int   unsigned TT_N_IN_PORTS = NRALUOP

) (
	input logic clk_i, rst_ni, en_i, flush_i,
  input logic [N_UOP_PER_CYCLE-1:0][ADDR_WIDTH-1:0]       Rs1_in, Rs2_in,     // INFORMATION COMING FROM RF AND INSTRUCTION
	input logic [N_UOP_PER_CYCLE-1:0][ADDR_WIDTH-1:0]       Rd_in,
  input logic [N_UOP_PER_CYCLE-1:0][6:0]                  op,
  input logic [N_UOP_PER_CYCLE-1:0][11:0]                 Imm_in,
  input logic [N_UOP_PER_CYCLE-1:0][$clog2(NRALUOP)-1:0]  ALUControl_in,

	output logic [NRALUOP-1:0] HZ_Entry_readyHz,
  output logic [NRALUOP-1:0] HZ_uOp_lane_pe_fifo_full,
  output logic [NRALUOP-1:0] HZ_uOp_lane_rs_fifo_full,
  output logic [NRALUOP-1:0] ALU_cout_o,
  output logic [NRALUOP-1:0] Zero_o
);


  logic [N_UOP_PER_CYCLE-1:0] is_imm ;
  always_comb begin
    for(int i = 0; i < N_UOP_PER_CYCLE; i++) begin
      is_imm[i] = op[i][4];
    end
  end

	/* ==== uOp Router Signals ==== */
  localparam type ROUTER_payload_t =              Encoded_entry_t;
  logic [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0][ADDR_WIDTH-1:0]        Router_rs2_directed_o;
  logic [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0]                        Router_rs2_directed_valid_o;
  logic [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0][ADDR_WIDTH-1:0]        Router_rs1_directed_o;
  logic [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0]                        Router_rs1_directed_valid_o;
  logic [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0][ADDR_WIDTH-1:0]        Router_rd_directed_o;
  logic [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0][11:0]  Router_Imm_directed_o;
  logic [NRALUOP-1:0][BITWIDTH-1:0]               Router_res_id_directed_o;
  logic [NRALUOP-1:0][$clog2(RES_DEPTH)-1:0]      Router_res_entry_idx_directed_o;
  logic [NRALUOP-1:0][BITWIDTH-1:0]               Router_res_id_in;           // belong to Reserve stations
  logic [NRALUOP-1:0][$clog2(RES_DEPTH)-1:0]      Router_res_entry_idx_in;    // belong to Reserve stations
  logic [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0]        Router_rs_valid_o;

  /* ==== RES_stacks signals ==== */
  localparam type       RES_stacks_payload_t =              rs_entry_t;
  logic                 [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0]  res_stack_valid_in;
  logic                 [NRALUOP-1:0]                       res_stack_ready_o;
  RES_stacks_payload_t  [NRALUOP-1:0][N_UOP_PER_CYCLE-1:0]  res_stack_payload_in;
  RES_stacks_payload_t  res_stack_payload_o [NRALUOP-1:0]; 
  //logic                 [NRALUOP-1:0]                       res_stack_rdy_o;
  //logic                 [NRALUOP-1:0]                       res_stack_en_i;

  /* ==== Reserve Station Signals ==== */
  localparam type RES_payload_t =     rs_entry_t;
  wire 		    [NRALUOP-1:0][$clog2(RES_DEPTH)-1:0]  			Res_entry_idx_response;
  wire 		    [NRALUOP-1:0][BITWIDTH-1:0]   			        Res_id_response;
  logic [NRALUOP-1:0][RES_DEPTH*RES_WIDTH_DIM-1:0]        RES_Tag_valid_in;
  RES_payload_t 	[NRALUOP-1:0] 			RS_in;
  RES_payload_t 	[NRALUOP-1:0] 			RS_out; 			//rs_entry already contains 2 values
  logic           [NRALUOP-1:0]       RES_valid_o;
 	// logic 		    [NRALUOP-1:0][11:0] 	Res_imm_o;
	// logic 		      [NRALUOP-1:0] 			Res_is_imm_o;
  wire 		        [NRALUOP-1:0]  			Res_entry_ready;

  /* ==== Extend signals ==== */
  logic [NRALUOP-1:0][1:0]    EXT_sign_in;
  logic [NRALUOP-1:0][11:0]   EXT_immsrc_in;
  logic [NRALUOP-1:0][31:0]   EXT_immext_o;

  /* ===== FIFOs SIGNALS ===== */
  localparam type FIFO_payload_t =    FU_entry_t;
  FIFO_payload_t  [NRALUOP-1:0]       PE_fifo_data_in;
  logic           [NRALUOP-1:0]       PE_fifo_valid_in;
  logic           [NRALUOP-1:0]       PE_fifo_rdy_o;
  FIFO_payload_t  [NRALUOP-1:0]       PE_fifo_data_o;
  logic           [NRALUOP-1:0]       PE_fifo_valid_o;
  //logic           [NRALUOP-1:0]       PE_fifo_valid_o;
  //logic           [NRALUOP-1:0]       PE_fifo_ready_in;

  /* ==== FUs signals ==== */
  logic [NRALUOP-1:0][ADDR_WIDTH-1:0] PE_Rd_in;
  logic [NRALUOP-1:0][ADDR_WIDTH-1:0] PE_Rd_out;
  logic [NRALUOP-1:0][$clog2(NRALUOP)-1:0] ALUControl;
  logic [NRALUOP-1:0][DATA_WIDTH-1:0] ALU_operandA;
  logic [NRALUOP-1:0][DATA_WIDTH-1:0] ALU_operandB;
  logic [NRALUOP-1:0][DATA_WIDTH-1:0] ALUResult;
  logic [NRALUOP-1:0]                 ALU_cout; 
  logic [NRALUOP-1:0]                 PE_valid_in; 
  logic [NRALUOP-1:0]                 Zero;
  //logic [NRALUOP-1:0]                 ALU_en;

  /* ==== ENCODER signals ==== */
  Encoded_entry_t [NRALUOP*2-1:0]             ENC_Encoded_tile_o;
  logic [NRALUOP-1:0]                         ENC_Res_response_valid_in;
  logic [NRALUOP-1:0][BITWIDTH-1:0]           ENC_Res_id_in;
  logic [NRALUOP-1:0][$clog2(RES_DEPTH)-1:0]  ENC_Res_entry_idx_in;
  logic [NRALUOP-1:0][ADDR_WIDTH-1:0]           ENC_Rs1_in, ENC_Rs2_in;

  /* ==== Tile Table signals ==== */
  TileTable_entry_t [TT_N_IN_ENTRY_PORTS-1:0]       TT_Tile_entry_in;
  logic [NRALUOP-1:0][ADDR_WIDTH-1:0]               TT_Rd_in;
  Clos_pkg_t [TT_N_OUT_ENTRY_PORTS-1:0]             TT_Clos_pkg_o;

  /* ==== Valid bit generator signals ==== */
  Clos_pkg_t [TT_ENTRIES-1:0]                      VBG_Clos_pkg_in;
  //Clos_pkg_t [NRALUOP*2-1:0]                       VBG_encoded_tile_in;
  logic [NRALUOP-1:0][RES_DEPTH*RES_WIDTH_DIM-1:0] VBG_Rs_valid_o;
  //logic [NRALUOP*2-1:0] VBG_reg_ready_in;

  /* ==== MERGE MODULE signals ==== */
  localparam type MERGE_payload_t =       logic;
  MERGE_payload_t [NRALUOP*2-1:0][ADDR_WIDTH-1:0]           MERGE_payload_in;                       // This is *2 because we need an Rs1 and Rs2
  logic     [NRALUOP*2-1:0]                 MERGE_payload_valid_in;                 // This is *2 because we need an Rs1 and Rs2
  MERGE_payload_t [NRALUOP*2-1:0][ADDR_WIDTH-1:0]           MERGE_payload_o;
  logic [NRALUOP*2-1:0][NRALUOP*2-1:0]        MERGE_reg_view_o;

  /* ==== PRF signals ==== */
  localparam type PRF_payload_t = RAT_t;
  logic [PRF_N_WR_PORTS-1:0][ADDR_WIDTH-1:0]            PRF_write_addr_in;
  logic [PRF_N_WR_PORTS-1:0][DATA_WIDTH-1:0]            PRF_write_data_in;
  logic [PRF_N_RD_PORTS*2-1:0][ADDR_WIDTH-1:0]          PRF_read_addr_in;
  logic [PRF_N_RD_PORTS*2-1:0][DATA_WIDTH-1:0]          PRF_data_o;
  logic [PRF_N_RD_PORTS*2-1:0]                          PRF_data_valid_o;
  logic [NRALUOP*2-1:0][ADDR_WIDTH-1:0]                 PRF_read_addr_valid_in;
  logic [NRALUOP*2-1:0]                                 PRF_ready_valid_o;

  /* ==== XBAR Signals ==== */
  localparam type XBAR_payload_t = logic[DATA_WIDTH-1:0];
  logic               [NRALUOP*2-1:0][NRALUOP*2-1:0]     XBAR_sel_in;
	XBAR_payload_t 		  [NRALUOP*2-1:0] 		XBAR_data_o;
  logic               [NRALUOP*2-1:0]     XBAR_valid_o;
  XBAR_payload_t      [NRALUOP*2-1:0]     XBAR_data_in;
  logic               [NRALUOP*2-1:0]     XBAR_valid_in;


	/* ==== uOp lanes signal assignment ==== */
	always_comb begin
		for(int i = 0; i < NRALUOP; i++) begin
      /* == res_satck == */
      for(int j = 0; j < N_UOP_PER_CYCLE; j++) begin
        res_stack_payload_in[i][j].RAT_Entry[0].Tag = Router_rs1_directed_o[i][j];
        res_stack_payload_in[i][j].RAT_Entry[0].Valid = Router_rs1_directed_valid_o[i][j];
        res_stack_payload_in[i][j].RAT_Entry[1].Tag = Router_rs2_directed_o[i][j];
        res_stack_payload_in[i][j].RAT_Entry[1].Valid = Router_rs2_directed_valid_o[i][j];
        res_stack_payload_in[i][j].Rd = Router_rd_directed_o[i][j];
        //res_stack_payload_in[i][j].RAT_Entry[1].Tag = '1;
        res_stack_payload_in[i][j].Imm = Router_Imm_directed_o[i][j];
        //res_stack_payload_in[i][j].Imm = '1;
        res_stack_payload_in[i][j].is_imm = is_imm[j];                              // info not coming
                                                                                    // from router but
                                                                                    // directly from op
        res_stack_payload_in[i][j].Entry_free = Router_rs_valid_o[i][j];            // Using this entry free to write only when wanted inside the RS (it is a flag inside the Reserve station)


        //res_stack_payload_in[i][j].Entry_free = 1;
        res_stack_valid_in[i][j] = Router_rs_valid_o[i][j];
      end
    /* Reserve stations */
      RS_in[i] = res_stack_payload_o[i];
    //In case of read during write
      for ( int k = 0; k < 1; k++) begin
        if(PE_Rd_out[i] == res_stack_payload_o[i].RAT_Entry[k].Tag) begin
          RS_in[i].RAT_Entry[k].Valid = 1'b1;
        end
      end
      RS_in[i].RAT_Entry[0].Valid |= PRF_ready_valid_o[i*2];
      RS_in[i].RAT_Entry[1].Valid |= PRF_ready_valid_o[i*2+1];

      
      EXT_immsrc_in[i] = RS_out[i].Imm;

    /* merge module */
    /* this module is ortogonal to PRF inputs it only decides what RES output
    is going to the PRF to not cause a multiple driver for each of the PRF
    mem cells. Furthermore it serves the scope of giving the XBAR the proper
    selectors for each RS read */
      MERGE_payload_in[i*2] =  RS_out[i].RAT_Entry[0].Tag;
      MERGE_payload_in[(i*2)+1] =  RS_out[i].RAT_Entry[1].Tag;
      MERGE_payload_valid_in[i*2] = RES_valid_o[i];
      MERGE_payload_valid_in[(i*2)+1] = RES_valid_o[i] & ~RS_out[i].is_imm;

    /* PRF signals */
      PRF_read_addr_in[i*2] = MERGE_payload_o[i*2];
      PRF_read_addr_in[(i*2)+1] = MERGE_payload_o[(i*2)+1];
      PRF_write_addr_in[i] = PE_Rd_out[i];
      PRF_write_data_in[i] = ALUResult[i];
      PRF_read_addr_valid_in[i*2] = ENC_Encoded_tile_o[i*2].Rs_id;
      PRF_read_addr_valid_in[i*2+1] = ENC_Encoded_tile_o[i*2+1].Rs_id;

    /* VBG signals */
      //VBG_reg_ready_in[i*2] = PRF_ready_valid_o[i*2]; 
      //VBG_reg_ready_in[i*2+1] = PRF_ready_valid_o[i*2+1]; 
      //VBG_encoded_tile_in[i*2].Valid = ENC_Encoded_tile_o[i*2].Valid;
      //VBG_encoded_tile_in[i*2].Tile_ptr = ENC_Encoded_tile_o[i*2].Tile_ptr;
      //VBG_encoded_tile_in[i*2].Tile_view = ENC_Encoded_tile_o[i*2].Tile_view;
      //VBG_encoded_tile_in[i*2+1].Valid = ENC_Encoded_tile_o[i*2+1].Valid;
      //VBG_encoded_tile_in[i*2+1].Tile_ptr = ENC_Encoded_tile_o[i*2+1].Tile_ptr;
      //VBG_encoded_tile_in[i*2+1].Tile_view = ENC_Encoded_tile_o[i*2+1].Tile_view;

    /* XBAR signals */
      XBAR_data_in[i*2] = PRF_data_o[i*2];
      XBAR_data_in[(i*2)+1] = PRF_data_o[(i*2)+1];
      XBAR_sel_in[i*2] = MERGE_reg_view_o[i*2];
      XBAR_sel_in[i*2+1] = MERGE_reg_view_o[i*2+1];
      XBAR_valid_in[i*2] = PRF_data_valid_o[i*2];
      XBAR_valid_in[i*2+1] = PRF_data_valid_o[i*2+1];
      

    /* uOp router response from RES */
      Router_res_id_in[i] = Res_id_response[i];
      Router_res_entry_idx_in[i] = Res_entry_idx_response[i];

    /* Encoder signals */
      ENC_Rs1_in[i] = res_stack_payload_o[i].RAT_Entry[0].Tag;      // This is needed because the write inside the RS
                                                                      // is decoupled from when the instr is dispatched
                                                                      // meaning that we now need to get the Tag values
                                                                      // when they are getting written inside the RS
                                                                      // and not dispatched
      ENC_Rs2_in[i] = res_stack_payload_o[i].RAT_Entry[1].Tag;      // This is needed because the write inside the RS
                                                                      // is decoupled from when the instr is dispatched
                                                                      // meaning that we now need to get the Tag values
                                                                      // when they are getting written inside the RS
                                                                      // and not dispatched
      ENC_Res_response_valid_in[i] = res_stack_payload_o[i].Entry_free;     // Using Entry_free as a valid signal 
      ENC_Res_id_in[i] = Router_res_id_directed_o[i];
      ENC_Res_entry_idx_in[i] = Router_res_entry_idx_directed_o[i];

    /* Extend unit signal */
      EXT_sign_in[i] = op[i][0];       // NOT TRUE NEED TO ASSIGN IT PROPERLY 
  
    /* Stream FIFO FU */
      // assuming immediates are on on reg2 side: add x0, r1, imm
      if(RS_out[i].is_imm) begin
        PE_fifo_data_in[i].Val2 = EXT_immext_o[i];
        PE_fifo_valid_in[i] = RS_out[i].is_imm;
      end else begin
        PE_fifo_data_in[i].Val2 = XBAR_data_o[i*2+1];
        PE_fifo_valid_in[i] = XBAR_valid_o[i*2+1];
      end
        PE_fifo_data_in[i].Val1 = XBAR_data_o[i*2];
        PE_fifo_data_in[i].Rd = RS_out[i].Rd;
      
    /* PE signals*/
      TT_Rd_in[i] = PE_Rd_out[i];
      //TT_Rd_in = '1;
      //TT_Rd_in[0] = ADDR_WIDTH'(4);
      //TT_Rd_in[1] = ADDR_WIDTH'(9);
      ALU_operandA[i] = PE_fifo_data_o[i].Val1;
      ALU_operandB[i] = PE_fifo_data_o[i].Val2;
      PE_Rd_in[i] = PE_fifo_data_o[i].Rd;
      PE_valid_in[i] = PE_fifo_valid_o[i];
      ALUControl[i] = ALUControl_in[i];
      ALU_cout_o[i] = ALU_cout[i];
      Zero_o[i] = Zero[i];

  /* TileTable */
      TT_Tile_entry_in[i*2] = ENC_Encoded_tile_o[i*2];
      TT_Tile_entry_in[i*2+1] = ENC_Encoded_tile_o[i*2+1];
      TT_Tile_entry_in[i*2].Valid = TT_Tile_entry_in[i*2].Valid & ~PRF_ready_valid_o[i*2];
    // Refering to Rs2 only
      TT_Tile_entry_in[i*2+1].Valid = TT_Tile_entry_in[i*2+1].Valid & ~PRF_ready_valid_o[i*2+1] & ~res_stack_payload_o[i*2].is_imm;
  /* TileTable */
		end

    for ( int i = 0; i < TT_ENTRIES; i ++) begin
      VBG_Clos_pkg_in[i] = TT_Clos_pkg_o[i];
    end
  /* VBG */
    for(int i = 0; i < NRALUOP*RES_DEPTH*RES_WIDTH_DIM; i++) begin
      RES_Tag_valid_in[i] = VBG_Rs_valid_o[i];
      //RES_Tag_valid_in[i] = '1;
    end
  end

	//============# START HAZARD SIGNALS ================#//
	always_comb begin
		for(int i = 0; i < NRALUOP-1; i++) begin
			HZ_Entry_readyHz[i] = Res_entry_ready[i];	// This signal needs to be checked with the operation that the CPU is trying to perform
													// If the needed ALU for the current operation is not available then we stall (or skip this operartion for now?) 
      HZ_uOp_lane_pe_fifo_full[i] = PE_fifo_rdy_o[i];
      HZ_uOp_lane_rs_fifo_full[i] = res_stack_ready_o[i];
		end
	end
	/*============== END HAZARD SIGNALS ================*/
	
	/*============== START ROUTER ================*/

	uOp_router #(
		.BITWIDTH(BITWIDTH),
		.N_UOP_PER_CYCLE(N_UOP_PER_CYCLE),
		.NRALUOP(NRALUOP)
	) uOp_router_u (
    .ALUControl(ALUControl),
    .Imm_in(Imm_in),
		.Rs1_in(Rs1_in), 
		.Rs2_in(Rs2_in),
    .Rd_in(Rd_in),
		.Res_id_in(Router_res_id_in),  			// belong to Reserve stations
		.Res_entry_idx_in(Router_res_entry_idx_in),   	// belong to Reserve stations

		/* ======= RES READY SIGNALS ======= */
		//.Res_ready_i(/* unused */),

		/* ======= OUTPUT SIGNALS ======= */
		.Rs1_directed_o(Router_rs1_directed_o), 
    .Rs1_directed_valid_o(Router_rs1_directed_valid_o),
		.Rs2_directed_o(Router_rs2_directed_o),
    .Rs2_directed_valid_o(Router_rs2_directed_valid_o),
		.Rd_directed_o(Router_rd_directed_o),
    .Imm_directed_o(Router_Imm_directed_o),
		.Rs_valid_o(Router_rs_valid_o),
		.Res_id_directed_o(Router_res_id_directed_o),
		.Res_entry_idx_directed_o(Router_res_entry_idx_directed_o)
	);
	/*============== END ROUTER ================*/
 	
	/*============== START RESERVE STATIONS ================*/
	// WE NEED A FIFO IN THE CASE OF MULTIPLE uOp ACCESSING
	// SAME RESERVE STATION PER CYCLE
  genvar i;
  generate
    for( i = 0; i < NRALUOP; i++) begin
      
      piso #(
        .N_PARALLEL_INPUT(N_UOP_PER_CYCLE),
        .PISO_DEPTH(RES_FIFO_DEPTH),
        .payload_t(rs_entry_t)
      ) PISO_RS_u (
        .clk_i, 
        .rst_ni, 
        .flush_i, 
        .en_i,
        .ready_i(Res_entry_ready[i]),             // data will pop only when RS are not full
        .payload_valid_in(res_stack_valid_in[i]),
        .payload_in(res_stack_payload_in[i]),
        .payload_o(res_stack_payload_o[i]),
        .ready_o(res_stack_ready_o[i])             // Needed to check if the piso is full
      );


      RS #(					// ASSIGNING A RESERVE STATION TO EACH PROCESSING ELEMENT
        .ID(i),
        .BITWIDTH(BITWIDTH),
        .DEPTH(RES_DEPTH),
        .RES_WIDTH_DIM(RES_WIDTH_DIM)
      ) reserve_station_u (
        .clk_i,
        .en_i,
        .rst_ni,
        .Tag_valid_in(RES_Tag_valid_in[i]),
        .Res_in(RS_in[i]),
        // .Imm_o(Res_imm_o[i]),
        // .is_imm_o(Res_is_imm_o[i]),
        // we do not need a pipe stage for imm and 
        // data coming from PRF because PRF is acting
        // like a LUT, good 😃 √
        .Res_o(RS_out[i]),
        .Res_valid_o(RES_valid_o[i]),
        .Entry_ready_o(Res_entry_ready[i]),		// IF not ready it means that the RS is full and we have to STALL, 
        .Entry_Idx_slot_o(Res_entry_idx_response[i]),	// This value will be fed into the econder module and prudce a tile ptr
        .Rs_id_o(Res_id_response[i])
      );

      extend extend_u(
        .instr_in(EXT_immsrc_in[i]),
        .immsrc_in(EXT_sign_in[i]),
        .immext_o(EXT_immext_o[i])
      );

      stream_fifo_optimal_wrap #(
        .Depth(PE_FIFO_DEPTH),
        .type_t(FIFO_payload_t),
        .PrintInfo(1'b0)
        ) stream_fifo_per_fu (
        .clk_i,      // Clock
        .rst_ni,     // Asynchronous reset active low
        .flush_i,    // flush the fifo
        .testmode_i(/* unused */),        // test_mode to bypass clock gating
        .usage_o(/* unused? */),          // fill pointer
        .data_i(PE_fifo_data_in[i]),      // data to push into the fifo
        .valid_i(PE_fifo_valid_in[i]),    // input data valid
        .ready_o(PE_fifo_rdy_o[i]),       // fifo is not full
        .data_o(PE_fifo_data_o[i]),       // output data
        .valid_o(PE_fifo_valid_o[i]),     // fifo is not empty
        .ready_i(1'b1)                    // pop head from fifo
      );


      ALU #(
        .BITWIDTH(BITWIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .NRALUOP(NRALUOP),		//Numbero of possible operations that ALU can perform
                              //This is needed only when this module is not used as 
                              //a single unit processing element
        .SINGLE_UNIT(1'b1),
        .OP_TYPE(i)
      ) PE_u (
        .A(ALU_operandA[i]),
        .B(ALU_operandB[i]),
        .Valid_in(PE_valid_in[i]),
        .Rd_in(PE_Rd_in[i]),
        .Rd_out(PE_Rd_out[i]),
        .ALUResult(ALUResult[i]),
        .Cout(ALU_cout[i]), 
        .Zero(Zero[i]),
        .en(en_i),
        .ALUControl(ALUControl[i])
      );

    end
  endgenerate
	/*============== END RESERVE STATIONS ================*/

	/*============== START ENCODER ================*/
	// *2 because we need a tile view for Rs1 and Rs2 for each instruction
	Encoder #(
		.BITWIDTH(BITWIDTH),
		.RS_DEPTH(RES_DEPTH),
    .ADDR_WIDTH(ADDR_WIDTH),
    .CELL_PER_TILE(CELL_PER_TILE),
    .NRALUOP(NRALUOP)
	) Tile_encoder_u (
    	.Res_id_in(ENC_Res_id_in),
    	.Res_entry_idx_in(ENC_Res_entry_idx_in),
      .Res_response_valid_in(ENC_Res_response_valid_in),
    	.Rs1_in(ENC_Rs1_in),
		  .Rs2_in(ENC_Rs2_in),
    	.Encoded_tile_o(ENC_Encoded_tile_o)
	);

	/*============== END ROUTER ================*/

	/*============== START TILETABLE ================*/
 TileTable #(
    .SUPERSCALARITY(SUPERSCALARITY),
    .TT_ENTRIES(TT_ENTRIES),
    .N_IN_RD_PORTS(TT_N_IN_PORTS),
    .N_IN_ENTRY_PORTS(TT_N_IN_ENTRY_PORTS),
    .ADDR_WIDTH(ADDR_WIDTH),
    .payload_t(TileTable_entry_t) 
	// TileTable_entry_t equal to Encoded_entry_t
) TileTable_u (
    .en_i,
    .clk_i,
	  .rst_ni,
    .flush_i,
    /* ===== input portion signals ==== */
    .Tile_entry_in(TT_Tile_entry_in),
    .Rd_in(TT_Rd_in),

    /* ===== output portion signals ==== */
    .Clos_pkg_o(TT_Clos_pkg_o)
);
	/*============== END TILETABLE ================*/

	/*============== START VALID GENERATOR ================*/

Res_valid_generation #(
    /* === RES STATIONS PARAMETERS === */
  .NRALUOP(NRALUOP),
  .RES_DEPTH(RES_DEPTH),
	.RES_WIDTH_DIM(RES_WIDTH_DIM),    

    /* === FUNCTIONAL PARAMETERS === */
	.TT_ENTRIES(TT_ENTRIES),
	.CELLS_PER_TILE(CELL_PER_TILE)
) RES_valid_generator_u (
  //.reg_ready_in(VBG_reg_ready_in),
  //.encoded_tile_in(VBG_encoded_tile_in),
	.Clos_pkg_in(VBG_Clos_pkg_in),
	.Rs_valid_o(VBG_Rs_valid_o)
);
	/*============== END VALID GENERATOR ================*/

merge_requests #(
    .N_IN_PORTS(NRALUOP*2),
    .ADDR_WIDTH(ADDR_WIDTH),
    .payload_t(logic)
) MERGE_requests_u(
    .payload_in(MERGE_payload_in),
    .payload_valid_in(MERGE_payload_valid_in),
    .payload_o(MERGE_payload_o),
    .reg_view_o(MERGE_reg_view_o)
);

	/*============== START BR XBAR NOC ================*/
stream_br_xbar #(
  .NumInp     (NRALUOP*2),
  //The PRF is required to output a total
  //of 8 (NRALUOP) * 2 (Source Registers)
  //values per cycle, to perform maximum
  //throughput
  .NumOut     (NRALUOP*2),
  .DataWidth  (DATA_WIDTH),
  .payload_t  (XBAR_payload_t),
  .OutSpillReg(1'b0),
  .ExtPrio    (1'b0),
  .AxiVldRdy  (1'b0),
  .LockIn     (1'b0),
  .AxiVldMask ('0)
) PRF_pe_xbar_u (
  .clk_i,
  .rst_ni,
  .flush_i,
  .rr_i('0),
  .data_i(XBAR_data_in),
  .sel_i(XBAR_sel_in),
  .valid_i(XBAR_valid_in),
  .ready_o(/* axi not used within exec stage */),
  .data_o(XBAR_data_o),
  .idx_o(/* unused */),
  .valid_o(XBAR_valid_o),
  .ready_i(/* axi not used within exec stage */)
);

	/*============== END BR XBAR NOC ================*/

	/*============== START PRF ================*/

PRF #(
    .N_WR_PORTS(NRALUOP),                       // need to read 2 regs per reserve station
    .N_RD_PORTS(NRALUOP*2),
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH),
    .MEMLINES(PRF_DEPTH),     	// this indicate the number of Bytes
						// 128B = 1,024 bits. e.g. with
						// 32 bits as DATA_WIDTH -> 32 entries
    .NRALUOP(NRALUOP),
    .payload_t(PRF_payload_t)
) PRF_u (
    .clk_i,
	  .rst_ni,
    .write_reg_in(PRF_write_addr_in),
    .write_entry_in(PRF_write_data_in),     // equivalent of write_data, this signal will be usefull for MEM to RF signals
    .read_reg_in(PRF_read_addr_in),
    .read_data_o(PRF_data_o),
    .data_valid_o(PRF_data_valid_o),
    .read_addr_valid_in(PRF_read_addr_valid_in),
    .read_valid_o(PRF_ready_valid_o)
);

	/*============== END PRF ================*/

endmodule



