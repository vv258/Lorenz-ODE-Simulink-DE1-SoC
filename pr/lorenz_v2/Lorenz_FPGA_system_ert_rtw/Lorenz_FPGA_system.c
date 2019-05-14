/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lorenz_FPGA_system.c
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

#include "Lorenz_FPGA_system.h"
#include "Lorenz_FPGA_system_private.h"
#define Lorenz_FPGA_RegisterOffset_bvzm (280U)
#define Lorenz_FPGA__RegisterOffset_bvz (272U)
#define Lorenz_FPGA_s_RegisterOffset_bv (296U)
#define Lorenz_FPGA_sy_RegisterOffset_b (292U)
#define Lorenz_FPGA_syst_RegisterOffset (288U)
#define Lorenz_FPG_RegisterOffset_bvzms (264U)
#define Lorenz_FP_RegisterOffset_bvzmsv (256U)
#define Lorenz_F_RegisterOffset_bvzmsvf (260U)
#define Lorenz_RegisterOffset_bvzmsvf41 (276U)
#define Lorenz__RegisterOffset_bvzmsvf4 (268U)

/* user code (top of source file) */
/* System '<Root>/Lorenz_FPGA_system' */
#include "axi_lct.h"

/* Block states (default storage) */
DW_Lorenz_FPGA_system_T Lorenz_FPGA_system_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Lorenz_FPGA_system_T Lorenz_FPGA_system_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Lorenz_FPGA_system_T Lorenz_FPGA_system_Y;

/* Real-time model */
RT_MODEL_Lorenz_FPGA_system_T Lorenz_FPGA_system_M_;
RT_MODEL_Lorenz_FPGA_system_T *const Lorenz_FPGA_system_M =
  &Lorenz_FPGA_system_M_;

/* Forward declaration for local functions */
static void SystemProp_matlabCodegenSet_bvz(alterasoc_AXIWrite_Lorenz_FPG_T *obj,
  boolean_T value);
static void Lorenz_F_SystemCore_release_bvz(const
  alterasoc_AXIWrite_Lorenz_FPG_T *obj);
static void Lorenz_FP_SystemCore_delete_bvz(const
  alterasoc_AXIWrite_Lorenz_FPG_T *obj);
static void matlabCodegenHandle_matlabC_bvz(alterasoc_AXIWrite_Lorenz_FPG_T *obj);
static void SystemProp_matlabCodegenSetAnyP(alterasoc_AXIRead_Lorenz_FPGA_T *obj,
  boolean_T value);
static void Lorenz_FPGA__SystemCore_release(const
  alterasoc_AXIRead_Lorenz_FPGA_T *obj);
static void Lorenz_FPGA_s_SystemCore_delete(const
  alterasoc_AXIRead_Lorenz_FPGA_T *obj);
static void matlabCodegenHandle_matlabCodeg(alterasoc_AXIRead_Lorenz_FPGA_T *obj);
static void SystemProp_matlabCodegenSet_bvz(alterasoc_AXIWrite_Lorenz_FPG_T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void Lorenz_F_SystemCore_release_bvz(const
  alterasoc_AXIWrite_Lorenz_FPG_T *obj)
{
  AXI4_struct * p_state;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    p_state = (AXI4_struct *)(obj->DeviceState);
    AXI4_TERMINATE(p_state);
  }
}

static void Lorenz_FP_SystemCore_delete_bvz(const
  alterasoc_AXIWrite_Lorenz_FPG_T *obj)
{
  Lorenz_F_SystemCore_release_bvz(obj);
}

static void matlabCodegenHandle_matlabC_bvz(alterasoc_AXIWrite_Lorenz_FPG_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSet_bvz(obj, true);
    Lorenz_FP_SystemCore_delete_bvz(obj);
  }
}

static void SystemProp_matlabCodegenSetAnyP(alterasoc_AXIRead_Lorenz_FPGA_T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void Lorenz_FPGA__SystemCore_release(const
  alterasoc_AXIRead_Lorenz_FPGA_T *obj)
{
  AXI4_struct * p_state;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    p_state = (AXI4_struct *)(obj->DeviceState);
    AXI4_TERMINATE(p_state);
  }
}

static void Lorenz_FPGA_s_SystemCore_delete(const
  alterasoc_AXIRead_Lorenz_FPGA_T *obj)
{
  Lorenz_FPGA__SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(alterasoc_AXIRead_Lorenz_FPGA_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
    Lorenz_FPGA_s_SystemCore_delete(obj);
  }
}

