

module pipo #(
    parameter int unsigned N_PARALLEL_INPUT = 4,
    parameter int unsigned RES_STACK_DEPTH = 4,
    parameter int unsigned PIPO_DEPTH = 4,
    parameter int unsigned N_OUT = 1,
    parameter type         payload_t = logic
) (
  input logic clk_i, rst_ni, flush_i, 
  input logic ready_i,
  input logic [N_PARALLEL_INPUT-1:0] payload_valid_in,
  input payload_t [N_PARALLEL_INPUT-1:0] payload_in,
  output payload_t [N_OUT-1:0] payload_o,
  output logic payload_valid_o,
  output logic ready_o
);
localparam int unsigned LOG2_PARALLEL_INPUT = $clog2(N_PARALLEL_INPUT);
localparam int unsigned POW2_CLOG2_PARALLEL_INPUT = $rtoi($pow(2, $ceil(LOG2_PARALLEL_INPUT)));
// number of FIFOs is the same as the pow2 of the ceiling of the log of the
// N of prallel inputs. In this way it is much easier to manage control logic
// on the policies of input n output

logic [LOG2_PARALLEL_INPUT-1:0] curr_in_stack_ptr; // unsigned number
logic [LOG2_PARALLEL_INPUT-1:0] curr_out_stack_ptr; // unsigned number
logic [LOG2_PARALLEL_INPUT-1:0] next_stack_ptr;
logic [LOG2_PARALLEL_INPUT-1:0] next_stack_out_ptr;

/* ==== RES_FIFO SIGNALS ==== */
payload_t       [POW2_CLOG2_PARALLEL_INPUT-1:0]       RES_fifo_data_in;
logic           [POW2_CLOG2_PARALLEL_INPUT-1:0]       RES_fifo_valid_in;
logic           [POW2_CLOG2_PARALLEL_INPUT-1:0]       RES_fifo_ready_o;
payload_t       [POW2_CLOG2_PARALLEL_INPUT-1:0]       RES_fifo_data_o;
logic           [POW2_CLOG2_PARALLEL_INPUT-1:0]       RES_fifo_valid_o;
//logic           [N_PARALLEL_INPUT-1:0]       RES_fifo_ready_in;
logic           [POW2_CLOG2_PARALLEL_INPUT-1:0]       RES_fifo_data_to_pop;
//logic [LOG2_PARALLEL_INPUT-1:0]         RES_fifo_ptr_output_sel;

payload_t [N_PARALLEL_INPUT-1:0] compacted_in;
logic [N_PARALLEL_INPUT-1:0] compacted_valid_in;
logic [$clog2(N_PARALLEL_INPUT)-1:0] n_output_valid;

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

    for (int unsigned i = 0; i < N_PARALLEL_INPUT; i++) begin
        if (payload_valid_in[i]) begin
            compacted_valid_in[write_idx] = 1'b1;
            compacted_in[write_idx] = payload_in[i];
            write_idx++;
        end
    end
end

always_comb begin: in_stack_ptr_assignment
    //static logic [LOG2_PARALLEL_INPUT-1:0] next_stack_in_ptr = '0;
    next_stack_ptr = '0;
    for(int unsigned i = 0; i < N_PARALLEL_INPUT; i++) begin
        //next_stack_in_ptr += { {(LOG2_PARALLEL_INPUT-1){1'b0}}, compacted_valid_in[i] };
        next_stack_ptr += payload_valid_in[i];          // No need to perform % since giving a certain bitwidth will cause overflow 
    end
    next_stack_ptr += curr_in_stack_ptr;
                                                                    // and reset it to 0
    //next_stack_ptr = (curr_in_stack_ptr + compacted_valid_in);          // No need to perform % since giving a certain bitwidth will cause overflow 
end


always_comb begin: out_stack_ptr_assignment
    //static logic [LOG2_PARALLEL_INPUT-1:0] next_stack_in_ptr = '0;
    n_output_valid = '0;
    next_stack_out_ptr = '0;
    for ( int i = 0; i < N_OUT; i++) begin
      // if we have at least one fifo that is not empty, we send it to the
      // output. At MAX we will increase the curr_out_stck_ptr of N_OUT, and
      // min 0.
      n_output_valid += RES_fifo_valid_o[i+curr_out_stack_ptr];
    end
    if ( ready_i && |n_output_valid == 1'b1) begin
      next_stack_out_ptr += n_output_valid;
    end
    next_stack_out_ptr += curr_out_stack_ptr;
                                                                    // and reset it to 0
end

/* verilator lint_off SYNCASYNCNET */
always_ff @(posedge clk_i or negedge rst_ni) begin : stack_in_ptr_state
    if(~rst_ni) begin
        curr_in_stack_ptr <= '0;
    end else begin
        curr_in_stack_ptr <= next_stack_ptr;
    end
end

always_ff @(posedge clk_i or negedge rst_ni) begin : stack_out_ptr_state
    if(~rst_ni) begin
        curr_out_stack_ptr <= '0;
    end else begin
        curr_out_stack_ptr <= next_stack_out_ptr;
    end
end

generate
    for(genvar j = 0; j < POW2_CLOG2_PARALLEL_INPUT; j++) begin
        stream_fifo_optimal_wrap #(
          .Depth(PIPO_DEPTH),
          .type_t(payload_t),
          .PrintInfo(1'b0)
          ) RES_fifo_u (
          .clk_i,      // Clock
          .rst_ni,     // Asynchronous reset active low
          .flush_i,    // flush the fifo
          .testmode_i(/* unused */), // test_mode to bypass clock gating
          .usage_o(/* unused? */),    // fill pointer
          .data_i(RES_fifo_data_in[j]),     // data to push into the fifo
          .valid_i(RES_fifo_valid_in[j]),    // input data valid
          .ready_o(RES_fifo_ready_o[j]),    // fifo is not full
          .data_o(RES_fifo_data_o[j]),     // output data
          .valid_o(RES_fifo_valid_o[j]),    // fifo is not empty
          .ready_i(RES_fifo_data_to_pop[j])     // pop head from fifo
        );
    end
endgenerate


assign ready_o = |RES_fifo_ready_o;
// ==== INPUT ASSIGNEMENT ==== //
always_comb begin
  RES_fifo_data_in = '0;
  RES_fifo_valid_in = '0;
  for(int unsigned i = 0; i < N_PARALLEL_INPUT; i++) begin
    
    //this overflows and goes back to 0. ONLY WHEN THE NUMBER OF PARALLEL
    //INPUT IS A POWER OF 2
      RES_fifo_valid_in[i + curr_in_stack_ptr] = compacted_valid_in[i];
      //RES_fifo_ready_in[i] = ready_i;
      RES_fifo_data_in[i + curr_in_stack_ptr] = compacted_in[i];
      // there is at least a data to pop
  end
end

/* OUTPUT ASSIGNMENET */
always_comb begin
  payload_o = '0;
  RES_fifo_data_to_pop = '0;
  for(int i = 0; i < N_OUT; i++) begin
    payload_o[i] = RES_fifo_data_o[i+curr_out_stack_ptr];
  end
  for ( int unsigned i = 0; i < N_OUT; i++) begin
    
    RES_fifo_data_to_pop[i+curr_out_stack_ptr]  =  ready_i & RES_fifo_valid_o[i+curr_out_stack_ptr];
  end
end

assign payload_valid_o = | RES_fifo_valid_o;

endmodule

