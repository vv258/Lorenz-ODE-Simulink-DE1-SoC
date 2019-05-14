/*
 * File Name:         hdl_prj\ipcore\Lorenz_FP_ip_v1_0\include\Lorenz_FP_ip_addr.h
 * Description:       C Header File
 * Created:           2019-05-03 13:00:15
*/

#ifndef LORENZ_FP_IP_H_
#define LORENZ_FP_IP_H_

#define  IPCore_Reset_Lorenz_FP_ip       0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_Lorenz_FP_ip      0x4  //enabled (by default) when bit 0 is 0x1
#define  IPCore_Strobe_Lorenz_FP_ip      0x8  //write 1 to bit 0 after write all input data
#define  IPCore_Ready_Lorenz_FP_ip       0xC  //wait until bit 0 is 1 before read output data
#define  IPCore_Timestamp_Lorenz_FP_ip   0x10  //contains unique IP timestamp (yymmddHHMM): 1905031300
#define  z_Data_Lorenz_FP_ip             0x100  //data register for Outport z
#define  y_Data_Lorenz_FP_ip             0x104  //data register for Outport y
#define  x_Data_Lorenz_FP_ip             0x108  //data register for Outport x

#endif /* LORENZ_FP_IP_H_ */
