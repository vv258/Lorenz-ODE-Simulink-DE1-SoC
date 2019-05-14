// -------------------------------------------------------------
// 
// File Name: hdl_prj\hdlsrc\lorenz_model\Subsystem_ip_src_Subsystem.v
// Created: 2019-05-03 14:53:01
// 
// Generated by MATLAB 9.4 and HDL Coder 3.12
// 
// 
// -- -------------------------------------------------------------
// -- Rate and Clocking Details
// -- -------------------------------------------------------------
// Model base rate: 0.5
// Target subsystem base rate: 0.5
// 
// 
// Clock Enable  Sample Time
// -- -------------------------------------------------------------
// ce_out        0.5
// -- -------------------------------------------------------------
// 
// 
// Output Signal                 Clock Enable  Sample Time
// -- -------------------------------------------------------------
// x                             ce_out        0.5
// y                             ce_out        0.5
// z                             ce_out        0.5
// -- -------------------------------------------------------------
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: Subsystem_ip_src_Subsystem
// Source Path: lorenz_model/Subsystem
// Hierarchy Level: 0
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module Subsystem_ip_src_Subsystem
          (clk,
           reset,
           clk_enable,
           CLK_1,
           RST,
           ce_out,
           x,
           y,
           z);


  input   clk;
  input   reset;
  input   clk_enable;
  input   CLK_1;
  input   RST;
  output  ce_out;
  output  signed [26:0] x;  // sfix27_En20
  output  signed [26:0] y;  // sfix27_En20
  output  signed [26:0] z;  // sfix27_En20


  wire signed [26:0] Triggered_Subsystem3_out1;  // sfix27_En20
  wire signed [26:0] Triggered_Subsystem3_out2;  // sfix27_En20
  wire signed [26:0] Triggered_Subsystem3_out3;  // sfix27_En20


  Subsystem_ip_src_Triggered_Subsystem3 u_Triggered_Subsystem3 (.clk(clk),
                                                                .reset(reset),
                                                                .enb(clk_enable),
                                                                .RST(RST),
                                                                .Trigger(CLK_1),
                                                                .x(Triggered_Subsystem3_out1),  // sfix27_En20
                                                                .y(Triggered_Subsystem3_out2),  // sfix27_En20
                                                                .z(Triggered_Subsystem3_out3)  // sfix27_En20
                                                                );

  assign x = Triggered_Subsystem3_out1;

  assign y = Triggered_Subsystem3_out2;

  assign z = Triggered_Subsystem3_out3;

  assign ce_out = clk_enable;

endmodule  // Subsystem_ip_src_Subsystem
