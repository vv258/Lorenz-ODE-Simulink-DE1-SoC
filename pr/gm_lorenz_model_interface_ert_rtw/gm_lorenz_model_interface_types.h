/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: gm_lorenz_model_interface_types.h
 *
 * Code generated for Simulink model 'gm_lorenz_model_interface'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Thu May  9 13:38:39 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_gm_lorenz_model_interface_types_h_
#define RTW_HEADER_gm_lorenz_model_interface_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef typedef_alterasoc_AXIRead_gm_lorenz_m_T
#define typedef_alterasoc_AXIRead_gm_lorenz_m_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  uint32_T DeviceState;
} alterasoc_AXIRead_gm_lorenz_m_T;

#endif                                 /*typedef_alterasoc_AXIRead_gm_lorenz_m_T*/

#ifndef typedef_alterasoc_AXIWrite_gm_lorenz__T
#define typedef_alterasoc_AXIWrite_gm_lorenz__T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  uint32_T DeviceState;
} alterasoc_AXIWrite_gm_lorenz__T;

#endif                                 /*typedef_alterasoc_AXIWrite_gm_lorenz__T*/

/* Parameters (default storage) */
typedef struct P_gm_lorenz_model_interface_T_ P_gm_lorenz_model_interface_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_gm_lorenz_model_interface_T
  RT_MODEL_gm_lorenz_model_interface_T;

#endif                                 /* RTW_HEADER_gm_lorenz_model_interface_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
