/*
 * File: coder_assumptions.h
 *
 * Abstract: Coder assumptions header file
 */

#ifndef CODER_ASSUMPTIONS_H
#define CODER_ASSUMPTIONS_H

/* include model specific checks */
#include "gm_lorenz_model_interface_ca.h"

/* global results variable mapping for static code */
#define CA_Expected_HWImpl             CA_gm_lorenz_model_interface_ExpHW
#define CA_Actual_HWImpl               CA_gm_lorenz_model_interface_ActHW
#define CA_HWImpl_Results              CA_gm_lorenz_model_interface_HWRes
#define CA_PortableWordSizes_Results   CA_gm_lorenz_model_interface_PWSRes

/* entry point function mapping for static code */
#define CA_Run_Tests                   gm_lorenz_model_interface_caRunTests
#endif                                 /* CODER_ASSUMPTIONS_H */
