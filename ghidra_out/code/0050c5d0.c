
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_0050c5d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  pvVar3 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    iVar5 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005d2d08,DAT_005d2d0c);
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    _DAT_005ccaa8 = *(undefined4 *)(*piVar1 + -8 + iVar5 * 8);
    _DAT_005ccaac = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    _DAT_005ccaa8 = 0;
    _DAT_005ccaac = local_4;
  }
  if ((char)_DAT_005ccaa8 == '\0') {
    return false;
  }
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    _DAT_005ccaa0 = *(undefined4 *)(*piVar1 + -8 + iVar5 * 8);
    _DAT_005ccaa4 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    _DAT_005ccaa0 = 0;
    _DAT_005ccaa4 = local_4;
  }
  if ((char)_DAT_005ccaa0 == '\0') {
    return false;
  }
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    _DAT_005cca98 = *(undefined4 *)(*piVar1 + -8 + iVar5 * 8);
    _DAT_005cca9c = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    _DAT_005cca98 = 0;
    _DAT_005cca9c = local_4;
  }
  if ((char)_DAT_005cca98 == '\0') {
    return false;
  }
  puVar6 = (undefined4 *)FUN_0040adb0(DAT_005a7b78,&local_8);
  _DAT_005cca90 = *puVar6;
  _DAT_005cca94 = puVar6[1];
  if ((char)_DAT_005cca90 == '\0') {
    return false;
  }
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    _DAT_005cca88 = *(undefined4 *)(*piVar1 + -8 + iVar5 * 8);
    _DAT_005cca8c = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    _DAT_005cca88 = 0;
    _DAT_005cca8c = local_4;
  }
  if ((char)_DAT_005cca88 == '\0') {
    return false;
  }
  puVar6 = (undefined4 *)FUN_0040adb0(DAT_005a7b78,&local_8);
  _DAT_005cca80 = *puVar6;
  _DAT_005cca84 = puVar6[1];
  if ((char)_DAT_005cca80 == '\0') {
    return false;
  }
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    _DAT_005cca78 = *(undefined4 *)(*piVar1 + -8 + iVar5 * 8);
    local_4 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    _DAT_005cca78 = 0;
  }
  _DAT_005cca7c = local_4;
  return (char)_DAT_005cca78 != '\0';
}


