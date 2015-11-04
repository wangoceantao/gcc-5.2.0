/* Test the `vbicu8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O2" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

uint8x8_t out_uint8x8_t;
uint8x8_t arg0_uint8x8_t;
uint8x8_t arg1_uint8x8_t;
void test_vbicu8 (void)
{

  out_uint8x8_t = vbic_u8 (arg0_uint8x8_t, arg1_uint8x8_t);
}

/* { dg-final { scan-assembler "vbic\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
