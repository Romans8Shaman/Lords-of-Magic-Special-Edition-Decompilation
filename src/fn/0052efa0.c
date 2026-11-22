/* Rebuilt from lomse.exe FUN_0052efa0 @ 0x0052efa0 (664 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7cbc (*(uint *)0x005a7cbc)
#define DAT_005a7cc0 (*(int * *)0x005a7cc0)
#define DAT_005a7d84 (*(uint *)0x005a7d84)
#define DAT_005a7d88 (*(int * *)0x005a7d88)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0052d160 ((undefined4 (__fastcall *)(int))0x0052d160)

#define LOM_SELF_0052efa0 1
void __stdcall rb_0052efa0(void)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
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
  
  iVar4 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  puVar5 = FUN_00485080(&DAT_005aa12c,iVar4,0x2f);
  if ((((puVar5 != (undefined4 *)0x0) && (iVar4 = FUN_004c1cf0((int)puVar5), iVar4 != 0)) &&
      (*(char *)(puVar5 + 0x172) < '\x03')) &&
     ((puVar6 = FUN_00485080(&DAT_005aa12c,puVar5[0x16c],0x2f), puVar6 != (undefined4 *)0x0 &&
      (iVar4 = FUN_004c1c50((int)puVar6), pvVar3 = DAT_005a7b78, iVar4 != 0)))) {
    uVar2 = puVar6[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      *(undefined4 *)(iVar4 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar7 * 8) = uVar2;
    }
    pvVar3 = DAT_005a7b78;
    uVar2 = puVar5[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar7 * 8) = uVar2;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005a7cbc,DAT_005a7cc0);
  }
  if (((puVar5 != (undefined4 *)0x0) &&
      (iVar4 = FUN_004c1cf0((int)puVar5), pvVar3 = DAT_005a7b78, iVar4 != 0)) &&
     (('\x02' < *(char *)(puVar5 + 0x172) && (DAT_005a7d84 != 0)))) {
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar7 * 8) = 0xffffffff;
    }
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar7 * 8) = 0xffffffff;
    }
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar7 * 8) = 0xc;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      local_8 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
      local_4 = *(undefined4 *)(*piVar1 + -4 + iVar4 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      local_8 = 0;
    }
    iVar4 = FUN_004026a0(&local_8,&local_c,&local_10,&local_14);
    if (iVar4 == 0) {
      FUN_00404ab0(pvVar3,0xe);
    }
  }
  return;
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
