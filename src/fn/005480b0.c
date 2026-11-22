/* Rebuilt from lomse.exe FUN_005480b0 @ 0x005480b0 (696 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005473b0 ((undefined4 (__cdecl *)(uint, uint, uint *))0x005473b0)
#define FUN_00547450 ((undefined4 (__cdecl *)(uint *))0x00547450)
#define FUN_00547480 ((undefined4 (__cdecl *)(uint *))0x00547480)

#define LOM_SELF_005480b0 1
uint __cdecl rb_005480b0(int *volatile param_1, int *volatile param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_24;
  typedef short * _t_local_20;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef byte _t_local_c;
  typedef undefined1 _t_uStack_b;
  typedef undefined2 _t_uStack_a;
  typedef short _t_local_8;
  typedef undefined2 _t_uStack_6;
  typedef undefined2 _t_local_4;
  typedef ushort _t_uStack_2;
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define local_14 (*(_t_local_14 *)(_fr + 0x14))
#define local_10 (*(_t_local_10 *)(_fr + 0x18))
#define local_c (*(_t_local_c *)(_fr + 0x1c))
#define uStack_b (*(_t_uStack_b *)(_fr + 0x1d))
#define uStack_a (*(_t_uStack_a *)(_fr + 0x1e))
#define local_8 (*(_t_local_8 *)(_fr + 0x20))
#define uStack_6 (*(_t_uStack_6 *)(_fr + 0x22))
#define local_4 (*(_t_local_4 *)(_fr + 0x24))
#define uStack_2 (*(_t_uStack_2 *)(_fr + 0x26))
  
  local_14 = 0;
  local_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  local_8 = 0;
  uStack_6 = 0;
  uVar4 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar2 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar7 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  local_24 = uVar4 + uVar2;
  local_4 = 0;
  uStack_2 = 0;
  if (((0x7ffe < (ushort)uVar2) || (uVar5 = (ushort)uVar4, 0x7ffe < uVar5)) ||
     (0xbffd < (ushort)local_24)) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar7 != 0) & 0x80000000) + 0x7fff8000;
    return uVar2;
  }
  if ((ushort)local_24 < 0x3fc0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return uVar2;
  }
  if ((ushort)uVar2 == 0) {
    local_24 = local_24 + 1;
    if ((((param_1[2] & 0x7fffffffU) == 0) && (param_1[1] == 0)) && (*param_1 == 0)) {
      *(undefined2 *)((int)param_1 + 10) = 0;
      return param_1[2];
    }
  }
  if (uVar5 == 0) {
    uVar2 = param_2[2];
    local_24 = local_24 + 1;
    if ((((uVar2 & 0x7fffffff) == 0) && (param_2[1] == 0)) && (*param_2 == 0)) {
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      return uVar2;
    }
  }
  local_20 = &local_8;
  local_18 = 0;
  iVar6 = 5;
  do {
    if (0 < iVar6) {
      puVar9 = (ushort *)(param_2 + 2);
      puVar8 = (ushort *)(local_18 * 2 + (int)param_1);
      local_10 = iVar6;
      do {
        iVar3 = FUN_005473b0(*(uint *)(local_20 + -2),(uint)*puVar9 * (uint)*puVar8,
                             (uint *)(local_20 + -2));
        if (iVar3 != 0) {
          *local_20 = *local_20 + 1;
        }
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + -1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    local_20 = local_20 + 1;
    local_18 = local_18 + 1;
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  local_24 = local_24 + 0xc002;
  sVar1 = (short)local_24;
  while ((uVar5 = (ushort)local_24, 0 < sVar1 && ((uStack_2 & 0x8000) == 0))) {
    FUN_00547450((uint *)&local_c);
    local_24 = local_24 + 0xffff;
    sVar1 = (short)local_24;
  }
  if ((short)uVar5 < 1) {
    uVar5 = uVar5 - 1;
    if ((short)uVar5 < 0) {
      iVar6 = -(int)(short)uVar5;
      uVar5 = uVar5 + (short)iVar6;
      do {
        if ((local_c & 1) != 0) {
          local_14 = local_14 + 1;
        }
        FUN_00547480((uint *)&local_c);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (local_14 != 0) {
      local_c = local_c | 1;
    }
  }
  if ((0x8000 < CONCAT11(uStack_b,local_c)) ||
     (uVar2 = CONCAT22(uStack_a,CONCAT11(uStack_b,local_c)) & 0x1ffff,
     iVar3 = CONCAT22(local_4,uStack_6), iVar6 = CONCAT22(local_8,uStack_a), uVar2 == 0x18000)) {
    uVar2 = 0xffffffff;
    if (CONCAT22(local_8,uStack_a) == -1) {
      iVar6 = 0;
      if (CONCAT22(local_4,uStack_6) == -1) {
        if (uStack_2 == 0xffff) {
          uStack_2 = 0x8000;
          uVar5 = uVar5 + 1;
          iVar3 = 0;
          iVar6 = 0;
        }
        else {
          uStack_2 = uStack_2 + 1;
          iVar3 = 0;
          iVar6 = 0;
        }
      }
      else {
        iVar3 = CONCAT22(local_4,uStack_6) + 1;
      }
    }
    else {
      iVar6 = CONCAT22(local_8,uStack_a) + 1;
      iVar3 = CONCAT22(local_4,uStack_6);
    }
  }
  local_8 = (short)((uint)iVar6 >> 0x10);
  uStack_a = (undefined2)iVar6;
  local_4 = (undefined2)((uint)iVar3 >> 0x10);
  uStack_6 = (undefined2)iVar3;
  if (uVar5 < 0x7fff) {
    *(undefined2 *)param_1 = uStack_a;
    *(uint *)((int)param_1 + 2) = CONCAT22(uStack_6,local_8);
    *(uint *)((int)param_1 + 6) = CONCAT22(uStack_2,local_4);
    *(ushort *)((int)param_1 + 10) = uVar5 | uVar7;
    return CONCAT22(uStack_6,local_8);
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = (-(uint)(uVar7 != 0) & 0x80000000) + 0x7fff8000;
  return uVar2;
#undef local_24
#undef local_20
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef uStack_b
#undef uStack_a
#undef local_8
#undef uStack_6
#undef local_4
#undef uStack_2
}
