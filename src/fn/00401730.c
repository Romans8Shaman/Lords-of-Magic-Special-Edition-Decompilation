/* Rebuilt from lomse.exe FUN_00401730 @ 0x00401730 (33 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)

#define LOM_SELF_00401730 1
void __stdcall rb_00401730(void *param_1)

{
  int iVar1;
  
  if (((*(int *)((int)param_1 + 0x2c) != 0) &&
      (iVar1 = *(int *)(*(int *)((int)param_1 + 0x2c) + 4), -1 < iVar1)) && (iVar1 < 2)) {
    FUN_0041efa0(param_1,2);
  }
  return;
}
