// Register File modified to be adapted to OOO execution
module PRF #(
    parameter int unsigned N_RD_PORTS = 2,
    parameter int unsigned N_WR_PORTS = 2,
    parameter int unsigned DATA_WIDTH = 32,
    parameter int unsigned ADDR_WIDTH = 32,
    parameter int unsigned MEMLINES = 32,
    parameter int unsigned NRALUOP = 8,
    //parameter type         payload_t = logic
    parameter type         payload_t = RAT_t
)(
    input wire clk_i, rst_ni,
    input wire [N_WR_PORTS-1:0][ADDR_WIDTH-1:0] write_reg_in,
    //input payload_t [N_WR_PORTS-1:0][DATA_WIDTH-1:0] write_entry_in,     // equivalent of write_data, this signal will be usefull for MEM to RF signals
    input logic [N_WR_PORTS-1:0][DATA_WIDTH-1:0] write_entry_in,     // equivalent of write_data, this signal will be usefull for MEM to RF signals
    input wire [N_RD_PORTS-1:0][ADDR_WIDTH-1:0] read_reg_in ,
    //output payload_t [N_RD_PORTS-1:0][DATA_WIDTH-1:0] read_data_o,
    output logic [N_RD_PORTS-1:0][DATA_WIDTH-1:0] read_data_o,
    output logic [N_RD_PORTS-1:0] data_valid_o,
  // reading valid state of registers content
    input wire [NRALUOP*2-1:0][ADDR_WIDTH-1:0] read_addr_valid_in,
    output wire [NRALUOP*2-1:0] read_valid_o 
);

    //payload_t [MEMLINES-1:0][DATA_WIDTH-1:0] PRF_entry;
    payload_t [MEMLINES-1:0] PRF_entry;

    //############ START MEMORY COMPONENT ##################

    logic [MEMLINES-1:0] mem_en;
    //payload_t [MEMLINES-1:0][DATA_WIDTH-1:0] data_to_write;
    payload_t [MEMLINES-1:0] data_to_write;

    always_comb begin
        for(int j = 0; j < MEMLINES; j++) begin
            data_to_write[j] = '0;
            mem_en[j] = 0;
        end
        for(int i = 0; i < N_WR_PORTS; i++) begin
          if(write_reg_in[i] != 0) begin
            data_to_write[write_reg_in[i]].Tag = write_entry_in[i];
            data_to_write[write_reg_in[i]].Valid = 1'b1;
            mem_en[write_reg_in[i]] = 1'b1;
          end
        end
    end

    generate
        for (genvar i = 0; i < MEMLINES ; i++) begin
            `FFL(PRF_entry[i], data_to_write[i], mem_en[i], 0, clk_i, rst_ni);
        end
    endgenerate

    //############ END MEMORY COMPONENT ##################
    
    //############ START COMBO (OUTPUT) COMPONENT ##################
    // MULTIPLE READS PER CYCLE ARE PERMITTED
    logic [N_RD_PORTS-1:0] bypass ;
    logic [N_RD_PORTS-1:0][$clog2(N_WR_PORTS)-1:0] write_entry_idx;
    always_comb begin
      bypass = '0;
      write_entry_idx = '0;
      for (int j = 0; j < N_RD_PORTS; j++) begin    
        for (int i = 0; i < N_WR_PORTS; i++) begin
          if (read_reg_in[j] != 0 && read_reg_in[j] == write_reg_in[i]) begin
            bypass[j] = 1'b1;
            write_entry_idx[j] = j[$clog2(N_WR_PORTS)-1:0];
          end
        end
      end
    end

  //Valid assignement for immediate value reading
    generate
      for(genvar i = 0 ; i < NRALUOP*2; i++) begin
        assign read_valid_o[i] = PRF_entry[read_addr_valid_in[i]].Valid;
      end
    endgenerate 

    generate
    for (genvar i = 0; i < N_RD_PORTS; i++) begin

    //assign read_data_o[i] =
    //  if (read_reg_in[i] != 0)
    //    if (bypass[i])
    //      write_entry_in[write_entry_idx[i]];
    //    else
    //      PRF_entry[read_reg_in[i]];
    //  else
    //    '0;
      
	    assign read_data_o[i] = (read_reg_in[i] != 0) ?
			     	  (bypass[i] ? write_entry_in[write_entry_idx[i]] : PRF_entry[read_reg_in[i]].Tag) : '0;
      assign data_valid_o[i] = |read_reg_in[i];
    end
    endgenerate
    //############ END COMBO (OUTPUT) COMPONENT ##################

endmodule

