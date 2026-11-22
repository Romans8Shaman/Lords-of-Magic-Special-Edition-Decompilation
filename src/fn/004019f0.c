/* Rebuilt from lomse.exe FUN_004019f0 @ 0x004019f0 (110 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)

#define LOM_SELF_004019f0 1
undefined4 __stdcall rb_004019f0(void *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (*(int *)((int)param_1 + 0x44) != param_3) {
    FUN_004193e0(param_1,param_3);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x30) & 0x10) != 0) {
    if (*(int *)(param_2 + 0x53c) < *(int *)(param_2 + 0x540)) {
      uVar1 = *(int *)((int)param_1 + 0x44) - *(int *)(param_2 + 0x44) & 7;
      if (4 < uVar1) {
        uVar1 = 8 - uVar1;
      }
      if ((1 < (int)uVar1) && (*(int *)(param_2 + 0x53c) + 1 < *(int *)(param_2 + 0x540))) {
        FUN_0041efa0(param_1,2);
        return 0;
      }
    }
  }
  return 1;
}
