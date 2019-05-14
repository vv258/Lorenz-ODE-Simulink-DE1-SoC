/*
 * File Name:         hdl_prj\ipcore\Subsystem_ip_v1_0\include\Subsystem_ip_addr.h
 * Description:       C Header File
 * Created:           2019-05-08 12:58:09
*/

#ifndef SUBSYSTEM_IP_H_
#define SUBSYSTEM_IP_H_

#define  IPCore_Reset_Subsystem_ip       0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_Subsystem_ip      0x4  //enabled (by default) when bit 0 is 0x1
#define  IPCore_Timestamp_Subsystem_ip   0x8  //contains unique IP timestamp (yymmddHHMM): 1905081258
#define  CLK_Data_Subsystem_ip           0x100  //data register for Inport CLK
#define  RST_Data_Subsystem_ip           0x104  //data register for Inport RST
#define  sigma_Data_Subsystem_ip         0x108  //data register for Inport sigma
#define  dt_Data_Subsystem_ip            0x10C  //data register for Inport dt
#define  x0_Data_Subsystem_ip            0x110  //data register for Inport x0
#define  rho_Data_Subsystem_ip           0x114  //data register for Inport rho
#define  y0_Data_Subsystem_ip            0x118  //data register for Inport y0
#define  beta_Data_Subsystem_ip          0x11C  //data register for Inport beta
#define  z0_Data_Subsystem_ip            0x120  //data register for Inport z0
#define  x_Data_Subsystem_ip             0x124  //data register for Outport x
#define  y_Data_Subsystem_ip             0x128  //data register for Outport y
#define  z_Data_Subsystem_ip             0x12C  //data register for Outport z

#endif /* SUBSYSTEM_IP_H_ */
