/* Rebuilt from lomse.exe FUN_004a7a50 @ 0x004a7a50 (766 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a4c50 ((uint (__thiscall *)(void *, int))0x004a4c50)
#define FUN_004a8a50 ((int (__thiscall *)(void *, int, int))0x004a8a50)
#define FUN_004edbb0 ((undefined4 (__thiscall *)(void *, int))0x004edbb0)

#define LOM_SELF_004a7a50 1
int __thiscall rb_004a7a50(void *this,int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
  
  iVar8 = 99999;
  local_18 = -1;
  uVar2 = FUN_004a4c50(this,param_1);
  if (((((param_2 & uVar2) != 0) && (iVar3 = FUN_004edbb0(this,param_1), iVar3 == 0)) &&
      (*(int *)(*(int *)((int)this + 100) + param_1 * 8) == 0)) &&
     ((*(uint *)(*(int *)((int)this + 100) + param_1 * 8 + 4) & 0x200) == 0)) {
    return param_1;
  }
  bVar1 = false;
  local_c = param_1 / *(int *)((int)this + 0x70);
  iVar3 = param_1 % *(int *)((int)this + 0x6c) - local_c;
  local_8 = local_c + 1;
  local_c = local_c + -1;
  do {
    local_20 = iVar3 + local_c;
    local_1c = iVar3 + local_8;
    if (local_20 < 0) {
      local_20 = 0;
    }
    iVar4 = *(int *)((int)this + 0x6c) + -1;
    if (iVar4 <= local_1c) {
      local_1c = iVar4;
    }
    local_10 = local_c;
    if (local_c < 0) {
      local_10 = 0;
    }
    iVar5 = *(int *)((int)this + 0x70) + -1;
    iVar4 = local_20;
    local_14 = local_8;
    if (iVar5 <= local_8) {
      local_14 = iVar5;
    }
    for (; iVar5 = local_10, iVar4 <= local_1c; iVar4 = iVar4 + 1) {
      iVar5 = local_10 * *(int *)((int)this + 0x6c) + iVar4;
      if (((*(int *)(*(int *)((int)this + 100) + iVar5 * 8) == 0) &&
          (uVar2 = FUN_004a4c50(this,iVar5), (param_2 & uVar2) != 0)) &&
         ((iVar6 = FUN_004a8a50(this,param_1,iVar5), iVar6 < iVar8 &&
          ((iVar7 = FUN_004edbb0(this,iVar5), iVar7 == 0 &&
           ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar5 * 8) & 0x200) == 0)))))) {
        bVar1 = true;
        iVar8 = iVar6;
        local_18 = iVar5;
      }
      iVar5 = local_14 * *(int *)((int)this + 0x6c) + iVar4;
      if ((((*(int *)(*(int *)((int)this + 100) + iVar5 * 8) == 0) &&
           (uVar2 = FUN_004a4c50(this,iVar5), (param_2 & uVar2) != 0)) &&
          (iVar6 = FUN_004a8a50(this,param_1,iVar5), iVar6 < iVar8)) &&
         ((iVar7 = FUN_004edbb0(this,iVar5), iVar7 == 0 &&
          ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar5 * 8) & 0x200) == 0)))) {
        bVar1 = true;
        iVar8 = iVar6;
        local_18 = iVar5;
      }
    }
    for (; iVar5 <= local_14; iVar5 = iVar5 + 1) {
      iVar4 = iVar5 * *(int *)((int)this + 0x6c) + local_20;
      if (((*(int *)(*(int *)((int)this + 100) + iVar4 * 8) == 0) &&
          (uVar2 = FUN_004a4c50(this,iVar4), (param_2 & uVar2) != 0)) &&
         ((iVar6 = FUN_004a8a50(this,param_1,iVar4), iVar6 < iVar8 &&
          ((iVar7 = FUN_004edbb0(this,iVar4), iVar7 == 0 &&
           ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar4 * 8) & 0x200) == 0)))))) {
        bVar1 = true;
        iVar8 = iVar6;
        local_18 = iVar4;
      }
      iVar4 = iVar5 * *(int *)((int)this + 0x6c) + local_1c;
      if ((((*(int *)(*(int *)((int)this + 100) + iVar4 * 8) == 0) &&
           (uVar2 = FUN_004a4c50(this,iVar4), (param_2 & uVar2) != 0)) &&
          (iVar6 = FUN_004a8a50(this,param_1,iVar4), iVar6 < iVar8)) &&
         ((iVar7 = FUN_004edbb0(this,iVar4), iVar7 == 0 &&
          ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar4 * 8) & 0x200) == 0)))) {
        bVar1 = true;
        iVar8 = iVar6;
        local_18 = iVar4;
      }
    }
    local_c = local_c + -1;
    local_8 = local_8 + 1;
  } while ((!bVar1) &&
          (((local_20 != 0 || (local_10 != 0)) ||
           ((local_1c != *(int *)((int)this + 0x6c) + -1 ||
            (local_14 != *(int *)((int)this + 0x70) + -1))))));
  if (local_18 == -1) {
    local_18 = param_1;
  }
  return local_18;
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
}
