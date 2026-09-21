module merge_vects #(
    parameter int       unsigned    DATA_WIDTH = 1,
    parameter type                 payload_t  = logic[DATA_WIDTH-1:0]
) (
    input payload_t Signal1_in,
    input payload_t Signal2_in,
    output payload_t Merged_signal_o 
);

    assign Merged_signal_o = Signal1_in | Signal2_in;

endmodule

