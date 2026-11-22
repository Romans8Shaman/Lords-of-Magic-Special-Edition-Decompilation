/* Rebuilt from lomse.exe FUN_004154a0 @ 0x004154a0 (53 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00415470 ((undefined4 (__fastcall *)(int *))0x00415470)

#define LOM_SELF_004154a0 1
int __fastcall rb_004154a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar2 = (int *)(param_1 + 0xc4);
    do {
      iVar1 = FUN_00415470(piVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 0x13;
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  return iVar3;
}
