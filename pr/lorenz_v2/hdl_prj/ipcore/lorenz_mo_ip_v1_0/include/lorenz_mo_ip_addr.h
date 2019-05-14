/*
 * File Name:         hdl_prj\ipcore\lorenz_mo_ip_v1_0\include\lorenz_mo_ip_addr.h
 * Description:       C Header File
 * Created:           2019-04-22 12:40:01
*/

#ifndef LORENZ_MO_IP_H_
#define LORENZ_MO_IP_H_

#define  IPCore_Reset_lorenz_mo_ip       0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_lorenz_mo_ip      0x4  //enabled (by default) when bit 0 is 0x1
#define  IPCore_Timestamp_lorenz_mo_ip   0x8  //contains unique IP timestamp (yymmddHHMM): 1904221239
#define  sigma_Data_lorenz_mo_ip         0x100  //data register for Inport sigma
#define  x0_Data_lorenz_mo_ip            0x104  //data register for Inport x0
#define  rho_Data_lorenz_mo_ip           0x108  //data register for Inport rho
#define  y0_Data_lorenz_mo_ip            0x10C  //data register for Inport y0
#define  beta_Data_lorenz_mo_ip          0x110  //data register for Inport beta
#define  z0_Data_lorenz_mo_ip            0x114  //data register for Inport z0
#define  dt_Data_lorenz_mo_ip            0x118  //data register for Inport dt
#define  x_Data_lorenz_mo_ip             0x11C  //data register for Outport x
#define  y_Data_lorenz_mo_ip             0x120  //data register for Outport y
#define  z_Data_lorenz_mo_ip             0x124  //data register for Outport z

#endif /* LORENZ_MO_IP_H_ */
