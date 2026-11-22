
void __fastcall FUN_0040ef60(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x4c);
    if (iVar2 != 0) {
      FUN_0040eb60();
      Ordinal_403(iVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  iVar1 = param_1[1];
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x4c);
    if (iVar2 != 0) {
      FUN_0040eb60();
      Ordinal_403(iVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  return;
}


