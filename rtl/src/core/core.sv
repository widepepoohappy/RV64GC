module core #(
  parameter int unsigned MEM_BUS_WIDTH = 128,
  parameter int unsigned XLEN          = MEM_BUS_WIDTH,     // larghezza istruzione/dato
  parameter int unsigned LINE_BYTES    = 32,                // dimensione linea (es. 32B) -> quante istruzioni per line
  parameter int unsigned BURST_LENGTH  = 4,
  parameter int unsigned IMMEDIATE_WIDTH = 12,
  parameter int unsigned PREFETCH_BUFF_DEPTH    = 20,
  parameter int unsigned PIPO_DEPTH = 32,
  parameter int unsigned PC_COUNTER_WIDTH = 64,
  parameter int unsigned INSTR_PARALLELISM = 8,
// instruction throughput is the number of instruction that comes out of the
// pipo, decoupling the decoder first stage to the uop_decompressor 
  parameter int unsigned INSTR_THROUGHPUT = 4,
  parameter int unsigned MAX_UOP_NUM_DECODED = 6,
	parameter int unsigned N_UOP_CYCLE = 4,
	parameter int unsigned BUNIT = 16,
	parameter int unsigned HW_PER_BLOB = INSTR_PARALLELISM*BUNIT/16,
  parameter int unsigned UROM_DEPTH = 64, 
  parameter int unsigned UOP_EXEC_INSTR_THROUGHPUT = 4

) ( 
  input  logic clk_i, rst_ni, flush_i, en_i,
  input  logic pull_instr_rq_i,                              // coming from decode stage
  input  logic PCSrcE, 
  input  logic PC_i,
  input  logic [INSTR_THROUGHPUT-1:0] csrr_i,
  input  logic [INSTR_THROUGHPUT-1:0] push_fetch_i,
  input  logic [INSTR_THROUGHPUT-1:0][IMMEDIATE_WIDTH-1:0] pco_i,
  input  logic [PC_COUNTER_WIDTH-1:0] PCTargetE_i,
  output logic [PC_COUNTER_WIDTH-1:0] PCCurr_o,
  // --------------- Memoria (AXI4-Read only, semplificata) ---------------
  output logic                        mem_ar_valid_o,
  input  logic                        mem_ar_ready_i,
  output logic [PC_COUNTER_WIDTH-1:0] mem_ar_addr_o,
  output logic [7:0]                  mem_ar_len_o,         // burst length - 1
  output logic [2:0]                  mem_ar_size_o,        // log2(bytes per beat). 2 -> 4B
  input  logic                        mem_r_valid_i,
  output logic                        mem_r_ready_o,
  //input  logic [1:0]                mem_r_resp_i,         // ignorato
  input  logic [MEM_BUS_WIDTH-1:0]    mem_r_data_i,
  input  logic                        mem_r_last_i,

/* ===================== DECODE STAGE SIGNALS ===================== */
  output logic data_valid_o,
  output logic ready_o,
  output [INSTR_THROUGHPUT-1:0] illegal_instr_o,
  output [INSTR_THROUGHPUT-1:0] is_compressed_o,

/* ===================== UROM SIGNALS ===================== */
  output logic uop_valid_o,
  output logic [UOP_EXEC_INSTR_THROUGHPUT-1:0][BUNIT*2-1:0] uop_o
);

/* ===== INSTR FETCH + DECODE SIGNALS ===== */
  logic INSTRFD_illegal_instr_o;
  logic INSTRFD_is_compressed_o;
  logic INSTRFD_ready_o;
  logic [INSTR_THROUGHPUT-1:0][MAX_UOP_NUM_DECODED-1:0] INSTRFD_instr_valid_o;
  logic [INSTR_THROUGHPUT-1:0][MAX_UOP_NUM_DECODED-1:0][BUNIT*2-1:0] INSTRFD_instr_o;	

/* ===== UROM SIGNALS ===== */  
  logic UROM_ready_i;
  logic UROM_ready_o;
  logic UROM_valid_o;
  logic [UOP_EXEC_INSTR_THROUGHPUT-1:0][BUNIT*2-1:0]    UROM_uop_o;
  logic [INSTR_THROUGHPUT-1:0][MAX_UOP_NUM_DECODED-1:0] UROM_instr_valid_i;
  logic [INSTR_THROUGHPUT-1:0][MAX_UOP_NUM_DECODED-1:0][BUNIT*2-1:0] UROM_instr_i;

