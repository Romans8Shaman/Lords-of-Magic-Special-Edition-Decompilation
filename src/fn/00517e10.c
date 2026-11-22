/* Rebuilt from lomse.exe FUN_00517e10 @ 0x00517e10 (1794 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585174 (*(int * *)0x00585174)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004f6540 ((undefined4 (__thiscall *)(void *, int, int))0x004f6540)

#define LOM_SELF_00517e10 1
undefined4 __thiscall rb_00517e10(void *this,undefined1 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x88] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_80;
  typedef uint _t_local_7c;
  typedef uint _t_local_78;
  typedef int _t_local_74;
  typedef int _t_local_70;
  typedef int _t_local_6c;
  typedef int _t_local_68;
  typedef undefined4 _t_auStack_64[20];
  typedef undefined4 _t_uStack_14;
#define local_80 (*(_t_local_80 *)(_fr + 0x0))
#define local_7c (*(_t_local_7c *)(_fr + 0x4))
#define local_78 (*(_t_local_78 *)(_fr + 0x8))
#define local_74 (*(_t_local_74 *)(_fr + 0xc))
#define local_70 (*(_t_local_70 *)(_fr + 0x10))
#define local_6c (*(_t_local_6c *)(_fr + 0x14))
#define local_68 (*(_t_local_68 *)(_fr + 0x18))
#define auStack_64 (*(_t_auStack_64 *)(_fr + 0x1c))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x6c))
  
  iVar6 = 0;
  switch(param_1) {
  case 0:
    iVar5 = *(int *)((int)this + 0x1f0);
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) + iVar5;
    *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1ec);
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    *(int *)((int)this + 0x1b4) = iVar5 * 2 - *(int *)((int)this + 0x1e0);
    local_68 = iVar5 + 0x17f;
    local_70 = 0;
    local_74 = 0;
    ((undefined4 (__thiscall *)(__typeof__(DAT_00585174), __typeof__(DAT_00585174), __typeof__(0), __typeof__(iVar5), __typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0)))(**(code **)(*DAT_00585174 + 0x1c)))(DAT_00585174,DAT_00585174,0,iVar5,DAT_00585174,&local_74,0);
    local_68 = *(int *)((int)this + 0x1f0);
    local_70 = 0;
    goto LAB_00518240;
  case 1:
    iVar5 = *(int *)((int)this + 0x1f0);
    local_74 = *(int *)((int)this + 0x1ec);
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) + iVar5;
    *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)((int)this + 0x1dc);
    local_6c = local_74 * 2 + 0x280;
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) - local_74;
    *(int *)((int)this + 0x1b4) = iVar5 * 2 - *(int *)((int)this + 0x1e0);
    local_68 = iVar5 + 0x17f;
    local_70 = 0;
    ((undefined4 (__thiscall *)(__typeof__(DAT_00585174), __typeof__(DAT_00585174), __typeof__(0), __typeof__(iVar5), __typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0)))(**(code **)(*DAT_00585174 + 0x1c)))(DAT_00585174,DAT_00585174,0,iVar5,DAT_00585174,&local_74,0);
    local_68 = *(undefined4 *)((int)this + 0x1f0);
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    local_70 = 0;
    local_74 = 0;
    auStack_64[0] = 100;
    uStack_14 = 0;
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0), __typeof__(0), __typeof__(0x400), __typeof__(auStack_64)))(**(code **)(*DAT_00585174 + 0x14)))(DAT_00585174,&local_74,0,0,0x400,auStack_64);
    local_70 = 0;
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    local_74 = *(int *)((int)this + 0x1ec) + 0x280;
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    break;
  case 2:
    local_74 = *(int *)((int)this + 0x1ec);
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) - local_74;
    *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)((int)this + 0x1dc);
    local_6c = local_74 * 2 + 0x280;
    *(int *)((int)this + 0x1b4) = *(int *)((int)this + 0x1f0);
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    local_70 = 0;
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(0), __typeof__(0), __typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0)))(**(code **)(*DAT_00585174 + 0x1c)))(DAT_00585174,0,0,DAT_00585174,&local_74,0);
    local_70 = 0;
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    local_74 = *(int *)((int)this + 0x1ec) + 0x280;
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    goto LAB_005183f0;
  case 3:
    local_70 = *(int *)((int)this + 0x1f0);
    local_74 = *(int *)((int)this + 0x1ec);
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) - local_70;
    *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)((int)this + 0x1dc);
    *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)((int)this + 0x1e0);
    local_6c = local_74 * 2 + 0x280;
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) - local_74;
    local_68 = local_70 * 2 + 0x17f;
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(0), __typeof__(0), __typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0)))(**(code **)(*DAT_00585174 + 0x1c)))(DAT_00585174,0,0,DAT_00585174,&local_74,0);
    iVar5 = *(int *)((int)this + 0x1f0);
    local_74 = *(int *)((int)this + 0x1ec) + 0x280;
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    goto LAB_005182ee;
  case 4:
    local_70 = *(int *)((int)this + 0x1f0);
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) - local_70;
    *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1ec);
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    local_68 = local_70 * 2 + 0x17f;
    *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)((int)this + 0x1e0);
    local_74 = 0;
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(0), __typeof__(0), __typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0)))(**(code **)(*DAT_00585174 + 0x1c)))(DAT_00585174,0,0,DAT_00585174,&local_74,0);
    local_70 = *(int *)((int)this + 0x1f0) + 0x17f;
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
LAB_00518240:
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
LAB_005183ec:
    local_74 = 0;
LAB_005183f0:
    auStack_64[0] = 100;
    uStack_14 = 0;
    break;
  case 5:
    iVar5 = *(int *)((int)this + 0x1ec);
    local_70 = *(int *)((int)this + 0x1f0);
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) + iVar5;
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) - local_70;
    local_68 = local_70 * 2 + 0x17f;
    *(int *)((int)this + 0x1b0) = iVar5 * 2 - *(int *)((int)this + 0x1dc);
    *(int *)((int)this + 0x1b4) = *(int *)((int)this + 0x1dc);
    local_6c = iVar5 + 0x280;
    local_74 = 0;
    ((undefined4 (__thiscall *)(__typeof__(DAT_00585174), __typeof__(DAT_00585174), __typeof__(iVar5), __typeof__(0), __typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0)))(**(code **)(*DAT_00585174 + 0x1c)))(DAT_00585174,DAT_00585174,iVar5,0,DAT_00585174,&local_74,0);
    iVar5 = *(int *)((int)this + 0x1f0);
    local_6c = *(int *)((int)this + 0x1ec);
    local_74 = 0;
LAB_005182ee:
    local_68 = iVar5 * 2 + 0x17f;
    local_70 = 0;
    auStack_64[0] = 100;
    uStack_14 = 0;
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0), __typeof__(0), __typeof__(0x400), __typeof__(auStack_64)))(**(code **)(*DAT_00585174 + 0x14)))(DAT_00585174,&local_74,0,0,0x400,auStack_64);
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(auStack_64 + -10), __typeof__(0), __typeof__(0), __typeof__(0x400), __typeof__(&local_7c)))(**(code **)(*DAT_00585174 + 0x14)))(DAT_00585174,auStack_64 + -10,0,0,0x400,&local_7c);
    goto switchD_00517e2d_caseD_ff;
  case 6:
    iVar5 = *(int *)((int)this + 0x1ec);
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) + iVar5;
    *(int *)((int)this + 0x1b4) = *(int *)((int)this + 0x1f0);
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    *(int *)((int)this + 0x1b0) = iVar5 * 2 - *(int *)((int)this + 0x1dc);
    local_6c = iVar5 + 0x280;
    local_70 = 0;
    local_74 = 0;
    ((undefined4 (__thiscall *)(__typeof__(DAT_00585174), __typeof__(DAT_00585174), __typeof__(iVar5), __typeof__(0), __typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0)))(**(code **)(*DAT_00585174 + 0x1c)))(DAT_00585174,DAT_00585174,iVar5,0,DAT_00585174,&local_74,0);
    local_6c = *(int *)((int)this + 0x1ec);
    local_70 = 0;
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    goto LAB_005183ec;
  case 7:
    iVar5 = *(int *)((int)this + 0x1f0);
    iVar1 = *(int *)((int)this + 0x1ec);
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) + iVar5;
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) + iVar1;
    *(int *)((int)this + 0x1b0) = iVar1 * 2 - *(int *)((int)this + 0x1dc);
    *(int *)((int)this + 0x1b4) = iVar5 * 2 - *(int *)((int)this + 0x1e0);
    local_68 = iVar5 + 0x17f;
    local_6c = iVar1 + 0x280;
    local_70 = 0;
    local_74 = 0;
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(iVar1), __typeof__(iVar5), __typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0)))(**(code **)(*DAT_00585174 + 0x1c)))(DAT_00585174,iVar1,iVar5,DAT_00585174,&local_74,0);
    local_68 = *(undefined4 *)((int)this + 0x1f0);
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    local_70 = 0;
    local_74 = 0;
    auStack_64[0] = 100;
    uStack_14 = 0;
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0), __typeof__(0), __typeof__(0x400), __typeof__(auStack_64)))(**(code **)(*DAT_00585174 + 0x14)))(DAT_00585174,&local_74,0,0,0x400,auStack_64);
    local_6c = *(int *)((int)this + 0x1ec);
    local_70 = 0;
    local_74 = 0;
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    break;
  default:
    goto switchD_00517e2d_caseD_ff;
  }
  ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(&local_74), __typeof__(0), __typeof__(0), __typeof__(0x400), __typeof__(auStack_64)))(**(code **)(*DAT_00585174 + 0x14)))(DAT_00585174,&local_74,0,0,0x400,auStack_64);
switchD_00517e2d_caseD_ff:
  if (*(int *)((int)this + 0x218) != 0) {
    local_7c = *(uint *)((int)this + 0x1a4);
    iVar5 = 8;
    local_78 = *(uint *)((int)this + 0x1a8);
    iVar1 = (local_7c ^ (int)local_7c >> 0x1f) - ((int)local_7c >> 0x1f);
    local_80 = (local_78 ^ (int)local_78 >> 0x1f) - ((int)local_78 >> 0x1f);
    if (local_80 <= iVar1) {
      local_80 = iVar1;
    }
    piVar4 = (int *)((int)this + 0x250);
    do {
      uVar3 = (int)(piVar4[-9] + local_7c) >> 0x1f;
      iVar2 = (piVar4[-9] + local_7c ^ uVar3) - uVar3;
      uVar3 = (int)(local_78 + *piVar4) >> 0x1f;
      iVar1 = (local_78 + *piVar4 ^ uVar3) - uVar3;
      if (iVar1 <= iVar2) {
        iVar1 = iVar2;
      }
      if (iVar1 < local_80) {
        iVar5 = iVar6;
        local_80 = iVar1;
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 8);
    if (iVar5 != 8) {
      *(int *)((int)this + 0x1fc) =
           *(int *)((int)this + 0x1fc) + *(int *)((int)this + iVar5 * 4 + 0x22c);
      *(uint *)((int)this + 0x1a4) = local_7c + *(int *)((int)this + iVar5 * 4 + 0x22c);
      *(int *)((int)this + 0x200) =
           *(int *)((int)this + 0x200) + *(int *)((int)this + iVar5 * 4 + 0x250);
      *(uint *)((int)this + 0x1a8) = local_78 + *(int *)((int)this + iVar5 * 4 + 0x250);
      FUN_004f6540(&DAT_005ae974,*(int *)((int)this + iVar5 * 4 + 0x22c),
                   *(int *)((int)this + iVar5 * 4 + 0x250));
    }
  }
  return 1;
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef auStack_64
#undef uStack_14
}
