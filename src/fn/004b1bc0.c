/* Rebuilt from lomse.exe FUN_004b1bc0 @ 0x004b1bc0 (82 bytes, __thiscall). HAND (2026-11-12, was asm fallback):
 * copies ten 5-byte entries into slots 0..9 (FUN_004b1db0(this, i)) from table 0x55cde8 (param_1 == 0 and
 * DAT_005851a0 == 0) or 0x55ce20 (otherwise). Returns the last slot pointer (eax after the loop). */
#include "lom.h"

#define FUN_004b1db0 ((undefined * (__thiscall *)(void *, undefined1))0x004b1db0)

#define LOM_SELF_004b1bc0 1
undefined * __thiscall rb_004b1bc0(void *this, int param_1)
{
  unsigned char *src = (unsigned char *)0x55ce20;
  undefined *d = 0;
  unsigned char i;
  if (param_1 == 0 && *(int *)0x5851a0 == 0) src = (unsigned char *)0x55cde8;
  for (i = 0; (signed char)i < 10; ) {
    d = FUN_004b1db0(this, (undefined1)i);
    i++;
    *(int *)d = *(int *)src;
    d[4] = src[4];
    src += 5;
  }
  return d;
}
