/*
 * bmc_product2_data.c
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

#include "bmc_product2.h"
#include "bmc_product2_private.h"

/* Block parameters (default storage) */
P_bmc_product2_T bmc_product2_P = {
  /* Variable: PPG_THRESH
   * Referenced by:
   *   '<Root>/Constant12'
   *   '<S1>/Constant'
   */
  512.0,

  /* Expression: 0.5
   * Referenced by: '<S3>/Constant'
   */
  0.5,

  /* Expression: 5
   * Referenced by: '<S3>/Unit Delay'
   */
  5.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant13'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant14'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Switch3'
   */
  0.0,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S2>/Delay'
   */
  1
};
