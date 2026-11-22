/* Rebuilt from lomse.exe FUN_0047c370 @ 0x0047c370 (312 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aea2c (*(int *)0x005aea2c)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_00415170 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x00415170)
#define FUN_0047bfe0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0047bfe0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004b13a0 ((int (__thiscall *)(void *, int))0x004b13a0)
#define FUN_004b1490 ((undefined4 (__thiscall *)(void *, int *, int))0x004b1490)
#define FUN_004b18c0 ((undefined4 (__thiscall *)(void *, undefined4, int, int, int, int *))0x004b18c0)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_0047c370 1
void __thiscall rb_0047c370(void *this,int *param_1)

{
  undefined4 *this_00;
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  uchar _fr[0x5f0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_5e8[375];
#define local_5e8 (*(_t_local_5e8 *)(_fr + 0x0))

  FUN_00411610(local_5e8);
  iVar4 = 0;
  this_00 = FUN_00485080(&DAT_005aa12c,*param_1,0x6f);
  if ((this_00 == (undefined4 *)0x0) || (iVar2 = this_00[7], iVar2 != param_1[4]))
  goto LAB_0047c479;
  iVar3 = param_1[5];
  if ((this_00[0x15] & 0x100000) == 0) {
LAB_0047c3fc:
    FUN_00415170(this_00,local_5e8,param_1[2]);
    piVar7 = local_5e8;
    piVar6 = param_1;
    puVar1 = FUN_004c6fc0();
    iVar2 = FUN_004b1490(puVar1,piVar7,(int)piVar6);
    FUN_004117f0(local_5e8,0);
    if (iVar2 == 0) {
      param_1[3] = 0;
    }
    else {
      puVar1 = FUN_004c6fc0();
      iVar2 = *(int *)(puVar1 + 0xc0);
      param_1[3] = iVar2;
      if (DAT_005aea2c <= iVar2) {
        param_1[3] = 0;
      }
      iVar2 = param_1[3];
      if (0 < iVar2) {
        do {
          iVar3 = iVar4;
          puVar1 = FUN_004c6fc0();
          iVar3 = FUN_004b13a0(puVar1,iVar3);
          *(char *)(iVar4 + 0x24 + (int)param_1) = (char)iVar3;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
    }
  }
  else {
    piVar7 = param_1 + 3;
    piVar6 = param_1 + 9;
    puVar5 = this_00;
    puVar1 = FUN_004c6fc0();
    iVar2 = FUN_004b18c0(puVar1,puVar5,iVar2,iVar3,(int)piVar6,piVar7);
    if (iVar2 == 0) goto LAB_0047c3fc;
  }
  FUN_0047bfe0(this,param_1);
LAB_0047c479:
  FUN_00411910(local_5e8);
  return;
#undef local_5e8
}
