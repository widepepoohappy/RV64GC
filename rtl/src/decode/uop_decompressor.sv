
typedef enum logic [6:0] {
  OPCODE_LOAD     = 7'h03,
  OPCODE_MISC_MEM = 7'h0f,
  OPCODE_OP_IMM   = 7'h13,
  OPCODE_AUIPC    = 7'h17,
  OPCODE_STORE    = 7'h23,
  OPCODE_OP       = 7'h33,
  OPCODE_LUI      = 7'h37,
  OPCODE_BRANCH   = 7'h63,
  OPCODE_JALR     = 7'h67,
  OPCODE_JAL      = 7'h6f,
  OPCODE_CSR   = 7'h73
} opcode_e;


 function automatic logic [31:0] cm_addi(input logic [4:0] rdist,
                                             input logic [4:0] rsource,
                                             input logic [11:0] imm);
    logic [31:0] instr;
    instr = '0;
    instr[ 6: 0] /* opcode    */ = OPCODE_OP_IMM;
    instr[11: 7] /* dest reg  */ = rdist; 
    instr[14:12] /* funct3    */ = 3'b000; // addi
    instr[19:15] /* src reg   */ = rsource; 
    instr[31:20] /* imm[11:0] */ = unsigned'(imm);
    return instr;
  endfunction

  function automatic logic [31:0] cm_add(input logic [4:0] rdist,
                                             input logic [4:0] rsource1,
                                             input logic [4:0] rsource2);
    logic [31:0] instr;
    instr = '0;
    instr[ 6: 0] /* opcode      */ = OPCODE_OP;
    instr[11: 7] /* rdist*/        = rdist; 
    instr[14:12] /* funct3      */ = 3'b000; // shftleft
    instr[19:15] /* src reg1    */ = rsource1;
    instr[24:20] /* src reg2    */ = rsource2;
    instr[30] /* funct7 */ = 0;
    return instr;
  endfunction

  function automatic logic [31:0] cm_cmp(input logic [4:0] rdist,
                                             input logic [4:0] rsource1,
                                             input logic [4:0] rsource2,
                                             input logic [2:0] cmp_type);
    logic [31:0] instr;
    instr = '0;

    instr[ 6: 0] /* opcode    */ = OPCODE_OP;
    instr[11: 7] /* rdist     */ = rdist;
    instr[14:12] /* funct3    */ = cmp_type; // cmp type
    instr[19:15] /* src reg   */ = rsource1;
    instr[24:20] /* imm[11:0] */ = rsource2;
  // We always want to perform a sub, but based on the funct3, we will perform
  // another check on the result given by the sub
    instr[30] /* funct7 */ = 1'b1;
    return instr;
  endfunction

  function automatic logic [31:0] cm_shftl(input logic [4:0] rdist,
                                             input logic [4:0] rsource,
                                             input logic [4:0] shamt);
    logic [31:0] instr;
    instr = '0;
    instr[ 6: 0] /* opcode    */ = OPCODE_OP_IMM;
    instr[11: 7] /* dest reg  */ = rdist; 
    instr[14:12] /* funct3    */ = 3'b001; // shftleft
    instr[19:15] /* src reg   */ = rsource;
    instr[24:20] /* imm[11:0] */ = unsigned'(shamt);
    return instr;
  endfunction

  function automatic logic [31:0] cm_push(input logic [4:0] rdest,
                                             input logic exec_type,
                                             input logic [4:0] rsource1);
    logic [31:0] instr;
    instr = '0;
    instr[ 6: 0] /* opcode    */ = OPCODE_STORE;
    instr[11: 7] /* rdest */ = rdest; 
    if(exec_type) begin
      instr[14:12] /* funct3    */ = 3'b010; // using LSU  
    end else begin
      instr[14:12] /* funct3    */ = 3'b000; // using normal datapath
    end
    instr[19:15] /* src reg   */ = rsource1;
    return instr;
  endfunction

  function automatic logic [31:0] cm_pull(input logic [4:0] rdist,
                                             input logic [4:0] rsource1,
                                             input logic [11:0] immediate);
    logic [31:0] instr;
    instr = '0;
    instr[ 6: 0] /* opcode    */ = OPCODE_LOAD;
    instr[11: 7] /* rdest */ = rdist; 
    instr[14:12] /* funct3    */ = 3'b010; // loadword
    instr[19:15] /* src reg   */ = rsource1;
    instr[31:20] /* upper imm[11:5] */ = immediate;
    return instr;
  endfunction

   function automatic logic [31:0] cm_bitmanip(input logic [4:0] rdist,
                                             input logic [4:0] rsource1,
                                             input logic [4:0] rsource2);
    logic [31:0] instr;
    instr = '0;
    instr[ 6: 0] /* opcode    */ = OPCODE_STORE;
    instr[11: 7] /* upper imm[11:5] */ = rdist; 
    instr[14:12] /* funct3    */ = 3'b010; 
    instr[19:15] /* src reg   */ = rsource1;
    instr[24:20] /* imm[11:0] */ = rsource2;
    return instr;
  endfunction

