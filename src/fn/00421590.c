/* Rebuilt from lomse.exe FUN_00421590 @ 0x00421590 (26 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)

#define LOM_SELF_00421590 1
void __fastcall rb_00421590(void *param_1)

{
  if (*(int *)((int)param_1 + 200) < 1) {
    FUN_0041efa0(param_1,8);
    return;
  }
  FUN_0041efa0(param_1,7);
  return;
}
