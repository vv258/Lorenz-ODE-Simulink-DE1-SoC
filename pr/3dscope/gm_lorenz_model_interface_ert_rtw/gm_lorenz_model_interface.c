/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: gm_lorenz_model_interface.c
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

#include "gm_lorenz_model_interface.h"
#include "gm_lorenz_model_interface_private.h"
#include "gm_lorenz_model_interface_dt.h"
#define gm_l_RegisterOffset_bk2grshuksg (288U)
#define gm_lo_RegisterOffset_bk2grshuks (280U)
#define gm_lor_RegisterOffset_bk2grshuk (272U)
#define gm_lore_RegisterOffset_bk2grshu (264U)
#define gm_loren_RegisterOffset_bk2grsh (276U)
#define gm_lorenz_RegisterOffset_bk2grs (268U)
#define gm_lorenz__RegisterOffset_bk2gr (284U)
#define gm_lorenz_m_RegisterOffset_bk2g (260U)
#define gm_lorenz_mo_RegisterOffset_bk2 (256U)
#define gm_lorenz_mod_RegisterOffset_bk (300U)
#define gm_lorenz_mode_RegisterOffset_b (296U)
#define gm_lorenz_model__RegisterOffset (292U)

/* user code (top of source file) */
/* System '<Root>/Subsystem' */
#include "axi_lct.h"

/* Block signals (default storage) */
B_gm_lorenz_model_interface_T gm_lorenz_model_interface_B;

/* Block states (default storage) */
DW_gm_lorenz_model_interface_T gm_lorenz_model_interface_DW;

/* Real-time model */
RT_MODEL_gm_lorenz_model_interface_T gm_lorenz_model_interface_M_;
RT_MODEL_gm_lorenz_model_interface_T *const gm_lorenz_model_interface_M =
  &gm_lorenz_model_interface_M_;

/* Forward declaration for local functions */
static void SystemProp_matlabCodegenSet_bk2(alterasoc_AXIWrite_gm_lorenz__T *obj,
  boolean_T value);
static void gm_loren_SystemCore_release_bk2(const
  alterasoc_AXIWrite_gm_lorenz__T *obj);
static void gm_lorenz_SystemCore_delete_bk2(const
  alterasoc_AXIWrite_gm_lorenz__T *obj);
static void matlabCodegenHandle_matlabC_bk2(alterasoc_AXIWrite_gm_lorenz__T *obj);
static void SystemProp_matlabCodegenSetAnyP(alterasoc_AXIRead_gm_lorenz_m_T *obj,
  boolean_T value);
static void gm_lorenz_mo_SystemCore_release(const
  alterasoc_AXIRead_gm_lorenz_m_T *obj);
static void gm_lorenz_mod_SystemCore_delete(const
  alterasoc_AXIRead_gm_lorenz_m_T *obj);
static void matlabCodegenHandle_matlabCodeg(alterasoc_AXIRead_gm_lorenz_m_T *obj);
void mul_wide_s32(int32_T in0, int32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T absIn0;
  uint32_T absIn1;
  uint32_T in0Lo;
  uint32_T in0Hi;
  uint32_T in1Hi;
  uint32_T productHiLo;
  uint32_T productLoHi;
  absIn0 = in0 < 0 ? ~(uint32_T)in0 + 1U : (uint32_T)in0;
  absIn1 = in1 < 0 ? ~(uint32_T)in1 + 1U : (uint32_T)in1;
  in0Hi = absIn0 >> 16U;
  in0Lo = absIn0 & 65535U;
  in1Hi = absIn1 >> 16U;
  absIn0 = absIn1 & 65535U;
  productHiLo = in0Hi * absIn0;
  productLoHi = in0Lo * in1Hi;
  absIn0 *= in0Lo;
  absIn1 = 0U;
  in0Lo = (productLoHi << /*MW:OvBitwiseOk*/ 16U) + /*MW:OvCarryOk*/ absIn0;
  if (in0Lo < absIn0) {
    absIn1 = 1U;
  }

  absIn0 = in0Lo;
  in0Lo += /*MW:OvCarryOk*/ productHiLo << /*MW:OvBitwiseOk*/ 16U;
  if (in0Lo < absIn0) {
    absIn1++;
  }

  absIn0 = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi) +
    absIn1;
  if (!((in0 == 0) || ((in1 == 0) || ((in0 > 0) == (in1 > 0))))) {
    absIn0 = ~absIn0;
    in0Lo = ~in0Lo;
    in0Lo++;
    if (in0Lo == 0U) {
      absIn0++;
    }
  }

  *ptrOutBitsHi = absIn0;
  *ptrOutBitsLo = in0Lo;
}

