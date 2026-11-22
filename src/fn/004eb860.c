/* Rebuilt from lomse.exe FUN_004eb860 @ 0x004eb860 (174 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004eb910 ((undefined4 (__fastcall *)(int *))0x004eb910)

#define LOM_SELF_004eb860 1
void __thiscall rb_004eb860(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)this + 1) {
    piVar3 = (int *)((int)this + 0x14);
    do {
      iVar4 = iVar4 + 1;
      *piVar3 = *param_1;
      param_1 = param_1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)this + 1);
  }
  iVar1 = *(int *)this;
  *(undefined4 *)((int)this + 0xcc) = 0;
  iVar4 = iVar1 + 1;
  if (0 < iVar4) {
    piVar3 = (int *)((int)this + 0x14);
    do {
      iVar2 = *piVar3;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + iVar2;
    } while (iVar4 != 0);
  }
  if ((*(byte *)((int)this + 0xd4) & 1) == 0) {
    *(double *)((int)this + 0x70) =
         (double)(*(int *)((int)this + 0xc) - *(int *)(*(int *)((int)this + 0x30) + 0xc) * iVar1) /
         (double)*(int *)((int)this + 0xcc);
    FUN_004eb910(this);
    return;
  }
  *(double *)((int)this + 0x70) =
       (double)(*(int *)((int)this + 0x10) - *(int *)(*(int *)((int)this + 0x30) + 0x10) * iVar1) /
       (double)*(int *)((int)this + 0xcc);
  FUN_004eb910(this);
  return;
}
