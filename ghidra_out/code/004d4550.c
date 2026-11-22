
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004d4550(void *param_1)

{
  char cVar1;
  float fVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char local_1f4 [500];
  
  if (*(int *)((int)param_1 + 0x90) == 0x16) {
    *(undefined4 *)((int)param_1 + 0xa4) = 1;
    return 0x16;
  }
  *(int *)((int)param_1 + 0xa78) = *(int *)((int)param_1 + 0xa78) + 1;
  pcVar3 = (char *)FUN_004d4380(*(int *)((int)param_1 + 0x90));
  uVar5 = 0xffffffff;
  do {
    pcVar10 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar10 + -uVar5;
  pcVar10 = local_1f4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  iVar8 = *(int *)((int)param_1 + 0x90);
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  if (iVar8 != 0x11) goto LAB_004d483c;
  uVar5 = 0xffffffff;
  fVar2 = *(float *)((int)param_1 + 0xa0);
  pcVar3 = &DAT_0055e434;
  do {
    pcVar10 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  uVar6 = *(uint *)((int)param_1 + 0x9c);
  pcVar3 = pcVar10 + -uVar5;
  pcVar10 = (char *)&DAT_005d5800;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  switch(uVar6 & 0xff) {
  case 0:
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055e42c;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 1:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e364,(uint)fVar2);
    goto switchD_004d4606_caseD_3;
  case 2:
    uVar5 = SUB84((double)(int)fVar2 * _DAT_0054dd18,0);
    goto LAB_004d4666;
  default:
    goto switchD_004d4606_caseD_3;
  case 4:
    uVar5 = SUB84((double)fVar2,0);
LAB_004d4666:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e360,uVar5);
    goto switchD_004d4606_caseD_3;
  case 5:
    uVar5 = *(uint *)(*(int *)(*(int *)((int)param_1 + 0x80) + (int)fVar2 * 4) + 4);
    if ((uVar6 & 0x100) == 0) {
      FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055ce54,uVar5);
    }
    else {
      FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e350,uVar5);
    }
    goto switchD_004d4606_caseD_3;
  case 6:
    if ((uVar6 & 0x100) != 0) {
      pcVar3 = s_________0055e40c;
      goto LAB_004d47c1;
    }
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055e404;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 7:
    pcVar3 = s_<<_____>>_0055e3f8;
    goto LAB_004d47c1;
  case 8:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e3f0,(uint)fVar2);
    goto switchD_004d4606_caseD_3;
  case 9:
    pcVar3 = (char *)FUN_004d4310(param_1,(char)uVar6,(int)fVar2);
    if (pcVar3 != (char *)0x0) goto LAB_004d47c1;
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055b438;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 10:
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055e3e0;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 0xb:
    pcVar3 = &DAT_0055e3dc;
    goto LAB_004d47c1;
  case 0xc:
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055e3d8;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 0xd:
    pcVar3 = &DAT_0055e3d4;
    goto LAB_004d47c1;
  case 0xe:
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055e3d0;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 0xf:
    pcVar3 = &DAT_0055e3cc;
LAB_004d47c1:
    uVar5 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
switchD_004d4606_caseD_3:
  uVar5 = 0xffffffff;
  pcVar3 = &DAT_0055e6ac;
  do {
    pcVar10 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar8 = -1;
  pcVar3 = local_1f4;
  do {
    pcVar9 = pcVar3;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar3 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = (char *)&DAT_005d5800;
  do {
    pcVar10 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar8 = -1;
  pcVar3 = local_1f4;
  do {
    pcVar9 = pcVar3;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar3 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
LAB_004d483c:
  uVar4 = FUN_004d41c0(param_1,local_1f4);
  return uVar4;
}


