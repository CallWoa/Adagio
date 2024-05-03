`timescale 1ns/1ns
`include "../../generated/System.v"
`define clk_period 20

module systest;

reg clk;
reg rst;
reg mixPc;
reg exec_en;
reg ready;

always #(`clk_period/2) begin
    clk <= ~clk;
end

initial begin
    clk <= 1'b0;
    rst <= 1'b1;
    mixPc <= 1'b1;
    exec_en <= 1'b0;
    ready <= 1'b1;
    #20;
    rst <= 1'b0;
    $readmemh("./diff/src/matrix_src.txt", sys.rf);
    exec_en <= 1'b1;
    #1000;
end

System sys(
    .clock(clk),
    .reset(rst),
    .io_mixPc(mixPc),
    .io_exec_en(exec_en),
    .io_out_ready(ready),
    .io_out_bits_tc0_octet0_threadgroup0_matrix_d_data(),
    .io_out_bits_tc0_octet0_threadgroup4_matrix_d_data(),
    .io_out_bits_tc0_octet1_threadgroup0_matrix_d_data(),
    .io_out_bits_tc0_octet1_threadgroup4_matrix_d_data(),
    .io_out_bits_tc1_octet0_threadgroup0_matrix_d_data(),
    .io_out_bits_tc1_octet0_threadgroup4_matrix_d_data(),
    .io_out_bits_tc1_octet1_threadgroup0_matrix_d_data(),
    .io_out_bits_tc1_octet1_threadgroup4_matrix_d_data()
);
    
endmodule