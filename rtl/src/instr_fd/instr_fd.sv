`include "registers.svh"
`include "dcd_packages.sv"

// PACKAGES
  typedef enum integer {
    RV32Zca        = 0,
    RV32ZcaZcb     = 1,
    RV32ZcaZcmp    = 2,
    RV32ZcaZcbZcmp = 3
  } rv32zc_e;

  typedef enum logic [1:0] {
    INSTR_NOT_EXPANDED,
    INSTR_EXPANDED,
    INSTR_EXPANDED_LAST
  } instr_exp_e;

module instr_fd #(
 // FETCH MODUEL IMPLEMENTING AXI PROTOCOL
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
	parameter int unsigned HW_PER_BLOB = INSTR_PARALLELISM*BUNIT/16
  
) (
/* ===================== FETCH STAGE SIGNALS ===================== */
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
  // isntr_o need to have +1 BUNIT, in order to deliver n-1 last 16 bits that
  // were valid and uncertain
  output logic [INSTR_THROUGHPUT-1:0][MAX_UOP_NUM_DECODED-1:0] instr_valid_o,
  output logic [INSTR_THROUGHPUT-1:0][MAX_UOP_NUM_DECODED-1:0][BUNIT*2-1:0] instr_o,	
// Even the decoded state need to have +1 space due to the brought over
// instruction 
  output logic data_valid_o,
  output logic ready_o,
  output [INSTR_THROUGHPUT-1:0] illegal_instr_o,
  output [INSTR_THROUGHPUT-1:0] is_compressed_o
);
  import dcd_packages::*;  

// The number of total bits of this signal has to be equal to the
// MEM_BUS_WIDTH
/* ========== BLOB DECODER SIGNALS ========== */
	dcd_packages::instr_t [HW_PER_BLOB:0] BD_decoded_state_o;
  logic [INSTR_PARALLELISM-1:0][BUNIT-1:0] BD_instr_i;
  logic [INSTR_PARALLELISM:0][BUNIT-1:0] BD_instr_o;
  logic BD_instr_valid_i;
  logic BD_instr_valid_o;

/* ========== FETCH SIGNALS ========== */
  logic [MEM_BUS_WIDTH-1:0] FTCH_instr_o;
  logic FTCH_istr_valid_o;

/* ========== SORTING DECODER SIGNALS ========== */
	dcd_packages::instr_t [HW_PER_BLOB:0] SD_decoded_state_i;   
  logic [INSTR_PARALLELISM:0][BUNIT-1:0] SD_instr_i;
  logic [INSTR_THROUGHPUT-1:0][BUNIT*2-1:0] SD_instr_o;
  logic SD_instr_valid_i;
  logic SD_valid_o;

/* ========== IBEX DECODER SIGNALS ========== */
  logic [INSTR_THROUGHPUT-1:0][BUNIT*2-1:0] IBEXcd_instr_i;
  logic [INSTR_THROUGHPUT-1:0][BUNIT*2-1:0] IBEXcd_instr_o;
  logic [INSTR_THROUGHPUT-1:0] IBEXcd_valid_i;
  logic [INSTR_THROUGHPUT-1:0] IBEXcd_is_compressed_o;
  logic [INSTR_THROUGHPUT-1:0] IBEXcd_illegal_instr_o;

/* ========== UOP DECODER SIGNALS ========== */
  logic [INSTR_THROUGHPUT-1:0][IMMEDIATE_WIDTH-1:0] UOPDEC_pco_i;
  logic [INSTR_THROUGHPUT-1:0][BUNIT*2-1:0] UOPDEC_instr_i;
  logic [INSTR_THROUGHPUT-1:0]UOPDEC_instr_valid_i;
  logic [INSTR_THROUGHPUT-1:0] UOPDEC_csrr_i;
  logic [INSTR_THROUGHPUT-1:0] UOPDEC_push_fetch_i;
  logic [INSTR_THROUGHPUT-1:0] UOPDEC_ra_i;
  logic [INSTR_THROUGHPUT-1:0][MAX_UOP_NUM_DECODED-1:0][BUNIT*2-1:0] UOPDEC_instr_o;
  logic [INSTR_THROUGHPUT-1:0][MAX_UOP_NUM_DECODED-1:0] UOPDEC_instr_valid_o;

