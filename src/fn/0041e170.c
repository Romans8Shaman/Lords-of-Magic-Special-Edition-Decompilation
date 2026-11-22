/* Rebuilt from lomse.exe FUN_0041e170 @ 0x0041e170 (60 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004164e0 ((undefined4 (__thiscall *)(void *, int, int))0x004164e0)

#define LOM_SELF_0041e170 1
undefined4 __thiscall rb_0041e170(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x4c);
  iVar3 = 0;
  uVar2 = 1;
  if (0 < iVar1) {
    do {
      if ((param_1 & uVar2) == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        FUN_004164e0(this,iVar3,1);
      }
      uVar2 = uVar2 * 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}
