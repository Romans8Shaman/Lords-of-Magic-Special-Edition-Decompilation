/* Rebuilt from lomse.exe FUN_00493840 @ 0x00493840 (280 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_004935c0 ((undefined4 (__thiscall *)(void *, int *, uint, int, int, int))0x004935c0)
#define FUN_00493960 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00493960)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_00494630 ((undefined4 (__thiscall *)(void *, int *, int *))0x00494630)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)

#define LOM_SELF_00493840 1
undefined4 __thiscall
rb_00493840(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_3c;
  typedef int _t_local_38;
  typedef int _t_local_34;
  typedef int _t_local_30;
  typedef int _t_local_2c[8];
#define local_3c (*(_t_local_3c *)(_fr + 0x4))
#define local_38 (*(_t_local_38 *)(_fr + 0x8))
#define local_34 (*(_t_local_34 *)(_fr + 0xc))
#define local_30 (*(_t_local_30 *)(_fr + 0x10))
#define local_2c (*(_t_local_2c *)(_fr + 0x14))

  this_00 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0x10));
  uVar2 = 0;
  if (this_00 != (void *)0x0) {
    iVar1 = FUN_00493960(this,&local_3c,param_2,param_3);
    uVar2 = 0;
    if (iVar1 != 0) {
      if (local_3c < 0) {
        local_3c = 0;
      }
      if (local_38 < 0) {
        local_38 = 0;
      }
      if (local_3c < local_34) {
        if (local_38 < local_30) {
          DAT_00583648 = DAT_00583648 + 0x20;
          FUN_00494610(local_2c);
          FUN_00494630(local_2c,param_1,&local_3c);
          uVar2 = FUN_004935c0(this_00,local_2c,param_2 - local_3c,param_3 - local_38,param_4,
                               param_5);
          DAT_00583648 = DAT_00583648 + -0x20;
          FUN_00495590(local_2c);
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
}
