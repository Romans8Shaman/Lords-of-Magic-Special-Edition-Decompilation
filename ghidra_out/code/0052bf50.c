
undefined4 __fastcall FUN_0052bf50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00((int *)(param_1 + 0xc4));
  if (((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x164), iVar1 < 0)) || (0x22 < iVar1)) {
    return 0xffffffff;
  }
  return *(undefined4 *)(&DAT_00574320 + iVar1 * 4);
}


