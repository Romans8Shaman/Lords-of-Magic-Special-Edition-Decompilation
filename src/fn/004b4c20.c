/* Rebuilt from lomse.exe FUN_004b4c20 @ 0x004b4c20 (412 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573428 (*(undefined4 *)0x00573428)
#define DAT_00583560 (*(undefined4 *)0x00583560)
#define DAT_005843f0 (*(uint *)0x005843f0)
#define DAT_005843f4 (*(int * *)0x005843f4)
#define DAT_00584424 (*(undefined4 *)0x00584424)
#define DAT_00584604 (*(undefined4 *)0x00584604)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b78c0 ((int (__fastcall *)(void *))0x004b78c0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004b4c20 1
void __thiscall rb_004b4c20(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uchar _fr[0x118] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_110;
  typedef int _t_local_108[5];
  typedef undefined4 _t_local_f3;
  typedef undefined4 _t_local_ef;
  typedef undefined4 _t_local_eb;
  typedef undefined4 _t_local_e7;
  typedef undefined4 _t_local_e3;
  typedef undefined4 _t_local_df;
  typedef undefined4 _t_local_db;
  typedef float _t_local_d7;
  typedef undefined4 _t_local_d3;
  typedef undefined4 _t_local_cf;
#define local_110 (*(_t_local_110 *)(_fr + 0x0))
#define local_108 (*(_t_local_108 *)(_fr + 0x8))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x1d))
#define local_ef (*(_t_local_ef *)(_fr + 0x21))
#define local_eb (*(_t_local_eb *)(_fr + 0x25))
#define local_e7 (*(_t_local_e7 *)(_fr + 0x29))
#define local_e3 (*(_t_local_e3 *)(_fr + 0x2d))
#define local_df (*(_t_local_df *)(_fr + 0x31))
#define local_db (*(_t_local_db *)(_fr + 0x35))
#define local_d7 (*(_t_local_d7 *)(_fr + 0x39))
#define local_d3 (*(_t_local_d3 *)(_fr + 0x3d))
#define local_cf (*(_t_local_cf *)(_fr + 0x41))
  
  if (*(void **)((int)this + 0x4b2c) == (void *)0x0) {
    iVar3 = 1;
  }
  else {
    iVar3 = FUN_004b78c0(*(void **)((int)this + 0x4b2c));
  }
  if (1 < iVar3) {
    FUN_0048cc70(local_108,0x5f);
    fVar5 = 0.0;
    uVar7 = 0;
    uVar6 = 0;
    iVar3 = FUN_0048a400(0x584ae8);
    if (((iVar3 != 0) && (0 < iVar3)) && (iVar3 < 3)) {
      if (((char)DAT_005843f0 == '\x06') && ((DAT_005843f0 & 0x100) == 0)) {
        FUN_004d05e0(DAT_005a7b78,DAT_005843f0,DAT_005843f4);
        pvVar2 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
          piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
          iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
          uVar4 = *(uint *)(*piVar1 + -8 + iVar3 * 8);
          local_110 = *(float *)(*piVar1 + -4 + iVar3 * 8);
        }
        else {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
          FUN_004d4550(pvVar2);
          *(undefined4 *)((int)pvVar2 + 0x90) = 0;
          *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
          uVar4 = 0;
        }
        uVar4 = uVar4 & 0xff;
        if (uVar4 == 1) {
          fVar5 = local_110;
        }
        else if (uVar4 == 2) {
          fVar5 = __BC(float, (__BC(int, local_110) >> 8));
        }
        else if (uVar4 == 4) {
          lVar8 = __ftol((float10)local_110);
          fVar5 = __BC(float, lVar8);
        }
        else {
          *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
          FUN_004d4550(pvVar2);
          *(undefined4 *)((int)pvVar2 + 0x90) = 0;
          *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
        }
      }
      uVar6 = DAT_00573428;
      uVar7 = DAT_00584604;
    }
    if (*(int *)((int)this + 0x4b2c) == 0) {
      local_f3 = 1;
    }
    else {
      local_f3 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
    }
    local_e3 = DAT_00584424;
    local_ef = param_1;
    local_e7 = DAT_00583560;
    local_d3 = 0;
    local_cf = 0;
    local_eb = param_2;
    local_df = uVar7;
    local_db = uVar6;
    local_d7 = fVar5;
    FUN_00489b70(&DAT_00584ae8,local_108);
  }
  return;
#undef local_110
#undef local_108
#undef local_f3
#undef local_ef
#undef local_eb
#undef local_e7
#undef local_e3
#undef local_df
#undef local_db
#undef local_d7
#undef local_d3
#undef local_cf
}
