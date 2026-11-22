/* Rebuilt from lomse.exe FUN_00431160 @ 0x00431160 (50 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00529140 ((uint (__fastcall *)(int *))0x00529140)

#define LOM_SELF_00431160 1
uint __fastcall rb_00431160(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar2 = (int *)(param_1 + 0xc4);
    do {
      uVar1 = FUN_00529140(piVar2);
      if (uVar1 != 0) {
        return uVar1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x13;
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  return 0;
}
