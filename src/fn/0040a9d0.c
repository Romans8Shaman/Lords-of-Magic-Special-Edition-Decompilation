/* Rebuilt from lomse.exe FUN_0040a9d0 @ 0x0040a9d0 (980 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005553e8 (*(undefined4 *)0x005553e8)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d84 (*(uint *)0x005a7d84)
#define DAT_005a7d88 (*(int * *)0x005a7d88)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae970 (*(int *)0x005ae970)
#define DAT_005cd334 (*(undefined *)0x005cd334)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041dbd0 ((undefined4 (__thiscall *)(void *, int, undefined4, int))0x0041dbd0)
#define FUN_0041dc10 ((undefined4 (__thiscall *)(void *, int))0x0041dc10)
#define FUN_0042d540 ((undefined4 (__fastcall *)(int))0x0042d540)
#define FUN_0042e130 ((int (__thiscall *)(void *, int))0x0042e130)
#define FUN_0049dcc0 ((undefined4 (__thiscall *)(void *, int))0x0049dcc0)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0040a9d0 1
void __stdcall rb_0040a9d0(void *volatile param_1, int volatile param_2)

{
  undefined4 uVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_14;
  typedef uint _t_local_10;
  typedef uint _t_local_c;
  typedef uint _t_local_8;
  typedef undefined4 _t_local_4;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  pvVar4 = param_1;
  if ((~*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    bVar2 = false;
    piVar5 = (int *)(*(int *)((int)param_1 + 0x1c) * 0x20 + DAT_005ae970);
    iVar8 = 8;
    do {
      if (*piVar5 == *(int *)(param_2 + 0x1c)) {
        bVar2 = true;
      }
      piVar5 = piVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (bVar2) {
      iVar8 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)(param_2 + 0x1c));
      pvVar3 = DAT_005a7b78;
      if ((*(int *)((int)pvVar4 + 0x44) < 1) || (5 < *(int *)((int)pvVar4 + 0x44))) {
        if ((*(int *)(param_2 + 0x44) < 1) || (iVar9 = 1, 5 < *(int *)(param_2 + 0x44))) {
          iVar9 = 2;
        }
      }
      else if ((*(int *)(param_2 + 0x44) < 1) || (5 < *(int *)(param_2 + 0x44))) {
        iVar9 = 0;
      }
      else {
        iVar9 = 3;
      }
      uVar1 = *(undefined4 *)((int)pvVar4 + 0x28);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
        iVar7 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
        *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar1;
      }
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
        iVar7 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
        *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = 0;
      }
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
        iVar7 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
        *(int *)(iVar7 + 4 + iVar6 * 8) = iVar9 + 4;
      }
      FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
        piVar5 = (int *)((int)DAT_005a7b78 + 0x50);
        iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
        local_8 = *(uint *)(*piVar5 + -8 + iVar7 * 8);
        local_4 = *(undefined4 *)(*piVar5 + -4 + iVar7 * 8);
      }
      else {
        FUN_00404ab0(DAT_005a7b78,6);
        local_8 = 0;
      }
      iVar7 = FUN_004026a0(&local_8,(uint *)&param_1,&local_10,&local_14);
      if (iVar7 == 0) {
        FUN_00404ab0(pvVar3,0xe);
      }
      iVar7 = FUN_0042e130(&DAT_005cd334,(int)param_1);
      if (iVar7 != 0) {
        iVar6 = FUN_0042d540((int)pvVar4 + 0x568);
        if (iVar6 != 0) {
          piVar5 = &DAT_005553e8;
          do {
            if (*(int *)((int)pvVar4 + 0x570) == *piVar5) {
              return;
            }
            piVar5 = piVar5 + 1;
          } while ((int)piVar5 < 0x555408);
        }
        (&DAT_005553e8)[iVar9] = param_1;
        FUN_0041dbd0(pvVar4,(int)param_1,0,*(int *)(iVar7 + 0x20));
        FUN_0041dc10(pvVar4,1);
        if (*(void **)((int)pvVar4 + 0x578) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)pvVar4 + 0x578),iVar8);
        }
        if (*(void **)((int)pvVar4 + 0x57c) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)pvVar4 + 0x57c),iVar8);
        }
        if (*(void **)((int)pvVar4 + 0x580) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)pvVar4 + 0x580),iVar8);
        }
        if (*(void **)((int)pvVar4 + 0x584) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)pvVar4 + 0x584),iVar8);
        }
        pvVar3 = DAT_005a7b78;
        uVar1 = *(undefined4 *)((int)pvVar4 + 0x28);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        else {
          iVar9 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar9;
          iVar8 = *(int *)((int)pvVar3 + 0x50);
          *(undefined4 *)(iVar8 + iVar9 * 8) = 1;
          *(undefined4 *)(iVar8 + 4 + iVar9 * 8) = uVar1;
        }
        pvVar4 = DAT_005a7b78;
        uVar1 = *(undefined4 *)(param_2 + 0x28);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar4);
          *(undefined4 *)((int)pvVar4 + 0x90) = 0;
          *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
        }
        else {
          iVar9 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar9;
          iVar8 = *(int *)((int)pvVar4 + 0x50);
          *(undefined4 *)(iVar8 + iVar9 * 8) = 1;
          *(undefined4 *)(iVar8 + 4 + iVar9 * 8) = uVar1;
        }
        pvVar4 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar4);
          *(undefined4 *)((int)pvVar4 + 0x90) = 0;
          *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
        }
        else {
          iVar9 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar9;
          iVar8 = *(int *)((int)pvVar4 + 0x50);
          *(undefined4 *)(iVar8 + iVar9 * 8) = 1;
          *(undefined4 *)(iVar8 + 4 + iVar9 * 8) = 8;
        }
        FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
        pvVar4 = DAT_005a7b78;
        FUN_0040adb0(DAT_005a7b78,&local_8);
        iVar8 = FUN_004026a0(&local_8,&local_c,&local_10,(undefined4 *)&param_2);
        if (iVar8 == 0) {
          *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
          FUN_004d4550(pvVar4);
          *(undefined4 *)((int)pvVar4 + 0x90) = 0;
          *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
        }
      }
    }
  }
  return;
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
