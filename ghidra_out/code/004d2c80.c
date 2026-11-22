
void __fastcall FUN_004d2c80(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *arg1;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  iVar5 = 10;
  puVar6 = param_1;
  do {
    if ((int *)*puVar6 != (int *)0x0) {
      FUN_005394d0((int *)*puVar6);
      *puVar6 = 0;
    }
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  arg1 = (int *)param_1[0x21];
  while (arg1 != (int *)0x0) {
    if (*arg1 != 0) {
      Ordinal_403(*arg1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      *arg1 = 0;
    }
    piVar2 = (int *)arg1[1];
    if (arg1 != (int *)0x0) {
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
    param_1[0x2a7] = param_1[0x2a7] + -8;
    arg1 = piVar2;
  }
  iVar5 = param_1[0x17];
  param_1[0x21] = 0;
  if ((iVar5 != 0) && (param_1[0x2a3] = param_1[0x2a3] + param_1[0x19] * -4, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar5 = param_1[0x14];
  if ((iVar5 != 0) && (param_1[0x2a2] = param_1[0x2a2] + param_1[0x16] * -8, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar5 = param_1[0x21c];
  if ((iVar5 != 0) && (param_1[0x2a5] = param_1[0x2a5] + param_1[0x16] * -8, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar5 = param_1[0x29c];
  if ((iVar5 != 0) && (param_1[0x2a6] = param_1[0x2a6] + param_1[0x16] * -8, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar5 = param_1[0x29d];
  if ((iVar5 != 0) && (param_1[0x2a6] = param_1[0x2a6] + param_1[0x16] * -4, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar5 = param_1[0x1d];
  if (iVar5 != 0) {
    FUN_004d2ec0(param_1,*(int *)(iVar5 + 8));
    FUN_004d2ec0(param_1,*(int *)(iVar5 + 0xc));
    iVar3 = param_1[0x2a4];
    param_1[0x2a4] = iVar3 + -0x18;
    if (*(char **)(iVar5 + 4) != (char *)0x0) {
      uVar4 = 0xffffffff;
      pcVar7 = *(char **)(iVar5 + 4);
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      param_1[0x2a4] = (iVar3 + -0x18) - (~uVar4 - 1);
    }
    if (*(int *)(iVar5 + 4) != 0) {
      Ordinal_403(*(int *)(iVar5 + 4),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  iVar5 = param_1[0x20];
  if ((iVar5 != 0) && (param_1[0x2a4] = param_1[0x2a4] + param_1[0x1f] * -4, iVar5 != 0)) {
    Ordinal_403(iVar5,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  return;
}


