
module res_stack #(
    parameter int unsigned N_UOP_PER_CYCLE = 4,
    parameter int unsigned DATA_WIDTH = 1,
    parameter int unsigned RES_STACK_DEPTH = 4,
    parameter int unsigned NRALUOP = 8,
    parameter int unsigned RES_fifo_DEPTH = 4,
    parameter type         payload_t = rs_entry_t
) (
  input logic clk_i, rst_ni, flush_i, en_i,
  input logic ready_i,
  input logic [N_UOP_PER_CYCLE-1:0] payload_valid_in,
  input payload_t [N_UOP_PER_CYCLE-1:0][DATA_WIDTH-1:0] payload_in,
  output payload_t [DATA_WIDTH-1:0] payload_o,
  output logic [N_UOP_PER_CYCLE-1:0] ready_o
);

logic [$clog2(RES_STACK_DEPTH)-1:0] curr_stack_ptr; // unsigned number
logic [$clog2(RES_STACK_DEPTH)-1:0] next_stack_ptr;

/* ==== RES_FIFO SIGNALS ==== */
payload_t       [N_UOP_PER_CYCLE-1:0]       RES_fifo_data_in;
logic           [N_UOP_PER_CYCLE-1:0]       RES_fifo_valid_in;
logic           [N_UOP_PER_CYCLE-1:0]       RES_fifo_ready_o;
payload_t       [N_UOP_PER_CYCLE-1:0]       RES_fifo_data_o;
logic           [N_UOP_PER_CYCLE-1:0]       RES_fifo_valid_o;
logic           [N_UOP_PER_CYCLE-1:0]       RES_fifo_ready_in;
logic [$clog2(N_UOP_PER_CYCLE)-1:0] RES_fifo_ptr_output_sel;
logic                               RES_fifo_data_to_pop;

payload_t [N_UOP_PER_CYCLE-1:0] compacted_in;
logic [N_UOP_PER_CYCLE-1:0] compacted_valid_in;

int write_idx;
// Questa sintassi si traduce in un uroll del for loop
// example:
// always_comb begin
//     out_valid = '0;
//     out_data  = '{default:'0};

//     // inizia come 0
//     int write_idx_0 = 0;

//     // i = 0
//     int write_idx_1 = write_idx_0;
//     if (in_valid[0]) begin
//         out_valid[write_idx_1] = 1'b1;
//         out_data [write_idx_1] = in_data[0];
//         write_idx_1 = write_idx_1 + 1;
//     end

//     // i = 1
//     int write_idx_2 = write_idx_1;
//     if (in_valid[1]) begin
//         out_valid[write_idx_2] = 1'b1;
//         out_data [write_idx_2] = in_data[1];
//         write_idx_2 = write_idx_2 + 1;
//     end

always_comb begin: compacting_data_in
    compacted_valid_in = '0;
    compacted_in  = '{default:'0};
    write_idx = 0;

    for (int i = 0; i < N_UOP_PER_CYCLE; i++) begin
        if (payload_valid_in[i]) begin
            compacted_valid_in[write_idx] = 1'b1;
            compacted_in[write_idx] = payload_in[i];
            write_idx++;
        end
    end
end


always_comb begin: stack_ptr_assignment
  static logic [$clog2(N_UOP_PER_CYCLE)-1:0] next_stack_in_ptr = '0;
    for(int unsigned i = 0; i < N_UOP_PER_CYCLE; i++) begin
        next_stack_in_ptr += { {($clog2(N_UOP_PER_CYCLE)-1){1'b0}}, compacted_valid_in[i] };
    end
    next_stack_ptr = (curr_stack_ptr + next_stack_in_ptr);          // No need to perform % since giving a certain bitwidth will cause overflow 
                                                                    // and reset it to 0
end

always_ff @(posedge clk_i or negedge rst_ni) begin : stack_ptr_state
    if(rst_ni) begin
        curr_stack_ptr <= 0;
    end else begin
        curr_stack_ptr <= next_stack_ptr;
    end
end

genvar j;
generate
    for(j = 0; j < N_UOP_PER_CYCLE; j++) begin
        stream_fifo_optimal_wrap #(
          .Depth(RES_fifo_DEPTH),
          .type_t(payload_t),
          .PrintInfo(1'b0)
          ) RES_fifo_u (
          .clk_i,      // Clock
          .rst_ni,     // Asynchronous reset active low
          .flush_i(/* connect to global flush */),    // flush the fifo
          .testmode_i(/* unused */), // test_mode to bypass clock gating
          .usage_o(/* unused? */),    // fill pointer
          .data_i(RES_fifo_data_in[j]),     // data to push into the fifo
          .valid_i(RES_fifo_valid_in[j]),    // input data valid
          .ready_o(RES_fifo_ready_o[j]),    // fifo is not full
          .data_o(RES_fifo_data_o[j]),     // output data
          .valid_o(RES_fifo_valid_o[j]),    // fifo is not empty
          .ready_i(RES_fifo_ready_in[j])     // pop head from fifo
        );
    end
endgenerate

assign ready_o = RES_fifo_ready_o;
// ==== INPUT ASSIGNEMENT ==== //
always_comb begin
    RES_fifo_data_to_pop = 0;
    for(int i = 0; i < N_UOP_PER_CYCLE; i++) begin
        RES_fifo_valid_in[i] = payload_valid_in;
        RES_fifo_ready_in[i] = ready_i;
        RES_fifo_data_in[i] = compacted_in[i-curr_stack_ptr];
        RES_fifo_data_to_pop |=  RES_fifo_valid_o[i];
        // there is at least a data to pop
    end
end


always @(posedge clk_i or negedge rst_ni) begin
    if(rst_ni) begin
        RES_fifo_ptr_output_sel <= 0;
    end else if (en_i && RES_fifo_data_to_pop) begin
        RES_fifo_ptr_output_sel <= RES_fifo_ptr_output_sel + 1;
    end
end

assign payload_o = RES_fifo_data_o[RES_fifo_ptr_output_sel];

endmodule

