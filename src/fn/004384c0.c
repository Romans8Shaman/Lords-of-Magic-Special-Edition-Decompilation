/* Rebuilt from lomse.exe FUN_004384c0 @ 0x004384c0 (257 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00438390 ((int (__thiscall *)(void *, int))0x00438390)

#define LOM_SELF_004384c0 1
undefined4 __thiscall rb_004384c0(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  iVar1 = FUN_00438390(this,param_1);
  iVar4 = *(int *)((int)this + 0x4c);
  iVar2 = (param_2 - *(int *)((int)this + 0x48)) + 1;
  local_8 = 0;
  if (iVar4 < *(int *)this) {
    iVar5 = iVar4 << 4;
    do {
      if (iVar2 < 1) break;
      if (*(int *)(*(int *)((int)this + 8) + 0xc + iVar5) < *(int *)(iVar1 + 0xc)) {
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < *(int *)this);
  }
  local_8 = local_8 - *(int *)(iVar1 + 8);
  if (param_3 + local_8 < 0) {
    return 0;
  }
  *param_4 = local_8;
  iVar4 = param_1 + 1;
  if (iVar4 < *(int *)((int)this + 0x48)) {
    puVar3 = (undefined4 *)((int)this + iVar4 * 4 + 8);
    do {
      iVar4 = iVar4 + 1;
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)((int)this + 0x48));
  }
  iVar4 = *(int *)((int)this + 0x4c);
  iVar2 = *(int *)((int)this + 0x48) + -1;
  *(int *)((int)this + 0x48) = iVar2;
  iVar2 = param_2 - iVar2;
  if (iVar4 < *(int *)this) {
    iVar5 = iVar4 << 4;
    do {
      if (iVar2 < 1) {
        return 1;
      }
      if (*(int *)(*(int *)((int)this + 8) + 0xc + iVar5) < *(int *)(iVar1 + 0xc)) {
        *(int *)((int)this + *(int *)((int)this + 0x48) * 4 + 0xc) = iVar4;
        *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 1;
        *(int *)((int)this + 0x4c) = iVar4 + 1;
        iVar2 = iVar2 + -1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < *(int *)this);
  }
  return 1;
#undef local_8
}
