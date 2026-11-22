/* Rebuilt from lomse.exe FUN_004c13a0 @ 0x004c13a0 (1543 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7bcc (*(uint *)0x005a7bcc)
#define DAT_005a7bd0 (*(int * *)0x005a7bd0)
#define DAT_005a7ce4 (*(uint *)0x005a7ce4)
#define DAT_005a7ce8 (*(int * *)0x005a7ce8)
#define DAT_005a7d04 (*(uint *)0x005a7d04)
#define DAT_005a7d08 (*(int * *)0x005a7d08)
#define DAT_005a7d0c (*(uint *)0x005a7d0c)
#define DAT_005a7d10 (*(int * *)0x005a7d10)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00410af0 ((undefined4 (__thiscall *)(void *, uint))0x00410af0)
#define FUN_00414e50 ((undefined4 (__thiscall *)(void *, uint, int *))0x00414e50)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_00420630 ((undefined4 (__fastcall *)(int))0x00420630)
#define FUN_00421960 ((int (__thiscall *)(void *))0x00421960)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004c1bc0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c1bc0)
#define FUN_004c1c20 ((undefined4 (__thiscall *)(void *, int))0x004c1c20)
#define FUN_004c1c90 ((undefined4 (__thiscall *)(void *, uint))0x004c1c90)
#define FUN_004c2370 ((undefined4 (__fastcall *)(int))0x004c2370)
#define FUN_004c2450 ((undefined4 (__fastcall *)(int))0x004c2450)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0052bc40 ((undefined4 (__fastcall *)(int))0x0052bc40)
#define FUN_0052d160 ((undefined4 (__fastcall *)(int))0x0052d160)

#define LOM_SELF_004c13a0 1
undefined4 __thiscall rb_004c13a0(void *this,int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *this_00;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  pvVar3 = (void *)FUN_00482ac0(this,*param_1,0);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  if ((param_1[2] != -1) && ((char)param_1[3] == '\x02')) {
    uVar4 = FUN_00482ac0(this,param_1[2],0);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 0x48) != *(int *)((int)pvVar3 + 0x5b8))) {
      iVar5 = FUN_00421960(pvVar3);
      pvVar2 = DAT_005a7b78;
      iVar5 = iVar5 / 0x32;
      if (0x32 < iVar5) {
        iVar5 = 0x32;
      }
      uVar1 = *(undefined4 *)((int)pvVar3 + 0x5b8);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
        iVar7 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
        *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar1;
      }
      pvVar2 = DAT_005a7b78;
      uVar1 = *(undefined4 *)(uVar4 + 0x48);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
        iVar7 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
        *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar1;
      }
      pvVar2 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar7 = *(int *)((int)DAT_005a7b78 + 0x50);
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
        *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
        *(int *)(iVar7 + 4 + iVar6 * 8) = iVar5;
      }
      FUN_004d09a0(DAT_005a7b78,DAT_005a7d0c,DAT_005a7d10,-3);
      uVar4 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)pvVar3 + 0x5b8));
      pvVar2 = DAT_005a7b78;
      if (uVar4 == 0) {
        uVar1 = *(undefined4 *)((int)pvVar3 + 0x5b8);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          FUN_00404ab0(DAT_005a7b78,3);
        }
        else {
          iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
          iVar5 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
          *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar1;
        }
        pvVar2 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          FUN_00404ab0(DAT_005a7b78,3);
        }
        else {
          iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
          iVar5 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
          *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 0;
        }
        pvVar2 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          FUN_00404ab0(DAT_005a7b78,3);
        }
        else {
          iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
          iVar5 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
          *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 2;
        }
        FUN_004d09a0(DAT_005a7b78,DAT_005a7ce4,DAT_005a7ce8,-3);
      }
    }
    goto LAB_004c15b8;
  }
  if ((char)param_1[3] == '\x03') {
    puVar8 = FUN_00485080(this,*(int *)((int)pvVar3 + 0x5b0),0x2f);
    pvVar2 = DAT_005a7b78;
    if (puVar8 == (undefined4 *)0x0) goto LAB_004c15b8;
    uVar1 = *(undefined4 *)((int)pvVar3 + 0x5b8);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar1;
    }
    pvVar2 = DAT_005a7b78;
    uVar1 = puVar8[0x12];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar1;
    }
    pvVar2 = DAT_005a7b78;
    uVar1 = *(undefined4 *)((int)pvVar3 + 0x28);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar1;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d04,DAT_005a7d08,-3);
    uVar4 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)pvVar3 + 0x5b8));
    pvVar2 = DAT_005a7b78;
    if (uVar4 != 0) goto LAB_004c15b8;
    uVar1 = *(undefined4 *)((int)pvVar3 + 0x5b8);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar1;
    }
    pvVar2 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 0;
    }
    pvVar2 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 3;
    }
  }
  else {
    if (((char)param_1[3] != '\x01') ||
       ((uVar4 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)pvVar3 + 0x48)), uVar4 != 0 &&
        (uVar4 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)pvVar3 + 0x5b8)), uVar4 != 0))))
    goto LAB_004c15b8;
    pvVar2 = DAT_005a7b78;
    uVar1 = *(undefined4 *)((int)pvVar3 + 0x5b8);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar1;
    }
    pvVar2 = DAT_005a7b78;
    uVar1 = *(undefined4 *)((int)pvVar3 + 0x48);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar1;
    }
    pvVar2 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 1;
    }
  }
  FUN_004d09a0(DAT_005a7b78,DAT_005a7ce4,DAT_005a7ce8,-3);
LAB_004c15b8:
  puVar8 = FUN_00485080(this,*(int *)((int)pvVar3 + 0x5b0),0x2f);
  iVar5 = FUN_004c1c90(pvVar3,param_1[1]);
  if (iVar5 == 0) {
    iVar5 = FUN_00414e50(pvVar3,param_1[1],&local_4);
    if (iVar5 == 0) {
      return 1;
    }
    pvVar3 = (void *)FUN_00482ac0(this,*(int *)((int)pvVar3 + 0x28),0);
    this_00 = (int *)FUN_00482ac0(this,local_4,0);
    if (pvVar3 != (void *)0x0) {
      FUN_004c2450((int)pvVar3);
      FUN_004176d0(pvVar3,0);
    }
    if (this_00 != (int *)0x0) {
      FUN_004c2450((int)this_00);
      FUN_004176d0(this_00,0);
      ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x2c)))(this_00);
      FUN_00420630((int)this_00);
      FUN_004c1bc0(this_00,puVar8);
      FUN_00410af0(this_00,0xffffffff);
      FUN_004c1c20(puVar8,(int)this_00);
      FUN_00420630((int)puVar8);
    }
    iVar5 = FUN_00420560((int)pvVar3);
    if (iVar5 == 0) {
      return 1;
    }
    if ((*(byte *)((int)pvVar3 + 0x30) & 0x20) == 0) {
      return 1;
    }
    iVar5 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    if (*(int *)((int)pvVar3 + 0x28) != iVar5) {
      return 1;
    }
    FUN_0052bc40((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  }
  else {
    if (puVar8 != (undefined4 *)0x0) {
      local_4 = puVar8[0x16d];
      FUN_004c2370((int)puVar8);
      FUN_00420630((int)puVar8);
    }
    iVar5 = FUN_00420560((int)pvVar3);
    if (iVar5 == 0) {
      return 1;
    }
    if ((*(byte *)((int)pvVar3 + 0x30) & 0x20) == 0) {
      return 1;
    }
    iVar5 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    if (*(int *)((int)pvVar3 + 0x28) != iVar5) {
      return 1;
    }
    FUN_0052bc40((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005a7bcc,DAT_005a7bd0);
  return 1;
#undef local_4
}
