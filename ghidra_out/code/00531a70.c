
void __fastcall thunk_FUN_00531a80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    iVar2 = iVar1;
    for (iVar3 = *(int *)(iVar1 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar2 = iVar3;
    }
    *(int *)(iVar2 + 4) = param_1[7];
    param_1[7] = iVar1;
  }
  iVar1 = param_1[7];
  param_1[6] = 0;
  while (iVar1 != 0) {
    param_1[7] = *(int *)(iVar1 + 4);
    if (iVar1 != 0) {
      Ordinal_403(iVar1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
    iVar1 = param_1[7];
  }
  if (*param_1 != 0) {
    Ordinal_403(*param_1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    Ordinal_403(param_1[1],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  return;
}


