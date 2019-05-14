/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lorenz_FPGA_system_types.h
 *
 * Code generated for Simulink model 'Lorenz_FPGA_system'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Thu May  2 20:25:59 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Lorenz_FPGA_system_types_h_
#define RTW_HEADER_Lorenz_FPGA_system_types_h_
#include "rtwtypes.h"
#ifndef typedef_alterasoc_AXIRead_Lorenz_FPGA_T
#define typedef_alterasoc_AXIRead_Lorenz_FPGA_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  uint32_T DeviceState;
} alterasoc_AXIRead_Lorenz_FPGA_T;

#endif                                 /*typedef_alterasoc_AXIRead_Lorenz_FPGA_T*/

#ifndef typedef_alterasoc_AXIWrite_Lorenz_FPG_T
#define typedef_alterasoc_AXIWrite_Lorenz_FPG_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  uint32_T DeviceState;
} alterasoc_AXIWrite_Lorenz_FPG_T;

#endif                                 /*typedef_alterasoc_AXIWrite_Lorenz_FPG_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_Lorenz_FPGA_system_T RT_MODEL_Lorenz_FPGA_system_T;

#endif                                 /* RTW_HEADER_Lorenz_FPGA_system_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
