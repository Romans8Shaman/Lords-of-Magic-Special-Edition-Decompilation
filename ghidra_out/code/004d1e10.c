
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d1e10(void *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  float local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar5 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    uVar5 = 0;
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_0055e434;
  do {
    pcVar8 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar8 + -uVar3;
  pcVar8 = (char *)&DAT_005d5800;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  switch(uVar5 & 0xff) {
  case 0:
    pcVar7 = &DAT_0055e42c;
    goto LAB_004d20dd;
  case 1:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e364,(uint)local_4);
    FUN_004d1dd0(param_1,&DAT_005d5800);
    return;
  case 2:
    uVar5 = SUB84((double)(int)local_4 * _DAT_0054dd18,0);
    goto LAB_004d1ee4;
  default:
    goto switchD_004d1e90_caseD_3;
  case 4:
    uVar5 = SUB84((double)local_4,0);
LAB_004d1ee4:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e360,uVar5);
    FUN_004d1dd0(param_1,&DAT_005d5800);
    return;
  case 5:
    uVar3 = *(uint *)(*(int *)(*(int *)((int)param_1 + 0x80) + (int)local_4 * 4) + 4);
    if ((uVar5 & 0x100) == 0) {
      FUN_0053a090((undefined1 *)&DAT_005d5800,s__s__id__u__0055e414,uVar3);
      FUN_004d1dd0(param_1,&DAT_005d5800);
      return;
    }
    FUN_0053a090((undefined1 *)&DAT_005d5800,s___s__id__u__0055e420,uVar3);
    FUN_004d1dd0(param_1,&DAT_005d5800);
    return;
  case 6:
    if ((uVar5 & 0x100) == 0) {
      pcVar7 = &DAT_0055e404;
      goto LAB_004d20dd;
    }
    uVar5 = 0xffffffff;
    pcVar7 = s_________0055e40c;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 7:
    uVar5 = 0xffffffff;
    pcVar7 = s_<<_____>>_0055e3f8;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 8:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e3f0,(uint)local_4);
    FUN_004d1dd0(param_1,&DAT_005d5800);
    return;
  case 9:
    pcVar7 = (char *)FUN_004d4310(param_1,(char)uVar5,(int)local_4);
    if (pcVar7 == (char *)0x0) {
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_0055b438;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = (char *)&DAT_005d5800;
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
    }
    else {
      uVar5 = 0xffffffff;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = (char *)&DAT_005d5800;
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar7 = s__operator__0055e3e4;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    iVar2 = -1;
    pcVar6 = (char *)&DAT_005d5800;
    do {
      pcVar7 = pcVar6;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    goto LAB_004d20f1;
  case 10:
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_0055e3e0;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 0xb:
    pcVar7 = &DAT_0055e3dc;
    goto LAB_004d20dd;
  case 0xc:
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_0055e3d8;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 0xd:
    pcVar7 = &DAT_0055e3d4;
    goto LAB_004d20dd;
  case 0xe:
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_0055e3d0;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 0xf:
    pcVar7 = &DAT_0055e3cc;
LAB_004d20dd:
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
LAB_004d20f1:
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
switchD_004d1e90_caseD_3:
  FUN_004d1dd0(param_1,&DAT_005d5800);
  return;
}


