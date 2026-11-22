
undefined4 __thiscall FUN_004d5fa0(void *this,undefined4 *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *arg1;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  bool bVar9;
  uint local_d0;
  void *local_cc;
  byte local_c8 [200];
  
  local_cc = this;
  uVar2 = FUN_005397f0((char *)&local_d0,4,1,param_2);
  if (uVar2 != 1) {
    return 0;
  }
  if (199 < local_d0) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)local_c8,local_d0,1,param_2);
  if (uVar2 != 1) {
    return 0;
  }
  puVar6 = (undefined4 *)((int)this + 0x74);
  *param_1 = 5;
  local_c8[local_d0] = 0;
  arg1 = (undefined4 *)*puVar6;
  while (arg1 != (undefined4 *)0x0) {
    pbVar8 = (byte *)arg1[1];
    pbVar3 = local_c8;
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_004d606a:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_004d606f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_004d606a;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004d606f:
    if (iVar4 == 0) goto LAB_004d6146;
    puVar6 = arg1 + 2;
    if (-1 < iVar4) {
      puVar6 = arg1 + 3;
    }
    arg1 = (undefined4 *)*puVar6;
  }
  arg1 = (undefined4 *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (arg1 == (undefined4 *)0x0) {
    uVar7 = *(undefined4 *)((int)this + 0x7c);
  }
  else {
    uVar2 = 0xffffffff;
    pbVar3 = local_c8;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    iVar4 = Ordinal_401(~uVar2,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    arg1[1] = iVar4;
    if (iVar4 == 0) {
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      uVar7 = 0;
    }
    else {
      *(uint *)((int)local_cc + 0xa90) = *(int *)((int)local_cc + 0xa90) + ~uVar2 + 0x18;
      *(undefined4 **)(*(int *)((int)local_cc + 0x80) + *(int *)((int)local_cc + 0x78) * 4) = arg1;
      arg1[2] = 0;
      arg1[3] = 0;
      *arg1 = *(undefined4 *)((int)local_cc + 0x78);
      *(int *)((int)local_cc + 0x78) = *(int *)((int)local_cc + 0x78) + 1;
      arg1[4] = 0;
      arg1[5] = 0;
      uVar2 = 0xffffffff;
      pbVar3 = local_c8;
      do {
        pbVar8 = pbVar3;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pbVar8 = pbVar3 + 1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar8;
      } while (bVar1 != 0);
      uVar2 = ~uVar2;
      pbVar3 = pbVar8 + -uVar2;
      pbVar8 = (byte *)arg1[1];
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar3;
        pbVar3 = pbVar3 + 4;
        pbVar8 = pbVar8 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pbVar8 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        pbVar8 = pbVar8 + 1;
      }
      *puVar6 = arg1;
LAB_004d6146:
      uVar7 = *arg1;
    }
  }
  param_1[1] = uVar7;
  return 1;
}


