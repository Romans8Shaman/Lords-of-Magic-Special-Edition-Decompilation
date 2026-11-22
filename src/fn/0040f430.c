/* Rebuilt from lomse.exe FUN_0040f430 @ 0x0040f430 (36 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040f420 ((undefined4 (__thiscall *)(void *, int))0x0040f420)

#define LOM_SELF_0040f430 1
void __fastcall rb_0040f430(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x4c);
    FUN_0040f420(param_1,iVar2);
    iVar2 = iVar1;
  }
  *param_1 = 0;
  return;
}
