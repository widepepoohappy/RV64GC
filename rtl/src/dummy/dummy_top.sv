//-----------------------------------------------------------------------------
// Module: priority_encoder_4_to_2
// Description: Implements a 4-to-2 Priority Encoder.
// The output (encode_o) is the binary index of the highest-indexed '1' in the
// input (data_i). The valid signal (valid_o) is high if any input bit is high.
// The highest index active input has the highest priority.
//-----------------------------------------------------------------------------

module dummy_top (
    input  logic [3:0] data_i,     // 4-bit input data (D0, D1, D2, D3)
    output logic [1:0] encode_o,   // 2-bit encoded output (binary index)
    output logic       valid_o     // Output valid signal (1 if any input is high)
);

    // Use always_comb for purely combinational logic.
    always_comb begin
        // Default outputs when no input is active (priority 0, not valid)
        // This ensures all driven signals are assigned a value (combinational completeness).
        encode_o = 2'b00;
        valid_o  = 1'b0;

        // Priority Logic: Check inputs from highest index (3) to lowest (0).
        // The first condition met takes precedence.
        if (data_i[3]) begin
            // Highest priority: D3 is active (index 3)
            encode_o = 2'b11;
            valid_o  = 1'b1;
        end else if (data_i[2]) begin
            // Second priority: D2 is active (index 2)
            encode_o = 2'b10;
            valid_o  = 1'b1;
        end else if (data_i[1]) begin
            // Third priority: D1 is active (index 1)
            encode_o = 2'b01;
            valid_o  = 1'b1;
        end else if (data_i[0]) begin
            // Lowest priority: D0 is active (index 0)
            encode_o = 2'b00;
            valid_o  = 1'b1;
        end
    end

endmodule
