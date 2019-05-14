/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lorenz_FPGA_system.h
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

#ifndef RTW_HEADER_Lorenz_FPGA_system_h_
#define RTW_HEADER_Lorenz_FPGA_system_h_
#include <string.h>
#include <stddef.h>
#ifndef Lorenz_FPGA_system_COMMON_INCLUDES_
# define Lorenz_FPGA_system_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "axi_lct.h"
#endif                                 /* Lorenz_FPGA_system_COMMON_INCLUDES_ */

#include "Lorenz_FPGA_system_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  alterasoc_AXIRead_Lorenz_FPGA_T obj; /* '<S6>/AXI4 Read' */
  alterasoc_AXIRead_Lorenz_FPGA_T obj_k;/* '<S5>/AXI4 Read' */
  alterasoc_AXIRead_Lorenz_FPGA_T obj_e;/* '<S4>/AXI4 Read' */
  alterasoc_AXIWrite_Lorenz_FPG_T obj_j;/* '<S13>/AXI4 Write' */
  alterasoc_AXIWrite_Lorenz_FPG_T obj_h;/* '<S12>/AXI4 Write' */
  alterasoc_AXIWrite_Lorenz_FPG_T obj_b;/* '<S11>/AXI4 Write' */
  alterasoc_AXIWrite_Lorenz_FPG_T obj_d;/* '<S10>/AXI4 Write' */
  alterasoc_AXIWrite_Lorenz_FPG_T obj_bu;/* '<S9>/AXI4 Write' */
  alterasoc_AXIWrite_Lorenz_FPG_T obj_p;/* '<S8>/AXI4 Write' */
  alterasoc_AXIWrite_Lorenz_FPG_T obj_bo;/* '<S7>/AXI4 Write' */
} DW_Lorenz_FPGA_system_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T sigma;                       /* '<Root>/sigma' */
  int32_T x0;                          /* '<Root>/x0' */
  int32_T rho;                         /* '<Root>/rho' */
  int32_T y0;                          /* '<Root>/y0' */
  int32_T beta;                        /* '<Root>/beta' */
  int32_T z0;                          /* '<Root>/z0' */
  int32_T dt;                          /* '<Root>/dt' */
  boolean_T RST;                       /* '<Root>/RST' */
} ExtU_Lorenz_FPGA_system_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int32_T x;                           /* '<Root>/x' */
  int32_T y;                           /* '<Root>/y' */
  int32_T z;                           /* '<Root>/z' */
} ExtY_Lorenz_FPGA_system_T;

/* Real-time Model Data Structure */
struct tag_RTM_Lorenz_FPGA_system_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_Lorenz_FPGA_system_T Lorenz_FPGA_system_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Lorenz_FPGA_system_T Lorenz_FPGA_system_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Lorenz_FPGA_system_T Lorenz_FPGA_system_Y;

/* Model entry point functions */
extern void Lorenz_FPGA_system_initialize(void);
extern void Lorenz_FPGA_system_step(void);
extern void Lorenz_FPGA_system_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Lorenz_FPGA_system_T *const Lorenz_FPGA_system_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('gm_lorenz_model_interface/Lorenz_FPGA_system')    - opens subsystem gm_lorenz_model_interface/Lorenz_FPGA_system
 * hilite_system('gm_lorenz_model_interface/Lorenz_FPGA_system/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'gm_lorenz_model_interface'
 * '<S1>'   : 'gm_lorenz_model_interface/Lorenz_FPGA_system'
 * '<S2>'   : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Read'
 * '<S3>'   : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Write'
 * '<S4>'   : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Read/AXI4_Read_x'
 * '<S5>'   : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Read/AXI4_Read_y'
 * '<S6>'   : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Read/AXI4_Read_z'
 * '<S7>'   : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Write/AXI4_Write_beta'
 * '<S8>'   : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Write/AXI4_Write_dt'
 * '<S9>'   : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Write/AXI4_Write_rho'
 * '<S10>'  : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Write/AXI4_Write_sigma'
 * '<S11>'  : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Write/AXI4_Write_x0'
 * '<S12>'  : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Write/AXI4_Write_y0'
 * '<S13>'  : 'gm_lorenz_model_interface/Lorenz_FPGA_system/AXI4Write/AXI4_Write_z0'
 */
#endif                                 /* RTW_HEADER_Lorenz_FPGA_system_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