module uop_decompressor #(
 //This means we can have a total of 8 instruction of 16 bits (BUNIT)
	parameter int unsigned BUNIT = 16,
  parameter int unsigned MAX_UOP_NUM_DECODED = 6,
  parameter int unsigned IMMEDIATE_WIDTH = 12,
  parameter int unsigned PC_REG_WIDTH = 5
  
) ( 
// working only with uncompressed instructions
  input logic [BUNIT*2-1:0] instr_i,
  input logic instr_valid_i,
  input logic [PC_REG_WIDTH-1:0] ra_i,
  input logic [IMMEDIATE_WIDTH-1:0] pco_i,

// store/load operation external signal input
  input logic push_fetch_i,
// Zicsr operation external signal input
  input logic csrr_i,

  output logic [MAX_UOP_NUM_DECODED-1:0] instr_valid_o,
  output logic [MAX_UOP_NUM_DECODED-1:0][BUNIT*2-1:0] instr_o
);

// 5 bit to respect risc-v RS width
  typedef enum logic [4:0] {
    any1 = 5'b00001,
    any2 = 5'b00010,
    any3 = 5'b00011,
    any4 = 5'b00100,
    any5 = 5'b00101
  } any_t;


// During this stage we do not care about giving correct names to source and
// dest reg of intermediate uops. This will be taken care during rename stage
// even for the uops
  
  logic [IMMEDIATE_WIDTH-1:0] pco;
  logic [PC_REG_WIDTH-1:0] pcb;
  logic fetch;
  logic [IMMEDIATE_WIDTH-1:0] offset;

  opcode_e curr_opcode;

  always_comb begin
    logic csrw;
    logic csrr;
    logic store;
    logic load;
    logic [4:0] rd;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [11:0] imm;
  // starting with the assumption that this can be mapped to only
  // 1 instruction
    instr_valid_o = '0;
    instr_valid_o[0] = instr_valid_i; 
    instr_o = '0;
    csrw = 1'b1;
    load = 1'b1;
    store = 1'b1;
    csrr = csrr_i;
    fetch = push_fetch_i; 
    pcb = ra_i;
    pco = pco_i;
    instr_o[0] = instr_i;
    offset[3:0] = instr_i[11:8];
    offset[10] = instr_i[7];
    offset[9:4] = instr_i[30:30];
    offset[11] = instr_i[31];
    rd = instr_i[11:7];
    rs1 = instr_i[19:15];
    rs2 = instr_i[24:20];
    imm = instr_i[23:12];
  // U-type instructions
    curr_opcode = opcode_e'(instr_i[6:0]);
    unique case (curr_opcode)
    //LUI
      OPCODE_LUI: begin
        instr_o[0] = cm_addi(any1, '0, imm);
        instr_o[1] = cm_shftl(rd, any1, 4'hC);
        instr_valid_o[0] = 1'b1;
        instr_valid_o[1] = 1'b1;
      end
    //AUIPC
      OPCODE_AUIPC: begin
        instr_o[0] = cm_addi(any1, '0, imm);
        instr_o[1] = cm_shftl(any2, any1, 4'hC);
        instr_o[2] = cm_addi(any3, pcb, pco);
        instr_o[3] = cm_add(rd, any2, any1);
        instr_valid_o[0] = 1'b1;
        instr_valid_o[1] = 1'b1;
        instr_valid_o[2] = 1'b1;
        instr_valid_o[3] = 1'b1;
      end
      OPCODE_JALR: begin
        instr_o[0] = cm_addi(any1, pcb, pco);
        instr_o[1] = cm_addi(any2, rs1, offset);
        instr_o[2] = cm_push(any3, fetch, any2);
        instr_o[3] = cm_add(rd, any3, any1);
        instr_valid_o[0] = 1'b1;
        instr_valid_o[1] = 1'b1;
        instr_valid_o[2] = 1'b1;
        instr_valid_o[3] = 1'b1;
      end
      OPCODE_JAL: begin
        instr_o[0] = cm_addi(any1, pcb, pco);
        instr_o[1] = cm_addi(any2, any1, imm);
        instr_o[2] = cm_push(any3, fetch, any2);
        instr_o[3] = cm_add(rd, any3, any1);
        instr_valid_o[0] = 1'b1;
        instr_valid_o[1] = 1'b1;
        instr_valid_o[2] = 1'b1;
        instr_valid_o[3] = 1'b1;
      end
      OPCODE_BRANCH: begin
        instr_o[0] = cm_addi(any1, pcb, pco);
        instr_o[1] = cm_addi(any2, any1, offset);
      // whatever the branch instruction is, the instr_o will be composed
      // according to the necessities (following the funct3)
        instr_o[2] = cm_cmp(any3, rs1, rs2, instr_i[14:12]);
        instr_o[3] = cm_push(any4, fetch, any2);
        instr_o[4] = cm_push(any5, fetch, any3);
        instr_o[5] = cm_addi(rd, any3, any5);
        instr_valid_o[0] = 1'b1;
        instr_valid_o[1] = 1'b1;
        instr_valid_o[2] = 1'b1;
        instr_valid_o[3] = 1'b1;
        instr_valid_o[4] = 1'b1;
        instr_valid_o[5] = 1'b1;
      end
      OPCODE_STORE: begin
        instr_o[0] = cm_addi(any1, rs1, offset);
        instr_o[1] = cm_push(any2, store, any1);
        instr_o[2] = cm_push(any3, store, rs2);
        instr_o[3] = cm_add(rd, any2, any3);
        instr_valid_o[0] = 1'b1;
        instr_valid_o[1] = 1'b1;
        instr_valid_o[2] = 1'b1;
        instr_valid_o[3] = 1'b1;
      end
      OPCODE_LOAD: begin
        instr_o[0] = cm_addi(any1, rs1, offset);
        instr_o[1] = cm_push(load, '0, any1);
        instr_o[2] = cm_pull(rd, '0, load);
        instr_valid_o[0] = 1'b1;
        instr_valid_o[1] = 1'b1;
        instr_valid_o[2] = 1'b1;
      end
      OPCODE_CSR: begin
        unique case (instr_i[14:12])
        //CSRRW
          3'b001: begin
            instr_o[0] = cm_pull(any1, '0, csrr);
            instr_o[1] = cm_push(any2, csrw, rs1);
            instr_o[2] = cm_pull(rd, any2, any1);
            instr_valid_o[0] = 1'b1;
            instr_valid_o[1] = 1'b1;
            instr_valid_o[2] = 1'b1;
          end
        //CSRRWI
          3'b010: begin
            instr_o[0] = cm_pull(any1, '0, csrr);
            instr_o[1] = cm_push(any2, csrw, instr_i[19:15]);
            instr_o[2] = cm_pull(rd, any2, any1);
            instr_valid_o[0] = 1'b1;
            instr_valid_o[1] = 1'b1;
            instr_valid_o[2] = 1'b1;
          end
        //CSRRS
          3'b011: begin
            instr_o[0] = cm_pull(any1, '0, csrr);
            instr_o[1] = cm_bitmanip(any2, rs1, any1);
            instr_o[2] = cm_push(any3, csrw, any2);
            instr_o[3] = cm_addi(rd, any2, any1);
            instr_valid_o[0] = 1'b1;
            instr_valid_o[1] = 1'b1;
            instr_valid_o[2] = 1'b1;
            instr_valid_o[3] = 1'b1;
          end 
        //CSRRSI
          3'b101: begin
            instr_o[0] = cm_pull(any1, '0, csrr);
            instr_o[1] = cm_bitmanip(any2, rs1, any1);
            instr_o[2] = cm_push(any2, csrw, rs1);
            instr_o[3] = cm_pull(rd, any2, any1);
            instr_valid_o[0] = 1'b1;
            instr_valid_o[1] = 1'b1;
            instr_valid_o[2] = 1'b1;
            instr_valid_o[3] = 1'b1;
          end
        //CSRRC
          3'b110: begin
            instr_o[0] = cm_pull(any1, '0, csrr);
            instr_o[1] = cm_bitmanip(any2, rs1, instr_i[19:15]);
            instr_o[2] = cm_push(any2, csrw, rs1);
            instr_o[3] = cm_pull(rd, any2, any1);
            instr_valid_o[0] = 1'b1;
            instr_valid_o[1] = 1'b1;
            instr_valid_o[2] = 1'b1;
            instr_valid_o[3] = 1'b1;
          end
        //CSRRCI 
          3'b111: begin
            instr_o[0] = cm_pull(any1, '0, csrr);
            instr_o[1] = cm_bitmanip(any2, rs1, instr_i[19:15]);
            instr_o[2] = cm_push(any2, csrw, rs1);
            instr_o[3] = cm_pull(rd, any2, any1);
            instr_valid_o[0] = 1'b1;
            instr_valid_o[1] = 1'b1;
            instr_valid_o[2] = 1'b1;
            instr_valid_o[3] = 1'b1;
          end
          default: begin
          end
        endcase
      end
      default: begin
      end
    endcase
  end



endmodule
