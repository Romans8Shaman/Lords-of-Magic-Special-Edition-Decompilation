/* Rebuilt from lomse.exe op_crop @ 0x00493a90 (552 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_004925f0 ((int (__thiscall *)(void *, undefined4, undefined4, undefined4, undefined4, undefined4))0x004925f0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_object_0055c598 (*(char (*)[])0x0055c598)

#define LOM_SELF_00493a90 1
void __cdecl rb_00493a90(void *volatile param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined1 auStackY_cc [128];
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_2c;
  typedef undefined1 * _t_local_28;
  typedef uint _t_local_24[2];
  typedef uint _t_local_1c;
  typedef uint _t_local_18;
  typedef uint _t_local_14;
  typedef uint _t_local_10;
#define local_2c (*(_t_local_2c *)(_fr + 0x4))
#define local_28 (*(_t_local_28 *)(_fr + 0x8))
#define local_24 (*(_t_local_24 *)(_fr + 0xc))
#define local_1c (*(_t_local_1c *)(_fr + 0x14))
#define local_18 (*(_t_local_18 *)(_fr + 0x18))
#define local_14 (*(_t_local_14 *)(_fr + 0x1c))
#define local_10 (*(_t_local_10 *)(_fr + 0x20))

  this = param_1;
  DAT_00583650 = DAT_00583650 + 0x10;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  FUN_0040adb0(param_1,local_24);
  iVar2 = FUN_004026a0(local_24,&local_10,(uint *)&local_28,&local_2c);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    FUN_0040adb0(this,local_24);
    iVar2 = FUN_004026a0(local_24,&local_14,(uint *)&local_2c,(undefined4 *)&local_28);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      FUN_0040adb0(this,local_24);
      iVar2 = FUN_004026a0(local_24,&local_18,(uint *)&local_2c,(undefined4 *)&local_28);
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        FUN_0040adb0(this,local_24);
        iVar2 = FUN_004026a0(local_24,&local_1c,(uint *)&local_2c,(undefined4 *)&local_28);
        if (iVar2 == 0) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
        }
        else {
          FUN_0040adb0(this,local_24);
          iVar2 = FUN_004026a0(local_24,(uint *)&param_1,(uint *)&local_2c,(undefined4 *)&local_28);
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0x90) = 0xe;
          }
          else {
            iVar2 = FUN_00491c20(&DAT_005a7b50,(int)param_1);
            if (iVar2 == 0) {
              FUN_004d41c0(this,s_no_object_0055c598);
              goto LAB_00493c9a;
            }
            local_28 = auStackY_cc + 0x84;
            DAT_00583650 = DAT_00583650 + 0x10;
            iVar2 = FUN_004925f0(&DAT_005a7b50,param_1,local_1c,local_18,local_14,local_10);
            if (*(int *)((int)this + 0x54) != 0) {
              iVar3 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar3;
              iVar1 = *(int *)((int)this + 0x50);
              *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
              *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
              goto LAB_00493c9a;
            }
            *(undefined4 *)((int)this + 0x90) = 3;
          }
        }
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_00493c9a:
  DAT_00583650 = DAT_00583650 + -0x10;
  return;
#undef local_2c
#undef local_28
#undef local_24
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