/* ===== RENMAE SIGNALS ===== */    
  logic [N_FREE_PER_CYCLE-1:0][ADDR_WIDTH-1:0] RN_free_req_i;
  logic [N_UOP_CYCLE-1:0][ADDR_WIDTH-1:0] Rs1_i, RN_Rs2_i, RN_Rd_i;
  logic [N_UOP_CYCLE-1:0] RN_is_arch, RN_free_req_arch;
  logic [N_UOP_CYCLE-1:0][ADDR_WIDTH-1:0] RN_Rs1_rn_o, RN_Rs2_rn_o, RN_Rd_rn_o;

/* ===== OOOEXEC SIGNALS ===== */      
  logic [N_UOP_PER_CYCLE-1:0][ADDR_WIDTH-1:0]       EXEC_Rs1_in, EXEC_Rs2_in;     // INFORMATION COMING FROM RF AND INSTRUCTION
	logic [N_UOP_PER_CYCLE-1:0][ADDR_WIDTH-1:0]       EXEC_Rd_in;
  logic [N_UOP_PER_CYCLE-1:0][6:0]                  EXEC_op;
  logic [N_UOP_PER_CYCLE-1:0][11:0]                 EXEC_Imm_in;
  logic [N_UOP_PER_CYCLE-1:0][$clog2(NRALUOP)-1:0]  EXEC_ALUControl_in;

	logic [NRALUOP-1:0] EXEC_HZ_Entry_readyHz;
  logic [NRALUOP-1:0] EXEC_HZ_uOp_lane_pe_fifo_full;
  logic [NRALUOP-1:0] EXEC_HZ_uOp_lane_rs_fifo_full;
  logic [NRALUOP-1:0] EXEC_ALU_cout_o;
  logic [NRALUOP-1:0] EXEC_Zero_o;


/* ===== COMBO ASSIGNMENT ===== */
  always_comb begin
    UROM_instr_valid_i = INSTRFD_instr_valid_o;
    UROM_instr_i = INSTRFD_instr_o;

    UROM_ready_i = INSTRFD_ready_o;
  end

  instr_fd #(
   .MEM_BUS_WIDTH(MEM_BUS_WIDTH),
   .LINE_BYTES(LINE_BYTES),                // dimensione linea (es. 32B) -> quante istruzioni per line
   .BURST_LENGTH(BURST_LENGTH),
   .IMMEDIATE_WIDTH(IMMEDIATE_WIDTH),
   .PREFETCH_BUFF_DEPTH(PREFETCH_BUFF_DEPTH),
   .PIPO_DEPTH(PIPO_DEPTH),
   .PC_COUNTER_WIDTH(PC_COUNTER_WIDTH),
   .INSTR_PARALLELISM(INSTR_PARALLELISM),
   .INSTR_THROUGHPUT(INSTR_THROUGHPUT),
   .MAX_UOP_NUM_DECODED(MAX_UOP_NUM_DECODED),
   .N_UOP_CYCLE(N_UOP_CYCLE),
   .BUNIT(BUNIT),
   .HW_PER_BLOB(HW_PER_BLOB)
  ) instr_fd_u (
    .clk_i, 
    .rst_ni, 
    .flush_i, 
    .en_i,

  /* ==== INTERNAL CORE SIGNALS ==== */
    .pull_instr_rq_i,
    .PCSrcE, 
    .PC_i,
    .csrr_i,
    .push_fetch_i,
    .pco_i,
    .PCTargetE_i,
    .PCCurr_o,

  /* ==== REDUCED AXI SIGNALS ==== */
    .mem_ar_valid_o,
    .mem_ar_ready_i,
    .mem_ar_addr_o,
    .mem_ar_len_o,
    .mem_ar_size_o,
    .mem_r_valid_i,
    .mem_r_ready_o,
    .mem_r_data_i,
    .mem_r_last_i,

  /* ==== INTERNAL PROCESS SIGNALS ==== */
    .instr_valid_o(INSTRFD_instr_valid_o),
    .instr_o(INSTRFD_instr_o),	
    .data_valid_o,
    .ready_o(INSTRFD_ready_o),
    .illegal_instr_o(INSTRFD_illegal_instr_o),
    .is_compressed_o(INSTRFD_is_compressed_o)
  );

  urom #(
    .INSTR_THROUGHPUT(INSTR_THROUGHPUT),
    .MAX_UOP_NUM_DECODED(MAX_UOP_NUM_DECODED),
    .BUNIT(BUNIT),
    .UROM_DEPTH(UROM_DEPTH), 
    .UOP_EXEC_INSTR_THROUGHPUT(UOP_EXEC_INSTR_THROUGHPUT)
  ) urom_u (
    .clk_i, 
    .flush_i, 
    .rst_ni, 
    .ready_i(UROM_ready_i),
    .instr_i(UROM_instr_i),	
    .instr_valid_i(UROM_instr_valid_i),
    .ready_o(UROM_ready_o),
    .uop_valid_o(UROM_valid_o),
    .uop_o(UROM_uop_o)
  );


