// -------------------------------------------------------------
// 
// File Name: hdl_prj\hdlsrc\lorenz_model\Subsystem_ip_dut.v
// Created: 2019-05-08 12:58:09
// 
// Generated by MATLAB 9.4 and HDL Coder 3.12
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: Subsystem_ip_dut
// Source Path: Subsystem_ip/Subsystem_ip_dut
// Hierarchy Level: 1
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module Subsystem_ip_dut
          (clk,
           reset,
           dut_enable,
           CLK_1,
           RST,
           sigma,
           dt,
           x0,
           rho,
           y0,
           beta,
           z0,
           RST1,
           ce_out,
           x,
           y,
           z);


  input   clk;
  input   reset;
  input   dut_enable;  // ufix1
  input   CLK_1;  // ufix1
  input   RST;  // ufix1
  input   signed [26:0] sigma;  // sfix27_En20
  input   signed [26:0] dt;  // sfix27_En20
  input   signed [26:0] x0;  // sfix27_En20
  input   signed [26:0] rho;  // sfix27_En20
  input   signed [26:0] y0;  // sfix27_En20
  input   signed [26:0] beta;  // sfix27_En20
  input   signed [26:0] z0;  // sfix27_En20
  input   RST1;  // ufix1
  output  ce_out;  // ufix1
  output  signed [26:0] x;  // sfix27_En20
  output  signed [26:0] y;  // sfix27_En20
  output  signed [26:0] z;  // sfix27_En20


  wire enb;
  wire ce_out_sig;  // ufix1
  wire signed [26:0] x_sig;  // sfix27_En20
  wire signed [26:0] y_sig;  // sfix27_En20
  wire signed [26:0] z_sig;  // sfix27_En20


  assign enb = dut_enable;

  Subsystem_ip_src_Subsystem u_Subsystem_ip_src_Subsystem (.clk(clk),
                                                           .clk_enable(enb),
                                                           .reset(reset),
                                                           .CLK_1(CLK_1),  // ufix1
                                                           .RST(RST),  // ufix1
                                                           .sigma(sigma),  // sfix27_En20
                                                           .dt(dt),  // sfix27_En20
                                                           .x0(x0),  // sfix27_En20
                                                           .rho(rho),  // sfix27_En20
                                                           .y0(y0),  // sfix27_En20
                                                           .beta(beta),  // sfix27_En20
                                                           .z0(z0),  // sfix27_En20
                                                           .RST1(RST1),  // ufix1
                                                           .ce_out(ce_out_sig),  // ufix1
                                                           .x(x_sig),  // sfix27_En20
                                                           .y(y_sig),  // sfix27_En20
                                                           .z(z_sig)  // sfix27_En20
                                                           );

  assign ce_out = ce_out_sig;

  assign x = x_sig;

  assign y = y_sig;

  assign z = z_sig;

endmodule  // Subsystem_ip_dut
