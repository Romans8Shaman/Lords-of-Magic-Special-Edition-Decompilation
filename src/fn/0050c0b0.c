/* Rebuilt from lomse.exe FUN_0050c0b0 @ 0x0050c0b0 (72 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2d60 (*(int *)0x005d2d60)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define PTR_FUN_0054e910 (*(undefined * *)0x0054e910)

#define LOM_SELF_0050c0b0 1
undefined4 * __fastcall rb_0050c0b0(undefined4 *param_1)

{
  FUN_004f59a0(param_1);
  *param_1 = &PTR_FUN_0054e910;
  DAT_005d2d60 = DAT_005d2d60 + 0x60;
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 0x13) = 0xff;
  *(undefined1 *)((int)param_1 + 0x4d) = 1;
  return param_1;
}
