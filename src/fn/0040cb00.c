/* Rebuilt from lomse.exe FUN_0040cb00 @ 0x0040cb00 (36 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040caf0 ((undefined4 (__thiscall *)(void *, int))0x0040caf0)

#define LOM_SELF_0040cb00 1
void __fastcall rb_0040cb00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x38);
    FUN_0040caf0(param_1,iVar2);
    iVar2 = iVar1;
  }
  *param_1 = 0;
  return;
}
