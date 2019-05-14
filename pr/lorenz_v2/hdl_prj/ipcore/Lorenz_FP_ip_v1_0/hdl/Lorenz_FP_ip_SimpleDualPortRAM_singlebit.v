// -------------------------------------------------------------
// 
// File Name: hdl_prj\hdlsrc\lorenz_model\Lorenz_FP_ip_SimpleDualPortRAM_singlebit.v
// Created: 2019-05-03 13:00:14
// 
// Generated by MATLAB 9.4 and HDL Coder 3.12
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: Lorenz_FP_ip_SimpleDualPortRAM_singlebit
// Source Path: Lorenz_FP_ip/Lorenz_FP_ip_axi4/Lorenz_FP_ip_axi4_module/Lorenz_FP_ip_rdfifo_last/Lorenz_FP_ip_rdfifo_last_classic/Lorenz_FP_ip_SimpleDualPortRAM_singlebit
// Hierarchy Level: 5
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module Lorenz_FP_ip_SimpleDualPortRAM_singlebit
          (clk,
           enb,
           wr_din,
           wr_addr,
           wr_en,
           rd_addr,
           rd_dout);

  parameter AddrWidth = 1;
  parameter DataWidth = 1;

  input   clk;
  input   enb;
  input   wr_din;  // ufix1
  input   [AddrWidth - 1:0] wr_addr;  // parameterized width
  input   wr_en;  // ufix1
  input   [AddrWidth - 1:0] rd_addr;  // parameterized width
  output  rd_dout;  // ufix1


  reg   ram [2**AddrWidth - 1:0];
  reg   data_int;
  integer i;

  initial begin
    for (i=0; i<=2**AddrWidth - 1; i=i+1) begin
      ram[i] = 0;
    end
    data_int = 0;
  end


  always @(posedge clk)
    begin : Lorenz_FP_ip_SimpleDualPortRAM_singlebit_process
      if (enb == 1'b1) begin
        if (wr_en == 1'b1) begin
          ram[wr_addr] <= wr_din;
        end
        data_int <= ram[rd_addr];
      end
    end

  assign rd_dout = data_int;

endmodule  // Lorenz_FP_ip_SimpleDualPortRAM_singlebit