/* ===== RENAME + EXEC STAGE COMBO ASSIGNMENT ===== */
  always_comb begin
    RN_Rs1_i
  end



  rn_stage #(
    .N_UOP_CYCLE(N_UOP_CYCLE),
    .N_FREE_PER_CYCLE(N_FREE_PER_CYCLE),
    .PRF_DEPTH(PRF_DEPTH),      // used for FREE LIST
  ) RN_Stage_u ( 
    .clk_i, 
    .rst_ni, 
    .flush_i, 
    .en_i,
    .free_req_i(RN_free_req_i),
    .Rs1_i(RN_Rs1_i), 
    .Rs2_i(RN_Rs2_i), 
    .Rd_i(RN_Rd_i),
    .is_arch(RN_is_arch), 
    .free_req_arch(RN_free_req_arch),
    .Rs1_rn_o(RN_Rs1_rn_o), 
    .Rs2_rn_o(RN_Rs2_rn_o), 
    .Rd_rn_o(RN_Rd_rn_o)
  ) 



  ooo_extension #(
    /* ======== uArch params ======== */
     .BITWIDTH(BITWIDTH),
     .DATA_WIDTH(DATA_WIDTH),
     .N_UOP_PER_CYCLE(N_UOP_PER_CYCLE),
     .NRALUOP(NRALUOP),

    /*======== RESERVE STATION PARAMS ======== */
     .RES_DEPTH(RES_DEPTH),
     .RES_WIDTH_DIM(RES_WIDTH_DIM),			// Should be a multiple of 2, superscalar term
     .RES_FIFO_DEPTH(RES_FIFO_DEPTH),

    /*======== PE FIFO PARAMS ======== */
     .PE_FIFO_DEPTH(PE_FIFO_DEPTH),

    /*======== PRF PARAMS ======== */
     .PRF_N_RD_PORTS(PRF_N_RD_PORTS),
     .PRF_N_WR_PORTS(PRF_N_WR_PORTS),
     .PRF_DEPTH(PRF_DEPTH),  
     .ADDR_WIDTH(ADDR_WIDTH),

     .CELL_PER_TILE(CELL_PER_TILE),
    /* ======== TILE TABLE PARAMS ======== */
     .TT_ENTRIES(TT_ENTRIES),
     .SUPERSCALARITY(SUPERSCALARITY),

  ) ooo_extension_u (
    .clk_i, 
    .rst_ni, 
    .en_i, 
    .flush_i,
    .Rs1_in(EXEC_Rs1_in), 
    .Rs2_in(EXEC_Rs2_in),     
    .Rd_in(EXEC_Rd_in),
    .op(EXEC_op),
    .Imm_in(EXEC_Imm_in),
    .ALUControl_in(EXEC_ALUControl_in),

    .HZ_Entry_readyHz(EXEC_HZ_Entry_readyHz),
    .HZ_uOp_lane_pe_fifo_full(EXEC_HZ_uOp_lane_pe_fifo_full),
    .HZ_uOp_lane_rs_fifo_full(EXEC_HZ_uOp_lane_rs_fifo_full),
    .ALU_cout_o(EXEC_ALU_cout_o),
    .Zero_o(EXEC_Zero_o)
  );



  assign illegal_instr_o = INSTRFD_illegal_instr_o;
  assign is_compressed_o = INSTRFD_is_compressed_o;
  assign ready_o = UROM_ready_o;
  assign uop_valid_o = UROM_valid_o;
  assign uop_o = UROM_uop_o;

endmodule
