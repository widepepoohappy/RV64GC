module primitive_reg_wrapper #(
    parameter BITWIDTH = 16,
    parameter NINPUTS = 3,
    parameter T = logic,
    parameter ID = 0        // DEFINES THE REGISTER 
                            // FUNCTIONALITES (Shift reg primitive,
                            // Basic reg primitive, Counter primitive)
)(
    input T [BITWIDTH-1:0] In_data1,
    input T [BITWIDTH-1:0] In_data2,
    input wire [$clog2(NINPUTS)-1:0] Sel,
    input wire clk, en, rst
    output T [BITWIDTH-1:0] Q, Qn,
);

T [BITWIDTH-1:0] D; 
 
primitive_reg #(
    .BITWIDTH(BITWIDTH),
    .T(T)    
) primitive_reg_u (
    D(mux_primitive_reg_out),
    Q, 
    Qn,
    clk, 
    en, 
    rst
);

generate
    case (ID):
        0: 
        1: begin
                T [BITWIDTH-1:0] mux_primitive_reg_in [NINPUTS-1:0];
                T [BITWIDTH-1:0] mux_primitive_reg_out;
                assign mux_primitive_reg_in[0] = In_data1;
                assign mux_primitive_reg_in[1] = In_data2;
                assign mux_primitive_reg_in[2] = Qn;
                mux #(
                    .BITWIDTH(BITWIDTH),
                    .NINPUTS(NINPUTS),
                    .T(T)
                ) mux_primitive_reg_u (
                    .In(mux_primitive_reg_in),
                    .Out(mux_primitive_reg_out),
                    .Sel(Sel)
                );
            end
        default:
    endcase
endgenerate

endmodule
