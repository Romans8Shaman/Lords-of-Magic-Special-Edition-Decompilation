/* HAND-WRITTEN: zero param_2 - 1 bytes at param_1 (rep stosd + rep stosb), then param_1[param_2 - 1] = 1. Returns 0. */
#include "lom.h"
#define LOM_SELF_004b6900 1
uint __stdcall rb_004b6900(uchar *param_1, int param_2)
{
  uint n = (uint)(param_2 - 1), k;
  uint *d = (uint *)param_1;
  for (k = n >> 2; k != 0; k--) *(volatile uint *)d++ = 0;
  for (k = n & 3; k != 0; k--) { *(volatile uchar *)d = 0; d = (uint *)((uchar *)d + 1); }
  param_1[param_2 - 1] = 1;
  return 0;
}
