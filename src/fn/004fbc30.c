/* Rebuilt from lomse.exe FUN_004fbc30 @ 0x004fbc30 (22 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f6790 ((undefined4 (__fastcall *)(void *))0x004f6790)
#define _DAT_0054ded8 (*(double *)0x0054ded8)

#define LOM_SELF_004fbc30 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004fbc30(void *param_1)

{
  FUN_004f6790(param_1);
  *(float *)((int)param_1 + 8) = *(float *)((int)param_1 + 8) - _DAT_0054ded8;
  return;
}
