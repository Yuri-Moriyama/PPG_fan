/*
 * bmc_product2_types.h
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

#ifndef RTW_HEADER_bmc_product2_types_h_
#define RTW_HEADER_bmc_product2_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

/* Model Code Variants */
#ifndef struct_tag_04b6x6tDldj9IrIH2gmbjG
#define struct_tag_04b6x6tDldj9IrIH2gmbjG

struct tag_04b6x6tDldj9IrIH2gmbjG
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_04b6x6tDldj9IrIH2gmbjG */

#ifndef typedef_b_arduinodriver_ArduinoDigita_T
#define typedef_b_arduinodriver_ArduinoDigita_T

typedef struct tag_04b6x6tDldj9IrIH2gmbjG b_arduinodriver_ArduinoDigita_T;

#endif                             /* typedef_b_arduinodriver_ArduinoDigita_T */

#ifndef struct_tag_AYWgtFscQm3mLUJYb3A20C
#define struct_tag_AYWgtFscQm3mLUJYb3A20C

struct tag_AYWgtFscQm3mLUJYb3A20C
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_arduinodriver_ArduinoDigita_T DigitalIODriverObj;
};

#endif                                 /* struct_tag_AYWgtFscQm3mLUJYb3A20C */

#ifndef typedef_codertarget_arduinobase_block_T
#define typedef_codertarget_arduinobase_block_T

typedef struct tag_AYWgtFscQm3mLUJYb3A20C codertarget_arduinobase_block_T;

#endif                             /* typedef_codertarget_arduinobase_block_T */

#ifndef struct_tag_eUWN4YQHrYvjeD7RA7FiJB
#define struct_tag_eUWN4YQHrYvjeD7RA7FiJB

struct tag_eUWN4YQHrYvjeD7RA7FiJB
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[3];
  real_T pCumRevIndex;
};

#endif                                 /* struct_tag_eUWN4YQHrYvjeD7RA7FiJB */

#ifndef typedef_g_dsp_private_SlidingWindowAv_T
#define typedef_g_dsp_private_SlidingWindowAv_T

typedef struct tag_eUWN4YQHrYvjeD7RA7FiJB g_dsp_private_SlidingWindowAv_T;

#endif                             /* typedef_g_dsp_private_SlidingWindowAv_T */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap_bmc_product2_T
#define typedef_cell_wrap_bmc_product2_T

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap_bmc_product2_T;

#endif                                 /* typedef_cell_wrap_bmc_product2_T */

#ifndef struct_tag_m0n7d73okNICaqOLysaJ6D
#define struct_tag_m0n7d73okNICaqOLysaJ6D

struct tag_m0n7d73okNICaqOLysaJ6D
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_bmc_product2_T inputVarSize;
  g_dsp_private_SlidingWindowAv_T *pStatistic;
  int32_T NumChannels;
  g_dsp_private_SlidingWindowAv_T _pobj0;
};

#endif                                 /* struct_tag_m0n7d73okNICaqOLysaJ6D */

#ifndef typedef_dsp_simulink_MovingAverage_bm_T
#define typedef_dsp_simulink_MovingAverage_bm_T

typedef struct tag_m0n7d73okNICaqOLysaJ6D dsp_simulink_MovingAverage_bm_T;

#endif                             /* typedef_dsp_simulink_MovingAverage_bm_T */

/* Parameters (default storage) */
typedef struct P_bmc_product2_T_ P_bmc_product2_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_bmc_product2_T RT_MODEL_bmc_product2_T;

#endif                                 /* RTW_HEADER_bmc_product2_types_h_ */
