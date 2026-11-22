
void __fastcall FUN_0052fe80(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = FUN_0052d240((int)param_1);
  if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x12] == *param_1)) {
    iVar2 = FUN_0052c8a0((int)param_1);
    if (-1 < iVar2) {
      uVar3 = FUN_00529180(puVar1 + iVar2 * 0x13 + 0x31);
      if (uVar3 != 0) {
        iVar2 = FUN_004efe80(&DAT_005aee6c,*(int *)(uVar3 + 0x18));
        if (iVar2 != 0) {
          FUN_004efeb0(iVar2);
        }
      }
    }
  }
  return;
}


