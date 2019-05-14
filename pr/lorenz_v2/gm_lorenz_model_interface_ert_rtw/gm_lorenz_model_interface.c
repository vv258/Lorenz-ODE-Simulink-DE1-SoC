/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: gm_lorenz_model_interface.c
 *
 * Code generated for Simulink model 'gm_lorenz_model_interface'.
 *
 * Model version                  : 1.15
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Fri May  3 15:18:05 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "gm_lorenz_model_interface.h"
#include "gm_lorenz_model_interface_private.h"
#include "gm_lorenz_model_interface_dt.h"
#define gm_lorenz_m_RegisterOffset_bk2g (272U)
#define gm_lorenz_mo_RegisterOffset_bk2 (268U)
#define gm_lorenz_mod_RegisterOffset_bk (256U)
#define gm_lorenz_mode_RegisterOffset_b (260U)
#define gm_lorenz_model__RegisterOffset (264U)

/* user code (top of source file) */
/* System '<Root>/Subsystem' */
#include "axi_lct.h"

/* Block signals (default storage) */
B_gm_lorenz_model_interface_T gm_lorenz_model_interface_B;

/* Block states (default storage) */
DW_gm_lorenz_model_interface_T gm_lorenz_model_interface_DW;

/* Real-time model */
RT_MODEL_gm_lorenz_model_inte_T gm_lorenz_model_interface_M_;
RT_MODEL_gm_lorenz_model_inte_T *const gm_lorenz_model_interface_M =
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
static void SystemProp_matlabCodegenSet_bk2(alterasoc_AXIWrite_gm_lorenz__T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void gm_loren_SystemCore_release_bk2(const
  alterasoc_AXIWrite_gm_lorenz__T *obj)
{
  AXI4_struct * p_state;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    p_state = (AXI4_struct *)(obj->DeviceState);
    AXI4_TERMINATE(p_state);
  }
}

static void gm_lorenz_SystemCore_delete_bk2(const
  alterasoc_AXIWrite_gm_lorenz__T *obj)
{
  gm_loren_SystemCore_release_bk2(obj);
}

static void matlabCodegenHandle_matlabC_bk2(alterasoc_AXIWrite_gm_lorenz__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSet_bk2(obj, true);
    gm_lorenz_SystemCore_delete_bk2(obj);
  }
}

static void SystemProp_matlabCodegenSetAnyP(alterasoc_AXIRead_gm_lorenz_m_T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void gm_lorenz_mo_SystemCore_release(const
  alterasoc_AXIRead_gm_lorenz_m_T *obj)
{
  AXI4_struct * p_state;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    p_state = (AXI4_struct *)(obj->DeviceState);
    AXI4_TERMINATE(p_state);
  }
}

static void gm_lorenz_mod_SystemCore_delete(const
  alterasoc_AXIRead_gm_lorenz_m_T *obj)
{
  gm_lorenz_mo_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(alterasoc_AXIRead_gm_lorenz_m_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
    gm_lorenz_mod_SystemCore_delete(obj);
  }
}

