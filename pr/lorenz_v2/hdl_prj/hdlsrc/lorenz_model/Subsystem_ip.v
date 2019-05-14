// -------------------------------------------------------------
// 
// File Name: hdl_prj\hdlsrc\lorenz_model\Subsystem_ip.v
// Created: 2019-05-03 14:53:06
// 
// Generated by MATLAB 9.4 and HDL Coder 3.12
// 
// 
// -- -------------------------------------------------------------
// -- Rate and Clocking Details
// -- -------------------------------------------------------------
// Model base rate: -1
// Target subsystem base rate: -1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: Subsystem_ip
// Source Path: Subsystem_ip
// Hierarchy Level: 0
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module Subsystem_ip
          (IPCORE_CLK,
           IPCORE_RESETN,
           AXI4_ACLK,
           AXI4_ARESETN,
           AXI4_AWID,
           AXI4_AWADDR,
           AXI4_AWLEN,
           AXI4_AWSIZE,
           AXI4_AWBURST,
           AXI4_AWLOCK,
           AXI4_AWCACHE,
           AXI4_AWPROT,
           AXI4_AWVALID,
           AXI4_WDATA,
           AXI4_WSTRB,
           AXI4_WLAST,
           AXI4_WVALID,
           AXI4_BREADY,
           AXI4_ARID,
           AXI4_ARADDR,
           AXI4_ARLEN,
           AXI4_ARSIZE,
           AXI4_ARBURST,
           AXI4_ARLOCK,
           AXI4_ARCACHE,
           AXI4_ARPROT,
           AXI4_ARVALID,
           AXI4_RREADY,
           AXI4_AWREADY,
           AXI4_WREADY,
           AXI4_BID,
           AXI4_BRESP,
           AXI4_BVALID,
           AXI4_ARREADY,
           AXI4_RID,
           AXI4_RDATA,
           AXI4_RRESP,
           AXI4_RLAST,
           AXI4_RVALID);


  input   IPCORE_CLK;  // ufix1
  input   IPCORE_RESETN;  // ufix1
  input   AXI4_ACLK;  // ufix1
  input   AXI4_ARESETN;  // ufix1
  input   [11:0] AXI4_AWID;  // ufix12
  input   [15:0] AXI4_AWADDR;  // ufix16
  input   [7:0] AXI4_AWLEN;  // ufix8
  input   [2:0] AXI4_AWSIZE;  // ufix3
  input   [1:0] AXI4_AWBURST;  // ufix2
  input   AXI4_AWLOCK;  // ufix1
  input   [3:0] AXI4_AWCACHE;  // ufix4
  input   [2:0] AXI4_AWPROT;  // ufix3
  input   AXI4_AWVALID;  // ufix1
  input   [31:0] AXI4_WDATA;  // ufix32
  input   [3:0] AXI4_WSTRB;  // ufix4
  input   AXI4_WLAST;  // ufix1
  input   AXI4_WVALID;  // ufix1
  input   AXI4_BREADY;  // ufix1
  input   [11:0] AXI4_ARID;  // ufix12
  input   [15:0] AXI4_ARADDR;  // ufix16
  input   [7:0] AXI4_ARLEN;  // ufix8
  input   [2:0] AXI4_ARSIZE;  // ufix3
  input   [1:0] AXI4_ARBURST;  // ufix2
  input   AXI4_ARLOCK;  // ufix1
  input   [3:0] AXI4_ARCACHE;  // ufix4
  input   [2:0] AXI4_ARPROT;  // ufix3
  input   AXI4_ARVALID;  // ufix1
  input   AXI4_RREADY;  // ufix1
  output  AXI4_AWREADY;  // ufix1
  output  AXI4_WREADY;  // ufix1
  output  [11:0] AXI4_BID;  // ufix12
  output  [1:0] AXI4_BRESP;  // ufix2
  output  AXI4_BVALID;  // ufix1
  output  AXI4_ARREADY;  // ufix1
  output  [11:0] AXI4_RID;  // ufix12
  output  [31:0] AXI4_RDATA;  // ufix32
  output  [1:0] AXI4_RRESP;  // ufix2
  output  AXI4_RLAST;  // ufix1
  output  AXI4_RVALID;  // ufix1


  wire reset;
  wire [31:0] ip_timestamp;  // ufix32
  wire reset_cm;  // ufix1
  wire reset_internal;  // ufix1
  wire write_axi_enable;  // ufix1
  wire write_CLK;  // ufix1
  wire write_RST;  // ufix1
  wire ce_out_sig;  // ufix1
  wire signed [26:0] x_sig;  // sfix27_En20
  wire signed [26:0] y_sig;  // sfix27_En20
  wire signed [26:0] z_sig;  // sfix27_En20


  assign ip_timestamp = 32'b01110001100011000111100100011101;



  assign reset_cm =  ~ IPCORE_RESETN;



  assign reset = reset_cm | reset_internal;



  Subsystem_ip_dut u_Subsystem_ip_dut_inst (.clk(IPCORE_CLK),  // ufix1
                                            .reset(reset),
                                            .dut_enable(write_axi_enable),  // ufix1
                                            .CLK_1(write_CLK),  // ufix1
                                            .RST(write_RST),  // ufix1
                                            .ce_out(ce_out_sig),  // ufix1
                                            .x(x_sig),  // sfix27_En20
                                            .y(y_sig),  // sfix27_En20
                                            .z(z_sig)  // sfix27_En20
                                            );

  Subsystem_ip_axi4 u_Subsystem_ip_axi4_inst (.reset(reset),
                                              .AXI4_ACLK(AXI4_ACLK),  // ufix1
                                              .AXI4_ARESETN(AXI4_ARESETN),  // ufix1
                                              .AXI4_AWID(AXI4_AWID),  // ufix12
                                              .AXI4_AWADDR(AXI4_AWADDR),  // ufix16
                                              .AXI4_AWLEN(AXI4_AWLEN),  // ufix8
                                              .AXI4_AWSIZE(AXI4_AWSIZE),  // ufix3
                                              .AXI4_AWBURST(AXI4_AWBURST),  // ufix2
                                              .AXI4_AWLOCK(AXI4_AWLOCK),  // ufix1
                                              .AXI4_AWCACHE(AXI4_AWCACHE),  // ufix4
                                              .AXI4_AWPROT(AXI4_AWPROT),  // ufix3
                                              .AXI4_AWVALID(AXI4_AWVALID),  // ufix1
                                              .AXI4_WDATA(AXI4_WDATA),  // ufix32
                                              .AXI4_WSTRB(AXI4_WSTRB),  // ufix4
                                              .AXI4_WLAST(AXI4_WLAST),  // ufix1
                                              .AXI4_WVALID(AXI4_WVALID),  // ufix1
                                              .AXI4_BREADY(AXI4_BREADY),  // ufix1
                                              .AXI4_ARID(AXI4_ARID),  // ufix12
                                              .AXI4_ARADDR(AXI4_ARADDR),  // ufix16
                                              .AXI4_ARLEN(AXI4_ARLEN),  // ufix8
                                              .AXI4_ARSIZE(AXI4_ARSIZE),  // ufix3
                                              .AXI4_ARBURST(AXI4_ARBURST),  // ufix2
                                              .AXI4_ARLOCK(AXI4_ARLOCK),  // ufix1
                                              .AXI4_ARCACHE(AXI4_ARCACHE),  // ufix4
                                              .AXI4_ARPROT(AXI4_ARPROT),  // ufix3
                                              .AXI4_ARVALID(AXI4_ARVALID),  // ufix1
                                              .AXI4_RREADY(AXI4_RREADY),  // ufix1
                                              .read_ip_timestamp(ip_timestamp),  // ufix32
                                              .read_z(z_sig),  // sfix27_En20
                                              .read_y(y_sig),  // sfix27_En20
                                              .read_x(x_sig),  // sfix27_En20
                                              .AXI4_AWREADY(AXI4_AWREADY),  // ufix1
                                              .AXI4_WREADY(AXI4_WREADY),  // ufix1
                                              .AXI4_BID(AXI4_BID),  // ufix12
                                              .AXI4_BRESP(AXI4_BRESP),  // ufix2
                                              .AXI4_BVALID(AXI4_BVALID),  // ufix1
                                              .AXI4_ARREADY(AXI4_ARREADY),  // ufix1
                                              .AXI4_RID(AXI4_RID),  // ufix12
                                              .AXI4_RDATA(AXI4_RDATA),  // ufix32
                                              .AXI4_RRESP(AXI4_RRESP),  // ufix2
                                              .AXI4_RLAST(AXI4_RLAST),  // ufix1
                                              .AXI4_RVALID(AXI4_RVALID),  // ufix1
                                              .write_axi_enable(write_axi_enable),  // ufix1
                                              .write_CLK(write_CLK),  // ufix1
                                              .write_RST(write_RST),  // ufix1
                                              .reset_internal(reset_internal)  // ufix1
                                              );

endmodule  // Subsystem_ip

