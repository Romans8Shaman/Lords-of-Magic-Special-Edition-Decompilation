/* Rebuilt from lomse.exe FUN_004155c0 @ 0x004155c0 (66 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521ef0 ((uint (__fastcall *)(int *))0x00521ef0)

#define LOM_SELF_004155c0 1
undefined4 __fastcall rb_004155c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x4c) < 1) {
    return 1;
  }
  piVar3 = (int *)(param_1 + 0xc4);
  do {
    uVar1 = FUN_00521ef0(piVar3);
    if (uVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x13;
  } while (iVar2 < *(int *)(param_1 + 0x4c));
  return 1;
}
