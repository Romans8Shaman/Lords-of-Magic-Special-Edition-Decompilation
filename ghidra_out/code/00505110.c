
char * __thiscall FUN_00505110(void *this,int param_1,uint param_2)

{
  char cVar1;
  UINT UVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  if ((param_1 < 0) || (7 < param_1)) {
    return s_LOM__________00573620;
  }
  switch(param_1) {
  case 0:
    if (DAT_005851a0 == 0) {
      return s_savegame_lastsave_lom_00573694;
    }
    return s_multisav_lastsave_lom_005736ac;
  case 1:
    pcVar6 = s_LOMGSOUT_TMP_00573684;
    break;
  case 2:
    pcVar6 = s_LOMXFERG_TMP_00573674;
    break;
  case 3:
    pcVar6 = s_LOMXFERS_TMP_00573664;
    break;
  case 4:
    pcVar6 = s_LOMXFERU_TMP_00573654;
    break;
  case 5:
    pcVar6 = s_APPLOG_TXT_005736c4;
    break;
  case 6:
    pcVar6 = s_LOM_TSPR_TMP_00573644;
    break;
  case 7:
    FUN_0053a090(&DAT_005d20c0,s_LOMD__4d_TMP_00573634,param_2);
    pcVar6 = &DAT_005d20c0;
    break;
  default:
    UVar2 = GetTempFileNameA((LPCSTR)((int)this + 0x4d4a8),&DAT_00573630,
                             *(UINT *)((int)this + param_1 * 4 + 0x4d488),(LPSTR)&DAT_005d2358);
    *(UINT *)((int)this + param_1 * 4 + 0x4d488) = UVar2;
    return (char *)&DAT_005d2358;
  }
  uVar3 = 0xffffffff;
  pcVar7 = (char *)((int)this + 0x4d4a8);
  do {
    pcVar9 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar9 + -uVar3;
  pcVar9 = (char *)&DAT_005d2358;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar7 = (char *)&DAT_005d2358;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (((0 < (int)(~uVar3 - 1)) && ((&DAT_005d2356)[~uVar3] != '\\')) &&
     ((&DAT_005d2356)[~uVar3] != '/')) {
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_00573464;
    do {
      pcVar9 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar7 = (char *)&DAT_005d2358;
    do {
      pcVar8 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar3;
    pcVar9 = pcVar8 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  uVar3 = 0xffffffff;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar5 = -1;
  pcVar6 = (char *)&DAT_005d2358;
  do {
    pcVar9 = pcVar6;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = pcVar9 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar6 = (char *)&DAT_005d2358;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = &DAT_005d2480 + param_1 * 0x104;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return &DAT_005d2480 + param_1 * 0x104;
}


