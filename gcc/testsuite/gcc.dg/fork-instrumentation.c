/* { dg-do compile } */
/* { dg-options "-O0 -fprofile-generate" } */
int fork(void);
int
t()
{
  fork ();
}
/* { dg-final { scan-assembler "gcov_fork" } } */
