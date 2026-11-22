/* Rebuilt from lomse.exe FUN_00481290 @ 0x00481290 (625 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d24 (*(uint *)0x005a7d24)
#define DAT_005a7d28 (*(int * *)0x005a7d28)
#define DAT_005a7d44 (*(uint *)0x005a7d44)
#define DAT_005a7d48 (*(int * *)0x005a7d48)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005a9ddc (*(undefined4 *)0x005a9ddc)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_0040c080 ((undefined4 (__thiscall *)(void *, void *, int, int))0x0040c080)
#define FUN_0040f460 ((undefined4 (__thiscall *)(void *, void *))0x0040f460)
#define FUN_00481240 ((undefined4 (__fastcall *)(int))0x00481240)
#define FUN_00481f10 ((undefined4 (__fastcall *)(int))0x00481f10)
#define FUN_004ba870 ((undefined4 (__fastcall *)(void *))0x004ba870)
#define FUN_004ba940 ((undefined4 (__fastcall *)(int))0x004ba940)
#define FUN_004bb180 ((undefined4 (__fastcall *)(int))0x004bb180)
#define FUN_004bb460 ((undefined4 (__fastcall *)(int))0x004bb460)
#define FUN_004bcb00 ((undefined4 (__fastcall *)(int))0x004bcb00)
#define FUN_004c8760 ((undefined4 (__fastcall *)(int))0x004c8760)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f7770 ((undefined4 (__fastcall *)(int))0x004f7770)
#define FUN_004f77c0 ((undefined4 (__fastcall *)(int))0x004f77c0)
#define FUN_004f7800 ((undefined4 (__fastcall *)(int))0x004f7800)
#define FUN_004f7850 ((undefined4 (__fastcall *)(int))0x004f7850)
#define FUN_004f7890 ((undefined4 (__fastcall *)(int))0x004f7890)
#define FUN_004f78e0 ((undefined4 (__fastcall *)(int))0x004f78e0)
#define FUN_004f7930 ((undefined4 (__fastcall *)(int))0x004f7930)
#define FUN_00508150 ((undefined4 (__fastcall *)(int))0x00508150)
#define FUN_0052cef0 ((undefined4 (__thiscall *)(void *, int, int))0x0052cef0)

#define LOM_SELF_00481290 1
undefined4 __fastcall rb_00481290(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  
  iVar6 = 0;
  uVar4 = *(uint *)(param_1 + 0x228a8);
  do {
    uVar4 = uVar4 + 1;
    uVar5 = (int)uVar4 >> 0x1f;
    uVar5 = ((uVar4 ^ uVar5) - uVar5 & 0xf ^ uVar5) - uVar5;
    if ((*(byte *)(param_1 + 0x6640 + uVar5 * 0x1d84) & 1) != 0) break;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  if (*(uint *)(param_1 + 0x228a8) != uVar5) {
    iVar6 = param_1 + 0x4848;
    FUN_004f7930(iVar6);
    FUN_00481240(iVar6);
    if ((int)uVar5 < *(int *)(param_1 + 0x228a8)) {
      FUN_004c8760(param_1);
      *(int *)(param_1 + 0x5004) = *(int *)(param_1 + 0x5004) + 1;
    }
    if (*(int *)(param_1 + 0x228a8) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
      FUN_004ba940(0x5a9ddc);
    }
    *(uint *)(param_1 + 0x228a8) = uVar5;
    iVar3 = param_1 + 0x5068 + uVar5 * 0x1d84;
    FUN_004bb180(iVar3);
    FUN_004f77c0(iVar6);
    FUN_004f7770(iVar6);
    FUN_004f7800(iVar6);
    FUN_004f7850(iVar6);
    FUN_004f7890(iVar6);
    FUN_004f78e0(iVar6);
    FUN_004bcb00(iVar3);
    FUN_004bb460(iVar3);
    FUN_0040f460((void *)(param_1 + 0x4da4),DAT_005a7b78);
  }
  if (*(int *)(param_1 + 0x228a8) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
    FUN_004ba870(&DAT_005a9ddc);
  }
  FUN_0052cef0(&DAT_00584ae8,*(int *)(param_1 + 0x228a8),0);
  FUN_004d05e0(DAT_005a7b78,DAT_005a7d44,DAT_005a7d48);
  FUN_0040c080((void *)(param_1 + 0x4d60),DAT_005a7b78,*(int *)(param_1 + 0x5004),
               *(int *)(param_1 + 0x228a8));
  FUN_00481f10(param_1);
  iVar6 = *(int *)(param_1 + 0x228a8);
  if ((iVar6 < 0) || (0xf < iVar6)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = &DAT_005af194 + iVar6 * 0x1d84;
  }
  if (puVar7 != (undefined *)0x0) {
    iVar6 = FUN_00508150((int)puVar7);
    pvVar2 = DAT_005a7b78;
    if ((iVar6 != 0) && (DAT_005a7d24 != 0)) {
      uVar1 = *(undefined4 *)(puVar7 + 0x15a8);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x50);
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        *(undefined4 *)(iVar6 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar6 + 4 + iVar3 * 8) = uVar1;
      }
      pvVar2 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        iVar6 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar6 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar6 + 4 + iVar3 * 8) = 0xffffffff;
      }
      FUN_004d09a0(DAT_005a7b78,DAT_005a7d24,DAT_005a7d28,-2);
    }
  }
  return 1;
}
