/* Rebuilt from lomse.exe FUN_004b6ef0 @ 0x004b6ef0 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583560 (*(int *)0x00583560)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482760 ((undefined4 (__thiscall *)(void *, int))0x00482760)

#define LOM_SELF_004b6ef0 1
void __cdecl rb_004b6ef0(undefined4 param_1,int param_2)

{
  if (1 < (uint)((param_2 + -1) - DAT_00583560)) {
    FUN_00482760(&DAT_005aa12c,param_2 + -1);
  }
  return;
}
