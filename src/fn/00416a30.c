/* Rebuilt from lomse.exe FUN_00416a30 @ 0x00416a30 (63 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)

#define LOM_SELF_00416a30 1
undefined4 __fastcall rb_00416a30(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x4c) < 1) {
    return 0;
  }
  iVar3 = param_1 + 0xc4;
  do {
    uVar1 = FUN_00525f10(iVar3);
    if (uVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x4c;
  } while (iVar2 < *(int *)(param_1 + 0x4c));
  return 0;
}
