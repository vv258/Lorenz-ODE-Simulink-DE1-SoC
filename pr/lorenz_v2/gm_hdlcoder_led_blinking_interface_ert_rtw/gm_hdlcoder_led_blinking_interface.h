/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: gm_hdlcoder_led_blinking_interface.h
 *
 * Code generated for Simulink model 'gm_hdlcoder_led_blinking_interface'.
 *
 * Model version                  : 1.66
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Fri May  3 14:13:18 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_gm_hdlcoder_led_blinking_interface_h_
#define RTW_HEADER_gm_hdlcoder_led_blinking_interface_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef gm_hdlcoder_led_blinking_interface_COMMON_INCLUDES_
# define gm_hdlcoder_led_blinking_interface_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "axi_lct.h"
#endif                                 /* gm_hdlcoder_led_blinking_interface_COMMON_INCLUDES_ */

#include "gm_hdlcoder_led_blinking_interface_types.h"

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

#define gm_hdlcoder_led_blinking_interface_M (gm_hdlcoder_led_blinking_int_M)

/* Block signals (default storage) */
typedef struct {
  uint8_T AXI4_Read_Read_back_DTC;     /* '<S4>/AXI4_Read_Read_back_DTC' */
  uint8_T AXI4_Read_LED_DTC;           /* '<S4>/AXI4_Read_LED_DTC' */
} B_gm_hdlcoder_led_blinking_in_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  alterasoc_AXIRead_gm_hdlcoder_T obj; /* '<S6>/AXI4 Read' */
  alterasoc_AXIWrite_gm_hdlcode_T obj_c;/* '<S8>/AXI4 Write' */
  alterasoc_AXIWrite_gm_hdlcode_T obj_h;/* '<S7>/AXI4 Write' */
  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */
} DW_gm_hdlcoder_led_blinking_i_T;

/* Parameters (default storage) */
struct P_gm_hdlcoder_led_blinking_in_T_ {
  uint8_T SliderGain_gain;             /* Mask Parameter: SliderGain_gain
                                        * Referenced by: '<S2>/Slider Gain'
                                        */
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
  boolean_T Constant1_Value;           /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<Root>/Constant1'
                                        */
  uint8_T Constant2_Value;             /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_gm_hdlcoder_led_blink_T {
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
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_gm_hdlcoder_led_blinking_in_T gm_hdlcoder_led_blinking_inte_P;

/* Block signals (default storage) */
extern B_gm_hdlcoder_led_blinking_in_T gm_hdlcoder_led_blinking_inte_B;

/* Block states (default storage) */
extern DW_gm_hdlcoder_led_blinking_i_T gm_hdlcoder_led_blinking_int_DW;

/* Model entry point functions */
extern void gm_hdlcoder_led_blinking_interface_initialize(void);
extern void gm_hdlcoder_led_blinking_interface_step(void);
extern void gm_hdlcoder_led_blinking_interface_terminate(void);

/* Real-time Model object */
extern RT_MODEL_gm_hdlcoder_led_blin_T *const gm_hdlcoder_led_blinking_int_M;

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
 * '<Root>' : 'gm_hdlcoder_led_blinking_interface'
 * '<S1>'   : 'gm_hdlcoder_led_blinking_interface/Model Info1'
 * '<S2>'   : 'gm_hdlcoder_led_blinking_interface/Slider Gain'
 * '<S3>'   : 'gm_hdlcoder_led_blinking_interface/led_counter'
 * '<S4>'   : 'gm_hdlcoder_led_blinking_interface/led_counter/AXI4Read'
 * '<S5>'   : 'gm_hdlcoder_led_blinking_interface/led_counter/AXI4Write'
 * '<S6>'   : 'gm_hdlcoder_led_blinking_interface/led_counter/AXI4Read/AXI4_Read_Read_back'
 * '<S7>'   : 'gm_hdlcoder_led_blinking_interface/led_counter/AXI4Write/AXI4_Write_Blink_direction'
 * '<S8>'   : 'gm_hdlcoder_led_blinking_interface/led_counter/AXI4Write/AXI4_Write_Blink_frequency'
 */
#endif                                 /* RTW_HEADER_gm_hdlcoder_led_blinking_interface_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
