/*
 * File: gm_lorenz_model_interface_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef GM_LORENZ_MODEL_INTERFACE_CA_H
#define GM_LORENZ_MODEL_INTERFACE_CA_H

/* preprocessor validation checks */
#include "gm_lorenz_model_interface_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_gm_lorenz_model_interface_HWRes;
extern CA_PWS_TestResults CA_gm_lorenz_model_interface_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_gm_lorenz_model_interface_ExpHW;
extern CA_HWImpl CA_gm_lorenz_model_interface_ActHW;

/* entry point function to run tests */
void gm_lorenz_model_interface_caRunTests(void);

#endif                                 /* GM_LORENZ_MODEL_INTERFACE_CA_H */
