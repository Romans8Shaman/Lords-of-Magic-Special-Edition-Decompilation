/* Rebuilt from lomse.exe FUN_005260a0 @ 0x005260a0 (64 bytes, __thiscall). HAND (2026-11-13, was asmfn):
 * struct-return getter: index = *this; record = (0 <= index < [5cd2f0] && [5cd2f4]) ? [5cd2f4] + index*1000 : 0;
 * out[0..1] = record->+0x10c/+0x110 (8 bytes); returns the hidden result pointer in eax like MSVC does
 * (Ghidra's void version lost that). */
#include "lom.h"

#define DAT_005cd2f0 (*(volatile int *)0x005cd2f0)
#define DAT_005cd2f4 (*(volatile int *)0x005cd2f4)

#define LOM_SELF_005260a0 1
undefined4 *__thiscall rb_005260a0(void *this, undefined4 *out)
{
  int i = *(int *)this;
  int rec;
  if (i < 0 || DAT_005cd2f0 <= i || DAT_005cd2f4 == 0) rec = 0;
  else rec = DAT_005cd2f4 + i * 1000;
  out[0] = *(undefined4 *)(rec + 0x10c);
  out[1] = *(undefined4 *)(rec + 0x110);
  return out;
}