/* ========== INTERNAL SIGNALS ========== */
  logic startup_o;
  logic startup_i;
  

  always_comb begin
    for (int i = 0; i < INSTR_PARALLELISM; i++) begin
      BD_instr_i[i] = FTCH_instr_o[(MEM_BUS_WIDTH-1)-(i*BUNIT)-:BUNIT];
    end
    //BD_instr_i = FTCH_instr_o;
    BD_instr_valid_i = FTCH_istr_valid_o;
    SD_decoded_state_i = BD_decoded_state_o;
    SD_instr_i = BD_instr_o;
    SD_instr_valid_i = BD_instr_valid_o;
    startup_i = startup_o;

    IBEXcd_instr_i = SD_instr_o;
    IBEXcd_valid_i = SD_valid_o;

    UOPDEC_instr_valid_i = ~IBEXcd_illegal_instr_o; 
    UOPDEC_csrr_i = csrr_i;
    UOPDEC_push_fetch_i = push_fetch_i;
    UOPDEC_instr_i = IBEXcd_instr_o;
    UOPDEC_pco_i = pco_i; 
    for ( int i = 0; i < INSTR_THROUGHPUT ; i++) begin
      UOPDEC_ra_i[i] = PC_i;
    end
  end
  

  fetch #(
    .MEM_BUS_WIDTH(MEM_BUS_WIDTH),
    .XLEN         (XLEN),     // larghezza istruzione/dato
    .LINE_BYTES   (LINE_BYTES),                // dimensione linea (es. 32B) -> quante istruzioni per line
    .BURST_LENGTH (BURST_LENGTH),
    .PREFETCH_BUFF_DEPTH(PREFETCH_BUFF_DEPTH),
    .PC_COUNTER_WIDTH(PC_COUNTER_WIDTH)
  ) fetch_u (
      .clk_i, 
    .rst_ni, 
    .flush_i, 
    .en_i,
    .pull_instr_rq_i,                              // coming from decode stage
    .PCSrcE, 
    .PCTargetE_i,
    .PCCurr_o,
    .istr_o(FTCH_instr_o),
    .istr_valid_o(FTCH_istr_valid_o),
    .startup_o,
    //--------------- Memoria (AXI4-Read only, semplificata) ---------------
    .mem_ar_valid_o,
    .mem_ar_ready_i,
    .mem_ar_addr_o,
    .mem_ar_len_o,         // burst length - 1
    .mem_ar_size_o,        // log2(bytes per beat). 2 -> 4B
    .mem_r_valid_i,
    .mem_r_ready_o,
    //.mem_r_resp_i,         // ignorato
    .mem_r_data_i,
    .mem_r_last_i
  );

  blob_decoder #(
	// 4 instruction of 32 bits 
	// 8 instruction of 16 bits
    .INSTR_PARALLELISM(INSTR_PARALLELISM),
    .N_UOP_CYCLE(N_UOP_CYCLE),
    .BUNIT(BUNIT)
	) blob_decoder_u ( 
		.clk_i, 
    .rst_ni, 
    .en_i,
    .startup_i,
    .instr_valid_i(BD_instr_valid_i),
		.instr_i(BD_instr_i),
		.instr_o(BD_instr_o),	
    .data_valid_o(BD_instr_valid_o),
		.decoded_state_o(BD_decoded_state_o)
	);

sorting_dcd #(
  //This means we can have a total of 8 instruction of 16 bits (BUNIT)
	.INSTR_PARALLELISM(INSTR_PARALLELISM),
	.N_UOP_CYCLE(N_UOP_CYCLE),
	.BUNIT(BUNIT),
  .PIPO_DEPTH(PIPO_DEPTH), 
  .INSTR_THROUGHPUT(INSTR_THROUGHPUT),
	.HW_PER_BLOB(HW_PER_BLOB) 	
	) sorting_dcd_u ( 
    .clk_i,
    .rst_ni,
    .flush_i,
    .instr_valid_i(SD_instr_valid_i),
		.decoded_state_i(SD_decoded_state_i),
		.instr_i(SD_instr_i),
    .instr_o(SD_instr_o),
    .valid_o(SD_valid_o),
    .ready_o
	);

generate
  for(genvar i = 0; i < INSTR_THROUGHPUT; i++) begin
    ibex_compressed_decoder #(
    // setting it to 4 will now use some internal logic that we do not need
      .RV32ZC(RV32Zca),
      .ResetAll(1'b0)
    ) decompressor_u (
     .clk_i,
     .rst_ni,
     .valid_i(IBEXcd_valid_i[i]),
    // this signal has to do with assertions that I am not currently using
     .id_in_ready_i(/* unused */),
     .instr_i(IBEXcd_instr_i[i]),
     .instr_o(IBEXcd_instr_o[i]),
     .is_compressed_o(IBEXcd_is_compressed_o[i]),
     .illegal_instr_o(IBEXcd_illegal_instr_o[i])
    );
    
    uop_decompressor #(
      .BUNIT(BUNIT),
      .IMMEDIATE_WIDTH(IMMEDIATE_WIDTH),
      .MAX_UOP_NUM_DECODED(MAX_UOP_NUM_DECODED)
    ) uop_decompressor_u ( 
      .instr_i(UOPDEC_instr_i[i]),
      .instr_valid_i(UOPDEC_instr_valid_i[i]),
      .ra_i(UOPDEC_ra_i[i]),
      .push_fetch_i(UOPDEC_push_fetch_i[i]),
      .csrr_i(UOPDEC_csrr_i[i]),
      .pco_i(UOPDEC_pco_i[i]),
      .instr_valid_o(UOPDEC_instr_valid_o[i]),
      .instr_o(UOPDEC_instr_o[i])
    );
  end
endgenerate

  assign instr_o = UOPDEC_instr_o;
  assign instr_valid_o = UOPDEC_instr_valid_o;
  assign data_valid_o = SD_valid_o;
  assign is_compressed_o = IBEXcd_is_compressed_o;
  assign illegal_instr_o = IBEXcd_illegal_instr_o;
endmodule
