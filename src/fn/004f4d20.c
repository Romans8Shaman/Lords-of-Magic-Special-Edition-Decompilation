/* Rebuilt from lomse.exe FUN_004f4d20 @ 0x004f4d20 (1094 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584aac (*(int * *)0x00584aac)
#define DAT_00584ab0 (*(int * *)0x00584ab0)

#define LOM_SELF_004f4d20 1
undefined4 __thiscall
rb_004f4d20(void *this,ushort *param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
            int param_6,int *param_7,int param_8)

{
  char cVar3;
  uint uVar1;
  int iVar2;
  undefined4 *a6;
  ushort uVar4;
  bool bVar5;
  uchar _fr[0xb0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_a8;
  typedef ushort _t_local_a4;
  typedef uint _t_local_9c;
  typedef int _t_local_98;
  typedef int _t_iStack_94;
  typedef int _t_local_90;
  typedef int _t_iStack_8c;
  typedef int _t_local_88;
  typedef int _t_iStack_84;
  typedef int _t_local_80;
  typedef int _t_iStack_7c;
  typedef int _t_local_78;
  typedef int _t_local_74;
  typedef int _t_local_70;
  typedef int _t_local_6c;
  typedef undefined4 * _t_local_68;
  typedef undefined4 _t_uStack_64;
  typedef uint _t_local_60;
#define local_a8 (*(_t_local_a8 *)(_fr + 0x0))
#define local_a4 (*(_t_local_a4 *)(_fr + 0x4))
#define local_9c (*(_t_local_9c *)(_fr + 0xc))
#define local_98 (*(_t_local_98 *)(_fr + 0x10))
#define iStack_94 (*(_t_iStack_94 *)(_fr + 0x14))
#define local_90 (*(_t_local_90 *)(_fr + 0x18))
#define iStack_8c (*(_t_iStack_8c *)(_fr + 0x1c))
#define local_88 (*(_t_local_88 *)(_fr + 0x20))
#define iStack_84 (*(_t_iStack_84 *)(_fr + 0x24))
#define local_80 (*(_t_local_80 *)(_fr + 0x28))
#define iStack_7c (*(_t_iStack_7c *)(_fr + 0x2c))
#define local_78 (*(_t_local_78 *)(_fr + 0x30))
#define local_74 (*(_t_local_74 *)(_fr + 0x34))
#define local_70 (*(_t_local_70 *)(_fr + 0x38))
#define local_6c (*(_t_local_6c *)(_fr + 0x3c))
#define local_68 (*(_t_local_68 *)(_fr + 0x40))
#define uStack_64 (*(_t_uStack_64 *)(_fr + 0x44))
#define local_60 (*(_t_local_60 *)(_fr + 0x48))
  
  if ((param_5 & 4) == 0) {
LAB_004f5140:
    ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(param_3), __typeof__(param_4)))(**(code **)(*(int *)this + 0xc)))(this,param_3,param_4);
    return 0;
  }
  uVar4 = *param_1;
  if ((uVar4 & 4) != 0) goto LAB_004f5140;
  if (*(int *)(param_1 + 6) == 0) {
    return 0;
  }
  if ((param_5 & 0x80) == 0) {
    local_78 = *DAT_00584aac;
    local_70 = DAT_00584aac[2];
    local_74 = DAT_00584aac[1];
    local_6c = DAT_00584aac[3];
  }
  else {
    local_78 = 0;
    local_70 = 0x27f;
    local_74 = 0;
    local_6c = 0x1dc;
  }
  uVar1 = (uint)param_1[1];
  bVar5 = (param_5 & 1) == (uVar4 & 1);
  local_9c = 0;
  local_68 = (undefined4 *)0x0;
  local_a8 = 0;
  local_60 = 0;
  cVar3 = (char)(uVar4 >> 8);
  if (bVar5) {
    if (cVar3 == '\0') {
      local_a4 = param_1[4];
    }
    else {
      local_a4 = *(ushort *)(*(int *)(param_1 + 4) + 2);
    }
  }
  else {
    if (cVar3 == '\0') {
      local_a4 = param_1[4];
    }
    else {
      local_a4 = *(ushort *)(*(int *)(param_1 + 4) + 2);
    }
    local_a4 = -local_a4;
    if ((param_1[1] & 1) == 0) {
      local_a4 = local_a4 + 1;
    }
    if (param_8 != 0) {
      local_9c = 0x800;
      local_60 = 2;
    }
  }
  local_88 = *param_7;
  local_80 = uVar1 - param_7[2];
  if (param_6 != 100) {
    uVar1 = (uVar1 * param_6) / 100;
    local_a4 = (ushort)(((short)local_a4 * param_6) / 100);
  }
  local_98 = ((int)(short)local_a4 - (uVar1 >> 1)) + local_78 + param_3 + local_88;
  local_90 = (uVar1 + local_98) - param_7[2];
  if ((local_70 < local_98) || (local_90 < local_78)) {
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x10)))(this);
    return 0;
  }
  if ((bVar5) || (param_8 == 0)) {
    iVar2 = local_98 - local_78;
    if (iVar2 < 0) {
      local_98 = local_78;
      local_88 = local_88 - iVar2;
    }
    else {
      iVar2 = (local_70 - local_90) + 1;
      if (iVar2 < 0) {
        local_80 = local_80 + iVar2;
        local_90 = local_90 + iVar2;
        goto LAB_004f4f06;
      }
    }
  }
  else {
    if (local_98 - local_78 < 0) {
      local_80 = local_80 + (local_98 - local_78);
      local_98 = local_78;
    }
    else {
      iVar2 = (local_70 - local_90) + 1;
      if (-1 < iVar2) goto LAB_004f4f0e;
      local_90 = local_90 + iVar2;
      local_88 = local_88 - iVar2;
    }
LAB_004f4f06:
    local_a8 = 1;
  }
LAB_004f4f0e:
  ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(&local_98)))(**(code **)(*(int *)this + 4)))(this,&local_98);
  uVar4 = *param_1;
  uVar1 = (uint)param_1[2];
  bVar5 = (param_5 & 2) == (uVar4 & 2);
  if (bVar5) {
    if ((uVar4 & 0xff00) == 0) {
      uVar4 = param_1[5];
    }
    else {
      uVar4 = *(ushort *)(*(int *)(param_1 + 4) + 4);
    }
  }
  else {
    if ((uVar4 & 0xff00) == 0) {
      uVar4 = param_1[5];
    }
    else {
      uVar4 = *(ushort *)(*(int *)(param_1 + 4) + 4);
    }
    uVar4 = -uVar4;
    local_60 = local_60 | 4;
    local_9c = 0x800;
  }
  iStack_84 = param_7[1];
  iStack_7c = uVar1 - param_7[3];
  if (param_6 != 100) {
    uVar1 = (uVar1 * param_6) / 100;
    uVar4 = (ushort)(((short)uVar4 * param_6) / 100);
  }
  iStack_94 = ((int)(short)uVar4 - (uVar1 >> 1)) + local_74 + param_4 + iStack_84;
  iStack_8c = (uVar1 + iStack_94) - param_7[3];
  if ((local_6c < iStack_94) || (iStack_8c < local_74)) {
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x10)))(this);
    return 0;
  }
  if (bVar5) {
    if (iStack_94 - local_74 < 0) {
      iStack_84 = iStack_84 - (iStack_94 - local_74);
      iStack_94 = local_74;
      goto LAB_004f506a;
    }
    iVar2 = (local_6c - iStack_8c) + 1;
    if (-1 < iVar2) goto LAB_004f506a;
    iStack_8c = iStack_8c + iVar2;
    iStack_7c = iStack_7c + iVar2;
  }
  else if (iStack_94 - local_74 < 0) {
    iStack_7c = iStack_7c - (iStack_94 - local_74);
    iStack_94 = local_74;
  }
  else {
    iVar2 = (local_6c - iStack_8c) + 1;
    if (-1 < iVar2) goto LAB_004f506a;
    iStack_8c = iStack_8c + iVar2;
    iStack_84 = iStack_84 - iVar2;
  }
  local_a8 = local_a8 + 1;
LAB_004f506a:
  ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(&local_98)))(**(code **)(*(int *)this + 8)))(this,&local_98);
  if (((local_9c == 0) && (param_6 == 100)) && (local_a8 == 0)) {
    ((undefined4 (__stdcall *)(__typeof__(DAT_00584ab0), __typeof__(local_98), __typeof__(iStack_94), __typeof__(param_2), __typeof__(&local_88), __typeof__(0x11)))(**(code **)(*DAT_00584ab0 + 0x1c)))(DAT_00584ab0,local_98,iStack_94,param_2,&local_88,0x11);
    return 0;
  }
  if (local_9c == 0) {
    a6 = local_68;
  }
  else {
    uStack_64 = 100;
    a6 = &uStack_64;
  }
  ((undefined4 (__thiscall *)(__typeof__(DAT_00584ab0), __typeof__(DAT_00584ab0), __typeof__(&local_98), __typeof__(param_2), __typeof__(&local_88), __typeof__(local_9c | 0x1008000), __typeof__(a6)))(**(code **)(*DAT_00584ab0 + 0x14)))
            (DAT_00584ab0,DAT_00584ab0,&local_98,param_2,&local_88,local_9c | 0x1008000,a6);
  return 0;
#undef local_a8
#undef local_a4
#undef local_9c
#undef local_98
#undef iStack_94
#undef local_90
#undef iStack_8c
#undef local_88
#undef iStack_84
#undef local_80
#undef iStack_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef uStack_64
#undef local_60
}
