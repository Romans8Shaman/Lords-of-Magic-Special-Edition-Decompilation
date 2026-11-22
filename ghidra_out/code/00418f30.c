
uint __fastcall FUN_00418f30(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (puVar2 == (undefined *)0x0) {
    return 0;
  }
  return ~*(uint *)(puVar2 + 0x15d8) >> 1 & 1;
}


