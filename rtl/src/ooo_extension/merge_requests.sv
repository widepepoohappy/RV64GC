module merge_requests #(
    parameter int unsigned N_IN_PORTS = 8,
    parameter int unsigned N_OUT_PORTS = N_IN_PORTS,
    parameter int unsigned ADDR_WIDTH = 32,
    //parameter int unsigned DATA_WIDTH = 32,
    parameter type         payload_t = logic
)(
    input payload_t [N_IN_PORTS-1:0][ADDR_WIDTH-1:0]    payload_in,
    input logic     [N_IN_PORTS-1:0]    payload_valid_in,
    output payload_t [N_OUT_PORTS-1:0][ADDR_WIDTH-1:0]  payload_o,
    output logic [N_OUT_PORTS-1:0][N_OUT_PORTS-1:0]    reg_view_o
);

//localparam int unsigned ZERO_CONST = N_OUT_PORTS'd0;
logic [$clog2(N_IN_PORTS)-1:0]              starting_index;
logic [N_OUT_PORTS-1:0][N_OUT_PORTS-1:0]    reg_view;
logic [N_OUT_PORTS-1:0]                     valid_int;
logic [N_OUT_PORTS-1:0]                     valid_mask;

always_comb begin
    reg_view = '0;
    valid_mask = '1;
    starting_index = 1;
    for(int i = 0; i < N_IN_PORTS; i++) begin
        valid_int[i] = payload_valid_in[i] & valid_mask[i];
        for(int j = starting_index; j < N_IN_PORTS; j++) begin
            if(valid_int[i]) begin
                if (payload_in[i] == payload_in[j]) begin
                    reg_view[i] |= 1'b1 << j;
                    valid_mask[j] = 1'b0;
                end
                // This is possible because the inputs of this module (MERGE)
                // are positionally correlated with each Reserve Station.
                // Meaning that input[0-1] will refers to Rs1 - Rs2 from
                // Reserve station 0 (uOp lane 0).
                // Input [2-3] refers to Rs1 - Rs2 of Reserve Station 1
                reg_view[i] |= 1'b1 << i;
            end
        end
        starting_index = starting_index + 1;                                                     
    end
end

always_comb begin
    payload_o = '0;
    for(int i = 0 ; i < N_OUT_PORTS; i ++ ) begin
        if(valid_int[i]) begin
            payload_o[i] = payload_in[i];
        end
    end
end

assign reg_view_o = reg_view;

endmodule
