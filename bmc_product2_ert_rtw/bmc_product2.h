/*
 * bmc_product2.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "bmc_product2".
 *
 * Model version              : 1.7
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Sep  1 21:32:14 2023
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_bmc_product2_h_
#define RTW_HEADER_bmc_product2_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef bmc_product2_COMMON_INCLUDES_
#define bmc_product2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_arduino_digitalio.h"
#endif                                 /* bmc_product2_COMMON_INCLUDES_ */

#include "bmc_product2_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T FromWorkspace;                /* '<Root>/From Workspace' */
  real_T Constant12;                   /* '<Root>/Constant12' */
  real_T Sum;                          /* '<S3>/Sum' */
  real_T MovingAverage5;               /* '<Root>/Moving Average5' */
  boolean_T LogicalConverter;          /* '<S2>/Logical Converter' */
} B_bmc_product2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_simulink_MovingAverage_bm_T obj; /* '<Root>/Moving Average5' */
  codertarget_arduinobase_block_T obj_p;/* '<Root>/Digital Output5' */
  real_T UnitDelay_DSTATE;             /* '<S3>/Unit Delay' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK;               /* '<Root>/From Workspace' */

  struct {
    void *LoggedData[3];
  } Scope6_PWORK;                      /* '<Root>/Scope6' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<Root>/From Workspace' */

  boolean_T Delay_DSTATE;              /* '<S2>/Delay' */
  boolean_T objisempty;                /* '<Root>/Moving Average5' */
  boolean_T objisempty_l;              /* '<Root>/Digital Output5' */
} DW_bmc_product2_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState ResettableSubsystem4_Reset_ZCE;/* '<Root>/Resettable Subsystem4' */
} PrevZCX_bmc_product2_T;

/* Parameters (default storage) */
struct P_bmc_product2_T_ {
  real_T PPG_THRESH;                   /* Variable: PPG_THRESH
                                        * Referenced by:
                                        *   '<Root>/Constant12'
                                        *   '<S1>/Constant'
                                        */
  real_T Constant_Value;               /* Expression: 0.5
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 5
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  real_T Constant13_Value;             /* Expression: 1
                                        * Referenced by: '<Root>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant14'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0
                                        * Referenced by: '<Root>/Switch3'
                                        */
  boolean_T Delay_InitialCondition;/* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S2>/Delay'
                                    */
};

/* Real-time Model Data Structure */
struct tag_RTM_bmc_product2_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_bmc_product2_T bmc_product2_P;

/* Block signals (default storage) */
extern B_bmc_product2_T bmc_product2_B;

/* Block states (default storage) */
extern DW_bmc_product2_T bmc_product2_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_bmc_product2_T bmc_product2_PrevZCX;

/* Model entry point functions */
extern void bmc_product2_initialize(void);
extern void bmc_product2_step(void);
extern void bmc_product2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_bmc_product2_T *const bmc_product2_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S4>/Check Signal Attributes' : Unused code path elimination
 * Block '<S5>/Check Signal Attributes' : Unused code path elimination
 * Block '<S6>/Check Signal Attributes' : Unused code path elimination
 * Block '<S2>/Data Type Conversion' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'bmc_product2'
 * '<S1>'   : 'bmc_product2/Compare To Constant6'
 * '<S2>'   : 'bmc_product2/Edge Detector5'
 * '<S3>'   : 'bmc_product2/Resettable Subsystem4'
 * '<S4>'   : 'bmc_product2/Edge Detector5/Check Signal Attributes'
 * '<S5>'   : 'bmc_product2/Edge Detector5/Check Signal Attributes1'
 * '<S6>'   : 'bmc_product2/Edge Detector5/Check Signal Attributes2'
 */
#endif                                 /* RTW_HEADER_bmc_product2_h_ */
