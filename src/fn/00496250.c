/* Rebuilt from lomse.exe FUN_00496250 @ 0x00496250 (240 bytes, __thiscall).
 * HAND (2026-11-13): gen.py REJECT sehShape. EH frame stripped (game does not throw);
 * tiles param_5 into full param_1[4]-sized chunks plus a remainder chunk via FUN_00495f90. */
#include "lom.h"

#define DAT_0058364c (*(int *)0x0058364c)
#define FUN_00495f90 ((void (__thiscall *)(void *, int *, int, int, int, int))0x00495f90)

#define LOM_SELF_00496250 1
void __thiscall rb_00496250(void *this, int *param_1, int param_2, int param_3, int param_4, int param_5)
{
  int i;
  int nfull;
  int rem;
  int chunk;
  int local_20[5];
  int *dst;
  int *src;

  i = 0;
  DAT_0058364c = DAT_0058364c + 0x14;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  nfull = param_5 / param_1[4];
  rem = param_5 % param_1[4];
  if (0 < nfull) {
    do {
      FUN_00495f90(this, param_1, param_2, i * param_1[4] + param_3, param_4, 0);
      i = i + 1;
    } while (i < nfull);
  }
  if (rem != 0) {
    chunk = param_1[4];
    dst = local_20;
    src = param_1;
    for (i = 5; i != 0; i = i + -1) {
      *dst = *src;
      src = src + 1;
      dst = dst + 1;
    }
    local_20[4] = rem;
    FUN_00495f90(this, local_20, param_2, nfull * chunk + param_3, param_4, 0);
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  return;
}
