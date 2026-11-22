
undefined4 __fastcall FUN_00420580(int param_1)

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
    return 1;
  }
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 4) {
    return 1;
  }
  return (uint)((*(uint *)(puVar2 + 0x15d8) & 0x18) != 0);
}


