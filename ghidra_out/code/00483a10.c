
undefined4 __thiscall FUN_00483a10(void *this,int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar5 = param_2;
  pcVar6 = param_2;
  for (iVar3 = 0x29; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  uVar2 = FUN_005397f0((char *)&param_2,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0(pcVar5,(uint)param_2,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  if (*(int *)this < 99) {
    pcVar5 = param_3;
    for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + 4;
    }
    iVar3 = 0x10;
    pcVar5 = param_3 + 4;
    pcVar6 = (char *)((int)this + 0x50ac);
    do {
      pcVar7 = pcVar6;
      if (*pcVar6 == '\0') {
        pcVar7 = &DAT_0055b438;
      }
      uVar2 = 0xffffffff;
      do {
        pcVar8 = pcVar7;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar7 = pcVar8 + -uVar2;
      pcVar8 = pcVar5;
      for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      iVar3 = iVar3 + -1;
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(undefined4 *)(pcVar5 + -4) = *(undefined4 *)(pcVar6 + 0x1574);
      pcVar5 = pcVar5 + 0x24;
      pcVar6 = pcVar6 + 0x1d84;
    } while (iVar3 != 0);
  }
  else {
    uVar2 = FUN_005397f0(param_3,0x240,1,param_1);
    if (uVar2 != 1) {
      return 0;
    }
  }
  return 1;
}


