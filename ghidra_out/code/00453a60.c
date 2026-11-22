
int __fastcall FUN_00453a60(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *param_1 = *(int *)(iVar1 + 0x24);
    *(undefined4 *)(iVar1 + 0x24) = 0;
    return iVar1;
  }
  iVar1 = Ordinal_401(0x28,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x24) = 0;
  DAT_005792fc = DAT_005792fc + 0x28;
  return iVar1;
}


