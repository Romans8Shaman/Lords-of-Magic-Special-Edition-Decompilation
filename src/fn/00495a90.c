/* Rebuilt from lomse.exe FUN_00495a90 @ 0x00495a90 (99 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00495a90 1
void __fastcall rb_00495a90(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_1[1] < 0) {
      iVar2 = param_1[3] + param_1[1];
      param_1[3] = iVar2;
      if (iVar2 < 0) {
        param_1[3] = 0;
      }
      param_1[1] = 0;
    }
    if (param_1[2] < 0) {
      iVar2 = param_1[4] + param_1[2];
      param_1[4] = iVar2;
      if (iVar2 < 0) {
        param_1[4] = 0;
      }
      param_1[2] = 0;
    }
    if (*(int *)(iVar1 + 4) < param_1[3] + param_1[1]) {
      param_1[3] = *(int *)(iVar1 + 4) - param_1[1];
    }
    if (*(int *)(iVar1 + 8) < param_1[4] + param_1[2]) {
      param_1[4] = *(int *)(iVar1 + 8) - param_1[2];
    }
  }
  return;
}
