
undefined4 __fastcall FUN_00482180(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x6a8);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x5068 + iVar1 * 0x1d84;
  }
  iVar2 = *(int *)(param_1 + 0xc84);
  if ((iVar2 < 0) || (0xf < iVar2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + 0x5068 + iVar2 * 0x1d84;
  }
  if ((iVar1 == 0) || (iVar2 == 0)) {
    FUN_005047d0(s_RealTimeNetworkCombat___p1_or_p2_0055b248);
  }
  iVar1 = FUN_004bb560(iVar1);
  if (iVar1 != 0) {
    iVar1 = FUN_004bb560(iVar2);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


