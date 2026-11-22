/* Rebuilt from lomse.exe FUN_004219a0 @ 0x004219a0 (60 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521f30 ((int (__fastcall *)(int *))0x00521f30)

#define LOM_SELF_004219a0 1
int __fastcall rb_004219a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    return 0;
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar4 = (int *)(param_1 + 0xc4);
    do {
      iVar1 = FUN_00521f30(piVar4);
      iVar2 = iVar2 + iVar1;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x13;
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  return iVar2 / *(int *)(param_1 + 0x4c);
}
