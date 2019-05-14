// -------------------------------------------------------------
// 
// File Name: hdl_prj\hdlsrc\hdlcoder_led_blinking\led_count_ip_axi4_module.v
// Created: 2019-05-03 13:50:46
// 
// Generated by MATLAB 9.4 and HDL Coder 3.12
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: led_count_ip_axi4_module
// Source Path: led_count_ip/led_count_ip_axi4/led_count_ip_axi4_module
// Hierarchy Level: 2
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module led_count_ip_axi4_module
          (clk,
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
           data_read,
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
           data_write,
           addr_sel,
           wr_enb,
           rd_enb,
           reset_internal);


  input   clk;
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
  input   [31:0] data_read;  // ufix32
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
  output  [31:0] data_write;  // ufix32
  output  [13:0] addr_sel;  // ufix14
  output  wr_enb;  // ufix1
  output  rd_enb;  // ufix1
  output  reset_internal;  // ufix1


  wire reset;
  wire enb;
  wire const_1;  // ufix1
  reg  ar_transfer;  // ufix1
  wire fifo_empty_data;  // ufix1
  wire fifo_afull_data;  // ufix1
  reg [7:0] axi4_wstate;  // uint8
  reg [11:0] axi4_wid;  // ufix12
  reg [15:0] axi4_waddr;  // ufix16
  reg [15:0] axi4_waddr_inc;  // ufix16
  reg  axi4_awtransfer;
  reg  axi4_wtransfer;
  reg [7:0] axi4_rstate;  // uint8
  reg [11:0] axi4_rid_1;  // ufix12
  reg [15:0] axi4_raddr;  // ufix16
  reg [15:0] axi4_raddr_inc;  // ufix16
  reg [7:0] axi4_rlen;  // ufix8
  reg  axi4_ar_transfer;
  reg  axi4_rlast_1;
  reg  axi4_rd_active;
  reg [7:0] axi4_wstate_next;  // uint8
  reg [11:0] axi4_wid_next;  // ufix12
  reg [15:0] axi4_waddr_next;  // ufix16
  reg [15:0] axi4_waddr_inc_next;  // ufix16
  reg  axi4_awtransfer_next;
  reg  axi4_wtransfer_next;
  reg [7:0] axi4_rstate_next;  // uint8
  reg [11:0] axi4_rid_next;  // ufix12
  reg [15:0] axi4_raddr_next;  // ufix16
  reg [15:0] axi4_raddr_inc_next;  // ufix16
  reg [7:0] axi4_rlen_next;  // ufix8
  reg  axi4_ar_transfer_next;
  reg  axi4_rlast_next;
  reg  axi4_rd_active_next;
  reg  AXI4_AWREADY_1;  // ufix1
  reg [15:0] waddr_int;  // ufix16
  reg  AXI4_WREADY_1;  // ufix1
  reg [11:0] AXI4_BID_1;  // ufix12
  reg  AXI4_BVALID_1;  // ufix1
  reg [15:0] raddr_r;  // ufix16
  reg  AXI4_ARREADY_1;  // ufix1
  reg [11:0] rid_int;  // ufix12
  reg  rlast_int;  // ufix1
  reg  aw_transfer;  // ufix1
  reg  w_transfer;  // ufix1
  reg  rd_active;  // ufix1
  wire [1:0] const_0_2;  // ufix2
  reg [31:0] wdata_int;  // ufix32
  reg [31:0] wdata;  // ufix32
  reg [15:0] waddr_r;  // ufix16
  reg [15:0] waddr;  // ufix16
  wire [13:0] waddr_sel;  // ufix14
  wire [13:0] raddr_sel;  // ufix14
  wire wstrb_reduce;  // ufix1
  reg  wstrb_reduce_reg;  // ufix1
  wire w_transfer_and_wstrb;  // ufix1
  reg  wr_enb_1;  // ufix1
  wire strobe_addr;  // ufix1
  wire strobe_sel;  // ufix1
  wire const_zero;  // ufix1
  wire strobe_in;  // ufix1
  wire strobe_sw;  // ufix1
  reg  soft_reset;  // ufix1
  reg  axi4_awvalid1;
  reg  axi4_wvalid1;
  reg  axi4_rd_fifo_afull;


  assign const_1 = 1'b1;



  assign reset =  ~ AXI4_ARESETN;



  assign enb = const_1;

  led_count_ip_rdfifo_data u_led_count_ip_rdfifo_data_inst (.clk(clk),
                                                            .reset(reset),
                                                            .enb(const_1),
                                                            .In(data_read),  // ufix32
                                                            .Push(ar_transfer),  // ufix1
                                                            .Pop(AXI4_RREADY),  // ufix1
                                                            .Out(AXI4_RDATA),  // ufix32
                                                            .Empty(fifo_empty_data),  // ufix1
                                                            .AFull(fifo_afull_data)  // ufix1
                                                            );

  always @(posedge clk)
    begin : axi4_process
      if (reset == 1'b1) begin
        axi4_wstate <= 8'd0;
        axi4_wid <= 12'b000000000000;
        axi4_waddr <= 16'b0000000000000000;
        axi4_waddr_inc <= 16'b0000000000000000;
        axi4_awtransfer <= 1'b0;
        axi4_wtransfer <= 1'b0;
        axi4_rstate <= 8'd0;
        axi4_rid_1 <= 12'b000000000000;
        axi4_raddr <= 16'b0000000000000000;
        axi4_raddr_inc <= 16'b0000000000000000;
        axi4_rlen <= 8'b00000000;
        axi4_ar_transfer <= 1'b0;
        axi4_rlast_1 <= 1'b0;
        axi4_rd_active <= 1'b0;
      end
      else begin
        if (enb) begin
          axi4_wstate <= axi4_wstate_next;
          axi4_wid <= axi4_wid_next;
          axi4_waddr <= axi4_waddr_next;
          axi4_waddr_inc <= axi4_waddr_inc_next;
          axi4_awtransfer <= axi4_awtransfer_next;
          axi4_wtransfer <= axi4_wtransfer_next;
          axi4_rstate <= axi4_rstate_next;
          axi4_rid_1 <= axi4_rid_next;
          axi4_raddr <= axi4_raddr_next;
          axi4_raddr_inc <= axi4_raddr_inc_next;
          axi4_rlen <= axi4_rlen_next;
          axi4_ar_transfer <= axi4_ar_transfer_next;
          axi4_rlast_1 <= axi4_rlast_next;
          axi4_rd_active <= axi4_rd_active_next;
        end
      end
    end

  always @(axi4_wstate, axi4_wid, axi4_waddr, axi4_waddr_inc, axi4_awtransfer,
       axi4_wtransfer, axi4_rstate, axi4_rid_1, axi4_raddr, axi4_raddr_inc,
       axi4_rlen, axi4_ar_transfer, axi4_rlast_1, axi4_rd_active, AXI4_AWID,
       AXI4_AWADDR, AXI4_AWBURST, AXI4_AWVALID, AXI4_WLAST, AXI4_WVALID,
       AXI4_BREADY, AXI4_ARID, AXI4_ARADDR, AXI4_ARLEN, AXI4_ARBURST,
       AXI4_ARVALID, fifo_afull_data) begin
    axi4_wid_next = axi4_wid;
    axi4_waddr_next = axi4_waddr;
    axi4_waddr_inc_next = axi4_waddr_inc;
    axi4_awtransfer_next = axi4_awtransfer;
    axi4_wtransfer_next = axi4_wtransfer;
    axi4_rid_next = axi4_rid_1;
    axi4_raddr_next = axi4_raddr;
    axi4_raddr_inc_next = axi4_raddr_inc;
    axi4_rlen_next = axi4_rlen;
    axi4_ar_transfer_next = axi4_ar_transfer;
    axi4_rlast_next = axi4_rlast_1;
    axi4_rd_active_next = axi4_rd_active;
    axi4_awvalid1 = AXI4_AWVALID != 1'b0;
    axi4_wvalid1 = AXI4_WVALID != 1'b0;
    axi4_rd_fifo_afull = fifo_afull_data != 1'b0;
    case ( axi4_wstate)
      8'd0 :
        begin
          AXI4_AWREADY_1 = axi4_rstate == 8'd0;
          AXI4_WREADY_1 = 1'b0;
          AXI4_BVALID_1 = 1'b0;
          axi4_waddr_next = AXI4_AWADDR;
          axi4_wid_next = AXI4_AWID;
          axi4_wtransfer_next = 1'b0;
          case ( AXI4_AWBURST)
            2'b00 :
              begin
                axi4_waddr_inc_next = 16'b0000000000000000;
              end
            default :
              begin
                axi4_waddr_inc_next = 16'b0000000000000100;
              end
          endcase
          if (axi4_awvalid1 && (axi4_rstate == 8'd0)) begin
            axi4_wstate_next = 8'd1;
            axi4_awtransfer_next = 1'b1;
          end
          else begin
            axi4_wstate_next = 8'd0;
            axi4_awtransfer_next = 1'b0;
          end
        end
      8'd1 :
        begin
          AXI4_AWREADY_1 = 1'b0;
          AXI4_WREADY_1 = 1'b1;
          AXI4_BVALID_1 = 1'b0;
          if (axi4_wvalid1) begin
            axi4_awtransfer_next = 1'b1;
            axi4_waddr_next = axi4_waddr + axi4_waddr_inc;
            axi4_wtransfer_next = 1'b1;
          end
          else begin
            axi4_awtransfer_next = 1'b0;
            axi4_wtransfer_next = 1'b0;
          end
          if (axi4_wvalid1 && AXI4_WLAST) begin
            axi4_wstate_next = 8'd2;
          end
          else begin
            axi4_wstate_next = 8'd1;
          end
        end
      8'd2 :
        begin
          axi4_wtransfer_next = 1'b0;
          axi4_awtransfer_next = 1'b0;
          AXI4_AWREADY_1 = 1'b0;
          AXI4_WREADY_1 = 1'b0;
          AXI4_BVALID_1 = 1'b1;
          if (AXI4_BREADY != 1'b0) begin
            axi4_wstate_next = 8'd0;
          end
          else begin
            axi4_wstate_next = 8'd2;
          end
        end
      default :
        begin
          AXI4_AWREADY_1 = 1'b0;
          AXI4_WREADY_1 = 1'b0;
          AXI4_BVALID_1 = 1'b0;
          axi4_wstate_next = 8'd0;
        end
    endcase
    case ( axi4_rstate)
      8'd0 :
        begin
          AXI4_ARREADY_1 = (axi4_wstate == 8'd0) &&  ! axi4_awvalid1;
          axi4_raddr_next = AXI4_ARADDR;
          axi4_rlen_next = AXI4_ARLEN;
          axi4_rlast_next = 1'b0;
          case ( AXI4_ARBURST)
            2'b00 :
              begin
                axi4_raddr_inc_next = 16'b0000000000000000;
              end
            default :
              begin
                axi4_raddr_inc_next = 16'b0000000000000100;
              end
          endcase
          if (((AXI4_ARVALID != 1'b0) && (axi4_wstate == 8'd0)) &&  ! axi4_awvalid1) begin
            axi4_rstate_next = 8'd1;
            axi4_rd_active_next = 1'b1;
            axi4_rid_next = AXI4_ARID;
          end
          else begin
            axi4_rstate_next = 8'd0;
            axi4_rd_active_next = 1'b0;
          end
          axi4_ar_transfer_next = 1'b0;
        end
      8'd1 :
        begin
          AXI4_ARREADY_1 = 1'b0;
          if (axi4_rlast_1) begin
            axi4_rstate_next = 8'd2;
          end
          else begin
            axi4_rstate_next = 8'd1;
          end
          if (axi4_ar_transfer) begin
            axi4_raddr_next = axi4_raddr + axi4_raddr_inc;
          end
          if (( ! axi4_rd_fifo_afull) && ( ! axi4_rlast_1)) begin
            axi4_ar_transfer_next = 1'b1;
            if (axi4_rlen == 8'b00000000) begin
              axi4_rlast_next = 1'b1;
            end
          end
          else begin
            axi4_ar_transfer_next = 1'b0;
          end
          if ( ! axi4_rd_fifo_afull) begin
            axi4_rlen_next = axi4_rlen - 8'b00000001;
          end
        end
      8'd2 :
        begin
          AXI4_ARREADY_1 = 1'b0;
          if ( ! axi4_rd_fifo_afull) begin
            axi4_rstate_next = 8'd0;
          end
          else begin
            axi4_rstate_next = 8'd2;
          end
          axi4_rd_active_next = 1'b0;
        end
      default :
        begin
          AXI4_ARREADY_1 = 1'b0;
          axi4_rstate_next = 8'd0;
        end
    endcase
    waddr_int = axi4_waddr;
    AXI4_BID_1 = axi4_wid;
    raddr_r = axi4_raddr;
    rid_int = axi4_rid_1;
    rlast_int = axi4_rlast_1;
    aw_transfer = axi4_awtransfer;
    w_transfer = axi4_wtransfer;
    ar_transfer = axi4_ar_transfer;
    rd_active = axi4_rd_active;
  end



  assign const_0_2 = 2'b00;



  assign AXI4_BRESP = const_0_2;

  led_count_ip_rdfifo_rid u_led_count_ip_rdfifo_rid_inst (.clk(clk),
                                                          .reset(reset),
                                                          .enb(const_1),
                                                          .In(rid_int),  // ufix12
                                                          .Push(ar_transfer),  // ufix1
                                                          .Pop(AXI4_RREADY),  // ufix1
                                                          .Out(AXI4_RID)  // ufix12
                                                          );

  assign AXI4_RRESP = const_0_2;

  led_count_ip_rdfifo_last u_led_count_ip_rdfifo_last_inst (.clk(clk),
                                                            .reset(reset),
                                                            .enb(const_1),
                                                            .In(rlast_int),  // ufix1
                                                            .Push(ar_transfer),  // ufix1
                                                            .Pop(AXI4_RREADY),  // ufix1
                                                            .Out(AXI4_RLAST)  // ufix1
                                                            );

  assign AXI4_RVALID =  ~ fifo_empty_data;



  always @(posedge clk)
    begin : reg_wdata_in_process
      if (reset == 1'b1) begin
        wdata_int <= 32'b00000000000000000000000000000000;
      end
      else begin
        if (enb) begin
          wdata_int <= AXI4_WDATA;
        end
      end
    end



  always @(posedge clk)
    begin : reg_wdata_process
      if (reset == 1'b1) begin
        wdata <= 32'b00000000000000000000000000000000;
      end
      else begin
        if (enb && w_transfer) begin
          wdata <= wdata_int;
        end
      end
    end



  assign data_write = wdata;

  always @(posedge clk)
    begin : reg_waddr_in_process
      if (reset == 1'b1) begin
        waddr_r <= 16'b0000000000000000;
      end
      else begin
        if (enb && aw_transfer) begin
          waddr_r <= waddr_int;
        end
      end
    end



  always @(posedge clk)
    begin : reg_waddr_process
      if (reset == 1'b1) begin
        waddr <= 16'b0000000000000000;
      end
      else begin
        if (enb) begin
          waddr <= waddr_r;
        end
      end
    end



  assign waddr_sel = waddr[15:2];



  assign raddr_sel = raddr_r[15:2];



  assign addr_sel = (rd_active == 1'b0 ? waddr_sel :
              raddr_sel);



  assign wstrb_reduce = (&AXI4_WSTRB[3:0]);



  always @(posedge clk)
    begin : reg_wstrb_reduce_process
      if (reset == 1'b1) begin
        wstrb_reduce_reg <= 1'b0;
      end
      else begin
        if (enb) begin
          wstrb_reduce_reg <= wstrb_reduce;
        end
      end
    end



  assign w_transfer_and_wstrb = w_transfer & wstrb_reduce_reg;



  always @(posedge clk)
    begin : reg_wr_enb_process
      if (reset == 1'b1) begin
        wr_enb_1 <= 1'b0;
      end
      else begin
        if (enb) begin
          wr_enb_1 <= w_transfer_and_wstrb;
        end
      end
    end



  assign rd_enb = ar_transfer;

  assign strobe_addr = waddr_sel == 14'b00000000000000;



  assign strobe_sel = strobe_addr & wr_enb_1;



  assign const_zero = 1'b0;



  assign strobe_in = wdata[0];



  assign strobe_sw = (strobe_sel == 1'b0 ? const_zero :
              strobe_in);



  always @(posedge clk)
    begin : reg_rsvd_process
      if (reset == 1'b1) begin
        soft_reset <= 1'b0;
      end
      else begin
        if (enb) begin
          soft_reset <= strobe_sw;
        end
      end
    end



  assign reset_internal = reset | soft_reset;



  assign AXI4_AWREADY = AXI4_AWREADY_1;

  assign AXI4_WREADY = AXI4_WREADY_1;

  assign AXI4_BID = AXI4_BID_1;

  assign AXI4_BVALID = AXI4_BVALID_1;

  assign AXI4_ARREADY = AXI4_ARREADY_1;

  assign wr_enb = wr_enb_1;

endmodule  // led_count_ip_axi4_module

