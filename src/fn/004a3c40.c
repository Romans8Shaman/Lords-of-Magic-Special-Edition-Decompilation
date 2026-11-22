/* Rebuilt from lomse.exe op_lightning @ 0x004a3c40 (1012 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ca8 (*(undefined4 *)0x00584ca8)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0043da90 ((undefined8 (__thiscall *)(void *, int *))0x0043da90)
#define FUN_004a2da0 ((int (__thiscall *)(void *, undefined4 *))0x004a2da0)
#define FUN_004a3080 ((void * (__fastcall *)(void *))0x004a3080)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_004a3c40 1
void __cdecl rb_004a3c40(void *volatile param_1)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uchar _fr[0x78] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_70;
  typedef uint _t_local_6c[2];
  typedef undefined4 _t_local_64;
  typedef int _t_local_60;
  typedef int _t_local_5c;
  typedef int _t_local_58;
  typedef int _t_local_54;
  typedef int _t_local_50;
  typedef uint _t_local_4c;
  typedef uint _t_local_48;
  typedef uint _t_local_44;
  typedef uint _t_local_40[3];
  typedef uint _t_local_34;
  typedef uint _t_local_30;
  typedef uint _t_local_2c;
  typedef undefined1 _t_local_28;
  typedef undefined1 _t_local_27;
  typedef undefined1 _t_local_26;
  typedef undefined1 _t_local_25;
  typedef undefined1 _t_local_24;
  typedef undefined1 _t_local_23;
  typedef undefined1 _t_local_22;
  typedef undefined1 _t_local_21;
  typedef uint _t_local_20;
  typedef undefined4 _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef uint _t_local_14;
  typedef uint _t_local_10;
#define local_70 (*(_t_local_70 *)(_fr + 0x0))
#define local_6c (*(_t_local_6c *)(_fr + 0x4))
#define local_64 (*(_t_local_64 *)(_fr + 0xc))
#define local_60 (*(_t_local_60 *)(_fr + 0x10))
#define local_5c (*(_t_local_5c *)(_fr + 0x14))
#define local_58 (*(_t_local_58 *)(_fr + 0x18))
#define local_54 (*(_t_local_54 *)(_fr + 0x1c))
#define local_50 (*(_t_local_50 *)(_fr + 0x20))
#define local_4c (*(_t_local_4c *)(_fr + 0x24))
#define local_48 (*(_t_local_48 *)(_fr + 0x28))
#define local_44 (*(_t_local_44 *)(_fr + 0x2c))
#define local_40 (*(_t_local_40 *)(_fr + 0x30))
#define local_34 (*(_t_local_34 *)(_fr + 0x3c))
#define local_30 (*(_t_local_30 *)(_fr + 0x40))
#define local_2c (*(_t_local_2c *)(_fr + 0x44))
#define local_28 (*(_t_local_28 *)(_fr + 0x48))
#define local_27 (*(_t_local_27 *)(_fr + 0x49))
#define local_26 (*(_t_local_26 *)(_fr + 0x4a))
#define local_25 (*(_t_local_25 *)(_fr + 0x4b))
#define local_24 (*(_t_local_24 *)(_fr + 0x4c))
#define local_23 (*(_t_local_23 *)(_fr + 0x4d))
#define local_22 (*(_t_local_22 *)(_fr + 0x4e))
#define local_21 (*(_t_local_21 *)(_fr + 0x4f))
#define local_20 (*(_t_local_20 *)(_fr + 0x50))
#define local_1c (*(_t_local_1c *)(_fr + 0x54))
#define local_18 (*(_t_local_18 *)(_fr + 0x58))
#define local_14 (*(_t_local_14 *)(_fr + 0x5c))
#define local_10 (*(_t_local_10 *)(_fr + 0x60))

  FUN_004a3080(&local_64);
  this = param_1;
  FUN_0040adb0(param_1,local_6c);
  iVar1 = FUN_004026a0(local_6c,local_40,&local_70,(undefined4 *)&param_1);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
  }
  else {
    FUN_0040adb0(this,local_6c);
    iVar1 = FUN_004026a0(local_6c,&local_10,&local_70,(undefined4 *)&param_1);
    if (iVar1 == 0) {
      FUN_00404ab0(this,0xe);
    }
    else {
      FUN_0040adb0(this,local_6c);
      iVar1 = FUN_004026a0(local_6c,&local_14,&local_70,(undefined4 *)&param_1);
      if (iVar1 == 0) {
        FUN_00404ab0(this,0xe);
      }
      else {
        FUN_0040adb0(this,local_6c);
        iVar1 = FUN_004026a0(local_6c,&local_20,&local_70,(undefined4 *)&param_1);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
        }
        else {
          puVar2 = (undefined4 *)FUN_0040adb0(this,local_6c);
          local_1c = *puVar2;
          local_18 = puVar2[1];
          if ((char)local_1c != '\0') {
            uVar3 = FUN_0043da90(this,(int *)&param_1);
            if ((int)uVar3 != 0) {
              local_21 = (*(uchar *)((uchar *)&param_1 + 0));
              uVar3 = FUN_0043da90(this,(int *)&param_1);
              if ((int)uVar3 != 0) {
                local_25 = (*(uchar *)((uchar *)&param_1 + 0));
                uVar3 = FUN_0043da90(this,(int *)&param_1);
                if ((int)uVar3 != 0) {
                  local_22 = (*(uchar *)((uchar *)&param_1 + 0));
                  uVar3 = FUN_0043da90(this,(int *)&param_1);
                  if ((int)uVar3 != 0) {
                    local_26 = (*(uchar *)((uchar *)&param_1 + 0));
                    uVar3 = FUN_0043da90(this,(int *)&param_1);
                    if ((int)uVar3 != 0) {
                      local_23 = (*(uchar *)((uchar *)&param_1 + 0));
                      uVar3 = FUN_0043da90(this,(int *)&param_1);
                      if ((int)uVar3 != 0) {
                        local_27 = (*(uchar *)((uchar *)&param_1 + 0));
                        uVar3 = FUN_0043da90(this,(int *)&param_1);
                        if ((int)uVar3 != 0) {
                          local_24 = (*(uchar *)((uchar *)&param_1 + 0));
                          uVar3 = FUN_0043da90(this,(int *)&param_1);
                          if ((int)uVar3 != 0) {
                            local_28 = (*(uchar *)((uchar *)&param_1 + 0));
                            FUN_0040adb0(this,local_6c);
                            iVar1 = FUN_004026a0(local_6c,&local_44,&local_70,(undefined4 *)&param_1);
                            if (iVar1 == 0) {
                              FUN_00404ab0(this,0xe);
                            }
                            else {
                              FUN_0040adb0(this,local_6c);
                              iVar1 = FUN_004026a0(local_6c,&local_48,&local_70,(undefined4 *)&param_1);
                              if (iVar1 == 0) {
                                FUN_00404ab0(this,0xe);
                              }
                              else {
                                FUN_0040adb0(this,local_6c);
                                iVar1 = FUN_004026a0(local_6c,&local_30,&local_70,(undefined4 *)&param_1)
                                ;
                                if (iVar1 == 0) {
                                  FUN_00404ab0(this,0xe);
                                }
                                else {
                                  FUN_0040adb0(this,local_6c);
                                  iVar1 = FUN_004026a0(local_6c,&local_34,&local_70,
                                                       (undefined4 *)&param_1);
                                  if (iVar1 == 0) {
                                    FUN_00404ab0(this,0xe);
                                  }
                                  else {
                                    FUN_0040adb0(this,local_6c);
                                    iVar1 = FUN_004026a0(local_6c,&local_2c,&local_70,
                                                         (undefined4 *)&param_1);
                                    if (iVar1 == 0) {
                                      FUN_00404ab0(this,0xe);
                                    }
                                    else {
                                      FUN_0040adb0(this,local_6c);
                                      iVar1 = FUN_004026a0(local_6c,&local_4c,&local_70,
                                                           (undefined4 *)&param_1);
                                      if (iVar1 == 0) {
                                        FUN_00404ab0(this,0xe);
                                      }
                                      else {
                                        uVar3 = FUN_0043da90(this,&local_54);
                                        if ((int)uVar3 != 0) {
                                          uVar3 = FUN_0043da90(this,&local_58);
                                          if ((int)uVar3 != 0) {
                                            uVar3 = FUN_0043da90(this,&local_50);
                                            if ((int)uVar3 != 0) {
                                              uVar3 = FUN_0043da90(this,&local_5c);
                                              if ((int)uVar3 != 0) {
                                                uVar3 = FUN_0043da90(this,&local_60);
                                                if ((int)uVar3 != 0) {
                                                  FUN_004a2da0(&DAT_00584ca8,&local_64);
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
  op_sunlight();
  return;
#undef local_70
#undef local_6c
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_27
#undef local_26
#undef local_25
#undef local_24
#undef local_23
#undef local_22
#undef local_21
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
