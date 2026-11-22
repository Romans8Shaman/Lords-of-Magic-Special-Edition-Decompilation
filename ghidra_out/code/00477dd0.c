
undefined4 FUN_00477dd0(void)

{
  char cVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pMem;
  uint uVar4;
  uint uVar5;
  undefined4 *unaff_EBX;
  char *pcVar6;
  int *unaff_EDI;
  char *pcVar7;
  int *local_8;
  SIZE_T SStack_4;
  
  if (DAT_005832d8 != (char *)0x0) {
    Ordinal_403(DAT_005832d8,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  iVar2 = Ordinal_4(0,&local_8,0,0,0);
  if (iVar2 < 0) {
    return 0;
  }
  iVar2 = (/*IC:00477e27*/**(code **)(*local_8 + 0x20))(local_8,0,0,&SStack_4);
  if (iVar2 != -0x7788ffe2) {
    (/*IC:00477e38*/**(code **)(*local_8 + 8))(local_8);
    return 0;
  }
  pvVar3 = GlobalAlloc(0x42,SStack_4);
  pMem = GlobalLock(pvVar3);
  if (pMem == (LPVOID)0x0) {
    (/*IC:00477e66*/**(code **)(*local_8 + 8))(local_8);
    return 0;
  }
  iVar2 = (/*IC:00477e7e*/**(code **)(*local_8 + 0x20))(local_8,0,pMem,&SStack_4);
  if ((-1 < iVar2 != 0) &&
     (pcVar6 = *(char **)(*(int *)((int)pMem + 8) + 0x30), pcVar6 != (char *)0x0)) {
    uVar4 = 0xffffffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    DAT_005832d8 = (char *)Ordinal_401(~uVar4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    uVar4 = 0xffffffff;
    pcVar6 = *(char **)(*(int *)((int)pMem + 8) + 0x30);
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = DAT_005832d8;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    *unaff_EBX = DAT_005832d8;
  }
  (/*IC:00477eed*/**(code **)(*unaff_EDI + 8))();
  pvVar3 = GlobalHandle(pMem);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(pMem);
  GlobalFree(pvVar3);
  return (uint)(-1 < iVar2);
}


