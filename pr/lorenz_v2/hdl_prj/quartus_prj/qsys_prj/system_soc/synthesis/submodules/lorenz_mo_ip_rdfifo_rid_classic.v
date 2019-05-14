// -------------------------------------------------------------
// 
// File Name: hdl_prj\hdlsrc\lorenz_model\lorenz_mo_ip_rdfifo_rid_classic.v
// Created: 2019-04-22 12:40:01
// 
// Generated by MATLAB 9.4 and HDL Coder 3.12
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: lorenz_mo_ip_rdfifo_rid_classic
// Source Path: lorenz_mo_ip/lorenz_mo_ip_axi4/lorenz_mo_ip_axi4_module/lorenz_mo_ip_rdfifo_rid/lorenz_mo_ip_rdfifo_rid_classic
// Hierarchy Level: 4
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module lorenz_mo_ip_rdfifo_rid_classic
          (clk,
           reset,
           enb,
           In,
           Push,
           Pop,
           Out,
           Empty,
           Full,
           Num);


  input   clk;
  input   reset;
  input   enb;
  input   [11:0] In;  // ufix12
  input   Push;  // ufix1
  input   Pop;  // ufix1
  output  [11:0] Out;  // ufix12
  output  Empty;  // ufix1
  output  Full;  // ufix1
  output  [4:0] Num;  // ufix5


  reg [3:0] fifo_front_indx;  // ufix4
  reg [3:0] fifo_front_dir;  // ufix4
  reg [3:0] fifo_back_indx;  // ufix4
  reg [3:0] fifo_back_dir;  // ufix4
  reg [4:0] fifo_sample_count;  // ufix5
  wire [3:0] fifo_front_indx_next;  // ufix4
  wire [3:0] fifo_front_dir_next;  // ufix4
  wire [3:0] fifo_back_indx_next;  // ufix4
  wire [3:0] fifo_back_dir_next;  // ufix4
  wire [4:0] fifo_sample_count_next;  // ufix5
  wire fifo_out3;
  wire fifo_out4;
  wire fifo_write_enable;
  wire fifo_read_enable;
  wire [3:0] fifo_front_indx_temp;  // ufix4
  wire [3:0] fifo_back_indx_temp;  // ufix4
  wire [3:0] w_waddr;  // ufix4
  wire w_we;  // ufix1
  wire [3:0] w_raddr;  // ufix4
  wire w_cz;
  wire w_const;  // ufix1
  wire w_mux1;  // ufix1
  reg  w_d1;  // ufix1
  wire [11:0] w_waddr_1;  // ufix12
  reg [11:0] w_d2;  // ufix12
  wire [11:0] w_out;  // ufix12


  // FIFO logic controller
  always @(posedge clk or posedge reset)
    begin : fifo_process
      if (reset == 1'b1) begin
        fifo_front_indx <= 4'b0000;
        fifo_front_dir <= 4'b0001;
        fifo_back_indx <= 4'b0000;
        fifo_back_dir <= 4'b0001;
        fifo_sample_count <= 5'b00000;
      end
      else begin
        if (enb) begin
          fifo_front_indx <= fifo_front_indx_next;
          fifo_front_dir <= fifo_front_dir_next;
          fifo_back_indx <= fifo_back_indx_next;
          fifo_back_dir <= fifo_back_dir_next;
          fifo_sample_count <= fifo_sample_count_next;
        end
      end
    end

  assign fifo_out4 = fifo_sample_count == 5'b10000;
  assign fifo_out3 = fifo_sample_count == 5'b00000;
  assign fifo_write_enable = Push && (Pop || ( ! fifo_out4));
  assign fifo_read_enable = Pop && ( ! fifo_out3);
  assign fifo_front_indx_temp = (fifo_read_enable ? fifo_front_indx + fifo_front_dir :
              fifo_front_indx);
  assign fifo_front_dir_next = (fifo_front_indx_temp == 4'b1111 ? 4'b0001 :
              4'b0001);
  assign fifo_back_indx_temp = (fifo_write_enable ? fifo_back_indx + fifo_back_dir :
              fifo_back_indx);
  assign fifo_back_dir_next = (fifo_back_indx_temp == 4'b1111 ? 4'b0001 :
              4'b0001);
  assign fifo_sample_count_next = (fifo_write_enable && ( ! fifo_read_enable) ? fifo_sample_count + 5'b00001 :
              (( ! fifo_write_enable) && fifo_read_enable ? fifo_sample_count + 5'b11111 :
              fifo_sample_count));
  assign w_waddr = fifo_back_indx;
  assign w_we = fifo_write_enable;
  assign w_raddr = fifo_front_indx;
  assign Empty = fifo_out3;
  assign Full = fifo_out4;
  assign Num = fifo_sample_count;
  assign fifo_front_indx_next = fifo_front_indx_temp;
  assign fifo_back_indx_next = fifo_back_indx_temp;



  assign w_cz = Num > 5'b00000;



  assign w_const = 1'b0;



  assign w_mux1 = (w_cz == 1'b0 ? w_const :
              Pop);



  always @(posedge clk or posedge reset)
    begin : f_d1_process
      if (reset == 1'b1) begin
        w_d1 <= 1'b0;
      end
      else begin
        if (enb) begin
          w_d1 <= w_mux1;
        end
      end
    end



  // us1: Upsample by 1, Sample offset 0 
  // 
  // us2: Upsample by 1, Sample offset 0 
  // 
  // us3: Upsample by 1, Sample offset 0 
  lorenz_mo_ip_SimpleDualPortRAM_generic #(.AddrWidth(4),
                                           .DataWidth(12)
                                           )
                                         u_lorenz_mo_ip_rdfifo_rid_classic_ram (.clk(clk),
                                                                                .enb(enb),
                                                                                .wr_din(In),
                                                                                .wr_addr(w_waddr),
                                                                                .wr_en(w_we),  // ufix1
                                                                                .rd_addr(w_raddr),
                                                                                .rd_dout(w_waddr_1)
                                                                                );

  always @(posedge clk or posedge reset)
    begin : f_d2_process
      if (reset == 1'b1) begin
        w_d2 <= 12'b000000000000;
      end
      else begin
        if (enb && w_d1) begin
          w_d2 <= w_waddr_1;
        end
      end
    end



  assign w_out = (w_d1 == 1'b0 ? w_d2 :
              w_waddr_1);



  assign Out = w_out;

endmodule  // lorenz_mo_ip_rdfifo_rid_classic
