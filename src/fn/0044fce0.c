/* Rebuilt from lomse.exe op_setbuildingrequirements @ 0x0044fce0 (504 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579084 (*(int *)0x00579084)
#define DAT_005cd31c (*(undefined *)0x005cd31c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0043d360 ((undefined4 (__thiscall *)(void *, int *))0x0043d360)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0044fce0 1
void __cdecl rb_0044fce0(void *volatile param_1)

{
  void *this;
  int iVar1;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_38;
  typedef uint _t_local_34[2];
  typedef uint _t_local_2c;
  typedef uint _t_local_28;
  typedef uint _t_local_24;
  typedef uint _t_local_20;
  typedef uint _t_local_1c;
  typedef uint _t_local_18;
  typedef uint _t_local_14;
  typedef uint _t_local_10;
#define local_38 (*(_t_local_38 *)(_fr + 0x0))
#define local_34 (*(_t_local_34 *)(_fr + 0x4))
#define local_2c (*(_t_local_2c *)(_fr + 0xc))
#define local_28 (*(_t_local_28 *)(_fr + 0x10))
#define local_24 (*(_t_local_24 *)(_fr + 0x14))
#define local_20 (*(_t_local_20 *)(_fr + 0x18))
#define local_1c (*(_t_local_1c *)(_fr + 0x1c))
#define local_18 (*(_t_local_18 *)(_fr + 0x20))
#define local_14 (*(_t_local_14 *)(_fr + 0x24))
#define local_10 (*(_t_local_10 *)(_fr + 0x28))

  this = param_1;
  DAT_00579084 = DAT_00579084 + 0x20;
  FUN_0040adb0(param_1,local_34);
  iVar1 = FUN_004026a0(local_34,&local_28,&local_38,(undefined4 *)&param_1);
  if (iVar1 != 0) {
    FUN_0040adb0(this,local_34);
    iVar1 = FUN_004026a0(local_34,&local_24,&local_38,(undefined4 *)&param_1);
    if (iVar1 != 0) {
      FUN_0040adb0(this,local_34);
      iVar1 = FUN_004026a0(local_34,&local_38,&local_14,(undefined4 *)&param_1);
      if (iVar1 != 0) {
        FUN_0040adb0(this,local_34);
        iVar1 = FUN_004026a0(local_34,&local_38,&local_18,(undefined4 *)&param_1);
        if (iVar1 != 0) {
          FUN_0040adb0(this,local_34);
          iVar1 = FUN_004026a0(local_34,&local_38,&local_1c,(undefined4 *)&param_1);
          if (iVar1 != 0) {
            FUN_0040adb0(this,local_34);
            iVar1 = FUN_004026a0(local_34,&local_38,&local_20,(undefined4 *)&param_1);
            if (iVar1 != 0) {
              FUN_0040adb0(this,local_34);
              iVar1 = FUN_004026a0(local_34,&local_2c,&local_38,(undefined4 *)&param_1);
              if (iVar1 != 0) {
                FUN_0040adb0(this,local_34);
                iVar1 = FUN_004026a0(local_34,&local_10,&local_38,(undefined4 *)&param_1);
                if (iVar1 != 0) {
                  FUN_0043d360(&DAT_005cd31c,(int *)&local_2c);
                  goto LAB_0044feba;
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0044feba:
  DAT_00579084 = DAT_00579084 + -0x20;
  return;
#undef local_38
#undef local_34
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
