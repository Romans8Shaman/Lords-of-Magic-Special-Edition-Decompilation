/* Rebuilt from lomse.exe op_addspelldef @ 0x004f01b0 (803 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): local_c4 */
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_0043da90 ((undefined8 (__thiscall *)(void *, int *))0x0043da90)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004efcd0 ((undefined4 (__fastcall *)(undefined4 *))0x004efcd0)
#define FUN_004efd60 ((undefined4 (__stdcall *)(void))0x004efd60)
#define FUN_004efff0 ((int (__thiscall *)(void *, undefined4 *))0x004efff0)
#define FUN_004f2050 ((undefined4 (__fastcall *)(void *))0x004f2050)

#define LOM_SELF_004f01b0 1
void __cdecl rb_004f01b0(void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uchar _fr[0xd0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_c8;
  undefined4 local_c4;
  typedef undefined4 _t_local_c0;
  typedef undefined4 _t_local_bc;
  typedef uint _t_local_b8;
  typedef uint _t_local_b4;
  typedef int _t_local_b0;
  typedef int _t_local_ac[2];
  typedef undefined4 _t_local_a4;
  typedef int _t_local_a0[6];
  typedef int _t_local_88;
  typedef uint _t_local_84;
  typedef int _t_local_80;
  typedef int _t_local_7c[4];
  typedef undefined4 _t_local_6c;
  typedef undefined4 _t_local_68;
  typedef undefined4 _t_local_64;
  typedef undefined4 _t_local_60;
  typedef undefined4 _t_local_5c;
  typedef undefined4 _t_local_58;
  typedef undefined4 _t_local_54;
  typedef undefined4 _t_local_50;
  typedef undefined4 _t_local_4c;
  typedef undefined4 _t_local_48;
  typedef undefined4 _t_local_34;
  typedef undefined4 _t_local_30;
  typedef undefined4 _t_local_2c;
  typedef undefined4 _t_local_28;
#define local_c8 (*(_t_local_c8 *)(_fr + 0x0))
#define local_c0 (*(_t_local_c0 *)(_fr + 0x8))
#define local_bc (*(_t_local_bc *)(_fr + 0xc))
#define local_b8 (*(_t_local_b8 *)(_fr + 0x10))
#define local_b4 (*(_t_local_b4 *)(_fr + 0x14))
#define local_b0 (*(_t_local_b0 *)(_fr + 0x18))
#define local_ac (*(_t_local_ac *)(_fr + 0x1c))
#define local_a4 (*(_t_local_a4 *)(_fr + 0x24))
#define local_a0 (*(_t_local_a0 *)(_fr + 0x28))
#define local_88 (*(_t_local_88 *)(_fr + 0x40))
#define local_84 (*(_t_local_84 *)(_fr + 0x44))
#define local_80 (*(_t_local_80 *)(_fr + 0x48))
#define local_7c (*(_t_local_7c *)(_fr + 0x4c))
#define local_6c (*(_t_local_6c *)(_fr + 0x5c))
#define local_68 (*(_t_local_68 *)(_fr + 0x60))
#define local_64 (*(_t_local_64 *)(_fr + 0x64))
#define local_60 (*(_t_local_60 *)(_fr + 0x68))
#define local_5c (*(_t_local_5c *)(_fr + 0x6c))
#define local_58 (*(_t_local_58 *)(_fr + 0x70))
#define local_54 (*(_t_local_54 *)(_fr + 0x74))
#define local_50 (*(_t_local_50 *)(_fr + 0x78))
#define local_4c (*(_t_local_4c *)(_fr + 0x7c))
#define local_48 (*(_t_local_48 *)(_fr + 0x80))
#define local_34 (*(_t_local_34 *)(_fr + 0x94))
#define local_30 (*(_t_local_30 *)(_fr + 0x98))
#define local_2c (*(_t_local_2c *)(_fr + 0x9c))
#define local_28 (*(_t_local_28 *)(_fr + 0xa0))

  FUN_004efcd0(&local_b8);
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_2c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_28 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_2c = 0;
    local_28 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_34 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_30 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_34 = 0;
    local_30 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_4c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_48 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_4c = 0;
    local_48 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_54 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_50 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_54 = 0;
    local_50 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_5c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_58 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_5c = 0;
    local_58 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_64 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_60 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_64 = 0;
    local_60 = local_c4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_6c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_c4 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_6c = 0;
  }
  local_68 = local_c4;
  FUN_0040adb0(param_1,&local_c8);
  iVar1 = FUN_004026a0(&local_c8,&local_b4,(uint *)&local_c0,&local_bc);
  if (iVar1 == 0) {
    FUN_00404ab0(param_1,0xe);
  }
  else {
    FUN_0040adb0(param_1,&local_c8);
    iVar1 = FUN_004026a0(&local_c8,&local_b8,(uint *)&local_bc,&local_c0);
    if (iVar1 == 0) {
      FUN_00404ab0(param_1,0xe);
    }
    else {
      FUN_0040adb0(param_1,&local_c8);
      iVar1 = FUN_004026a0(&local_c8,&local_84,(uint *)&local_bc,&local_c0);
      if (iVar1 == 0) {
        FUN_00404ab0(param_1,0xe);
      }
      else {
        uVar2 = FUN_0043da90(param_1,&local_88);
        if ((int)uVar2 != 0) {
          uVar2 = FUN_0043da90(param_1,&local_80);
          if ((int)uVar2 != 0) {
            uVar2 = FUN_0043da90(param_1,local_a0);
            if ((int)uVar2 != 0) {
              uVar2 = FUN_0043da90(param_1,local_7c);
              if ((int)uVar2 != 0) {
                local_a4 = FUN_004f2050(param_1);
                uVar2 = FUN_0043da90(param_1,&local_b0);
                if ((int)uVar2 != 0) {
                  uVar2 = FUN_0043da90(param_1,local_ac);
                  if ((int)uVar2 != 0) {
                    iVar1 = FUN_004efff0(&DAT_005aee6c,&local_b8);
                    FUN_0041d1d0(param_1,1,iVar1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_004efd60();
  return;
#undef local_c8
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a4
#undef local_a0
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
}