/* Model step function */
void Lorenz_FPGA_system_step(void)
{
  AXI4_struct * p_state;
  uint32_T rtb_AXI4_Write_sigma_DTC;
  int32_T rtb_AXI4_Write_RST_DTC;
  int32_T tmp;

  /* Outputs for Atomic SubSystem: '<Root>/Lorenz_FPGA_system' */

  /* DataTypeConversion: '<S3>/AXI4_Write_sigma_DTC' incorporates:
   *  Inport: '<Root>/sigma'
   */
  rtb_AXI4_Write_sigma_DTC = (uint32_T)Lorenz_FPGA_system_U.sigma;

  /* MATLABSystem: '<S10>/AXI4 Write' */
  p_state = (AXI4_struct *)(Lorenz_FPGA_system_DW.obj_d.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_sigma_DTC, Lorenz_FP_RegisterOffset_bvzmsv,
             4U);

  /* DataTypeConversion: '<S3>/AXI4_Write_x0_DTC' incorporates:
   *  Inport: '<Root>/x0'
   */
  rtb_AXI4_Write_sigma_DTC = (uint32_T)Lorenz_FPGA_system_U.x0;

  /* MATLABSystem: '<S11>/AXI4 Write' */
  p_state = (AXI4_struct *)(Lorenz_FPGA_system_DW.obj_b.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_sigma_DTC, Lorenz_F_RegisterOffset_bvzmsvf,
             4U);

  /* DataTypeConversion: '<S3>/AXI4_Write_rho_DTC' incorporates:
   *  Inport: '<Root>/rho'
   */
  rtb_AXI4_Write_sigma_DTC = (uint32_T)Lorenz_FPGA_system_U.rho;

  /* MATLABSystem: '<S9>/AXI4 Write' */
  p_state = (AXI4_struct *)(Lorenz_FPGA_system_DW.obj_bu.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_sigma_DTC, Lorenz_FPG_RegisterOffset_bvzms,
             4U);

  /* DataTypeConversion: '<S3>/AXI4_Write_y0_DTC' incorporates:
   *  Inport: '<Root>/y0'
   */
  rtb_AXI4_Write_sigma_DTC = (uint32_T)Lorenz_FPGA_system_U.y0;

  /* MATLABSystem: '<S12>/AXI4 Write' */
  p_state = (AXI4_struct *)(Lorenz_FPGA_system_DW.obj_h.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_sigma_DTC, Lorenz__RegisterOffset_bvzmsvf4,
             4U);

  /* DataTypeConversion: '<S3>/AXI4_Write_beta_DTC' incorporates:
   *  Inport: '<Root>/beta'
   */
  rtb_AXI4_Write_sigma_DTC = (uint32_T)Lorenz_FPGA_system_U.beta;

  /* MATLABSystem: '<S7>/AXI4 Write' */
  p_state = (AXI4_struct *)(Lorenz_FPGA_system_DW.obj_bo.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_sigma_DTC, Lorenz_FPGA__RegisterOffset_bvz,
             4U);

  /* DataTypeConversion: '<S3>/AXI4_Write_z0_DTC' incorporates:
   *  Inport: '<Root>/z0'
   */
  rtb_AXI4_Write_sigma_DTC = (uint32_T)Lorenz_FPGA_system_U.z0;

  /* MATLABSystem: '<S13>/AXI4 Write' */
  p_state = (AXI4_struct *)(Lorenz_FPGA_system_DW.obj_j.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_sigma_DTC, Lorenz_RegisterOffset_bvzmsvf41,
             4U);

  /* DataTypeConversion: '<S3>/AXI4_Write_dt_DTC' incorporates:
   *  Inport: '<Root>/dt'
   */
  rtb_AXI4_Write_sigma_DTC = (uint32_T)Lorenz_FPGA_system_U.dt;

  /* MATLABSystem: '<S8>/AXI4 Write' */
  p_state = (AXI4_struct *)(Lorenz_FPGA_system_DW.obj_p.DeviceState);
  AXI4_WRITE(p_state, &rtb_AXI4_Write_sigma_DTC, Lorenz_FPGA_RegisterOffset_bvzm,
             4U);

  /* DataTypeConversion: '<S3>/AXI4_Write_RST_DTC' incorporates:
   *  Inport: '<Root>/RST'
   */
  rtb_AXI4_Write_RST_DTC = Lorenz_FPGA_system_U.RST;

  /* MATLABSystem: '<S4>/AXI4 Read' */
  p_state = (AXI4_struct *)(Lorenz_FPGA_system_DW.obj_e.DeviceState);
  AXI4_READ(p_state, &rtb_AXI4_Write_sigma_DTC, Lorenz_FPGA_syst_RegisterOffset,
            4U);

  /* DataTypeConversion: '<S2>/AXI4_Read_x_DTC' incorporates:
   *  MATLABSystem: '<S4>/AXI4 Read'
   */
  tmp = (int32_T)rtb_AXI4_Write_sigma_DTC;
  Lorenz_FPGA_system_Y.x = (tmp & 67108864U) != 0U ? tmp | -67108864 : tmp &
    67108863;

  /* MATLABSystem: '<S5>/AXI4 Read' */
  p_state = (AXI4_struct *)(Lorenz_FPGA_system_DW.obj_k.DeviceState);
  AXI4_READ(p_state, &rtb_AXI4_Write_sigma_DTC, Lorenz_FPGA_sy_RegisterOffset_b,
            4U);

  /* DataTypeConversion: '<S2>/AXI4_Read_y_DTC' incorporates:
   *  MATLABSystem: '<S5>/AXI4 Read'
   */
  tmp = (int32_T)rtb_AXI4_Write_sigma_DTC;
  Lorenz_FPGA_system_Y.y = (tmp & 67108864U) != 0U ? tmp | -67108864 : tmp &
    67108863;

  /* MATLABSystem: '<S6>/AXI4 Read' */
  p_state = (AXI4_struct *)(Lorenz_FPGA_system_DW.obj.DeviceState);
  AXI4_READ(p_state, &rtb_AXI4_Write_sigma_DTC, Lorenz_FPGA_s_RegisterOffset_bv,
            4U);

  /* DataTypeConversion: '<S2>/AXI4_Read_z_DTC' incorporates:
   *  MATLABSystem: '<S6>/AXI4 Read'
   */
  tmp = (int32_T)rtb_AXI4_Write_sigma_DTC;
  Lorenz_FPGA_system_Y.z = (tmp & 67108864U) != 0U ? tmp | -67108864 : tmp &
    67108863;

  /* End of Outputs for SubSystem: '<Root>/Lorenz_FPGA_system' */
}

