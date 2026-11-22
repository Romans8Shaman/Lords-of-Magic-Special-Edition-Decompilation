
undefined4 FUN_004b1e60(DWORD *param_1,int *param_2,int param_3)

{
  LPCSTR pCVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  DWORD arg1;
  char *pcVar6;
  undefined4 local_4;
  
  iVar5 = 0;
  pcVar6 = &DAT_005572ec;
  local_4 = 0;
  arg1 = 0;
  pCVar1 = (LPCSTR)FUN_004b54c0();
  piVar2 = (int *)FUN_00539610(pCVar1,pcVar6);
  if (piVar2 != (int *)0x0) {
    uVar3 = FUN_00548ec0((int)piVar2);
    arg1 = FUN_00548e10(uVar3);
    pcVar6 = (char *)Ordinal_401(arg1,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    FUN_005397f0(pcVar6,1,arg1,piVar2);
    iVar4 = 0;
    if (0 < (int)arg1) {
      do {
        iVar5 = iVar5 + (uint)(byte)pcVar6[iVar4];
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)arg1);
    }
    if (pcVar6 != (char *)0x0) {
      Ordinal_403(pcVar6,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    FUN_005394d0(piVar2);
  }
  if (param_3 == 0) {
    if ((*param_1 == arg1) && (*param_2 == iVar5)) {
      local_4 = 1;
    }
    DAT_00583ad4 = arg1;
    DAT_00583ad8 = iVar5;
  }
  else if (param_3 == 1) {
    DAT_00583ad4 = arg1;
    DAT_00583ad8 = iVar5;
    *param_1 = arg1;
    *param_2 = iVar5;
    return 1;
  }
  *param_1 = arg1;
  *param_2 = iVar5;
  return local_4;
}


