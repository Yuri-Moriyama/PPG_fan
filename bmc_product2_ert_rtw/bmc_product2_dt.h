/*
 * bmc_product2_dt.h
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

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(void*),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(codertarget_arduinobase_block_T),
  sizeof(dsp_simulink_MovingAverage_bm_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "codertarget_arduinobase_block_T",
  "dsp_simulink_MovingAverage_bm_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&bmc_product2_B.FromWorkspace), 0, 0, 4 },

  { (char_T *)(&bmc_product2_B.LogicalConverter), 8, 0, 1 }
  ,

  { (char_T *)(&bmc_product2_DW.obj), 15, 0, 1 },

  { (char_T *)(&bmc_product2_DW.obj_p), 14, 0, 1 },

  { (char_T *)(&bmc_product2_DW.UnitDelay_DSTATE), 0, 0, 1 },

  { (char_T *)(&bmc_product2_DW.FromWorkspace_PWORK.TimePtr), 11, 0, 4 },

  { (char_T *)(&bmc_product2_DW.FromWorkspace_IWORK.PrevIndex), 10, 0, 1 },

  { (char_T *)(&bmc_product2_DW.Delay_DSTATE), 8, 0, 3 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  8U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&bmc_product2_P.PPG_THRESH), 0, 0, 6 },

  { (char_T *)(&bmc_product2_P.Delay_InitialCondition), 8, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  2U,
  rtPTransitions
};

/* [EOF] bmc_product2_dt.h */