int32_T mul_s32_loSR_sat(int32_T a, int32_T b, uint32_T aShift)
{
  int32_T result;
  uint32_T u32_chi;
  uint32_T u32_clo;
  mul_wide_s32(a, b, &u32_chi, &u32_clo);
  u32_clo = u32_chi << /*MW:OvBitwiseOk*/ (32U - aShift) | u32_clo >> aShift;
  u32_chi = (uint32_T)((int32_T)u32_chi >> aShift);
  if (((int32_T)u32_chi > 0) || ((u32_chi == 0U) && (u32_clo >= 2147483648U))) {
    result = MAX_int32_T;
  } else if (((int32_T)u32_chi < -1) || (((int32_T)u32_chi == -1) && (u32_clo <
               2147483648U))) {
    result = MIN_int32_T;
  } else {
    result = (int32_T)u32_clo;
  }

  return result;
}

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void gm_lorenz_model_interface_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(gm_lorenz_model_interface_M, 1));
}

/*
 *   This function updates active task flag for each subrate.
 * The function is called in the model base rate function.
 * It maintains SampleHit information to allow scheduling
 * of the subrates from the base rate function.
 */
void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (gm_lorenz_model_interface_M->Timing.TaskCounters.TID[1])++;
  if ((gm_lorenz_model_interface_M->Timing.TaskCounters.TID[1]) > 19) {/* Sample time: [0.01s, 0.0s] */
    gm_lorenz_model_interface_M->Timing.TaskCounters.TID[1] = 0;
  }
}

static void SystemProp_matlabCodegenSet_bk2(alterasoc_AXIWrite_gm_lorenz__T *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<S15>/AXI4 Write' incorporates:
   *  MATLABSystem: '<S16>/AXI4 Write'
   *  MATLABSystem: '<S17>/AXI4 Write'
   *  MATLABSystem: '<S18>/AXI4 Write'
   *  MATLABSystem: '<S19>/AXI4 Write'
   *  MATLABSystem: '<S20>/AXI4 Write'
   *  MATLABSystem: '<S21>/AXI4 Write'
   *  MATLABSystem: '<S22>/AXI4 Write'
   *  MATLABSystem: '<S23>/AXI4 Write'
   */
  obj->matlabCodegenIsDeleted = value;
}

static void gm_loren_SystemCore_release_bk2(const
  alterasoc_AXIWrite_gm_lorenz__T *obj)
{
  AXI4_struct * p_state;

  /* Start for MATLABSystem: '<S15>/AXI4 Write' incorporates:
   *  MATLABSystem: '<S16>/AXI4 Write'
   *  MATLABSystem: '<S17>/AXI4 Write'
   *  MATLABSystem: '<S18>/AXI4 Write'
   *  MATLABSystem: '<S19>/AXI4 Write'
   *  MATLABSystem: '<S20>/AXI4 Write'
   *  MATLABSystem: '<S21>/AXI4 Write'
   *  MATLABSystem: '<S22>/AXI4 Write'
   *  MATLABSystem: '<S23>/AXI4 Write'
   */
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    p_state = (AXI4_struct *)(obj->DeviceState);
    AXI4_TERMINATE(p_state);
  }

  /* End of Start for MATLABSystem: '<S15>/AXI4 Write' */
}

