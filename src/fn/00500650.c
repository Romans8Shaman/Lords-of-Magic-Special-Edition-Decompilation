/* Rebuilt from lomse.exe FUN_00500650 @ 0x00500650 (187 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)

#define LOM_SELF_00500650 1
void __thiscall rb_00500650(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)((int)this + 0x22ff0) != 1) {
    iVar3 = *(int *)((int)this + 0x22fe0);
    param_3 = param_3 + iVar3;
    iVar2 = *(int *)((int)this + 0x22fe4);
    iVar5 = param_1 + iVar3;
    if (param_1 + iVar3 < iVar3) {
      iVar5 = iVar3;
    }
    iVar3 = param_2 + iVar2;
    if (param_2 + iVar2 < iVar2) {
      iVar3 = iVar2;
    }
    iVar1 = *(int *)((int)this + 0x22fe8) + -1 + iVar5;
    if (iVar1 < param_3) {
      param_3 = iVar1;
    }
    iVar1 = *(int *)((int)this + 0x22fec) + -1 + iVar3;
    iVar4 = param_4 + iVar2;
    if (iVar1 < param_4 + iVar2) {
      iVar4 = iVar1;
    }
    FUN_00476010((void *)((int)this + 0x22f08),iVar5,iVar3,param_3,iVar4);
    if (*(int *)((int)this + 0x22ff0) == 2) {
      FUN_00476010((void *)((int)this + 0x22f74),iVar5,iVar3,param_3,iVar4);
    }
  }
  return;
}
