
void __thiscall FUN_004fee00(void *this,uint *param_1)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  char *pcVar14;
  
  puVar5 = FUN_0053a560(param_1,&DAT_005733a8);
  if (puVar5 != (uint *)0x0) {
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_005733a8;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    pcVar10 = (char *)((int)puVar5 + (~uVar8 - 1));
    cVar2 = *pcVar10;
    pcVar12 = pcVar10;
    while (' ' < cVar2) {
      pcVar7 = pcVar12 + 1;
      pcVar12 = pcVar12 + 1;
      cVar2 = *pcVar7;
    }
    cVar2 = *pcVar12;
    *pcVar12 = '\0';
    _strncpy((char *)((int)this + 0xc),pcVar10,0x103);
    *(undefined1 *)((int)this + 0x10f) = 0;
    *pcVar12 = cVar2;
  }
  puVar5 = FUN_0053a560(param_1,&DAT_005733ac);
  if (puVar5 != (uint *)0x0) {
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_005733ac;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    pbVar11 = (byte *)((int)puVar5 + (~uVar8 - 1));
    bVar4 = *pbVar11;
    pbVar13 = pbVar11;
    while (' ' < (char)bVar4) {
      pbVar1 = pbVar13 + 1;
      pbVar13 = pbVar13 + 1;
      bVar4 = *pbVar1;
    }
    bVar4 = *pbVar13;
    *pbVar13 = 0;
    uVar6 = FUN_0053b630(pbVar11);
    *(undefined4 *)((int)this + 0x6ac) = uVar6;
    *pbVar13 = bVar4;
  }
  puVar5 = FUN_0053a560(param_1,s__testseed__005733d8);
  if (puVar5 != (uint *)0x0) {
    uVar8 = 0xffffffff;
    pcVar12 = s__testseed__005733d8;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    pbVar11 = (byte *)((int)puVar5 + (~uVar8 - 1));
    bVar4 = *pbVar11;
    pbVar13 = pbVar11;
    while (' ' < (char)bVar4) {
      pbVar1 = pbVar13 + 1;
      pbVar13 = pbVar13 + 1;
      bVar4 = *pbVar1;
    }
    bVar4 = *pbVar13;
    *pbVar13 = 0;
    DAT_005d2ca4 = FUN_0053b630(pbVar11);
    *pbVar13 = bVar4;
  }
  puVar5 = FUN_0053a560(param_1,s__debug_005733b0);
  if (puVar5 != (uint *)0x0) {
    *(undefined4 *)((int)this + 0x6b0) = 1;
  }
  puVar5 = FUN_0053a560(param_1,&DAT_005733f8);
  if (puVar5 != (uint *)0x0) {
    *(undefined4 *)((int)this + 0x6b4) = 0;
  }
  puVar5 = FUN_0053a560(param_1,s__nodebug_005733b8);
  if (puVar5 != (uint *)0x0) {
    *(undefined4 *)((int)this + 0x6b0) = 0;
  }
  puVar5 = FUN_0053a560(param_1,s__nompq_005733d0);
  if (puVar5 != (uint *)0x0) {
    *(undefined4 *)((int)this + 300) = 0;
  }
  puVar5 = FUN_0053a560(param_1,s__notrimlogs__005733e8);
  if (puVar5 != (uint *)0x0) {
    *(undefined4 *)((int)this + 0x130) = 0;
  }
  puVar5 = FUN_0053a560(param_1,&DAT_005733c8);
  if (puVar5 != (uint *)0x0) {
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_005733c8;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    pcVar10 = (char *)((int)puVar5 + (~uVar8 - 1));
    cVar2 = *pcVar10;
    pcVar12 = pcVar10;
    while (' ' < cVar2) {
      pcVar7 = pcVar12 + 1;
      pcVar12 = pcVar12 + 1;
      cVar2 = *pcVar7;
    }
    cVar2 = *pcVar12;
    uVar8 = 0xffffffff;
    *pcVar12 = '\0';
    pcVar7 = pcVar10;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    if (*(int *)((int)this + 0x110) != 0) {
      Ordinal_403(*(int *)((int)this + 0x110),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    pcVar7 = (char *)Ordinal_401(~uVar8,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(char **)((int)this + 0x110) = pcVar7;
    if (pcVar7 != (char *)0x0) {
      uVar8 = 0xffffffff;
      do {
        pcVar14 = pcVar10;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar10 + 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar14;
      } while (cVar3 != '\0');
      uVar8 = ~uVar8;
      pcVar10 = pcVar14 + -uVar8;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar7 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    *pcVar12 = cVar2;
  }
  return;
}


