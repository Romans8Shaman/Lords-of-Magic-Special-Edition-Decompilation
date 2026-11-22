/* Rebuilt from lomse.exe FUN_0047c040 @ 0x0047c040 (564 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aea2c (*(int *)0x005aea2c)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_00415170 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x00415170)
#define FUN_00420890 ((undefined4 (__thiscall *)(void *, int))0x00420890)
#define FUN_0047bfe0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0047bfe0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004b13a0 ((int (__thiscall *)(void *, int))0x004b13a0)
#define FUN_004b1490 ((undefined4 (__thiscall *)(void *, int *, int))0x004b1490)
#define FUN_004b18c0 ((undefined4 (__thiscall *)(void *, undefined4, int, int, int, int *))0x004b18c0)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_0047c040 1
void __thiscall rb_0047c040(void *this,int *param_1)

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
  typedef int _t_local_5e8[19];
  typedef int _t_local_59c;
#define local_5e8 (*(_t_local_5e8 *)(_fr + 0x0))
#define local_59c (*(_t_local_59c *)(_fr + 0x4c))

  FUN_00411610(local_5e8);
  this_00 = FUN_00485080(&DAT_005aa12c,*param_1,0x6f);
  if ((param_1[0x3b] & 0xe0U) != 0) {
    if (this_00 == (undefined4 *)0x0) {
      ((undefined4 (__cdecl *)(__typeof__(param_1[0x3d]), __typeof__(0)))(*(code *)param_1[0x3c]))(param_1[0x3d],0);
    }
    else {
      FUN_00415170(this_00,local_5e8,param_1[2]);
      if (local_59c < 1) {
        ((undefined4 (__cdecl *)(__typeof__(param_1[0x3d]), __typeof__(0)))(*(code *)param_1[0x3c]))(param_1[0x3d],0);
        FUN_004117f0(local_5e8,0);
      }
      else {
        if ((param_1[0x3b] & 0x20U) == 0) {
          if ((param_1[0x3b] & 0x40U) == 0) {
            this_00[0x15] = 0x100000;
          }
          else {
            this_00[0x15] = 0x80000;
          }
        }
        else {
          this_00[0x15] = 0x40000;
        }
        piVar7 = local_5e8;
        puVar1 = FUN_004c6fc0();
        FUN_004b1490(puVar1,piVar7,(int)param_1);
        FUN_004117f0(local_5e8,0);
      }
    }
    goto LAB_0047c245;
  }
  if ((this_00 == (undefined4 *)0x0) || ((~this_00[0xc] & 0x100) == 0)) goto LAB_0047c245;
  iVar3 = this_00[7];
  iVar4 = param_1[5];
  if ((param_1[0x3b] & 4U) == 0) {
    iVar2 = FUN_00420890(this_00,iVar4);
    if (iVar2 != 0) goto LAB_0047c17e;
    param_1[3] = 0;
    param_1[6] = param_1[6] | 0x80;
  }
  else {
LAB_0047c17e:
    if ((this_00[0x15] & 0x100000) != 0) {
      piVar7 = param_1 + 3;
      piVar6 = param_1 + 9;
      puVar5 = this_00;
      puVar1 = FUN_004c6fc0();
      iVar3 = FUN_004b18c0(puVar1,puVar5,iVar3,iVar4,(int)piVar6,piVar7);
      if (iVar3 != 0) goto LAB_0047c23d;
    }
    FUN_00415170(this_00,local_5e8,param_1[2]);
    iVar3 = 0;
    if (local_59c < 1) {
      iVar4 = 0;
    }
    else {
      piVar7 = local_5e8;
      piVar6 = param_1;
      puVar1 = FUN_004c6fc0();
      iVar4 = FUN_004b1490(puVar1,piVar7,(int)piVar6);
    }
    FUN_004117f0(local_5e8,0);
    if (iVar4 == 0) {
      param_1[3] = 0;
      param_1[6] = param_1[6] | 0x80;
    }
    else {
      puVar1 = FUN_004c6fc0();
      iVar4 = *(int *)(puVar1 + 0xc0);
      param_1[3] = iVar4;
      if (iVar4 < DAT_005aea2c) {
        if (0 < iVar4) {
          do {
            iVar2 = iVar3;
            puVar1 = FUN_004c6fc0();
            iVar2 = FUN_004b13a0(puVar1,iVar2);
            *(char *)(iVar3 + 0x24 + (int)param_1) = (char)iVar2;
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar4);
        }
      }
      else {
        param_1[3] = 0;
        param_1[6] = param_1[6] | 0x80;
      }
    }
  }
LAB_0047c23d:
  FUN_0047bfe0(this,param_1);
LAB_0047c245:
  FUN_00411910(local_5e8);
  return;
#undef local_5e8
#undef local_59c
}
