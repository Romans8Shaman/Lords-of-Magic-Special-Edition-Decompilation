/* Rebuilt from lomse.exe FUN_004a8a50 @ 0x004a8a50 (104 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a8a50 1
int __thiscall rb_004a8a50(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)((int)this + 0x6c);
  uVar1 = param_1 % iVar2 - param_2 % iVar2;
  uVar3 = (int)uVar1 >> 0x1f;
  iVar5 = (uVar1 ^ uVar3) - uVar3;
  uVar1 = param_1 / iVar2 - param_2 / iVar2;
  uVar3 = (int)uVar1 >> 0x1f;
  iVar4 = (uVar1 ^ uVar3) - uVar3;
  if (*(int *)((int)this + 0x14) != 0) {
    if (iVar2 - iVar5 <= iVar5) {
      iVar5 = iVar2 - iVar5;
    }
    iVar2 = *(int *)((int)this + 0x70) - iVar4;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  return iVar5 * iVar5 + iVar4 * iVar4;
}