/* Model initialize function */
void Lorenz_FPGA_system_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Lorenz_FPGA_system_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Lorenz_FPGA_system_DW, 0,
                sizeof(DW_Lorenz_FPGA_system_T));

  /* external inputs */
  (void)memset((void *)&Lorenz_FPGA_system_U, 0, sizeof
               (ExtU_Lorenz_FPGA_system_T));

  /* external outputs */
  (void) memset((void *)&Lorenz_FPGA_system_Y, 0,
                sizeof(ExtY_Lorenz_FPGA_system_T));

  {
    AXI4_struct * p_state;
    static const char_T tmp[14] = { '/', 'd', 'e', 'v', '/', 'm', 'w', 'i', 'p',
      'c', 'o', 'r', 'e', '\x00' };

    char_T tmp_0[14];
    int32_T i;

    {
      /* user code (Start function Header) */

      /* System '<Root>/Lorenz_FPGA_system' */
      AXI4_RESET_IPCORE("/dev/mwipcore");

      /* Start for Atomic SubSystem: '<Root>/Lorenz_FPGA_system' */

      /* Start for MATLABSystem: '<S10>/AXI4 Write' */
      Lorenz_FPGA_system_DW.obj_d.matlabCodegenIsDeleted = true;
      Lorenz_FPGA_system_DW.obj_d.isInitialized = 0;
      Lorenz_FPGA_system_DW.obj_d.matlabCodegenIsDeleted = false;
      Lorenz_FPGA_system_DW.obj_d.isSetupComplete = false;
      Lorenz_FPGA_system_DW.obj_d.isInitialized = 1;
      Lorenz_FPGA_system_DW.obj_d.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      Lorenz_FPGA_system_DW.obj_d.DeviceState = (uint32_T)p_state;
      Lorenz_FPGA_system_DW.obj_d.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S10>/AXI4 Write' */

      /* Start for MATLABSystem: '<S11>/AXI4 Write' */
      Lorenz_FPGA_system_DW.obj_b.matlabCodegenIsDeleted = true;
      Lorenz_FPGA_system_DW.obj_b.isInitialized = 0;
      Lorenz_FPGA_system_DW.obj_b.matlabCodegenIsDeleted = false;
      Lorenz_FPGA_system_DW.obj_b.isSetupComplete = false;
      Lorenz_FPGA_system_DW.obj_b.isInitialized = 1;
      Lorenz_FPGA_system_DW.obj_b.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      Lorenz_FPGA_system_DW.obj_b.DeviceState = (uint32_T)p_state;
      Lorenz_FPGA_system_DW.obj_b.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S11>/AXI4 Write' */

      /* Start for MATLABSystem: '<S9>/AXI4 Write' */
      Lorenz_FPGA_system_DW.obj_bu.matlabCodegenIsDeleted = true;
      Lorenz_FPGA_system_DW.obj_bu.isInitialized = 0;
      Lorenz_FPGA_system_DW.obj_bu.matlabCodegenIsDeleted = false;
      Lorenz_FPGA_system_DW.obj_bu.isSetupComplete = false;
      Lorenz_FPGA_system_DW.obj_bu.isInitialized = 1;
      Lorenz_FPGA_system_DW.obj_bu.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      Lorenz_FPGA_system_DW.obj_bu.DeviceState = (uint32_T)p_state;
      Lorenz_FPGA_system_DW.obj_bu.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S9>/AXI4 Write' */

      /* Start for MATLABSystem: '<S12>/AXI4 Write' */
      Lorenz_FPGA_system_DW.obj_h.matlabCodegenIsDeleted = true;
      Lorenz_FPGA_system_DW.obj_h.isInitialized = 0;
      Lorenz_FPGA_system_DW.obj_h.matlabCodegenIsDeleted = false;
      Lorenz_FPGA_system_DW.obj_h.isSetupComplete = false;
      Lorenz_FPGA_system_DW.obj_h.isInitialized = 1;
      Lorenz_FPGA_system_DW.obj_h.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      Lorenz_FPGA_system_DW.obj_h.DeviceState = (uint32_T)p_state;
      Lorenz_FPGA_system_DW.obj_h.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S12>/AXI4 Write' */

      /* Start for MATLABSystem: '<S7>/AXI4 Write' */
      Lorenz_FPGA_system_DW.obj_bo.matlabCodegenIsDeleted = true;
      Lorenz_FPGA_system_DW.obj_bo.isInitialized = 0;
      Lorenz_FPGA_system_DW.obj_bo.matlabCodegenIsDeleted = false;
      Lorenz_FPGA_system_DW.obj_bo.isSetupComplete = false;
      Lorenz_FPGA_system_DW.obj_bo.isInitialized = 1;
      Lorenz_FPGA_system_DW.obj_bo.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      Lorenz_FPGA_system_DW.obj_bo.DeviceState = (uint32_T)p_state;
      Lorenz_FPGA_system_DW.obj_bo.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S7>/AXI4 Write' */

      /* Start for MATLABSystem: '<S13>/AXI4 Write' */
      Lorenz_FPGA_system_DW.obj_j.matlabCodegenIsDeleted = true;
      Lorenz_FPGA_system_DW.obj_j.isInitialized = 0;
      Lorenz_FPGA_system_DW.obj_j.matlabCodegenIsDeleted = false;
      Lorenz_FPGA_system_DW.obj_j.isSetupComplete = false;
      Lorenz_FPGA_system_DW.obj_j.isInitialized = 1;
      Lorenz_FPGA_system_DW.obj_j.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      Lorenz_FPGA_system_DW.obj_j.DeviceState = (uint32_T)p_state;
      Lorenz_FPGA_system_DW.obj_j.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S13>/AXI4 Write' */

      /* Start for MATLABSystem: '<S8>/AXI4 Write' */
      Lorenz_FPGA_system_DW.obj_p.matlabCodegenIsDeleted = true;
      Lorenz_FPGA_system_DW.obj_p.isInitialized = 0;
      Lorenz_FPGA_system_DW.obj_p.matlabCodegenIsDeleted = false;
      Lorenz_FPGA_system_DW.obj_p.isSetupComplete = false;
      Lorenz_FPGA_system_DW.obj_p.isInitialized = 1;
      Lorenz_FPGA_system_DW.obj_p.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      Lorenz_FPGA_system_DW.obj_p.DeviceState = (uint32_T)p_state;
      Lorenz_FPGA_system_DW.obj_p.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S8>/AXI4 Write' */

      /* Start for MATLABSystem: '<S4>/AXI4 Read' */
      Lorenz_FPGA_system_DW.obj_e.matlabCodegenIsDeleted = true;
      Lorenz_FPGA_system_DW.obj_e.isInitialized = 0;
      Lorenz_FPGA_system_DW.obj_e.matlabCodegenIsDeleted = false;
      Lorenz_FPGA_system_DW.obj_e.isSetupComplete = false;
      Lorenz_FPGA_system_DW.obj_e.isInitialized = 1;
      Lorenz_FPGA_system_DW.obj_e.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      Lorenz_FPGA_system_DW.obj_e.DeviceState = (uint32_T)p_state;
      Lorenz_FPGA_system_DW.obj_e.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S4>/AXI4 Read' */

      /* Start for MATLABSystem: '<S5>/AXI4 Read' */
      Lorenz_FPGA_system_DW.obj_k.matlabCodegenIsDeleted = true;
      Lorenz_FPGA_system_DW.obj_k.isInitialized = 0;
      Lorenz_FPGA_system_DW.obj_k.matlabCodegenIsDeleted = false;
      Lorenz_FPGA_system_DW.obj_k.isSetupComplete = false;
      Lorenz_FPGA_system_DW.obj_k.isInitialized = 1;
      Lorenz_FPGA_system_DW.obj_k.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      Lorenz_FPGA_system_DW.obj_k.DeviceState = (uint32_T)p_state;
      Lorenz_FPGA_system_DW.obj_k.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S5>/AXI4 Read' */

      /* Start for MATLABSystem: '<S6>/AXI4 Read' */
      Lorenz_FPGA_system_DW.obj.matlabCodegenIsDeleted = true;
      Lorenz_FPGA_system_DW.obj.isInitialized = 0;
      Lorenz_FPGA_system_DW.obj.matlabCodegenIsDeleted = false;
      Lorenz_FPGA_system_DW.obj.isSetupComplete = false;
      Lorenz_FPGA_system_DW.obj.isInitialized = 1;
      Lorenz_FPGA_system_DW.obj.DeviceState = 0U;
      for (i = 0; i < 14; i++) {
        tmp_0[i] = tmp[i];
      }

      p_state = AXI4_INIT(tmp_0);
      Lorenz_FPGA_system_DW.obj.DeviceState = (uint32_T)p_state;
      Lorenz_FPGA_system_DW.obj.isSetupComplete = true;

      /* End of Start for MATLABSystem: '<S6>/AXI4 Read' */

      /* End of Start for SubSystem: '<Root>/Lorenz_FPGA_system' */
    }
  }
}

