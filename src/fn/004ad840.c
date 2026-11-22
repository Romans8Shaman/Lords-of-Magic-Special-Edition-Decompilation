/* Rebuilt from lomse.exe FUN_004ad840 @ 0x004ad840 (22 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004ad860 ((int * (__fastcall *)(int, undefined4, undefined4))0x004ad860)

#define LOM_SELF_004ad840 1
bool __fastcall rb_004ad840(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  int *piVar1;
  
  piVar1 = FUN_004ad860(param_1,unused_reg_1,unused_stack_0);
  return piVar1 != (int *)0x0;
}
