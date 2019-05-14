/*
 * gm_hdlcoder_led_blinking_interface_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "gm_hdlcoder_led_blinking_interface".
 *
 * Model version              : 1.66
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Fri May  3 14:13:18 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(uint8_T),
  sizeof(alterasoc_AXIRead_gm_hdlcoder_T),
  sizeof(alterasoc_AXIWrite_gm_hdlcode_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "uint8_T",
  "alterasoc_AXIRead_gm_hdlcoder_T",
  "alterasoc_AXIWrite_gm_hdlcode_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&gm_hdlcoder_led_blinking_inte_B.AXI4_Read_Read_back_DTC), 3, 0,
    2 }
  ,

  { (char_T *)(&gm_hdlcoder_led_blinking_int_DW.obj), 15, 0, 1 },

  { (char_T *)(&gm_hdlcoder_led_blinking_int_DW.obj_c), 16, 0, 2 },

  { (char_T *)(&gm_hdlcoder_led_blinking_int_DW.Scope1_PWORK.LoggedData), 11, 0,
    2 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  4U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&gm_hdlcoder_led_blinking_inte_P.SliderGain_gain), 14, 0, 1 },

  { (char_T *)(&gm_hdlcoder_led_blinking_inte_P.Constant_Value), 8, 0, 2 },

  { (char_T *)(&gm_hdlcoder_led_blinking_inte_P.Constant2_Value), 14, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] gm_hdlcoder_led_blinking_interface_dt.h */
