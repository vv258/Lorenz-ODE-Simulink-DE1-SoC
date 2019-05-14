/*
 * File: gm_lorenz_model_interface_ca.c
 *
 * Abstract: Tests assumptions in the generated code.
 */

#include "gm_lorenz_model_interface_ca.h"

CA_HWImpl_TestResults CA_gm_lorenz_model_interface_HWRes;
CA_PWS_TestResults CA_gm_lorenz_model_interface_PWSRes;
const CA_HWImpl CA_gm_lorenz_model_interface_ExpHW = {
  8,                                   /* BitPerChar */
  16,                                  /* BitPerShort */
  32,                                  /* BitPerInt */
  32,                                  /* BitPerLong */
  64,                                  /* BitPerLongLong */
  32,                                  /* BitPerFloat */
  64,                                  /* BitPerDouble */
  32,                                  /* BitPerPointer */
  32,                                  /* BitPerSizeT */
  32,                                  /* BitPerPtrDiffT */
  CA_LITTLE_ENDIAN,                    /* Endianess */
  CA_ZERO,                             /* IntDivRoundTo */
  1,                                   /* ShiftRightIntArith */
  0,                                   /* LongLongMode */
  0,                                   /* PortableWordSizes */
  "ARM Compatible->ARM Cortex",        /* HWDeviceType */
  0                                    /* MemoryAtStartup */
};

CA_HWImpl CA_gm_lorenz_model_interface_ActHW;
void gm_lorenz_model_interface_caRunTests(void)
{
  /* verify hardware implementation */
  caVerifyPortableWordSizes(&CA_gm_lorenz_model_interface_ActHW,
    &CA_gm_lorenz_model_interface_ExpHW, &CA_gm_lorenz_model_interface_PWSRes);
  caVerifyHWImpl(&CA_gm_lorenz_model_interface_ActHW,
                 &CA_gm_lorenz_model_interface_ExpHW,
                 &CA_gm_lorenz_model_interface_HWRes);
}
