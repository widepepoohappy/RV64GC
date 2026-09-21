module mux #(
    parameter int unsigned  BITWIDTH    = 16,
    parameter int unsigned  NINPUTS     = 2,
    parameter type          payload_t   = logic
)(
    input   payload_t   [BITWIDTH-1:0]          In[NINPUTS-1:0],
    output  payload_t   [BITWIDTH-1:0]          Out,
    input   wire        [$clog2(NINPUTS)-1:0]   Sel
);

    assign Out = In[Sel];

endmodule
