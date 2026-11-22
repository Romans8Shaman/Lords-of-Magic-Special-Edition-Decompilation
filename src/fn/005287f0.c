/* Rebuilt from lomse.exe op_addunitmodifier @ 0x005287f0 (831 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_0041dc40 ((undefined4 (__fastcall *)(int))0x0041dc40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00526bf0 ((undefined4 (__fastcall *)(int))0x00526bf0)
#define FUN_00526c10 ((undefined4 (__stdcall *)(void))0x00526c10)
#define FUN_00526fe0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00526fe0)

#define LOM_SELF_005287f0 1
void __cdecl rb_005287f0(void *volatile param_1)

{
  void *this;
  int iVar1;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_44;
  typedef int _t_local_40;
  typedef int _t_local_3c;
  typedef uint _t_local_38;
  typedef uint _t_local_34;
  typedef undefined4 _t_local_30;
  typedef uint _t_local_2c;
  typedef uint _t_local_28;
  typedef uint _t_local_24;
  typedef uint _t_local_20;
  typedef uint _t_local_1c;
  typedef uint _t_local_18;
  typedef uint _t_local_14;
#define local_44 (*(_t_local_44 *)(_fr + 0x4))
#define local_40 (*(_t_local_40 *)(_fr + 0x8))
#define local_3c (*(_t_local_3c *)(_fr + 0xc))
#define local_38 (*(_t_local_38 *)(_fr + 0x10))
#define local_34 (*(_t_local_34 *)(_fr + 0x14))
#define local_30 (*(_t_local_30 *)(_fr + 0x18))
#define local_2c (*(_t_local_2c *)(_fr + 0x1c))
#define local_28 (*(_t_local_28 *)(_fr + 0x20))
#define local_24 (*(_t_local_24 *)(_fr + 0x24))
#define local_20 (*(_t_local_20 *)(_fr + 0x28))
#define local_1c (*(_t_local_1c *)(_fr + 0x2c))
#define local_18 (*(_t_local_18 *)(_fr + 0x30))
#define local_14 (*(_t_local_14 *)(_fr + 0x34))

  FUN_00526bf0((int)&local_2c);
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_34 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_30 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_34 = 0;
  }
  iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(undefined4 *)&param_1);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
  }
  else {
    local_24 = local_44;
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      local_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      local_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      local_34 = 0;
    }
    iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(undefined4 *)&param_1);
    if (iVar1 == 0) {
      FUN_00404ab0(this,0xe);
    }
    else {
      local_14 = local_44;
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        local_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        local_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        local_34 = 0;
      }
      iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(undefined4 *)&param_1);
      if (iVar1 == 0) {
        FUN_00404ab0(this,0xe);
      }
      else {
        local_18 = local_44;
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar1 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar1;
          local_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
          local_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
        }
        else {
          FUN_00404ab0(this,6);
          local_34 = 0;
        }
        iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(undefined4 *)&param_1);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
        }
        else {
          local_1c = local_44;
          FUN_0040adb0(this,&local_34);
          iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(undefined4 *)&param_1);
          if (iVar1 == 0) {
            *(undefined4 *)((int)this + 0x90) = 0xe;
            FUN_004d4550(this);
            *(undefined4 *)((int)this + 0x90) = 0;
            *(undefined4 *)((int)this + 0xa4) = 0;
          }
          else {
            local_20 = local_44;
            FUN_0040adb0(this,&local_34);
            iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(undefined4 *)&param_1);
            if (iVar1 == 0) {
              *(undefined4 *)((int)this + 0x90) = 0xe;
              FUN_004d4550(this);
              *(undefined4 *)((int)this + 0x90) = 0;
              *(undefined4 *)((int)this + 0xa4) = 0;
            }
            else {
              local_28 = local_44;
              FUN_0040adb0(this,&local_34);
              iVar1 = FUN_004026a0(&local_34,&local_44,&local_38,(undefined4 *)&param_1);
              if (iVar1 == 0) {
                FUN_00404ab0(this,0xe);
              }
              else {
                local_2c = local_44;
                iVar1 = FUN_0041bf10(this,&local_40,&local_3c);
                if (iVar1 != 0) {
                  FUN_00526fe0((void *)(local_40 + 0xc4 + local_3c * 0x4c),&local_2c);
                  if (-1 < (int)local_18) {
                    FUN_0041dc40(local_40);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00526c10();
  return;
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
}