static void gm_lorenz_SystemCore_delete_bk2(const
  alterasoc_AXIWrite_gm_lorenz__T *obj)
{
  /* Start for MATLABSystem: '<S15>/AXI4 Write' incorporates:
   *  MATLABSystem: '<S16>/AXI4 Write'
   *  MATLABSystem: '<S17>/AXI4 Write'
   *  MATLABSystem: '<S18>/AXI4 Write'
   *  MATLABSystem: '<S19>/AXI4 Write'
   *  MATLABSystem: '<S20>/AXI4 Write'
   *  MATLABSystem: '<S21>/AXI4 Write'
   *  MATLABSystem: '<S22>/AXI4 Write'
   *  MATLABSystem: '<S23>/AXI4 Write'
   */
  gm_loren_SystemCore_release_bk2(obj);
}

static void matlabCodegenHandle_matlabC_bk2(alterasoc_AXIWrite_gm_lorenz__T *obj)
{
  /* Start for MATLABSystem: '<S15>/AXI4 Write' incorporates:
   *  MATLABSystem: '<S16>/AXI4 Write'
   *  MATLABSystem: '<S17>/AXI4 Write'
   *  MATLABSystem: '<S18>/AXI4 Write'
   *  MATLABSystem: '<S19>/AXI4 Write'
   *  MATLABSystem: '<S20>/AXI4 Write'
   *  MATLABSystem: '<S21>/AXI4 Write'
   *  MATLABSystem: '<S22>/AXI4 Write'
   *  MATLABSystem: '<S23>/AXI4 Write'
   */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSet_bk2(obj, true);
    gm_lorenz_SystemCore_delete_bk2(obj);
  }

  /* End of Start for MATLABSystem: '<S15>/AXI4 Write' */
}

static void SystemProp_matlabCodegenSetAnyP(alterasoc_AXIRead_gm_lorenz_m_T *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<S12>/AXI4 Read' incorporates:
   *  MATLABSystem: '<S13>/AXI4 Read'
   *  MATLABSystem: '<S14>/AXI4 Read'
   */
  obj->matlabCodegenIsDeleted = value;
}

static void gm_lorenz_mo_SystemCore_release(const
  alterasoc_AXIRead_gm_lorenz_m_T *obj)
{
  AXI4_struct * p_state;

  /* Start for MATLABSystem: '<S12>/AXI4 Read' incorporates:
   *  MATLABSystem: '<S13>/AXI4 Read'
   *  MATLABSystem: '<S14>/AXI4 Read'
   */
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    p_state = (AXI4_struct *)(obj->DeviceState);
    AXI4_TERMINATE(p_state);
  }

  /* End of Start for MATLABSystem: '<S12>/AXI4 Read' */
}

static void gm_lorenz_mod_SystemCore_delete(const
  alterasoc_AXIRead_gm_lorenz_m_T *obj)
{
  /* Start for MATLABSystem: '<S12>/AXI4 Read' incorporates:
   *  MATLABSystem: '<S13>/AXI4 Read'
   *  MATLABSystem: '<S14>/AXI4 Read'
   */
  gm_lorenz_mo_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(alterasoc_AXIRead_gm_lorenz_m_T *obj)
{
  /* Start for MATLABSystem: '<S12>/AXI4 Read' incorporates:
   *  MATLABSystem: '<S13>/AXI4 Read'
   *  MATLABSystem: '<S14>/AXI4 Read'
   */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
    gm_lorenz_mod_SystemCore_delete(obj);
  }

  /* End of Start for MATLABSystem: '<S12>/AXI4 Read' */
}

