
undefined4 __fastcall FUN_0041b670(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (puVar2 != (undefined *)0x0) {
    iVar1 = *(int *)(puVar2 + 0x15dc);
    if (DAT_005d1e84 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = FUN_004b7dd0(DAT_005d1e84);
    }
    if (iVar1 == iVar3) {
      return 1;
    }
  }
  return 0;
}


