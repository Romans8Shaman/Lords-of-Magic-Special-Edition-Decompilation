/* Rebuilt from lomse.exe FUN_004b19f0 @ 0x004b19f0 (293 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_004b26b0 ((undefined4 * (__fastcall *)(undefined4 *))0x004b26b0)
#define FUN_004b2770 ((undefined4 (__fastcall *)(undefined4 *))0x004b2770)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)

#define LOM_SELF_004b19f0 1
undefined4 * __fastcall rb_004b19f0(undefined4 *param_1)

{

  FUN_00539ff0(param_1 + 0x1c,200,4,FUN_004b26b0,FUN_004b2770);
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 0xe4);
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 0xec);
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0x34] = 0;
  param_1[0x4c] = 0;
  param_1[0x66] = 0;
  param_1[0x7e] = 0;
  param_1[0x98] = 0;
  param_1[0xb0] = 0;
  param_1[0xca] = 0;
  param_1[0xe2] = 0;
  param_1[0xfb] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[0x35] = 0x32;
  param_1[0x4d] = 0x40;
  param_1[0x67] = 0x86;
  param_1[0x7f] = 0x94;
  param_1[0x99] = 0xda;
  param_1[0xb1] = 0xe8;
  param_1[0xcb] = 0x12e;
  param_1[0xe3] = 0x13c;
  return param_1;
}
