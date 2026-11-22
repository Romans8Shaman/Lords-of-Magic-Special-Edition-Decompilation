
undefined4 __fastcall FUN_00481290(int param_1)

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