/* Model step function for TID0 */
void gm_lorenz_model_interface_step0(void) /* Sample time: [0.0005s, 0.0s] */
{
  AXI4_struct * p_state;
  uint32_T rtb_AXI4_Write_CLK_DTC;
  int32_T rtb_SliderGain_ke;
  int32_T rtb_SliderGain_h;
  int32_T rtb_SliderGain_ki;
  int32_T rtb_SliderGain_p;
  int32_T rtb_SliderGain_b;
  int32_T rtb_SliderGain_du;
  int32_T rtb_SliderGain;
  boolean_T rtb_ManualSwitch;
  boolean_T rtb_DataTypeConversion;

  {                                    /* Sample time: [0.0005s, 0.0s] */
    rate_scheduler();
  }

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/Constant'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  gm_lorenz_model_interface_DW.UnitDelay_DSTATE =
    gm_lorenz_model_interface_P.Constant_Value -
    gm_lorenz_model_interface_DW.UnitDelay_DSTATE;

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  UnitDelay: '<S1>/Unit Delay'
   */
  rtb_DataTypeConversion = (gm_lorenz_model_interface_DW.UnitDelay_DSTATE != 0.0);

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Constant: '<Root>/Constant7'
   *  Constant: '<Root>/Constant8'
   */
  if (gm_lorenz_model_interface_P.ManualSwitch_CurrentSetting == 1) {
    rtb_ManualSwitch = gm_lorenz_model_interface_P.Constant7_Value;
  } else {
    rtb_ManualSwitch = gm_lorenz_model_interface_P.Constant8_Value;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* Gain: '<S6>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_SliderGain = mul_s32_loSR_sat(gm_lorenz_model_interface_P.sigma_gain,
    gm_lorenz_model_interface_P.Constant_Value_a, 20U);
  if (rtb_SliderGain > 67108863) {
    rtb_SliderGain = 67108863;
  } else {
    if (rtb_SliderGain < -67108864) {
      rtb_SliderGain = -67108864;
    }
  }

  /* End of Gain: '<S6>/Slider Gain' */

  /* Gain: '<S4>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  rtb_SliderGain_du = mul_s32_loSR_sat(gm_lorenz_model_interface_P.dt_gain,
    gm_lorenz_model_interface_P.Constant6_Value, 20U);
  if (rtb_SliderGain_du > 67108863) {
    rtb_SliderGain_du = 67108863;
  } else {
    if (rtb_SliderGain_du < -67108864) {
      rtb_SliderGain_du = -67108864;
    }
  }

  /* End of Gain: '<S4>/Slider Gain' */

  /* Gain: '<S7>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  rtb_SliderGain_b = mul_s32_loSR_sat(gm_lorenz_model_interface_P.x0_gain,
    gm_lorenz_model_interface_P.Constant1_Value, 20U);
  if (rtb_SliderGain_b > 67108863) {
    rtb_SliderGain_b = 67108863;
  } else {
    if (rtb_SliderGain_b < -67108864) {
      rtb_SliderGain_b = -67108864;
    }
  }

  /* End of Gain: '<S7>/Slider Gain' */

  /* Gain: '<S5>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  rtb_SliderGain_p = mul_s32_loSR_sat(gm_lorenz_model_interface_P.rho_gain,
    gm_lorenz_model_interface_P.Constant2_Value, 20U);
  if (rtb_SliderGain_p > 67108863) {
    rtb_SliderGain_p = 67108863;
  } else {
    if (rtb_SliderGain_p < -67108864) {
      rtb_SliderGain_p = -67108864;
    }
  }

  /* End of Gain: '<S5>/Slider Gain' */

  /* Gain: '<S8>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  rtb_SliderGain_ki = mul_s32_loSR_sat(gm_lorenz_model_interface_P.y0_gain,
    gm_lorenz_model_interface_P.Constant3_Value, 20U);
  if (rtb_SliderGain_ki > 67108863) {
    rtb_SliderGain_ki = 67108863;
  } else {
    if (rtb_SliderGain_ki < -67108864) {
      rtb_SliderGain_ki = -67108864;
    }
  }

  /* End of Gain: '<S8>/Slider Gain' */

  /* Gain: '<S3>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  rtb_SliderGain_h = mul_s32_loSR_sat(gm_lorenz_model_interface_P.beta_gain,
    gm_lorenz_model_interface_P.Constant4_Value, 20U);
  if (rtb_SliderGain_h > 67108863) {
    rtb_SliderGain_h = 67108863;
  } else {
    if (rtb_SliderGain_h < -67108864) {
      rtb_SliderGain_h = -67108864;
    }
  }

  /* End of Gain: '<S3>/Slider Gain' */

  /* Gain: '<S9>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  rtb_SliderGain_ke = mul_s32_loSR_sat(gm_lorenz_model_interface_P.z0_gain,
    gm_lorenz_model_interface_P.Constant5_Value, 20U);
  if (rtb_SliderGain_ke > 67108863) {
    rtb_SliderGain_ke = 67108863;
  } else {
    if (rtb_SliderGain_ke < -67108864) {
      rtb_SliderGain_ke = -67108864;
    }
  }

  /* End of Gain: '<S9>/Slider Gain' */

  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */

  /* DataTypeConversion: '<S11>/AXI4_Write_CLK_DTC' */
  rtb_AXI4_Write_CLK_DTC = rtb_DataTypeConversion;

  /* Start for MATLABSystem: '<S15>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_i.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lorenz_mo_RegisterOffset_bk2,
             4U);

  /* DataTypeConversion: '<S11>/AXI4_Write_RST_DTC' */
  rtb_AXI4_Write_CLK_DTC = rtb_ManualSwitch;

  /* Start for MATLABSystem: '<S16>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_cx.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lorenz_m_RegisterOffset_bk2g,
             4U);

  /* DataTypeConversion: '<S11>/AXI4_Write_sigma_DTC' */
  rtb_AXI4_Write_CLK_DTC = (uint32_T)rtb_SliderGain;

  /* Start for MATLABSystem: '<S20>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_g1.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lore_RegisterOffset_bk2grshu,
             4U);

  /* DataTypeConversion: '<S11>/AXI4_Write_dt_DTC' */
  rtb_AXI4_Write_CLK_DTC = (uint32_T)rtb_SliderGain_du;

  /* Start for MATLABSystem: '<S18>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_gd.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lorenz_RegisterOffset_bk2grs,
             4U);

  /* DataTypeConversion: '<S11>/AXI4_Write_x0_DTC' */
  rtb_AXI4_Write_CLK_DTC = (uint32_T)rtb_SliderGain_b;

  /* Start for MATLABSystem: '<S21>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_h.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lor_RegisterOffset_bk2grshuk,
             4U);

  /* DataTypeConversion: '<S11>/AXI4_Write_rho_DTC' */
  rtb_AXI4_Write_CLK_DTC = (uint32_T)rtb_SliderGain_p;

  /* Start for MATLABSystem: '<S19>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_c.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_CLK_DTC, gm_loren_RegisterOffset_bk2grsh,
             4U);

  /* DataTypeConversion: '<S11>/AXI4_Write_y0_DTC' */
  rtb_AXI4_Write_CLK_DTC = (uint32_T)rtb_SliderGain_ki;

  /* Start for MATLABSystem: '<S22>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_o.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lo_RegisterOffset_bk2grshuks,
             4U);

  /* DataTypeConversion: '<S11>/AXI4_Write_beta_DTC' */
  rtb_AXI4_Write_CLK_DTC = (uint32_T)rtb_SliderGain_h;

  /* Start for MATLABSystem: '<S17>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_o2.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lorenz__RegisterOffset_bk2gr,
             4U);

  /* DataTypeConversion: '<S11>/AXI4_Write_z0_DTC' */
  rtb_AXI4_Write_CLK_DTC = (uint32_T)rtb_SliderGain_ke;

  /* Start for MATLABSystem: '<S23>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_g.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_CLK_DTC, gm_l_RegisterOffset_bk2grshuksg,
             4U);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* External mode */
  rtExtModeUploadCheckTrigger(2);
  rtExtModeUpload(0, gm_lorenz_model_interface_M->Timing.taskTime0);

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0005s, 0.0s] */
    if ((rtmGetTFinal(gm_lorenz_model_interface_M)!=-1) &&
        !((rtmGetTFinal(gm_lorenz_model_interface_M)-
           gm_lorenz_model_interface_M->Timing.taskTime0) >
          gm_lorenz_model_interface_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(gm_lorenz_model_interface_M, "Simulation finished");
    }

    if (rtmGetStopRequested(gm_lorenz_model_interface_M)) {
      rtmSetErrorStatus(gm_lorenz_model_interface_M, "Simulation finished");
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  gm_lorenz_model_interface_M->Timing.taskTime0 =
    (++gm_lorenz_model_interface_M->Timing.clockTick0) *
    gm_lorenz_model_interface_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void gm_lorenz_model_interface_step1(void) /* Sample time: [0.01s, 0.0s] */
{
  uint32_T rtb_AXI4Read_b_0;
  AXI4_struct * p_state;
  int32_T tmp;

  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */

  /* Start for MATLABSystem: '<S12>/AXI4 Read' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_d4.DeviceState);
  AXI4_READ(p_state, &rtb_AXI4Read_b_0, gm_lorenz_model__RegisterOffset, 4U);

  /* DataTypeConversion: '<S10>/AXI4_Read_x_DTC' incorporates:
   *  MATLABSystem: '<S12>/AXI4 Read'
   */
  tmp = (int32_T)rtb_AXI4Read_b_0;
  gm_lorenz_model_interface_B.AXI4_Read_x_DTC = (tmp & 67108864U) != 0U ? tmp |
    -67108864 : tmp & 67108863;

  /* Start for MATLABSystem: '<S13>/AXI4 Read' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_d.DeviceState);
  AXI4_READ(p_state, &rtb_AXI4Read_b_0, gm_lorenz_mode_RegisterOffset_b, 4U);

  /* DataTypeConversion: '<S10>/AXI4_Read_y_DTC' incorporates:
   *  MATLABSystem: '<S13>/AXI4 Read'
   */
  tmp = (int32_T)rtb_AXI4Read_b_0;
  gm_lorenz_model_interface_B.AXI4_Read_y_DTC = (tmp & 67108864U) != 0U ? tmp |
    -67108864 : tmp & 67108863;

  /* Start for MATLABSystem: '<S14>/AXI4 Read' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj.DeviceState);
  AXI4_READ(p_state, &rtb_AXI4Read_b_0, gm_lorenz_mod_RegisterOffset_bk, 4U);

  /* DataTypeConversion: '<S10>/AXI4_Read_z_DTC' incorporates:
   *  MATLABSystem: '<S14>/AXI4 Read'
   */
  tmp = (int32_T)rtb_AXI4Read_b_0;
  gm_lorenz_model_interface_B.AXI4_Read_z_DTC = (tmp & 67108864U) != 0U ? tmp |
    -67108864 : tmp & 67108863;

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  gm_lorenz_model_interface_B.DataTypeConversion1 = (real_T)
    gm_lorenz_model_interface_B.AXI4_Read_x_DTC * 9.5367431640625E-7;

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  gm_lorenz_model_interface_B.DataTypeConversion2 = (real_T)
    gm_lorenz_model_interface_B.AXI4_Read_y_DTC * 9.5367431640625E-7;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  gm_lorenz_model_interface_B.DataTypeConversion3 = (real_T)
    gm_lorenz_model_interface_B.AXI4_Read_z_DTC * 9.5367431640625E-7;

  /* SignalConversion: '<Root>/TmpSignal ConversionAt3D GraphInport1' */
  gm_lorenz_model_interface_B.TmpSignalConversionAt3DGraphInp[0] =
    gm_lorenz_model_interface_B.DataTypeConversion1;
  gm_lorenz_model_interface_B.TmpSignalConversionAt3DGraphInp[1] =
    gm_lorenz_model_interface_B.DataTypeConversion2;
  gm_lorenz_model_interface_B.TmpSignalConversionAt3DGraphInp[2] =
    gm_lorenz_model_interface_B.DataTypeConversion3;
  rtExtModeUpload(1, ((gm_lorenz_model_interface_M->Timing.clockTick1) * 0.01));

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.01, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  gm_lorenz_model_interface_M->Timing.clockTick1++;
}

/* Model step wrapper function for compatibility with a static main program */
void gm_lorenz_model_interface_step(int_T tid)
{
  switch (tid) {
   case 0 :
    gm_lorenz_model_interface_step0();
    break;

   case 1 :
    gm_lorenz_model_interface_step1();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void gm_lorenz_model_interface_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)gm_lorenz_model_interface_M, 0,
                sizeof(RT_MODEL_gm_lorenz_model_interface_T));
  rtmSetTFinal(gm_lorenz_model_interface_M, -1);
  gm_lorenz_model_interface_M->Timing.stepSize0 = 0.0005;

  /* External mode info */
  gm_lorenz_model_interface_M->Sizes.checksums[0] = (1131410936U);
  gm_lorenz_model_interface_M->Sizes.checksums[1] = (384792758U);
  gm_lorenz_model_interface_M->Sizes.checksums[2] = (2861662614U);
  gm_lorenz_model_interface_M->Sizes.checksums[3] = (1845176904U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[14];
    gm_lorenz_model_interface_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(gm_lorenz_model_interface_M->extModeInfo,
      &gm_lorenz_model_interface_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(gm_lorenz_model_interface_M->extModeInfo,
                        gm_lorenz_model_interface_M->Sizes.checksums);
    rteiSetTPtr(gm_lorenz_model_interface_M->extModeInfo, rtmGetTPtr
                (gm_lorenz_model_interface_M));
  }

  /* block I/O */
  (void) memset(((void *) &gm_lorenz_model_interface_B), 0,
                sizeof(B_gm_lorenz_model_interface_T));

  /* states (dwork) */
  (void) memset((void *)&gm_lorenz_model_interface_DW, 0,
                sizeof(DW_gm_lorenz_model_interface_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    gm_lorenz_model_interface_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 18;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    AXI4_struct * p_state;
    static const char_T tmp[14] = { '/', 'd', 'e', 'v', '/', 'm', 'w', 'i', 'p',
      'c', 'o', 'r', 'e', '\x00' };

    char_T tmp_0[14];
    int32_T i;

    {
      /* user code (Start function Header) */

      /* System '<Root>/Subsystem' */
      AXI4_RESET_IPCORE("/dev/mwipcore");

      /* Start for Atomic SubSystem: '<Root>/Subsystem' */

      /* Start for MATLABSystem: '<S15>/AXI4 Write' */
      gm_lorenz_model_interface_DW.obj_i.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_i.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_i.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_i.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_i.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_i.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_i.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_i.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S15>/AXI4 Write' */

      /* Start for MATLABSystem: '<S16>/AXI4 Write' */
      gm_lorenz_model_interface_DW.obj_cx.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_cx.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_cx.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_cx.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_cx.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_cx.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_cx.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_cx.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S16>/AXI4 Write' */

      /* Start for MATLABSystem: '<S20>/AXI4 Write' */
      gm_lorenz_model_interface_DW.obj_g1.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_g1.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_g1.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_g1.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_g1.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_g1.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_g1.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_g1.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S20>/AXI4 Write' */

      /* Start for MATLABSystem: '<S18>/AXI4 Write' */
      gm_lorenz_model_interface_DW.obj_gd.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_gd.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_gd.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_gd.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_gd.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_gd.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_gd.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_gd.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S18>/AXI4 Write' */

      /* Start for MATLABSystem: '<S21>/AXI4 Write' */
      gm_lorenz_model_interface_DW.obj_h.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_h.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_h.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_h.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_h.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_h.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_h.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_h.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S21>/AXI4 Write' */

      /* Start for MATLABSystem: '<S19>/AXI4 Write' */
      gm_lorenz_model_interface_DW.obj_c.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_c.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_c.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_c.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_c.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_c.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_c.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_c.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S19>/AXI4 Write' */

      /* Start for MATLABSystem: '<S22>/AXI4 Write' */
      gm_lorenz_model_interface_DW.obj_o.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_o.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_o.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_o.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_o.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_o.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_o.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_o.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S22>/AXI4 Write' */

      /* Start for MATLABSystem: '<S17>/AXI4 Write' */
      gm_lorenz_model_interface_DW.obj_o2.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_o2.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_o2.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_o2.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_o2.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_o2.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_o2.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_o2.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S17>/AXI4 Write' */

      /* Start for MATLABSystem: '<S23>/AXI4 Write' */
      gm_lorenz_model_interface_DW.obj_g.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_g.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_g.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_g.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_g.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_g.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_g.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_g.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S23>/AXI4 Write' */

      /* Start for MATLABSystem: '<S12>/AXI4 Read' */
      gm_lorenz_model_interface_DW.obj_d4.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_d4.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_d4.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_d4.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_d4.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_d4.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_d4.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_d4.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S12>/AXI4 Read' */

      /* Start for MATLABSystem: '<S13>/AXI4 Read' */
      gm_lorenz_model_interface_DW.obj_d.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_d.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_d.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_d.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_d.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_d.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_d.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_d.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S13>/AXI4 Read' */

      /* Start for MATLABSystem: '<S14>/AXI4 Read' */
      gm_lorenz_model_interface_DW.obj.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S14>/AXI4 Read' */

      /* End of Start for SubSystem: '<Root>/Subsystem' */
    }

    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
    gm_lorenz_model_interface_DW.UnitDelay_DSTATE =
      gm_lorenz_model_interface_P.UnitDelay_InitialCondition;
  }
}

/* Model terminate function */
void gm_lorenz_model_interface_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subsystem' */

  /* Terminate for MATLABSystem: '<S15>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bk2(&gm_lorenz_model_interface_DW.obj_i);

  /* Terminate for MATLABSystem: '<S16>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bk2(&gm_lorenz_model_interface_DW.obj_cx);

  /* Terminate for MATLABSystem: '<S20>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bk2(&gm_lorenz_model_interface_DW.obj_g1);

  /* Terminate for MATLABSystem: '<S18>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bk2(&gm_lorenz_model_interface_DW.obj_gd);

  /* Terminate for MATLABSystem: '<S21>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bk2(&gm_lorenz_model_interface_DW.obj_h);

  /* Terminate for MATLABSystem: '<S19>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bk2(&gm_lorenz_model_interface_DW.obj_c);

  /* Terminate for MATLABSystem: '<S22>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bk2(&gm_lorenz_model_interface_DW.obj_o);

  /* Terminate for MATLABSystem: '<S17>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bk2(&gm_lorenz_model_interface_DW.obj_o2);

  /* Terminate for MATLABSystem: '<S23>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bk2(&gm_lorenz_model_interface_DW.obj_g);

  /* Terminate for MATLABSystem: '<S12>/AXI4 Read' */
  matlabCodegenHandle_matlabCodeg(&gm_lorenz_model_interface_DW.obj_d4);

  /* Terminate for MATLABSystem: '<S13>/AXI4 Read' */
  matlabCodegenHandle_matlabCodeg(&gm_lorenz_model_interface_DW.obj_d);

  /* Terminate for MATLABSystem: '<S14>/AXI4 Read' */
  matlabCodegenHandle_matlabCodeg(&gm_lorenz_model_interface_DW.obj);

  /* End of Terminate for SubSystem: '<Root>/Subsystem' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
