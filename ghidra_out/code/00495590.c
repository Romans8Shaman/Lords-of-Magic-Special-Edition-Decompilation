
void __fastcall FUN_00495590(int *param_1)

{
  char cVar1;
  int *a1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  if ((*param_1 != 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
    DAT_00583648 = DAT_00583648 - param_1[3] * param_1[2];
    if (*param_1 != 0) {
      Ordinal_403(*param_1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
  }
  a1 = (int *)param_1[6];
  if (((a1 != (int *)0x0) && (*param_1 != 0)) && ((*(byte *)(param_1 + 5) & 8) != 0)) {
    pcVar4 = s_m_surf_>Unlock__LPVOID_m_ptr__0055c618;
    iVar2 = (/*IC:004955e8*/**(code **)(*a1 + 0x80))(a1,*param_1);
    FUN_004756f0(iVar2,pcVar4);
  }
  if ((char *)param_1[7] != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar4 = (char *)param_1[7];
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    DAT_00583648 = DAT_00583648 - (~uVar3 - 1);
    if (param_1[7] != 0) {
      Ordinal_403(param_1[7],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    param_1[7] = 0;
  }
  FUN_00494610(param_1);
  return;
}


