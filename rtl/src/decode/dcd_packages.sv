package dcd_packages;
  `ifndef HW_PER_BLOB
    `define HW_PER_BLOB 4
  `endif

  localparam int unsigned INSTR_TYPE_W = $clog2(`HW_PER_BLOB);

  typedef enum logic [INSTR_TYPE_W-1:0] {
    COMPRESSED = 1,
    UNCOMPRESSED = 0,
    MISALIGNED = 2
  } instr_type_t;

  typedef struct packed {
    instr_type_t instr_type;
    logic valid;
  } instr_t;

endpackage : dcd_packages

