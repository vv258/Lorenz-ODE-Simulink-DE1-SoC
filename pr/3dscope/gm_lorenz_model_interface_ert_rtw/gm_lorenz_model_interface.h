/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: gm_lorenz_model_interface.h
 *
 * Code generated for Simulink model 'gm_lorenz_model_interface'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Wed May  8 13:16:53 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_gm_lorenz_model_interface_h_
#define RTW_HEADER_gm_lorenz_model_interface_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef gm_lorenz_model_interface_COMMON_INCLUDES_
# define gm_lorenz_model_interface_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "axi_lct.h"
#endif                                 /* gm_lorenz_model_interface_COMMON_INCLUDES_ */

#include "gm_lorenz_model_interface_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals (default storage) */
typedef struct {
  real_T DataTypeConversion1;          /* '<Root>/Data Type Conversion1' */
  real_T DataTypeConversion2;          /* '<Root>/Data Type Conversion2' */
  real_T DataTypeConversion3;          /* '<Root>/Data Type Conversion3' */
  real_T TmpSignalConversionAt3DGraphInp[3];
  int32_T AXI4_Read_x_DTC;             /* '<S10>/AXI4_Read_x_DTC' */
  int32_T AXI4_Read_y_DTC;             /* '<S10>/AXI4_Read_y_DTC' */
  int32_T AXI4_Read_z_DTC;             /* '<S10>/AXI4_Read_z_DTC' */
} B_gm_lorenz_model_interface_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  alterasoc_AXIRead_gm_lorenz_m_T obj; /* '<S14>/AXI4 Read' */
  alterasoc_AXIRead_gm_lorenz_m_T obj_d;/* '<S13>/AXI4 Read' */
  alterasoc_AXIRead_gm_lorenz_m_T obj_d4;/* '<S12>/AXI4 Read' */
  alterasoc_AXIWrite_gm_lorenz__T obj_g;/* '<S23>/AXI4 Write' */
  alterasoc_AXIWrite_gm_lorenz__T obj_o;/* '<S22>/AXI4 Write' */
  alterasoc_AXIWrite_gm_lorenz__T obj_h;/* '<S21>/AXI4 Write' */
  alterasoc_AXIWrite_gm_lorenz__T obj_g1;/* '<S20>/AXI4 Write' */
  alterasoc_AXIWrite_gm_lorenz__T obj_c;/* '<S19>/AXI4 Write' */
  alterasoc_AXIWrite_gm_lorenz__T obj_gd;/* '<S18>/AXI4 Write' */
  alterasoc_AXIWrite_gm_lorenz__T obj_o2;/* '<S17>/AXI4 Write' */
  alterasoc_AXIWrite_gm_lorenz__T obj_cx;/* '<S16>/AXI4 Write' */
  alterasoc_AXIWrite_gm_lorenz__T obj_i;/* '<S15>/AXI4 Write' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<Root>/Scope4' */
} DW_gm_lorenz_model_interface_T;

/* Parameters (default storage) */
struct P_gm_lorenz_model_interface_T_ {
  int32_T sigma_gain;                  /* Mask Parameter: sigma_gain
                                        * Referenced by: '<S6>/Slider Gain'
                                        */
  int32_T dt_gain;                     /* Mask Parameter: dt_gain
                                        * Referenced by: '<S4>/Slider Gain'
                                        */
  int32_T x0_gain;                     /* Mask Parameter: x0_gain
                                        * Referenced by: '<S7>/Slider Gain'
                                        */
  int32_T rho_gain;                    /* Mask Parameter: rho_gain
                                        * Referenced by: '<S5>/Slider Gain'
                                        */
  int32_T y0_gain;                     /* Mask Parameter: y0_gain
                                        * Referenced by: '<S8>/Slider Gain'
                                        */
  int32_T beta_gain;                   /* Mask Parameter: beta_gain
                                        * Referenced by: '<S3>/Slider Gain'
                                        */
  int32_T z0_gain;                     /* Mask Parameter: z0_gain
                                        * Referenced by: '<S9>/Slider Gain'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  int32_T Constant_Value_a;            /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<Root>/Constant'
                                        */
  int32_T Constant6_Value;             /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<Root>/Constant6'
                                        */
  int32_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<Root>/Constant1'
                                        */
  int32_T Constant2_Value;             /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
  int32_T Constant3_Value;             /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<Root>/Constant3'
                                        */
  int32_T Constant4_Value;             /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<Root>/Constant4'
                                        */
  int32_T Constant5_Value;             /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<Root>/Constant5'
                                        */
  boolean_T Constant7_Value;           /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<Root>/Constant7'
                                        */
  boolean_T Constant8_Value;           /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<Root>/Constant8'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_gm_lorenz_model_interface_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    struct {
      uint8_T TID[2];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_gm_lorenz_model_interface_T gm_lorenz_model_interface_P;

/* Block signals (default storage) */
extern B_gm_lorenz_model_interface_T gm_lorenz_model_interface_B;

/* Block states (default storage) */
extern DW_gm_lorenz_model_interface_T gm_lorenz_model_interface_DW;

/* External function called from main */
extern void gm_lorenz_model_interface_SetEventsForThisBaseStep(boolean_T
  *eventFlags);
extern void rate_scheduler(void);

/* Model entry point functions */
extern void gm_lorenz_model_interface_SetEventsForThisBaseStep(boolean_T
  *eventFlags);
extern void gm_lorenz_model_interface_initialize(void);
extern void gm_lorenz_model_interface_step(int_T tid);
extern void gm_lorenz_model_interface_terminate(void);

/* Real-time Model object */
extern RT_MODEL_gm_lorenz_model_interface_T *const gm_lorenz_model_interface_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'gm_lorenz_model_interface'
 * '<S1>'   : 'gm_lorenz_model_interface/Clock'
 * '<S2>'   : 'gm_lorenz_model_interface/Subsystem'
 * '<S3>'   : 'gm_lorenz_model_interface/beta'
 * '<S4>'   : 'gm_lorenz_model_interface/dt'
 * '<S5>'   : 'gm_lorenz_model_interface/rho'
 * '<S6>'   : 'gm_lorenz_model_interface/sigma'
 * '<S7>'   : 'gm_lorenz_model_interface/x0'
 * '<S8>'   : 'gm_lorenz_model_interface/y0'
 * '<S9>'   : 'gm_lorenz_model_interface/z0'
 * '<S10>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Read'
 * '<S11>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Write'
 * '<S12>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Read/AXI4_Read_x'
 * '<S13>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Read/AXI4_Read_y'
 * '<S14>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Read/AXI4_Read_z'
 * '<S15>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Write/AXI4_Write_CLK'
 * '<S16>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Write/AXI4_Write_RST'
 * '<S17>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Write/AXI4_Write_beta'
 * '<S18>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Write/AXI4_Write_dt'
 * '<S19>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Write/AXI4_Write_rho'
 * '<S20>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Write/AXI4_Write_sigma'
 * '<S21>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Write/AXI4_Write_x0'
 * '<S22>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Write/AXI4_Write_y0'
 * '<S23>'  : 'gm_lorenz_model_interface/Subsystem/AXI4Write/AXI4_Write_z0'
 */
#endif                                 /* RTW_HEADER_gm_lorenz_model_interface_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
