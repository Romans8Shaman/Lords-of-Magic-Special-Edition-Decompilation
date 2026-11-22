/* Rebuilt from lomse.exe FUN_0042c650 @ 0x0042c650 (46 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)

#define LOM_SELF_0042c650 1
int __fastcall rb_0042c650(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (piVar1 = *(int **)(param_1 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    iVar2 = FUN_00427b80(*piVar1);
    if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}
