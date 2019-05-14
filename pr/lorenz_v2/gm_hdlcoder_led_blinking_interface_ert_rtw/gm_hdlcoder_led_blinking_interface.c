/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: gm_hdlcoder_led_blinking_interface.c
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

#include "gm_hdlcoder_led_blinking_interface.h"
#include "gm_hdlcoder_led_blinking_interface_private.h"
#include "gm_hdlcoder_led_blinking_interface_dt.h"
#define gm_hdlcoder_l_RegisterOffset_he (256U)
#define gm_hdlcoder_le_RegisterOffset_h (260U)
#define gm_hdlcoder_led__RegisterOffset (264U)

/* user code (top of source file) */
/* System '<Root>/led_counter' */
#include "axi_lct.h"

/* Block signals (default storage) */
B_gm_hdlcoder_led_blinking_in_T gm_hdlcoder_led_blinking_inte_B;

/* Block states (default storage) */
DW_gm_hdlcoder_led_blinking_i_T gm_hdlcoder_led_blinking_int_DW;

/* Real-time model */
RT_MODEL_gm_hdlcoder_led_blin_T gm_hdlcoder_led_blinking_int_M_;
RT_MODEL_gm_hdlcoder_led_blin_T *const gm_hdlcoder_led_blinking_int_M =
  &gm_hdlcoder_led_blinking_int_M_;

/* Forward declaration for local functions */
static void SystemProp_matlabCodegenSetAn_h(alterasoc_AXIWrite_gm_hdlcode_T *obj,
  boolean_T value);
static void gm_hdlcode_SystemCore_release_h(const
  alterasoc_AXIWrite_gm_hdlcode_T *obj);
static void gm_hdlcoder_SystemCore_delete_h(const
  alterasoc_AXIWrite_gm_hdlcode_T *obj);
static void matlabCodegenHandle_matlabCod_h(alterasoc_AXIWrite_gm_hdlcode_T *obj);
static void SystemProp_matlabCodegenSetAnyP(alterasoc_AXIRead_gm_hdlcoder_T *obj,
  boolean_T value);
static void gm_hdlcoder__SystemCore_release(const
  alterasoc_AXIRead_gm_hdlcoder_T *obj);
static void gm_hdlcoder_l_SystemCore_delete(const
  alterasoc_AXIRead_gm_hdlcoder_T *obj);
static void matlabCodegenHandle_matlabCodeg(alterasoc_AXIRead_gm_hdlcoder_T *obj);
static void SystemProp_matlabCodegenSetAn_h(alterasoc_AXIWrite_gm_hdlcode_T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void gm_hdlcode_SystemCore_release_h(const
  alterasoc_AXIWrite_gm_hdlcode_T *obj)
{
  AXI4_struct * p_state;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    p_state = (AXI4_struct *)(obj->DeviceState);
    AXI4_TERMINATE(p_state);
  }
}

static void gm_hdlcoder_SystemCore_delete_h(const
  alterasoc_AXIWrite_gm_hdlcode_T *obj)
{
  gm_hdlcode_SystemCore_release_h(obj);
}

static void matlabCodegenHandle_matlabCod_h(alterasoc_AXIWrite_gm_hdlcode_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAn_h(obj, true);
    gm_hdlcoder_SystemCore_delete_h(obj);
  }
}

static void SystemProp_matlabCodegenSetAnyP(alterasoc_AXIRead_gm_hdlcoder_T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void gm_hdlcoder__SystemCore_release(const
  alterasoc_AXIRead_gm_hdlcoder_T *obj)
{
  AXI4_struct * p_state;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    p_state = (AXI4_struct *)(obj->DeviceState);
    AXI4_TERMINATE(p_state);
  }
}

static void gm_hdlcoder_l_SystemCore_delete(const
  alterasoc_AXIRead_gm_hdlcoder_T *obj)
{
  gm_hdlcoder__SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(alterasoc_AXIRead_gm_hdlcoder_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
    gm_hdlcoder_l_SystemCore_delete(obj);
  }
}

