/* Rebuilt from lomse.exe FUN_004983c0 @ 0x004983c0 (36 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)

#define LOM_SELF_004983c0 1
void __fastcall
rb_004983c0(int *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0,
            undefined4 unused_stack_4)

{
  if ((*param_1 != 0) && (param_1[2] != 0)) {
    FUN_004d09a0(DAT_005a7b78,param_1[3],(int *)param_1[4],0);
  }
  return;
}
