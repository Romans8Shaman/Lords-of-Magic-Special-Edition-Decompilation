
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004d1a80(void *this,uint param_1,float param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar2 = 0xffffffff;
  pcVar5 = &DAT_0055e434;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar6 + -uVar2;
  pcVar6 = (char *)&DAT_005d5800;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  switch(param_1 & 0xff) {
  case 0:
    pcVar5 = &DAT_0055e42c;
    break;
  case 1:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e364,(uint)param_2);
    return &DAT_005d5800;
  case 2:
    uVar2 = SUB84((double)(int)param_2 * _DAT_0054dd18,0);
    goto LAB_004d1b0b;
  default:
    goto switchD_004d1abd_caseD_3;
  case 4:
    uVar2 = SUB84((double)param_2,0);
LAB_004d1b0b:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e360,uVar2);
    return &DAT_005d5800;
  case 5:
    if (param_3 == 0) {
      uVar2 = *(uint *)(*(int *)(*(int *)((int)this + 0x80) + (int)param_2 * 4) + 4);
      if ((param_1 & 0x100) == 0) {
        FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055ce54,uVar2);
        return &DAT_005d5800;
      }
      FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e350,uVar2);
      return &DAT_005d5800;
    }
    uVar2 = *(uint *)(*(int *)(*(int *)((int)this + 0x80) + (int)param_2 * 4) + 4);
    if ((param_1 & 0x100) == 0) {
      FUN_0053a090((undefined1 *)&DAT_005d5800,s__s__id__u__0055e414,uVar2);
      return &DAT_005d5800;
    }
    FUN_0053a090((undefined1 *)&DAT_005d5800,s___s__id__u__0055e420,uVar2);
    return &DAT_005d5800;
  case 6:
    if ((param_1 & 0x100) == 0) {
      uVar2 = 0xffffffff;
      pcVar5 = &DAT_0055e404;
      do {
        pcVar6 = pcVar5;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar6 + -uVar2;
      pcVar6 = (char *)&DAT_005d5800;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      return &DAT_005d5800;
    }
    pcVar5 = s_________0055e40c;
    break;
  case 7:
    pcVar5 = s_<<_____>>_0055e3f8;
    break;
  case 8:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e3f0,(uint)param_2);
    return &DAT_005d5800;
  case 9:
    pcVar5 = (char *)FUN_004d4310(this,(char)param_1,(int)param_2);
    if (pcVar5 == (char *)0x0) {
      uVar2 = 0xffffffff;
      pcVar5 = &DAT_0055b438;
      do {
        pcVar6 = pcVar5;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar6 + -uVar2;
      pcVar6 = (char *)&DAT_005d5800;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
    }
    else {
      uVar2 = 0xffffffff;
      do {
        pcVar6 = pcVar5;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar6 + -uVar2;
      pcVar6 = (char *)&DAT_005d5800;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 == 0) goto switchD_004d1abd_caseD_3;
    uVar2 = 0xffffffff;
    pcVar5 = s__operator__0055e3e4;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar6 = pcVar6 + -uVar2;
    iVar4 = -1;
    pcVar5 = (char *)&DAT_005d5800;
    do {
      pcVar7 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    goto LAB_004d1d6f;
  case 10:
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_0055e3e0;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar6 + -uVar2;
    pcVar6 = (char *)&DAT_005d5800;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    return &DAT_005d5800;
  case 0xb:
    pcVar5 = &DAT_0055e3dc;
    break;
  case 0xc:
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_0055e3d8;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar6 + -uVar2;
    pcVar6 = (char *)&DAT_005d5800;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    return &DAT_005d5800;
  case 0xd:
    pcVar5 = &DAT_0055e3d4;
    break;
  case 0xe:
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_0055e3d0;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar6 + -uVar2;
    pcVar6 = (char *)&DAT_005d5800;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    return &DAT_005d5800;
  case 0xf:
    pcVar5 = &DAT_0055e3cc;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar6 + -uVar2;
  pcVar7 = (char *)&DAT_005d5800;
LAB_004d1d6f:
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
switchD_004d1abd_caseD_3:
  return &DAT_005d5800;
}


