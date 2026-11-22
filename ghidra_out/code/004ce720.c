
void __fastcall FUN_004ce720(void *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  byte *pbVar12;
  bool bVar13;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar5 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar5;
    uVar2 = (undefined1)*(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    uVar2 = 0;
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  pbVar3 = (byte *)FUN_004ce660(uVar2);
  puVar10 = (undefined4 *)((int)param_1 + 0x74);
  puVar6 = *(undefined4 **)((int)param_1 + 0x74);
  while (puVar6 != (undefined4 *)0x0) {
    pbVar12 = (byte *)puVar6[1];
    pbVar4 = pbVar3;
    do {
      bVar1 = *pbVar4;
      bVar13 = bVar1 < *pbVar12;
      if (bVar1 != *pbVar12) {
LAB_004ce7bf:
        iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_004ce7c4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar13 = bVar1 < pbVar12[1];
      if (bVar1 != pbVar12[1]) goto LAB_004ce7bf;
      pbVar4 = pbVar4 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_004ce7c4:
    if (iVar5 == 0) {
      uVar11 = *puVar6;
      goto LAB_004ce8a2;
    }
    puVar10 = puVar6 + 2;
    if (-1 < iVar5) {
      puVar10 = puVar6 + 3;
    }
    puVar6 = (undefined4 *)*puVar10;
  }
  puVar6 = (undefined4 *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar6 == (undefined4 *)0x0) {
    uVar11 = *(undefined4 *)((int)param_1 + 0x7c);
  }
  else {
    uVar8 = 0xffffffff;
    pbVar12 = pbVar3;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar1 != 0);
    iVar5 = Ordinal_401(~uVar8,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    puVar6[1] = iVar5;
    if (iVar5 == 0) {
      Ordinal_403(puVar6,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      uVar11 = 0;
    }
    else {
      *(uint *)((int)param_1 + 0xa90) = *(int *)((int)param_1 + 0xa90) + ~uVar8 + 0x18;
      *(undefined4 **)(*(int *)((int)param_1 + 0x80) + *(int *)((int)param_1 + 0x78) * 4) = puVar6;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = *(undefined4 *)((int)param_1 + 0x78);
      *(int *)((int)param_1 + 0x78) = *(int *)((int)param_1 + 0x78) + 1;
      puVar6[4] = 0;
      puVar6[5] = 0;
      uVar8 = 0xffffffff;
      do {
        pbVar12 = pbVar3;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pbVar12 = pbVar3 + 1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar12;
      } while (bVar1 != 0);
      uVar8 = ~uVar8;
      pbVar3 = pbVar12 + -uVar8;
      pbVar12 = (byte *)puVar6[1];
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar3;
        pbVar3 = pbVar3 + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar12 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        pbVar12 = pbVar12 + 1;
      }
      *puVar10 = puVar6;
      uVar11 = *puVar6;
    }
  }
LAB_004ce8a2:
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar5 = *(int *)((int)param_1 + 0x50);
  iVar7 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar7;
  *(undefined4 *)(iVar5 + iVar7 * 8) = 5;
  *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar11;
  return;
}


