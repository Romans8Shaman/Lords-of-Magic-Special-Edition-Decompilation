/* HAND-WRITTEN: build net message 0x45 in a 0x108-byte local (FUN_0048cc70), copy 31 dwords of *param_1 to +0x15,
 * zero unused (count at +0x17, < 30) 4-byte entries at +0x19, send via FUN_00489b70(&DAT_00584ae8, msg). */
#include "lom.h"
#define FUN_0048cc70 ((undefined4 (__thiscall *)(void *, int))0x0048cc70)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, void *))0x00489b70)
#define LOM_SELF_0040aeb0 1
void __stdcall rb_0040aeb0(undefined4 *param_1)
{
  unsigned char buf[0x108];
  int i, n;
  FUN_0048cc70(buf, 0x45);
  for (i = 0; i < 0x1f; i++) ((undefined4 *)(buf + 0x15))[i] = param_1[i];
  n = *(short *)(buf + 0x17);
  for (i = n; i < 0x1e; i++) {
    *(short *)(buf + 0x19 + i * 4) = 0;
    *(short *)(buf + 0x1b + i * 4) = 0;
  }
  FUN_00489b70((void *)0x584ae8, buf);
}
