// -------------------------------------------------------------
// 
// File Name: hdl_prj\hdlsrc\lorenz_model\Subsystem_ip_axi4.v
// Created: 2019-05-03 14:53:06
// 
// Generated by MATLAB 9.4 and HDL Coder 3.12
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: Subsystem_ip_axi4
// Source Path: Subsystem_ip/Subsystem_ip_axi4
// Hierarchy Level: 1
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module Subsystem_ip_axi4
          (reset,
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
           read_ip_timestamp,
           read_z,
           read_y,
           read_x,
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
           AXI4_RVALID,
           write_axi_enable,
           write_CLK,
           write_RST,
           reset_internal);


  input   reset;
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
  input   [31:0] read_ip_timestamp;  // ufix32
  input   signed [26:0] read_z;  // sfix27_En20
  input   signed [26:0] read_y;  // sfix27_En20
  input   signed [26:0] read_x;  // sfix27_En20
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
  output  write_axi_enable;  // ufix1
  output  write_CLK;  // ufix1
  output  write_RST;  // ufix1
  output  reset_internal;  // ufix1


  wire [31:0] top_data_write;  // ufix32
  wire [13:0] top_addr_sel;  // ufix14
  wire top_wr_enb;  // ufix1
  wire top_rd_enb;  // ufix1
  wire [31:0] top_data_read;  // ufix32
  wire top_reset_internal;  // ufix1


  Subsystem_ip_addr_decoder u_Subsystem_ip_addr_decoder_inst (.clk(AXI4_ACLK),  // ufix1
                                                              .reset(reset),
                                                              .data_write(top_data_write),  // ufix32
                                                              .addr_sel(top_addr_sel),  // ufix14
                                                              .wr_enb(top_wr_enb),  // ufix1
                                                              .rd_enb(top_rd_enb),  // ufix1
                                                              .read_ip_timestamp(read_ip_timestamp),  // ufix32
                                                              .read_z(read_z),  // sfix27_En20
                                                              .read_y(read_y),  // sfix27_En20
                                                              .read_x(read_x),  // sfix27_En20
                                                              .data_read(top_data_read),  // ufix32
                                                              .write_axi_enable(write_axi_enable),  // ufix1
                                                              .write_CLK(write_CLK),  // ufix1
                                                              .write_RST(write_RST)  // ufix1
                                                              );

  Subsystem_ip_axi4_module u_Subsystem_ip_axi4_module_inst (.clk(AXI4_ACLK),  // ufix1
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
                                                            .data_read(top_data_read),  // ufix32
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
                                                            .data_write(top_data_write),  // ufix32
                                                            .addr_sel(top_addr_sel),  // ufix14
                                                            .wr_enb(top_wr_enb),  // ufix1
                                                            .rd_enb(top_rd_enb),  // ufix1
                                                            .reset_internal(top_reset_internal)  // ufix1
                                                            );

  assign reset_internal = top_reset_internal;

endmodule  // Subsystem_ip_axi4