/* Model step function */
void gm_lorenz_model_interface_step(void)
{
  AXI4_struct * p_state;
  uint32_T rtb_AXI4_Write_CLK_DTC;
  boolean_T rtb_ManualSwitch;
  boolean_T rtb_DataTypeConversion;
  int32_T tmp;

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

  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */

  /* DataTypeConversion: '<S4>/AXI4_Write_CLK_DTC' */
  rtb_AXI4_Write_CLK_DTC = rtb_DataTypeConversion;

  /* MATLABSystem: '<S8>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_a.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lorenz_mo_RegisterOffset_bk2,
             4U);

  /* DataTypeConversion: '<S4>/AXI4_Write_RST_DTC' */
  rtb_AXI4_Write_CLK_DTC = rtb_ManualSwitch;

  /* MATLABSystem: '<S9>/AXI4 Write' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_d.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lorenz_m_RegisterOffset_bk2g,
             4U);

  /* MATLABSystem: '<S5>/AXI4 Read' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_h.DeviceState);
  AXI4_READ(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lorenz_model__RegisterOffset,
            4U);

  /* DataTypeConversion: '<S3>/AXI4_Read_x_DTC' incorporates:
   *  MATLABSystem: '<S5>/AXI4 Read'
   */
  tmp = (int32_T)rtb_AXI4_Write_CLK_DTC;
  gm_lorenz_model_interface_B.AXI4_Read_x_DTC = (tmp & 67108864U) != 0U ? tmp |
    -67108864 : tmp & 67108863;

  /* MATLABSystem: '<S6>/AXI4 Read' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj_p.DeviceState);
  AXI4_READ(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lorenz_mode_RegisterOffset_b,
            4U);

  /* DataTypeConversion: '<S3>/AXI4_Read_y_DTC' incorporates:
   *  MATLABSystem: '<S6>/AXI4 Read'
   */
  tmp = (int32_T)rtb_AXI4_Write_CLK_DTC;
  gm_lorenz_model_interface_B.AXI4_Read_y_DTC = (tmp & 67108864U) != 0U ? tmp |
    -67108864 : tmp & 67108863;

  /* MATLABSystem: '<S7>/AXI4 Read' */
  p_state = (AXI4_struct *)(gm_lorenz_model_interface_DW.obj.DeviceState);
  AXI4_READ(p_state, &rtb_AXI4_Write_CLK_DTC, gm_lorenz_mod_RegisterOffset_bk,
            4U);

  /* DataTypeConversion: '<S3>/AXI4_Read_z_DTC' incorporates:
   *  MATLABSystem: '<S7>/AXI4 Read'
   */
  tmp = (int32_T)rtb_AXI4_Write_CLK_DTC;
  gm_lorenz_model_interface_B.AXI4_Read_z_DTC = (tmp & 67108864U) != 0U ? tmp |
    -67108864 : tmp & 67108863;

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [5.0E-5s, 0.0s] */
    rtExtModeUpload(0, gm_lorenz_model_interface_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [5.0E-5s, 0.0s] */
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

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  gm_lorenz_model_interface_M->Timing.taskTime0 =
    (++gm_lorenz_model_interface_M->Timing.clockTick0) *
    gm_lorenz_model_interface_M->Timing.stepSize0;
}

/* Model initialize function */
void gm_lorenz_model_interface_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)gm_lorenz_model_interface_M, 0,
                sizeof(RT_MODEL_gm_lorenz_model_inte_T));
  rtmSetTFinal(gm_lorenz_model_interface_M, -1);
  gm_lorenz_model_interface_M->Timing.stepSize0 = 5.0E-5;

  /* External mode info */
  gm_lorenz_model_interface_M->Sizes.checksums[0] = (4258962849U);
  gm_lorenz_model_interface_M->Sizes.checksums[1] = (3793553369U);
  gm_lorenz_model_interface_M->Sizes.checksums[2] = (3835696447U);
  gm_lorenz_model_interface_M->Sizes.checksums[3] = (2026262454U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[7];
    gm_lorenz_model_interface_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
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

      /* Start for MATLABSystem: '<S8>/AXI4 Write' */
      gm_lorenz_model_interface_DW.obj_a.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_a.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_a.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_a.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_a.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_a.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_a.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_a.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S8>/AXI4 Write' */

      /* Start for MATLABSystem: '<S9>/AXI4 Write' */
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

      /* End of Start for MATLABSystem: '<S9>/AXI4 Write' */

      /* Start for MATLABSystem: '<S5>/AXI4 Read' */
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

      /* End of Start for MATLABSystem: '<S5>/AXI4 Read' */

      /* Start for MATLABSystem: '<S6>/AXI4 Read' */
      gm_lorenz_model_interface_DW.obj_p.matlabCodegenIsDeleted = true;
      gm_lorenz_model_interface_DW.obj_p.isInitialized = 0;
      gm_lorenz_model_interface_DW.obj_p.matlabCodegenIsDeleted = false;
      gm_lorenz_model_interface_DW.obj_p.isSetupComplete = false;
      gm_lorenz_model_interface_DW.obj_p.isInitialized = 1;
      gm_lorenz_model_interface_DW.obj_p.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      gm_lorenz_model_interface_DW.obj_p.DeviceState = (uint32_T)p_state;
      gm_lorenz_model_interface_DW.obj_p.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S6>/AXI4 Read' */

      /* Start for MATLABSystem: '<S7>/AXI4 Read' */
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

      /* End of Start for MATLABSystem: '<S7>/AXI4 Read' */

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

  /* Terminate for MATLABSystem: '<S8>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bk2(&gm_lorenz_model_interface_DW.obj_a);

  /* Terminate for MATLABSystem: '<S9>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bk2(&gm_lorenz_model_interface_DW.obj_d);

  /* Terminate for MATLABSystem: '<S5>/AXI4 Read' */
  matlabCodegenHandle_matlabCodeg(&gm_lorenz_model_interface_DW.obj_h);

  /* Terminate for MATLABSystem: '<S6>/AXI4 Read' */
  matlabCodegenHandle_matlabCodeg(&gm_lorenz_model_interface_DW.obj_p);

  /* Terminate for MATLABSystem: '<S7>/AXI4 Read' */
  matlabCodegenHandle_matlabCodeg(&gm_lorenz_model_interface_DW.obj);

  /* End of Terminate for SubSystem: '<Root>/Subsystem' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
