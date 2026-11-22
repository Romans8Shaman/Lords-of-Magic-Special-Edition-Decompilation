/* Rebuilt from lomse.exe op_addcitymod @ 0x00453360 (537 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005792fc (*(int *)0x005792fc)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_00451a70 ((undefined4 (__cdecl *)(void *, uint *))0x00451a70)
#define FUN_00452fc0 ((undefined4 (__thiscall *)(void *, int))0x00452fc0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00453360 1
void __cdecl rb_00453360(void *volatile param_1)

{
  void *this;
  int iVar1;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_44;
  typedef undefined4 _t_local_40;
  typedef uint _t_local_3c[2];
  typedef undefined1 _t_local_34[4];
  typedef uint _t_local_30;
  typedef uint _t_local_2c;
  typedef uint _t_local_28;
  typedef uint _t_local_24;
  typedef uint _t_local_20;
  typedef uint _t_local_1c;
  typedef uint _t_local_18;
  typedef uint _t_local_14[2];
#define local_44 (*(_t_local_44 *)(_fr + 0x4))
#define local_40 (*(_t_local_40 *)(_fr + 0x8))
#define local_3c (*(_t_local_3c *)(_fr + 0xc))
#define local_34 (*(_t_local_34 *)(_fr + 0x14))
#define local_30 (*(_t_local_30 *)(_fr + 0x18))
#define local_2c (*(_t_local_2c *)(_fr + 0x1c))
#define local_28 (*(_t_local_28 *)(_fr + 0x20))
#define local_24 (*(_t_local_24 *)(_fr + 0x24))
#define local_20 (*(_t_local_20 *)(_fr + 0x28))
#define local_1c (*(_t_local_1c *)(_fr + 0x2c))
#define local_18 (*(_t_local_18 *)(_fr + 0x30))
#define local_14 (*(_t_local_14 *)(_fr + 0x34))

  this = param_1;
  DAT_005792fc = DAT_005792fc + 0x28;
  local_14[1] = 0;
  FUN_0040adb0(param_1,local_3c);
  iVar1 = FUN_004026a0(local_3c,(uint *)&local_40,&local_20,&local_44);
  if (iVar1 != 0) {
    FUN_0040adb0(this,local_3c);
    iVar1 = FUN_004026a0(local_3c,(uint *)&local_44,&local_24,&local_40);
    if (iVar1 != 0) {
      FUN_0040adb0(this,local_3c);
      iVar1 = FUN_004026a0(local_3c,(uint *)&local_44,&local_28,&local_40);
      if (iVar1 != 0) {
        FUN_0040adb0(this,local_3c);
        iVar1 = FUN_004026a0(local_3c,(uint *)&local_44,&local_2c,&local_40);
        if (iVar1 != 0) {
          FUN_0040adb0(this,local_3c);
          iVar1 = FUN_004026a0(local_3c,(uint *)&local_44,&local_30,&local_40);
          if (iVar1 != 0) {
            FUN_0040adb0(this,local_3c);
            iVar1 = FUN_004026a0(local_3c,&local_1c,(uint *)&local_44,&local_40);
            if (iVar1 == 0) {
              FUN_00404ab0(this,0xe);
              goto LAB_0045355b;
            }
            FUN_0040adb0(this,local_3c);
            iVar1 = FUN_004026a0(local_3c,local_14,(uint *)&local_44,&local_40);
            if (iVar1 != 0) {
              FUN_0040adb0(this,local_3c);
              iVar1 = FUN_004026a0(local_3c,&local_18,(uint *)&local_44,&local_40);
              if (iVar1 != 0) {
                iVar1 = FUN_00451a70(this,(uint *)&param_1);
                if (iVar1 != 0) {
                  FUN_00452fc0(local_34,(int)param_1);
                }
                goto LAB_0045355b;
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
LAB_0045355b:
  DAT_005792fc = DAT_005792fc + -0x28;
  return;
#undef local_44
#undef local_40
#undef local_3c
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
