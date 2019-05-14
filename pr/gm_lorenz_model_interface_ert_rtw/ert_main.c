/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
 *
 * Code generated for Simulink model 'gm_lorenz_model_interface'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Thu May  9 13:38:39 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stdio.h>
#include <stdlib.h>
#include "gm_lorenz_model_interface.h"
#include "gm_lorenz_model_interface_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "linuxinitialize.h"
#define UNUSED(x)                      x = x

/* Function prototype declaration*/
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T stopRequested = false;
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
sem_t subrateTaskSem[1];
int taskId[1];
pthread_t schedulerThread;
pthread_t baseRateThread;
pthread_t backgroundThread;
unsigned long threadJoinStatus[8];
int terminatingmodel = 0;
pthread_t subRateThread[1];
int subratePriority[1];
void *subrateTask(void *arg)
{
  int tid = *((int *) arg);
  int subRateId;
  subRateId = tid + 1;
  while (runModel) {
    sem_wait(&subrateTaskSem[tid]);
    if (terminatingmodel)
      break;

#ifdef MW_RTOS_DEBUG

    printf(" -subrate task %d semaphore received\n", subRateId);

#endif

    gm_lorenz_model_interface_step(subRateId);

    /* Get model outputs here */
  }

  pthread_exit((void *)0);
  return NULL;
}

void *baseRateTask(void *arg)
{
  runModel = (rtmGetErrorStatus(gm_lorenz_model_interface_M) == (NULL)) &&
    !rtmGetStopRequested(gm_lorenz_model_interface_M);
  while (runModel) {
    sem_wait(&baserateTaskSem);

#ifdef MW_RTOS_DEBUG

    printf("*base rate task semaphore received\n");
    fflush(stdout);

#endif

    if (rtmStepTask(gm_lorenz_model_interface_M, 1)
        ) {
      sem_post(&subrateTaskSem[0]);
    }

    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModePauseIfNeeded(gm_lorenz_model_interface_M->extModeInfo, 2,
        &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(gm_lorenz_model_interface_M, true);
      }

      if (rtmGetStopRequested(gm_lorenz_model_interface_M) == true) {
        rtmSetErrorStatus(gm_lorenz_model_interface_M, "Simulation finished");
        break;
      }
    }

    gm_lorenz_model_interface_step(0);

    /* Get model outputs here */
    rtExtModeCheckEndTrigger();
    stopRequested = !((rtmGetErrorStatus(gm_lorenz_model_interface_M) == (NULL))
                      && !rtmGetStopRequested(gm_lorenz_model_interface_M));
    runModel = !stopRequested;
  }

  terminateTask(arg);
  pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(gm_lorenz_model_interface_M, "stopping the model");
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;

  {
    int i;

    /* Signal all periodic tasks to complete */
    for (i=0; i<1; i++) {
      CHECK_STATUS(sem_post(&subrateTaskSem[i]), 0, "sem_post");
      CHECK_STATUS(sem_destroy(&subrateTaskSem[i]), 0, "sem_destroy");
    }

    /* Wait for all periodic tasks to complete */
    for (i=0; i<1; i++) {
      CHECK_STATUS(pthread_join(subRateThread[i],(void *)&threadJoinStatus), 0,
                   "pthread_join");
    }

    runModel = 0;

    /* Wait for background task to complete */
    CHECK_STATUS(pthread_join(backgroundThread,(void *)&threadJoinStatus), 0,
                 "pthread_join");
  }

  rtExtModeShutdown(2);

  /* Disable rt_OneStep() here */

  /* Terminate model */
  gm_lorenz_model_interface_terminate();
  sem_post(&stopSem);
  return NULL;
}

void backgroundTask(void *arg)
{
  while (runModel) {
    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(gm_lorenz_model_interface_M->extModeInfo, 2, &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(gm_lorenz_model_interface_M, true);
      }
    }
  }
}

int main(int argc, char **argv)
{
  subratePriority[0] = 39;
  rtmSetErrorStatus(gm_lorenz_model_interface_M, 0);
  rtExtModeParseArgs(argc, (const char_T **)argv, NULL);

  /* Initialize model */
  gm_lorenz_model_interface_initialize();

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(gm_lorenz_model_interface_M));
  rtExtModeCheckInit(2);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(gm_lorenz_model_interface_M->extModeInfo, 2,
      &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(gm_lorenz_model_interface_M, true);
    }
  }

  rtERTExtModeStartMsg();

  /* Call RTOS Initialization function */
  myRTOSInit(0.0005, 1);

  /* Wait for stop semaphore */
  sem_wait(&stopSem);

#if (MW_NUMBER_TIMER_DRIVEN_TASKS > 0)

  {
    int i;
    for (i=0; i < MW_NUMBER_TIMER_DRIVEN_TASKS; i++) {
      CHECK_STATUS(sem_destroy(&timerTaskSem[i]), 0, "sem_destroy");
    }
  }

#endif

  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
