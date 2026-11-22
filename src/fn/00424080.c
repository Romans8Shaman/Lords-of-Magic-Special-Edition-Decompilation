/* Rebuilt from lomse.exe FUN_00424080 @ 0x00424080 (54 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)

#define LOM_SELF_00424080 1
void __fastcall rb_00424080(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)param_1 + 0x4c)) {
    piVar1 = (int *)((int)param_1 + 200);
    do {
      if ((*piVar1 < 1) && (iVar2 == *(int *)((int)param_1 + 0x50))) {
        FUN_0041efa0(param_1,8);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x13;
    } while (iVar2 < *(int *)((int)param_1 + 0x4c));
  }
  return;
}