/* Model terminate function */
void Lorenz_FPGA_system_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Lorenz_FPGA_system' */

  /* Terminate for MATLABSystem: '<S10>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bvz(&Lorenz_FPGA_system_DW.obj_d);

  /* Terminate for MATLABSystem: '<S11>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bvz(&Lorenz_FPGA_system_DW.obj_b);

  /* Terminate for MATLABSystem: '<S9>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bvz(&Lorenz_FPGA_system_DW.obj_bu);

  /* Terminate for MATLABSystem: '<S12>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bvz(&Lorenz_FPGA_system_DW.obj_h);

  /* Terminate for MATLABSystem: '<S7>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bvz(&Lorenz_FPGA_system_DW.obj_bo);

  /* Terminate for MATLABSystem: '<S13>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bvz(&Lorenz_FPGA_system_DW.obj_j);

  /* Terminate for MATLABSystem: '<S8>/AXI4 Write' */
  matlabCodegenHandle_matlabC_bvz(&Lorenz_FPGA_system_DW.obj_p);

  /* Terminate for MATLABSystem: '<S4>/AXI4 Read' */
  matlabCodegenHandle_matlabCodeg(&Lorenz_FPGA_system_DW.obj_e);

  /* Terminate for MATLABSystem: '<S5>/AXI4 Read' */
  matlabCodegenHandle_matlabCodeg(&Lorenz_FPGA_system_DW.obj_k);

  /* Terminate for MATLABSystem: '<S6>/AXI4 Read' */
  matlabCodegenHandle_matlabCodeg(&Lorenz_FPGA_system_DW.obj);

  /* End of Terminate for SubSystem: '<Root>/Lorenz_FPGA_system' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
