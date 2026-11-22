/* Rebuilt from lomse.exe FUN_004c51a0 @ 0x004c51a0 (36 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c5800 ((undefined4 (__fastcall *)(int))0x004c5800)

#define LOM_SELF_004c51a0 1
void __fastcall rb_004c51a0(undefined4 *param_1)

{
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[5] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[0x66] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_004c5800((int)param_1);
  return;
}
