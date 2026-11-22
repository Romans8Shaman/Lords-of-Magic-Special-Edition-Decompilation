/* Rebuilt from lomse.exe op_addbuildinginfo @ 0x0043c6a0 (894 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579088 (*(int *)0x00579088)
#define DAT_005cd310 (*(undefined *)0x005cd310)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_0043be40 ((undefined4 (__fastcall *)(undefined4 *))0x0043be40)
#define FUN_0043c390 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0043c390)
#define FUN_0043d6f0 ((undefined4 (__thiscall *)(void *, char *))0x0043d6f0)
#define FUN_0043da90 ((undefined8 (__thiscall *)(void *, int *))0x0043da90)
#define FUN_0043dc30 ((undefined4 (__thiscall *)(void *, undefined2 *))0x0043dc30)
#define s_addbuildinginfo_failed_00556580 (*(char (*)[])0x00556580)

#define LOM_SELF_0043c6a0 1
void __cdecl rb_0043c6a0(void *volatile param_1)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uchar _fr[0x80] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_78;
  typedef char _t_local_74[4];
  typedef undefined4 _t_local_70;
  typedef uint _t_local_6c;
  typedef undefined4 _t_local_68;
  typedef undefined4 _t_local_64;
  typedef uint _t_local_60;
  typedef undefined4 _t_local_5c;
  typedef undefined4 _t_local_58;
  typedef undefined4 _t_local_48;
  typedef undefined4 _t_local_44;
  typedef undefined2 _t_local_40[2];
  typedef uint _t_local_3c;
  typedef uint _t_local_38;
  typedef uint _t_local_34;
  typedef undefined4 _t_local_30;
  typedef undefined4 _t_local_2c;
  typedef uint _t_local_28;
  typedef uint _t_local_24;
  typedef uint _t_local_20;
  typedef uint _t_local_1c;
  typedef uint _t_local_18[3];
#define local_78 (*(_t_local_78 *)(_fr + 0x0))
#define local_74 (*(_t_local_74 *)(_fr + 0x4))
#define local_70 (*(_t_local_70 *)(_fr + 0x8))
#define local_6c (*(_t_local_6c *)(_fr + 0xc))
#define local_68 (*(_t_local_68 *)(_fr + 0x10))
#define local_64 (*(_t_local_64 *)(_fr + 0x14))
#define local_60 (*(_t_local_60 *)(_fr + 0x18))
#define local_5c (*(_t_local_5c *)(_fr + 0x1c))
#define local_58 (*(_t_local_58 *)(_fr + 0x20))
#define local_48 (*(_t_local_48 *)(_fr + 0x30))
#define local_44 (*(_t_local_44 *)(_fr + 0x34))
#define local_40 (*(_t_local_40 *)(_fr + 0x38))
#define local_3c (*(_t_local_3c *)(_fr + 0x3c))
#define local_38 (*(_t_local_38 *)(_fr + 0x40))
#define local_34 (*(_t_local_34 *)(_fr + 0x44))
#define local_30 (*(_t_local_30 *)(_fr + 0x48))
#define local_2c (*(_t_local_2c *)(_fr + 0x4c))
#define local_28 (*(_t_local_28 *)(_fr + 0x50))
#define local_24 (*(_t_local_24 *)(_fr + 0x54))
#define local_20 (*(_t_local_20 *)(_fr + 0x58))
#define local_1c (*(_t_local_1c *)(_fr + 0x5c))
#define local_18 (*(_t_local_18 *)(_fr + 0x60))

  FUN_0043be40(&local_64);
  this = param_1;
  FUN_0040adb0(param_1,&local_6c);
  iVar1 = FUN_004026a0(&local_6c,&local_34,(uint *)local_74,(undefined4 *)&param_1);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
  }
  else {
    FUN_0040adb0(this,&local_6c);
    iVar1 = FUN_004026a0(&local_6c,local_18,(uint *)local_74,(undefined4 *)&param_1);
    if (iVar1 == 0) {
      FUN_00404ab0(this,0xe);
    }
    else {
      FUN_0040adb0(this,&local_6c);
      iVar1 = FUN_004026a0(&local_6c,&local_1c,(uint *)local_74,(undefined4 *)&param_1);
      if (iVar1 == 0) {
        FUN_00404ab0(this,0xe);
      }
      else {
        FUN_0040adb0(this,&local_6c);
        iVar1 = FUN_004026a0(&local_6c,&local_20,(uint *)local_74,(undefined4 *)&param_1);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
        }
        else {
          FUN_0040adb0(this,&local_6c);
          iVar1 = FUN_004026a0(&local_6c,&local_24,(uint *)local_74,(undefined4 *)&param_1);
          if (iVar1 == 0) {
            FUN_00404ab0(this,0xe);
          }
          else {
            FUN_0040adb0(this,&local_6c);
            iVar1 = FUN_004026a0(&local_6c,&local_28,(uint *)local_74,(undefined4 *)&param_1);
            if (iVar1 == 0) {
              FUN_00404ab0(this,0xe);
            }
            else {
              if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
                iVar1 = *(int *)((int)this + 0x54) + 1;
                *(int *)((int)this + 0x54) = iVar1;
                local_48 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
                local_44 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
              }
              else {
                FUN_00404ab0(this,6);
                local_48 = 0;
                local_44 = local_68;
              }
              FUN_0040adb0(this,&local_6c);
              iVar1 = FUN_004026a0(&local_6c,&local_60,(uint *)local_74,(undefined4 *)&param_1);
              if (iVar1 == 0) {
                FUN_00404ab0(this,0xe);
              }
              else {
                if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
                  iVar1 = *(int *)((int)this + 0x54) + 1;
                  *(int *)((int)this + 0x54) = iVar1;
                  local_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
                  local_2c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
                }
                else {
                  FUN_00404ab0(this,6);
                  local_30 = 0;
                  local_2c = local_68;
                }
                if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
                  iVar1 = *(int *)((int)this + 0x54) + 1;
                  *(int *)((int)this + 0x54) = iVar1;
                  local_5c = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
                  local_68 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
                }
                else {
                  FUN_00404ab0(this,6);
                  local_5c = 0;
                }
                local_58 = local_68;
                FUN_0040adb0(this,(undefined4 *)local_74);
                iVar1 = FUN_0041da00((int)this);
                uVar2 = 0;
                if (iVar1 == 0) {
                  if (local_74[0] == '\b') {
                    uVar2 = local_70;
                  }
                  else {
                    FUN_00404ab0(this,0xe);
                  }
                }
                FUN_0040adb0(this,&local_6c);
                iVar1 = FUN_004026a0(&local_6c,&local_38,(uint *)local_74,(undefined4 *)&param_1);
                if (iVar1 == 0) {
                  FUN_00404ab0(this,0xe);
                }
                else {
                  FUN_0040adb0(this,&local_6c);
                  iVar1 = FUN_004026a0(&local_6c,&local_3c,(uint *)local_74,(undefined4 *)&param_1);
                  if (iVar1 == 0) {
                    FUN_00404ab0(this,0xe);
                  }
                  else {
                    uVar3 = FUN_0043da90(this,&local_78);
                    if ((int)uVar3 != 0) {
                      iVar1 = FUN_0043dc30(this,local_40);
                      if (iVar1 != 0) {
                        local_64 = uVar2;
                        iVar1 = FUN_0043c390(&DAT_005cd310,&local_64,local_78);
                        if (iVar1 == 0) {
                          FUN_0043d6f0(this,s_addbuildinginfo_failed_00556580);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  DAT_00579088 = DAT_00579088 + -0x58;
  return;
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_48
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
}
