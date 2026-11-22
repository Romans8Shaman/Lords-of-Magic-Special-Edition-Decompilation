/* Rebuilt from lomse.exe FUN_004b1260 @ 0x004b1260 (319 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_00415170 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x00415170)
#define FUN_00420890 ((undefined4 (__thiscall *)(void *, int))0x00420890)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004b13a0 ((int (__thiscall *)(void *, int))0x004b13a0)
#define FUN_004b1490 ((undefined4 (__thiscall *)(void *, int *, int))0x004b1490)

#define LOM_SELF_004b1260 1
undefined4 __thiscall rb_004b1260(void *this,int *param_1,int param_2,int param_3)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uchar _fr[0x5f0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_5e8[375];
#define local_5e8 (*(_t_local_5e8 *)(_fr + 0x0))

  this_00 = FUN_00485080(&DAT_005aa12c,*param_1,0x2f);
  uVar2 = 0;
  if (this_00 != (undefined4 *)0x0) {
    FUN_00411610(local_5e8);
    FUN_00415170(this_00,local_5e8,param_1[2]);
    iVar1 = FUN_004a51c0(this,param_2,param_3);
    iVar1 = FUN_00420890(local_5e8,iVar1);
    if (iVar1 == 0) {
      FUN_004117f0(local_5e8,0);
      FUN_00411910(local_5e8);
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_004b1490(this,local_5e8,(int)param_1);
      if (iVar1 == 0) {
        FUN_004117f0(local_5e8,0);
        FUN_00411910(local_5e8);
        uVar2 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 0xc0);
        iVar3 = 0;
        param_1[3] = iVar1;
        if (0 < iVar1) {
          do {
            iVar1 = FUN_004b13a0(this,iVar3);
            *(char *)(iVar3 + 0x24 + (int)param_1) = (char)iVar1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_1[3]);
        }
        FUN_004117f0(local_5e8,0);
        FUN_00411910(local_5e8);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
#undef local_5e8
}