/* Model step function */
void gm_hdlcoder_led_blinking_interface_step(void)
{
  AXI4_struct * p_state;
  uint32_T rtb_AXI4_Write_Blink_frequency_;
  uint8_T rtb_SliderGain;
  boolean_T rtb_ManualSwitch;
  int32_T tmp;

  /* Gain: '<S2>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  tmp = (int32_T)((uint32_T)gm_hdlcoder_led_blinking_inte_P.SliderGain_gain *
                  gm_hdlcoder_led_blinking_inte_P.Constant2_Value);
  if ((uint32_T)tmp > 15U) {
    tmp = 15;
  }

  rtb_SliderGain = (uint8_T)tmp;

  /* End of Gain: '<S2>/Slider Gain' */

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   */
  if (gm_hdlcoder_led_blinking_inte_P.ManualSwitch_CurrentSetting == 1) {
    rtb_ManualSwitch = gm_hdlcoder_led_blinking_inte_P.Constant_Value;
  } else {
    rtb_ManualSwitch = gm_hdlcoder_led_blinking_inte_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* Outputs for Atomic SubSystem: '<Root>/led_counter' */

  /* DataTypeConversion: '<S5>/AXI4_Write_Blink_frequency_DTC' */
  rtb_AXI4_Write_Blink_frequency_ = rtb_SliderGain;

  /* MATLABSystem: '<S8>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_hdlcoder_led_blinking_int_DW.obj_c.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_Blink_frequency_,
             gm_hdlcoder_l_RegisterOffset_he, 4U);

  /* DataTypeConversion: '<S5>/AXI4_Write_Blink_direction_DTC' */
  rtb_AXI4_Write_Blink_frequency_ = rtb_ManualSwitch;

  /* MATLABSystem: '<S7>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_hdlcoder_led_blinking_int_DW.obj_h.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_Blink_frequency_,
             gm_hdlcoder_le_RegisterOffset_h, 4U);

  /* MATLABSystem: '<S6>/AXI4 Read' */
  p_state = (AXI4_struct *)(gm_hdlcoder_led_blinking_int_DW.obj.DeviceState);
  AXI4_READ(p_state, &rtb_AXI4_Write_Blink_frequency_,
            gm_hdlcoder_led__RegisterOffset, 4U);

  /* DataTypeConversion: '<S4>/AXI4_Read_Read_back_DTC' incorporates:
   *  MATLABSystem: '<S6>/AXI4 Read'
   */
  gm_hdlcoder_led_blinking_inte_B.AXI4_Read_Read_back_DTC = (uint8_T)
    rtb_AXI4_Write_Blink_frequency_;

  /* DataTypeConversion: '<S4>/AXI4_Read_LED_DTC' */
  gm_hdlcoder_led_blinking_inte_B.AXI4_Read_LED_DTC = 0U;

  /* End of Outputs for SubSystem: '<Root>/led_counter' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.001s, 0.0s] */
    rtExtModeUpload(0, gm_hdlcoder_led_blinking_int_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(gm_hdlcoder_led_blinking_int_M)!=-1) &&
        !((rtmGetTFinal(gm_hdlcoder_led_blinking_int_M)-
           gm_hdlcoder_led_blinking_int_M->Timing.taskTime0) >
          gm_hdlcoder_led_blinking_int_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(gm_hdlcoder_led_blinking_int_M, "Simulation finished");
    }

    if (rtmGetStopRequested(gm_hdlcoder_led_blinking_int_M)) {
      rtmSetErrorStatus(gm_hdlcoder_led_blinking_int_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  gm_hdlcoder_led_blinking_int_M->Timing.taskTime0 =
    (++gm_hdlcoder_led_blinking_int_M->Timing.clockTick0) *
    gm_hdlcoder_led_blinking_int_M->Timing.stepSize0;
}

/* Model initialize function */
void gm_hdlcoder_led_blinking_interface_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)gm_hdlcoder_led_blinking_int_M, 0,
                sizeof(RT_MODEL_gm_hdlcoder_led_blin_T));
  rtmSetTFinal(gm_hdlcoder_led_blinking_int_M, -1);
  gm_hdlcoder_led_blinking_int_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  gm_hdlcoder_led_blinking_int_M->Sizes.checksums[0] = (3265585835U);
  gm_hdlcoder_led_blinking_int_M->Sizes.checksums[1] = (3620630916U);
  gm_hdlcoder_led_blinking_int_M->Sizes.checksums[2] = (4161028923U);
  gm_hdlcoder_led_blinking_int_M->Sizes.checksums[3] = (3781117427U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    gm_hdlcoder_led_blinking_int_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(gm_hdlcoder_led_blinking_int_M->extModeInfo,
      &gm_hdlcoder_led_blinking_int_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(gm_hdlcoder_led_blinking_int_M->extModeInfo,
                        gm_hdlcoder_led_blinking_int_M->Sizes.checksums);
    rteiSetTPtr(gm_hdlcoder_led_blinking_int_M->extModeInfo, rtmGetTPtr
                (gm_hdlcoder_led_blinking_int_M));
  }

  /* block I/O */
  (void) memset(((void *) &gm_hdlcoder_led_blinking_inte_B), 0,
                sizeof(B_gm_hdlcoder_led_blinking_in_T));

  /* states (dwork) */
  (void) memset((void *)&gm_hdlcoder_led_blinking_int_DW, 0,
                sizeof(DW_gm_hdlcoder_led_blinking_i_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    gm_hdlcoder_led_blinking_int_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
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

      /* System '<Root>/led_counter' */
      AXI4_RESET_IPCORE("/dev/mwipcore");

      /* Start for Atomic SubSystem: '<Root>/led_counter' */

      /* Start for MATLABSystem: '<S8>/AXI4 Write' */
      gm_hdlcoder_led_blinking_int_DW.obj_c.matlabCodegenIsDeleted = true;
      gm_hdlcoder_led_blinking_int_DW.obj_c.isInitialized = 0;
      gm_hdlcoder_led_blinking_int_DW.obj_c.matlabCodegenIsDeleted = false;
      gm_hdlcoder_led_blinking_int_DW.obj_c.isSetupComplete = false;
      gm_hdlcoder_led_blinking_int_DW.obj_c.isInitialized = 1;
      gm_hdlcoder_led_blinking_int_DW.obj_c.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_hdlcoder_led_blinking_int_DW.obj_c.DeviceState = (uint32_T)p_state;
      gm_hdlcoder_led_blinking_int_DW.obj_c.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S8>/AXI4 Write' */

      /* Start for MATLABSystem: '<S7>/AXI4 Write' */
      gm_hdlcoder_led_blinking_int_DW.obj_h.matlabCodegenIsDeleted = true;
      gm_hdlcoder_led_blinking_int_DW.obj_h.isInitialized = 0;
      gm_hdlcoder_led_blinking_int_DW.obj_h.matlabCodegenIsDeleted = false;
      gm_hdlcoder_led_blinking_int_DW.obj_h.isSetupComplete = false;
      gm_hdlcoder_led_blinking_int_DW.obj_h.isInitialized = 1;
      gm_hdlcoder_led_blinking_int_DW.obj_h.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_hdlcoder_led_blinking_int_DW.obj_h.DeviceState = (uint32_T)p_state;
      gm_hdlcoder_led_blinking_int_DW.obj_h.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S7>/AXI4 Write' */

      /* Start for MATLABSystem: '<S6>/AXI4 Read' */
      gm_hdlcoder_led_blinking_int_DW.obj.matlabCodegenIsDeleted = true;
      gm_hdlcoder_led_blinking_int_DW.obj.isInitialized = 0;
      gm_hdlcoder_led_blinking_int_DW.obj.matlabCodegenIsDeleted = false;
      gm_hdlcoder_led_blinking_int_DW.obj.isSetupComplete = false;
      gm_hdlcoder_led_blinking_int_DW.obj.isInitialized = 1;
      gm_hdlcoder_led_blinking_int_DW.obj.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_hdlcoder_led_blinking_int_DW.obj.DeviceState = (uint32_T)p_state;
      gm_hdlcoder_led_blinking_int_DW.obj.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S6>/AXI4 Read' */

      /* End of Start for SubSystem: '<Root>/led_counter' */
    }
  }
}

/* Model terminate function */
void gm_hdlcoder_led_blinking_interface_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/led_counter' */

  /* Terminate for MATLABSystem: '<S8>/AXI4 Write' */
  matlabCodegenHandle_matlabCod_h(&gm_hdlcoder_led_blinking_int_DW.obj_c);

  /* Terminate for MATLABSystem: '<S7>/AXI4 Write' */
  matlabCodegenHandle_matlabCod_h(&gm_hdlcoder_led_blinking_int_DW.obj_h);

  /* Terminate for MATLABSystem: '<S6>/AXI4 Read' */
  matlabCodegenHandle_matlabCodeg(&gm_hdlcoder_led_blinking_int_DW.obj);

  /* End of Terminate for SubSystem: '<Root>/led_counter' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
