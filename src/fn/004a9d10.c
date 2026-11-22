/* Rebuilt from lomse.exe FUN_004a9d10 @ 0x004a9d10 (232 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a4c30 ((undefined4 (__thiscall *)(void *, int))0x004a4c30)
#define FUN_00508fb0 ((undefined4 (__thiscall *)(void *, int, int))0x00508fb0)
#define FUN_00509630 ((undefined4 (__thiscall *)(void *, int, int))0x00509630)

#define LOM_SELF_004a9d10 1
undefined4 __thiscall rb_004a9d10(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0x68) <= param_1)) {
    return 0;
  }
  iVar1 = param_1 * 8;
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) & 0xffe3ffff;
  iVar3 = FUN_004a4c30(this,param_1);
  this_00 = (void *)((int)this + 0xd8);
  uVar4 = FUN_00508fb0(this_00,iVar3,0);
  puVar2 = (uint *)(*(int *)((int)this + 100) + 4 + iVar1);
  uVar6 = *(uint *)(*(int *)((int)this + 100) + 4 + iVar1);
  if ((uVar4 & 1) == 0) {
    *puVar2 = uVar6 | 0x40000;
  }
  else {
    iVar3 = 0;
    *puVar2 = uVar6 | 0x80000;
    do {
      iVar5 = FUN_00509630(this_00,(int)*(short *)(*(int *)((int)this + 0x54) + iVar1),iVar3);
      uVar6 = FUN_00508fb0(this_00,iVar5,0);
      if ((uVar6 & 1) == 0) {
        puVar2 = (uint *)(*(int *)((int)this + 100) + 4 + iVar1);
        *puVar2 = *puVar2 | 1 << ((char)iVar3 + 0x18U & 0x1f);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    uVar6 = *(uint *)(*(int *)((int)this + 100) + 4 + iVar1);
    if ((uVar6 & 0xff000000) != 0) {
      *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) = uVar6 | 0x40000;
    }
  }
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) | 0x100000;
  return 1;
}
