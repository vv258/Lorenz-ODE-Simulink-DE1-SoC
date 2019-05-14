/*
 * gm_lorenz_model_interface_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "gm_lorenz_model_interface".
 *
 * Model version              : 1.16
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Wed May  8 13:16:53 2019
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
  sizeof(int32_T),
  sizeof(alterasoc_AXIRead_gm_lorenz_m_T),
  sizeof(int32_T),
  sizeof(alterasoc_AXIWrite_gm_lorenz__T)
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
  "int32_T",
  "alterasoc_AXIRead_gm_lorenz_m_T",
  "int32_T",
  "alterasoc_AXIWrite_gm_lorenz__T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&gm_lorenz_model_interface_B.DataTypeConversion1), 0, 0, 6 },

  { (char_T *)(&gm_lorenz_model_interface_B.AXI4_Read_x_DTC), 14, 0, 3 }
  ,

  { (char_T *)(&gm_lorenz_model_interface_DW.obj), 15, 0, 3 },

  { (char_T *)(&gm_lorenz_model_interface_DW.obj_g), 17, 0, 9 },

  { (char_T *)(&gm_lorenz_model_interface_DW.UnitDelay_DSTATE), 0, 0, 1 },

  { (char_T *)(&gm_lorenz_model_interface_DW.Scope2_PWORK.LoggedData), 11, 0, 3
  }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  6U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&gm_lorenz_model_interface_P.sigma_gain), 14, 0, 7 },

  { (char_T *)(&gm_lorenz_model_interface_P.Constant_Value), 0, 0, 2 },

  { (char_T *)(&gm_lorenz_model_interface_P.Constant_Value_a), 14, 0, 7 },

  { (char_T *)(&gm_lorenz_model_interface_P.Constant7_Value), 8, 0, 2 },

  { (char_T *)(&gm_lorenz_model_interface_P.ManualSwitch_CurrentSetting), 3, 0,
    1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  5U,
  rtPTransitions
};

/* [EOF] gm_lorenz_model_interface_dt.h */
