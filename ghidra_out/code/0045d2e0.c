
undefined4 __thiscall
FUN_0045d2e0(void *this,int *param_1,int param_2,void *param_3,undefined4 param_4,undefined4 param_5
            ,byte *param_6,byte *param_7,int param_8,int param_9)

{
  bool bVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  int *piVar13;
  LPCSTR pCVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  void *pvVar20;
  undefined4 *puVar21;
  int *piVar22;
  byte bVar23;
  int *local_48;
  int *local_40;
  undefined4 *local_3c;
  int local_38;
  uint local_34;
  int *local_30;
  int local_2c;
  int local_28;
  void *local_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549dc1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = (void *)FUN_00482ac0(this,(int)param_1,0);
  iVar8 = param_2;
  if (param_3 == (void *)0x0) {
    bVar23 = 0xf;
  }
  else {
    bVar23 = 0x2f;
  }
  puVar3 = FUN_00485080(this,param_2,bVar23);
  if (puVar3 == (undefined4 *)0x0) {
    local_34 = FUN_00482ac0(this,iVar8,1);
  }
  if (pvVar2 == (void *)0x0) {
    local_40 = (int *)0x0;
    local_28 = -1;
  }
  else {
    local_40 = *(int **)((int)pvVar2 + 0x1c);
    local_28 = *(int *)((int)pvVar2 + 0x48);
  }
  if (puVar3 == (undefined4 *)0x0) {
    if (local_34 == 0) {
      local_48 = (int *)0x0;
      local_30 = (int *)0xffffffff;
    }
    else {
      local_48 = *(int **)(local_34 + 0x1c);
      local_30 = *(int **)(local_34 + 0x5c);
    }
  }
  else {
    local_48 = (int *)puVar3[7];
    local_30 = (int *)puVar3[0x12];
  }
  DAT_00583100 = 0;
  if (param_3 == (void *)0x0) {
    FUN_004553d0((int *)((int)this + 0x47bc));
  }
  iVar8 = *(int *)((int)this + 0xc14);
  iVar18 = *(int *)((int)this + 0x11f0);
  piVar13 = (int *)((int)this + 0x660);
  FUN_004117f0(piVar13,0);
  FUN_004117f0((void *)((int)this + 0xc3c),0);
  FUN_004117f0((void *)((int)this + 0x1dd0),0);
  FUN_004117f0((void *)((int)this + 0x23ac),0);
  FUN_004117f0((void *)((int)this + 0x2988),0);
  FUN_004117f0((void *)((int)this + 0x2f64),0);
  FUN_00411760((int)this + 0x1218);
  FUN_00411760((int)this + 0x17f4);
  *(undefined4 *)((int)this + 0x6a8) = *(undefined4 *)((int)pvVar2 + 0x48);
  *(undefined4 *)((int)this + 0x1e18) = *(undefined4 *)((int)pvVar2 + 0x48);
  *(undefined4 *)((int)this + 0x29d0) = *(undefined4 *)((int)pvVar2 + 0x48);
  *(undefined4 *)((int)this + 0x1260) = *(undefined4 *)((int)pvVar2 + 0x48);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0xf;
  }
  else {
    uVar4 = puVar3[0x12];
  }
  *(undefined4 *)((int)this + 0xc84) = uVar4;
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0xf;
  }
  else {
    uVar4 = puVar3[0x12];
  }
  *(undefined4 *)((int)this + 0x23f4) = uVar4;
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0xf;
  }
  else {
    uVar4 = puVar3[0x12];
  }
  *(undefined4 *)((int)this + 0x2fac) = uVar4;
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0xf;
  }
  else {
    uVar4 = puVar3[0x12];
  }
  *(undefined4 *)((int)this + 0x183c) = uVar4;
  *(undefined4 *)((int)this + 0x67c) = *(undefined4 *)((int)pvVar2 + 0x1c);
  *(undefined4 *)((int)this + 0x1dec) = *(undefined4 *)((int)pvVar2 + 0x1c);
  *(undefined4 *)((int)this + 0x29a4) = *(undefined4 *)((int)pvVar2 + 0x1c);
  *(undefined4 *)((int)this + 0x1234) = *(undefined4 *)((int)pvVar2 + 0x1c);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = *(undefined4 *)(local_34 + 0x1c);
  }
  else {
    uVar4 = puVar3[7];
  }
  *(undefined4 *)((int)this + 0xc58) = uVar4;
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = *(undefined4 *)(local_34 + 0x1c);
  }
  else {
    uVar4 = puVar3[7];
  }
  *(undefined4 *)((int)this + 0x23c8) = uVar4;
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = *(undefined4 *)(local_34 + 0x1c);
  }
  else {
    uVar4 = puVar3[7];
  }
  *(undefined4 *)((int)this + 0x2f80) = uVar4;
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = *(undefined4 *)(local_34 + 0x1c);
  }
  else {
    uVar4 = puVar3[7];
  }
  *(undefined4 *)((int)this + 0x1810) = uVar4;
  local_2c = -1;
  *(undefined4 *)((int)this + 0x688) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1df8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x29b0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1240) = 0xfffffffa;
  *(undefined4 *)((int)this + 0xc64) = 0xffffffff;
  *(undefined4 *)((int)this + 0x23d4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2f8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x181c) = 0xfffffff9;
  if ((*(int *)((int)pvVar2 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)((int)pvVar2 + 0x30) & 0x20) != 0)) {
    local_2c = *(int *)((int)pvVar2 + 0x28);
  }
  else if (((puVar3 != (undefined4 *)0x0) &&
           (puVar3[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) &&
          ((*(byte *)(puVar3 + 0xc) & 0x20) != 0)) {
    local_2c = puVar3[10];
  }
  if (param_3 != (void *)0x0) {
    FUN_004117f0(pvVar2,2);
    *(int **)((int)pvVar2 + 0x28) = param_1;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_004117f0(puVar3,2);
      puVar3[10] = param_2;
    }
  }
  iVar15 = param_2;
  FUN_00416400(this,(int)param_1);
  if ((puVar3 != (undefined4 *)0x0) && ((puVar3[0xc] & 0x1c00000) == 0)) {
    FUN_00416400(this,iVar15);
  }
  pvVar2 = (void *)FUN_00482ac0(this,iVar15,1);
  if (pvVar2 != (void *)0x0) {
    FUN_0050cbc0((int)pvVar2);
  }
  pvVar5 = (void *)FUN_00482ac0(this,iVar15,2);
  local_24 = pvVar5;
  if ((pvVar5 != (void *)0x0) &&
     (puVar3 = *(undefined4 **)((int)pvVar5 + 0x48), puVar3 != (undefined4 *)0x0)) {
    (/*IC:0045d5f9*/**(code **)*puVar3)(puVar3,1);
    *(undefined4 *)((int)pvVar5 + 0x48) = 0;
  }
  piVar6 = (int *)FUN_00482ac0(this,iVar15,3);
  if (piVar6 != (int *)0x0) {
    puVar3 = (undefined4 *)piVar6[0x11];
    piVar6[0xd1] = *(int *)((int)this + 0x47f4);
    if (puVar3 != (undefined4 *)0x0) {
      (/*IC:0045d62d*/**(code **)*puVar3)(puVar3,1);
    }
    piVar6[0x11] = 0;
  }
  *(undefined4 *)((int)this + 0x3b1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3b20) = 0xffffffff;
  if (param_3 == (void *)0x0) {
    pCVar14 = (LPCSTR)FUN_004b9570(0x53,-1);
    piVar7 = (int *)FUN_00539610(pCVar14,&DAT_005572ec);
    if (piVar7 == (int *)0x0) {
      FUN_005047d0(s____________failed_to_open_combat_005576f8);
      ExceptionList = pvStack_c;
      return 0;
    }
    uStack_20 = FUN_004f7120((void *)((int)this + 0x4848),piVar7,1,1);
    FUN_005394d0(piVar7);
  }
  else {
    puVar3 = (undefined4 *)((int)this + 0x22d00);
    iVar15 = 0xf;
    do {
      puVar3[-0x2d] = 0xffffffff;
      *puVar3 = 0xffffffff;
      puVar3[-0x2e] = 0xffffffff;
      puVar3[-1] = 0xffffffff;
      puVar3[-0x2f] = 0xffffffff;
      puVar3[-2] = 0xffffffff;
      puVar3 = puVar3 + 3;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    puVar3 = (undefined4 *)((int)this + 0x22c44);
    pvVar5 = (void *)((int)this + 0x3b24);
    FUN_0042f630(pvVar5,local_40,0,4,puVar3,(int *)0x0,(int)param_1);
    FUN_0042f630(pvVar5,local_48,1,4,(undefined4 *)((int)this + 0x22cf8),(int *)0x0,param_2);
    FUN_0042f630(pvVar5,local_40,0,2,puVar3,(int *)((int)this + 0x1dd0),(int)param_1);
    FUN_0042f630(pvVar5,local_48,1,2,(undefined4 *)((int)this + 0x22cf8),(int *)((int)this + 0x23ac)
                 ,param_2);
    FUN_0042f630(pvVar5,local_40,0,3,puVar3,(int *)((int)this + 0x2988),(int)param_1);
    FUN_0042f630(pvVar5,local_48,1,3,(undefined4 *)((int)this + 0x22cf8),(int *)((int)this + 0x2f64)
                 ,param_2);
    FUN_0042f630(pvVar5,local_40,0,1,puVar3,(int *)((int)this + 0x1218),(int)param_1);
    FUN_0042f630(pvVar5,local_48,1,1,(undefined4 *)((int)this + 0x22cf8),(int *)((int)this + 0x17f4)
                 ,param_2);
  }
  *(undefined4 *)((int)this + 0x1240) = 0xfffffffa;
  *(undefined4 *)((int)this + 0x181c) = 0xfffffff9;
  param_1 = FUN_00485080(this,*(int *)((int)this + 0x3b1c),0x2f);
  if (param_1 == (int *)0x0) {
    if ((iVar8 != -1) && (uVar9 = FUN_00482ac0(this,iVar8,0), uVar9 != 0)) {
      FUN_004c2450(uVar9);
      *(undefined4 *)((int)this + 0xc14) = 0xffffffff;
    }
    if (0 < *(int *)((int)this + 0x2fb0)) {
      FUN_004c2450((int)this + 0x2f64);
    }
  }
  else if (param_1[0x12] == local_28) {
    local_28 = 0xf;
    piVar7 = param_1;
    piVar22 = piVar13;
    for (iVar15 = 0x11; iVar15 != 0; iVar15 = iVar15 + -1) {
      *piVar22 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar22 = piVar22 + 1;
    }
    *(undefined4 *)((int)this + 0x68c) = 0;
    *(int *)((int)this + 0x6a4) = param_1[0x11];
    *(int *)((int)this + 0x6a8) = param_1[0x12];
    *(int *)((int)this + 0x6ac) = param_1[0x13];
    *(int *)((int)this + 0x6b0) = param_1[0x14];
    *(int *)((int)this + 0x6b4) = param_1[0x15];
    *(int *)((int)this + 0x6b8) = param_1[0x16];
    *(int *)((int)this + 0x6bc) = param_1[0x17];
    *(int *)((int)this + 0x6c0) = param_1[0x18];
    *(int *)((int)this + 0x6c4) = param_1[0x19];
    piVar7 = param_1 + 0x1a;
    piVar22 = (int *)((int)this + 0x6c8);
    for (iVar15 = 0x16; iVar15 != 0; iVar15 = iVar15 + -1) {
      *piVar22 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar22 = piVar22 + 1;
    }
    *(int *)((int)this + 0x720) = param_1[0x30];
    puVar3 = (undefined4 *)((int)this + 0x724);
    while( true ) {
      puVar17 = (undefined4 *)(((int)param_1 - (int)piVar13) + (int)puVar3);
      puVar19 = puVar3;
      for (iVar15 = 0x13; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      local_28 = local_28 + -1;
      if (local_28 == 0) break;
      puVar3 = puVar3 + 0x13;
    }
    *(int *)((int)this + 0xb98) = param_1[0x14e];
    *(int *)((int)this + 0xb9c) = param_1[0x14f];
    *(int *)((int)this + 0xba0) = param_1[0x150];
    *(int *)((int)this + 0xba4) = param_1[0x151];
    *(int *)((int)this + 0xba8) = param_1[0x152];
    *(int *)((int)this + 0xbac) = param_1[0x153];
    *(int *)((int)this + 0xbb0) = param_1[0x154];
    *(int *)((int)this + 0xbb4) = param_1[0x155];
    *(int *)((int)this + 3000) = param_1[0x156];
    *(int *)((int)this + 0xbbc) = param_1[0x157];
    *(int *)((int)this + 0xbc0) = param_1[0x158];
    *(int *)((int)this + 0xbc4) = param_1[0x159];
    piVar7 = param_1 + 0x15a;
    piVar22 = (int *)((int)this + 0xbc8);
    for (iVar15 = 9; iVar15 != 0; iVar15 = iVar15 + -1) {
      *piVar22 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar22 = piVar22 + 1;
    }
    *(int *)((int)this + 0xbec) = param_1[0x163];
    *(int *)((int)this + 0xbf0) = param_1[0x164];
    *(int *)((int)this + 0xbf4) = param_1[0x165];
    *(int *)((int)this + 0xbf8) = param_1[0x166];
    *(int *)((int)this + 0xbfc) = param_1[0x167];
    *(int *)((int)this + 0xc00) = param_1[0x168];
    *(int *)((int)this + 0xc04) = param_1[0x169];
    *(int *)((int)this + 0xc08) = param_1[0x16a];
    *(char *)((int)this + 0xc0c) = (char)param_1[0x16b];
    *(int *)((int)this + 0xc10) = param_1[0x16c];
    *(int *)((int)this + 0xc14) = param_1[0x16d];
    *(int *)((int)this + 0xc18) = param_1[0x16e];
    *(int *)((int)this + 0xc1c) = param_1[0x16f];
    *(int *)((int)this + 0xc20) = param_1[0x170];
    *(int *)((int)this + 0xc24) = param_1[0x171];
    *(char *)((int)this + 0xc28) = (char)param_1[0x172];
    *(int *)((int)this + 0xc2c) = param_1[0x173];
    *(char *)((int)this + 0xc30) = (char)param_1[0x174];
    *(int *)((int)this + 0xc34) = param_1[0x175];
    *(char *)((int)this + 0xc38) = (char)param_1[0x176];
    if ((iVar8 != -1) && (pvVar5 = (void *)FUN_00482ac0(this,iVar8,0), pvVar5 != (void *)0x0)) {
      *(undefined4 *)((int)pvVar5 + 0x5b0) = *(undefined4 *)((int)this + 0x688);
      FUN_00410af0(pvVar5,0xffffffff);
      FUN_004c1c20(param_1,(int)pvVar5);
      FUN_00420630((int)param_1);
    }
    if (0 < *(int *)((int)this + 0x2fb0)) {
      if (iVar8 == -1) {
        piVar7 = (int *)FUN_00482ac0(this,*(int *)((int)this + 0x2f8c),0);
LAB_0045db70:
        if ((piVar7[0xc] & 0x1c00000U) != 0) {
          FUN_004245a0(piVar7);
        }
        FUN_004c1bc0(piVar7,param_1);
        (/*IC:0045db90*/**(code **)(*piVar7 + 0x2c))(piVar7);
        FUN_00420630((int)piVar7);
        piVar7[0xc] = piVar7[0xc] & 0xfffff7ff;
        FUN_00410af0(piVar7,0xffffffff);
        FUN_004c1c20(param_1,(int)piVar7);
        FUN_00420630((int)param_1);
      }
      else {
        piVar7 = (int *)FUN_00482ac0(this,*(int *)((int)this + 0x2f8c),0);
        pvVar5 = (void *)FUN_00482ac0(this,iVar8,0);
        bVar1 = false;
        if ((pvVar5 != (void *)0x0) && (piVar7 != (int *)0x0)) {
          if ((*(int *)((int)pvVar5 + 0x5b8) != piVar7[0x12]) ||
             (3 < piVar7[0x13] + *(int *)((int)pvVar5 + 0x4c))) {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_004c2450((int)pvVar5);
            goto LAB_0045db70;
          }
          FUN_004c23b0(piVar7,(int)pvVar5);
          piVar7[0xc] = piVar7[0xc] & 0xfffff7ff;
          (/*IC:0045dafc*/**(code **)(*piVar7 + 0x2c))(piVar7);
          FUN_00420630((int)piVar7);
          FUN_00410af0(piVar7,0xffffffff);
          FUN_004c2450((int)piVar7);
          FUN_004117f0(pvVar5,0);
          FUN_004117f0((void *)((int)this + 0x2f64),0);
          FUN_00416400(this,*(int *)((int)pvVar5 + 0x28));
          FUN_004c1bc0(piVar7,param_1);
          FUN_004c1c20(param_1,(int)piVar7);
          FUN_00420630((int)param_1);
        }
      }
    }
  }
  else if ((iVar8 != -1) && (uVar9 = FUN_00482ac0(this,iVar8,0), uVar9 != 0)) {
    FUN_004c2450(uVar9);
    *(undefined4 *)((int)this + 0xc14) = 0xffffffff;
  }
  local_48 = FUN_00485080(this,*(int *)((int)this + 0x3b20),0x2f);
  if (local_48 == (int *)0x0) {
LAB_0045e040:
    if ((iVar18 != -1) && (uVar9 = FUN_00482ac0(this,iVar18,0), uVar9 != 0)) {
      FUN_004c2450(uVar9);
      *(undefined4 *)((int)this + 0x11f0) = 0xffffffff;
    }
  }
  else {
    iVar8 = (/*IC:0045dc3c*/**(code **)(*local_48 + 0x3c))(local_48);
    if ((int *)iVar8 != local_30) {
      *(undefined4 *)((int)this + 0x3b20) = 0xffffffff;
      local_48 = (int *)0x0;
    }
    if (local_48 == (int *)0x0) goto LAB_0045e040;
    piVar7 = local_48;
    piVar22 = (int *)((int)this + 0xc3c);
    for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar22 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar22 = piVar22 + 1;
    }
    *(undefined4 *)((int)this + 0xc68) = 0;
    *(int *)((int)this + 0xc80) = local_48[0x11];
    *(int *)((int)this + 0xc84) = local_48[0x12];
    *(int *)((int)this + 0xc88) = local_48[0x13];
    *(int *)((int)this + 0xc8c) = local_48[0x14];
    *(int *)((int)this + 0xc90) = local_48[0x15];
    *(int *)((int)this + 0xc94) = local_48[0x16];
    *(int *)((int)this + 0xc98) = local_48[0x17];
    *(int *)((int)this + 0xc9c) = local_48[0x18];
    *(int *)((int)this + 0xca0) = local_48[0x19];
    piVar7 = local_48 + 0x1a;
    piVar22 = (int *)((int)this + 0xca4);
    for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar22 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar22 = piVar22 + 1;
    }
    local_3c = (undefined4 *)((int)this + 0xd00);
    *(int *)((int)this + 0xcfc) = local_48[0x30];
    local_28 = (int)local_48 - ((int)this + 0xc3c);
    iVar8 = 0xf;
    do {
      puVar3 = (undefined4 *)(local_28 + (int)local_3c);
      puVar17 = local_3c;
      for (iVar15 = 0x13; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar17 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar17 = puVar17 + 1;
      }
      local_3c = local_3c + 0x13;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(int *)((int)this + 0x1174) = local_48[0x14e];
    *(int *)((int)this + 0x1178) = local_48[0x14f];
    *(int *)((int)this + 0x117c) = local_48[0x150];
    *(int *)((int)this + 0x1180) = local_48[0x151];
    *(int *)((int)this + 0x1184) = local_48[0x152];
    *(int *)((int)this + 0x1188) = local_48[0x153];
    *(int *)((int)this + 0x118c) = local_48[0x154];
    *(int *)((int)this + 0x1190) = local_48[0x155];
    *(int *)((int)this + 0x1194) = local_48[0x156];
    *(int *)((int)this + 0x1198) = local_48[0x157];
    *(int *)((int)this + 0x119c) = local_48[0x158];
    *(int *)((int)this + 0x11a0) = local_48[0x159];
    piVar7 = local_48 + 0x15a;
    piVar22 = (int *)((int)this + 0x11a4);
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar22 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar22 = piVar22 + 1;
    }
    *(int *)((int)this + 0x11c8) = local_48[0x163];
    *(int *)((int)this + 0x11cc) = local_48[0x164];
    *(int *)((int)this + 0x11d0) = local_48[0x165];
    *(int *)((int)this + 0x11d4) = local_48[0x166];
    *(int *)((int)this + 0x11d8) = local_48[0x167];
    *(int *)((int)this + 0x11dc) = local_48[0x168];
    *(int *)((int)this + 0x11e0) = local_48[0x169];
    *(int *)((int)this + 0x11e4) = local_48[0x16a];
    *(char *)((int)this + 0x11e8) = (char)local_48[0x16b];
    *(int *)((int)this + 0x11ec) = local_48[0x16c];
    *(int *)((int)this + 0x11f0) = local_48[0x16d];
    *(int *)((int)this + 0x11f4) = local_48[0x16e];
    *(int *)((int)this + 0x11f8) = local_48[0x16f];
    *(int *)((int)this + 0x11fc) = local_48[0x170];
    *(int *)((int)this + 0x1200) = local_48[0x171];
    *(char *)((int)this + 0x1204) = (char)local_48[0x172];
    *(int *)((int)this + 0x1208) = local_48[0x173];
    *(char *)((int)this + 0x120c) = (char)local_48[0x174];
    *(int *)((int)this + 0x1210) = local_48[0x175];
    *(char *)((int)this + 0x1214) = (char)local_48[0x176];
    if ((iVar18 != -1) && (pvVar5 = (void *)FUN_00482ac0(this,iVar18,0), pvVar5 != (void *)0x0)) {
      *(undefined4 *)((int)pvVar5 + 0x5b0) = *(undefined4 *)((int)this + 0xc64);
      FUN_00410af0(pvVar5,0xffffffff);
      FUN_004c1c20(local_48,(int)pvVar5);
      FUN_00420630((int)local_48);
    }
    if (0 < *(int *)((int)this + 0x29d4)) {
      if (iVar18 == -1) {
        piVar7 = (int *)FUN_00482ac0(this,*(int *)((int)this + 0x29b0),0);
        if ((piVar7[0xc] & 0x1c00000U) != 0) {
          FUN_004245a0(piVar7);
        }
        (/*IC:0045e004*/**(code **)(*piVar7 + 0x2c))(piVar7);
        FUN_00420630((int)piVar7);
        piVar7[0xc] = piVar7[0xc] & 0xfffff7ff;
        FUN_004c1bc0(piVar7,local_48);
LAB_0045e026:
        FUN_00410af0(piVar7,0xffffffff);
        FUN_004c1c20(local_48,(int)piVar7);
        FUN_00420630((int)local_48);
      }
      else {
        piVar7 = (int *)FUN_00482ac0(this,*(int *)((int)this + 0x29b0),0);
        pvVar5 = (void *)FUN_00482ac0(this,iVar18,0);
        bVar1 = false;
        if ((pvVar5 != (void *)0x0) && (piVar7 != (int *)0x0)) {
          if ((*(int *)((int)pvVar5 + 0x5b8) != piVar7[0x12]) ||
             (3 < piVar7[0x13] + *(int *)((int)pvVar5 + 0x4c))) {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_004c2450((int)pvVar5);
            if ((piVar7[0xc] & 0x1c00000U) != 0) {
              FUN_004245a0(piVar7);
            }
            FUN_004c1bc0(piVar7,local_48);
            (/*IC:0045dfd4*/**(code **)(*piVar7 + 0x2c))(piVar7);
            FUN_00420630((int)piVar7);
            piVar7[0xc] = piVar7[0xc] & 0xfffff7ff;
            goto LAB_0045e026;
          }
          FUN_004c23b0(piVar7,(int)pvVar5);
          piVar7[0xc] = piVar7[0xc] & 0xfffff7ff;
          (/*IC:0045df52*/**(code **)(*piVar7 + 0x2c))(piVar7);
          FUN_00420630((int)piVar7);
          FUN_00410af0(piVar7,0xffffffff);
          FUN_004c2450((int)piVar7);
          FUN_004117f0(pvVar5,0);
          FUN_004117f0((void *)((int)this + 0x2988),0);
          FUN_00416400(this,*(int *)((int)pvVar5 + 0x28));
          FUN_004c1bc0(piVar7,local_48);
          FUN_004c1c20(local_48,(int)piVar7);
          FUN_00420630((int)local_48);
        }
      }
    }
  }
  if ((piVar6 != (int *)0x0) &&
     (iVar8 = (/*IC:0045e078*/**(code **)(*piVar6 + 0x3c))(piVar6), (int *)iVar8 == local_30)) {
    puVar3 = (undefined4 *)piVar6[0x11];
    if (puVar3 == (undefined4 *)0x0) {
      if (param_1 != (int *)0x0) {
        FUN_0045cea0(piVar6,param_1,1);
        param_1 = (int *)piVar6[0x11];
        piVar7 = param_1;
        piVar22 = piVar13;
        for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar22 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar22 = piVar22 + 1;
        }
        *(undefined4 *)((int)this + 0x68c) = 0;
        *(int *)((int)this + 0x6a4) = param_1[0x11];
        *(int *)((int)this + 0x6a8) = param_1[0x12];
        *(int *)((int)this + 0x6ac) = param_1[0x13];
        *(int *)((int)this + 0x6b0) = param_1[0x14];
        *(int *)((int)this + 0x6b4) = param_1[0x15];
        *(int *)((int)this + 0x6b8) = param_1[0x16];
        *(int *)((int)this + 0x6bc) = param_1[0x17];
        *(int *)((int)this + 0x6c0) = param_1[0x18];
        *(int *)((int)this + 0x6c4) = param_1[0x19];
        piVar7 = param_1 + 0x1a;
        piVar22 = (int *)((int)this + 0x6c8);
        for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar22 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar22 = piVar22 + 1;
        }
        *(int *)((int)this + 0x720) = param_1[0x30];
        local_28 = 0xf;
        puVar3 = (undefined4 *)((int)this + 0x724);
        do {
          puVar17 = (undefined4 *)(((int)param_1 - (int)piVar13) + (int)puVar3);
          puVar19 = puVar3;
          for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar19 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar19 = puVar19 + 1;
          }
          local_28 = local_28 + -1;
          puVar3 = puVar3 + 0x13;
        } while (local_28 != 0);
        *(int *)((int)this + 0xb98) = param_1[0x14e];
        *(int *)((int)this + 0xb9c) = param_1[0x14f];
        *(int *)((int)this + 0xba0) = param_1[0x150];
        *(int *)((int)this + 0xba4) = param_1[0x151];
        *(int *)((int)this + 0xba8) = param_1[0x152];
        *(int *)((int)this + 0xbac) = param_1[0x153];
        *(int *)((int)this + 0xbb0) = param_1[0x154];
        *(int *)((int)this + 0xbb4) = param_1[0x155];
        *(int *)((int)this + 3000) = param_1[0x156];
        *(int *)((int)this + 0xbbc) = param_1[0x157];
        *(int *)((int)this + 0xbc0) = param_1[0x158];
        *(int *)((int)this + 0xbc4) = param_1[0x159];
        piVar7 = param_1 + 0x15a;
        piVar22 = (int *)((int)this + 0xbc8);
        for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar22 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar22 = piVar22 + 1;
        }
        *(int *)((int)this + 0xbec) = param_1[0x163];
        *(int *)((int)this + 0xbf0) = param_1[0x164];
        *(int *)((int)this + 0xbf4) = param_1[0x165];
        *(int *)((int)this + 0xbf8) = param_1[0x166];
        *(int *)((int)this + 0xbfc) = param_1[0x167];
        *(int *)((int)this + 0xc00) = param_1[0x168];
        *(int *)((int)this + 0xc04) = param_1[0x169];
        *(int *)((int)this + 0xc08) = param_1[0x16a];
        *(char *)((int)this + 0xc0c) = (char)param_1[0x16b];
        *(int *)((int)this + 0xc10) = param_1[0x16c];
        *(int *)((int)this + 0xc14) = param_1[0x16d];
        *(int *)((int)this + 0xc18) = param_1[0x16e];
        *(int *)((int)this + 0xc1c) = param_1[0x16f];
        *(int *)((int)this + 0xc20) = param_1[0x170];
        *(int *)((int)this + 0xc24) = param_1[0x171];
        *(char *)((int)this + 0xc28) = (char)param_1[0x172];
        *(int *)((int)this + 0xc2c) = param_1[0x173];
        *(char *)((int)this + 0xc30) = (char)param_1[0x174];
        *(int *)((int)this + 0xc34) = param_1[0x175];
        *(char *)((int)this + 0xc38) = (char)param_1[0x176];
        *(int *)((int)this + 0x3b1c) = param_1[10];
        *(undefined4 *)((int)this + 0x3b20) = 0xffffffff;
        local_28 = 0;
      }
    }
    else if ((puVar3[0xc] & 0x400) == 0) {
      puVar17 = puVar3;
      puVar19 = (undefined4 *)((int)this + 0xc3c);
      for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      *(undefined4 *)((int)this + 0xc68) = 0;
      *(undefined4 *)((int)this + 0xc80) = puVar3[0x11];
      *(undefined4 *)((int)this + 0xc84) = puVar3[0x12];
      *(undefined4 *)((int)this + 0xc88) = puVar3[0x13];
      *(undefined4 *)((int)this + 0xc8c) = puVar3[0x14];
      *(undefined4 *)((int)this + 0xc90) = puVar3[0x15];
      *(undefined4 *)((int)this + 0xc94) = puVar3[0x16];
      *(undefined4 *)((int)this + 0xc98) = puVar3[0x17];
      *(undefined4 *)((int)this + 0xc9c) = puVar3[0x18];
      *(undefined4 *)((int)this + 0xca0) = puVar3[0x19];
      puVar17 = puVar3 + 0x1a;
      puVar19 = (undefined4 *)((int)this + 0xca4);
      for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      local_30 = (int *)((int)this + 0xd00);
      *(undefined4 *)((int)this + 0xcfc) = puVar3[0x30];
      local_28 = (int)puVar3 - ((int)this + 0xc3c);
      iVar8 = 0xf;
      do {
        puVar17 = (undefined4 *)(local_28 + (int)local_30);
        piVar7 = local_30;
        for (iVar18 = 0x13; iVar18 != 0; iVar18 = iVar18 + -1) {
          *piVar7 = *puVar17;
          puVar17 = puVar17 + 1;
          piVar7 = piVar7 + 1;
        }
        local_30 = local_30 + 0x13;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      *(undefined4 *)((int)this + 0x1174) = puVar3[0x14e];
      *(undefined4 *)((int)this + 0x1178) = puVar3[0x14f];
      *(undefined4 *)((int)this + 0x117c) = puVar3[0x150];
      *(undefined4 *)((int)this + 0x1180) = puVar3[0x151];
      *(undefined4 *)((int)this + 0x1184) = puVar3[0x152];
      *(undefined4 *)((int)this + 0x1188) = puVar3[0x153];
      *(undefined4 *)((int)this + 0x118c) = puVar3[0x154];
      *(undefined4 *)((int)this + 0x1190) = puVar3[0x155];
      *(undefined4 *)((int)this + 0x1194) = puVar3[0x156];
      *(undefined4 *)((int)this + 0x1198) = puVar3[0x157];
      *(undefined4 *)((int)this + 0x119c) = puVar3[0x158];
      *(undefined4 *)((int)this + 0x11a0) = puVar3[0x159];
      puVar17 = puVar3 + 0x15a;
      puVar19 = (undefined4 *)((int)this + 0x11a4);
      for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      *(undefined4 *)((int)this + 0x11c8) = puVar3[0x163];
      *(undefined4 *)((int)this + 0x11cc) = puVar3[0x164];
      *(undefined4 *)((int)this + 0x11d0) = puVar3[0x165];
      *(undefined4 *)((int)this + 0x11d4) = puVar3[0x166];
      *(undefined4 *)((int)this + 0x11d8) = puVar3[0x167];
      *(undefined4 *)((int)this + 0x11dc) = puVar3[0x168];
      *(undefined4 *)((int)this + 0x11e0) = puVar3[0x169];
      *(undefined4 *)((int)this + 0x11e4) = puVar3[0x16a];
      *(undefined1 *)((int)this + 0x11e8) = *(undefined1 *)(puVar3 + 0x16b);
      *(undefined4 *)((int)this + 0x11ec) = puVar3[0x16c];
      *(undefined4 *)((int)this + 0x11f0) = puVar3[0x16d];
      *(undefined4 *)((int)this + 0x11f4) = puVar3[0x16e];
      *(undefined4 *)((int)this + 0x11f8) = puVar3[0x16f];
      *(undefined4 *)((int)this + 0x11fc) = puVar3[0x170];
      *(undefined4 *)((int)this + 0x1200) = puVar3[0x171];
      *(undefined1 *)((int)this + 0x1204) = *(undefined1 *)(puVar3 + 0x172);
      *(undefined4 *)((int)this + 0x1208) = puVar3[0x173];
      *(undefined1 *)((int)this + 0x120c) = *(undefined1 *)(puVar3 + 0x174);
      *(undefined4 *)((int)this + 0x1210) = puVar3[0x175];
      *(undefined1 *)((int)this + 0x1214) = *(undefined1 *)(puVar3 + 0x176);
    }
    else if ((local_48 == (int *)0x0) || ((local_48[0xc] & 0x400U) != 0)) {
      puVar3[0xc] = puVar3[0xc] & 0xffbfffff;
      FUN_004a7d50((void *)((int)this + 0x482c),(int *)piVar6[0x11],((int *)piVar6[0x11])[7]);
      piVar7 = (int *)piVar6[0x11];
      iVar8 = FUN_00413180(piVar7,piVar7[7]);
      FUN_004a6dd0((void *)((int)this + 0x482c),piVar7,piVar7[7],iVar8);
      puVar3 = (undefined4 *)piVar6[0x11];
      puVar17 = puVar3;
      puVar19 = (undefined4 *)((int)this + 0x23ac);
      for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      *(undefined4 *)((int)this + 0x23d8) = 0;
      *(undefined4 *)((int)this + 0x23f0) = puVar3[0x11];
      *(undefined4 *)((int)this + 0x23f4) = puVar3[0x12];
      *(undefined4 *)((int)this + 0x23f8) = puVar3[0x13];
      *(undefined4 *)((int)this + 0x23fc) = puVar3[0x14];
      *(undefined4 *)((int)this + 0x2400) = puVar3[0x15];
      *(undefined4 *)((int)this + 0x2404) = puVar3[0x16];
      *(undefined4 *)((int)this + 0x2408) = puVar3[0x17];
      *(undefined4 *)((int)this + 0x240c) = puVar3[0x18];
      *(undefined4 *)((int)this + 0x2410) = puVar3[0x19];
      puVar17 = puVar3 + 0x1a;
      puVar19 = (undefined4 *)((int)this + 0x2414);
      for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      local_30 = (int *)((int)this + 0x2470);
      *(undefined4 *)((int)this + 0x246c) = puVar3[0x30];
      local_28 = (int)puVar3 - ((int)this + 0x23ac);
      iVar8 = 0xf;
      do {
        puVar17 = (undefined4 *)(local_28 + (int)local_30);
        piVar7 = local_30;
        for (iVar18 = 0x13; iVar18 != 0; iVar18 = iVar18 + -1) {
          *piVar7 = *puVar17;
          puVar17 = puVar17 + 1;
          piVar7 = piVar7 + 1;
        }
        local_30 = local_30 + 0x13;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      *(undefined4 *)((int)this + 0x28e4) = puVar3[0x14e];
      *(undefined4 *)((int)this + 0x28e8) = puVar3[0x14f];
      *(undefined4 *)((int)this + 0x28ec) = puVar3[0x150];
      *(undefined4 *)((int)this + 0x28f0) = puVar3[0x151];
      *(undefined4 *)((int)this + 0x28f4) = puVar3[0x152];
      *(undefined4 *)((int)this + 0x28f8) = puVar3[0x153];
      *(undefined4 *)((int)this + 0x28fc) = puVar3[0x154];
      *(undefined4 *)((int)this + 0x2900) = puVar3[0x155];
      *(undefined4 *)((int)this + 0x2904) = puVar3[0x156];
      *(undefined4 *)((int)this + 0x2908) = puVar3[0x157];
      *(undefined4 *)((int)this + 0x290c) = puVar3[0x158];
      *(undefined4 *)((int)this + 0x2910) = puVar3[0x159];
      puVar17 = puVar3 + 0x15a;
      puVar19 = (undefined4 *)((int)this + 0x2914);
      for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      *(undefined4 *)((int)this + 0x2938) = puVar3[0x163];
      *(undefined4 *)((int)this + 0x293c) = puVar3[0x164];
      *(undefined4 *)((int)this + 0x2940) = puVar3[0x165];
      *(undefined4 *)((int)this + 0x2944) = puVar3[0x166];
      *(undefined4 *)((int)this + 0x2948) = puVar3[0x167];
      *(undefined4 *)((int)this + 0x294c) = puVar3[0x168];
      *(undefined4 *)((int)this + 0x2950) = puVar3[0x169];
      *(undefined4 *)((int)this + 0x2954) = puVar3[0x16a];
      *(undefined1 *)((int)this + 0x2958) = *(undefined1 *)(puVar3 + 0x16b);
      *(undefined4 *)((int)this + 0x295c) = puVar3[0x16c];
      *(undefined4 *)((int)this + 0x2960) = puVar3[0x16d];
      *(undefined4 *)((int)this + 0x2964) = puVar3[0x16e];
      *(undefined4 *)((int)this + 0x2968) = puVar3[0x16f];
      *(undefined4 *)((int)this + 0x296c) = puVar3[0x170];
      *(undefined4 *)((int)this + 0x2970) = puVar3[0x171];
      *(undefined1 *)((int)this + 0x2974) = *(undefined1 *)(puVar3 + 0x172);
      *(undefined4 *)((int)this + 0x2978) = puVar3[0x173];
      *(undefined1 *)((int)this + 0x297c) = *(undefined1 *)(puVar3 + 0x174);
      *(undefined4 *)((int)this + 0x2980) = puVar3[0x175];
      *(undefined1 *)((int)this + 0x2984) = *(undefined1 *)(puVar3 + 0x176);
      piVar6[0x11] = 0;
      if (param_1 == (int *)0x0) {
        piVar6[0x1a] = -1;
      }
      else {
        FUN_0045cea0(piVar6,param_1,1);
        param_1 = (int *)piVar6[0x11];
        piVar7 = param_1;
        piVar22 = piVar13;
        for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar22 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar22 = piVar22 + 1;
        }
        *(undefined4 *)((int)this + 0x68c) = 0;
        *(int *)((int)this + 0x6a4) = param_1[0x11];
        *(int *)((int)this + 0x6a8) = param_1[0x12];
        *(int *)((int)this + 0x6ac) = param_1[0x13];
        *(int *)((int)this + 0x6b0) = param_1[0x14];
        *(int *)((int)this + 0x6b4) = param_1[0x15];
        *(int *)((int)this + 0x6b8) = param_1[0x16];
        *(int *)((int)this + 0x6bc) = param_1[0x17];
        *(int *)((int)this + 0x6c0) = param_1[0x18];
        *(int *)((int)this + 0x6c4) = param_1[0x19];
        piVar7 = param_1 + 0x1a;
        piVar22 = (int *)((int)this + 0x6c8);
        for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar22 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar22 = piVar22 + 1;
        }
        *(int *)((int)this + 0x720) = param_1[0x30];
        local_28 = 0xf;
        puVar3 = (undefined4 *)((int)this + 0x724);
        do {
          puVar17 = (undefined4 *)(((int)param_1 - (int)piVar13) + (int)puVar3);
          puVar19 = puVar3;
          for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar19 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar19 = puVar19 + 1;
          }
          local_28 = local_28 + -1;
          puVar3 = puVar3 + 0x13;
        } while (local_28 != 0);
        *(int *)((int)this + 0xb98) = param_1[0x14e];
        *(int *)((int)this + 0xb9c) = param_1[0x14f];
        *(int *)((int)this + 0xba0) = param_1[0x150];
        *(int *)((int)this + 0xba4) = param_1[0x151];
        *(int *)((int)this + 0xba8) = param_1[0x152];
        *(int *)((int)this + 0xbac) = param_1[0x153];
        *(int *)((int)this + 0xbb0) = param_1[0x154];
        *(int *)((int)this + 0xbb4) = param_1[0x155];
        *(int *)((int)this + 3000) = param_1[0x156];
        *(int *)((int)this + 0xbbc) = param_1[0x157];
        *(int *)((int)this + 0xbc0) = param_1[0x158];
        *(int *)((int)this + 0xbc4) = param_1[0x159];
        piVar7 = param_1 + 0x15a;
        piVar22 = (int *)((int)this + 0xbc8);
        for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar22 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar22 = piVar22 + 1;
        }
        *(int *)((int)this + 0xbec) = param_1[0x163];
        *(int *)((int)this + 0xbf0) = param_1[0x164];
        *(int *)((int)this + 0xbf4) = param_1[0x165];
        *(int *)((int)this + 0xbf8) = param_1[0x166];
        *(int *)((int)this + 0xbfc) = param_1[0x167];
        *(int *)((int)this + 0xc00) = param_1[0x168];
        *(int *)((int)this + 0xc04) = param_1[0x169];
        *(int *)((int)this + 0xc08) = param_1[0x16a];
        *(char *)((int)this + 0xc0c) = (char)param_1[0x16b];
        *(int *)((int)this + 0xc10) = param_1[0x16c];
        *(int *)((int)this + 0xc14) = param_1[0x16d];
        *(int *)((int)this + 0xc18) = param_1[0x16e];
        *(int *)((int)this + 0xc1c) = param_1[0x16f];
        *(int *)((int)this + 0xc20) = param_1[0x170];
        *(int *)((int)this + 0xc24) = param_1[0x171];
        *(char *)((int)this + 0xc28) = (char)param_1[0x172];
        *(int *)((int)this + 0xc2c) = param_1[0x173];
        *(char *)((int)this + 0xc30) = (char)param_1[0x174];
        *(int *)((int)this + 0xc34) = param_1[0x175];
        *(char *)((int)this + 0xc38) = (char)param_1[0x176];
        local_28 = 0;
      }
    }
  }
  puVar3 = FUN_00485080(this,*(int *)((int)this + 0x3b1c),0x2f);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = FUN_00485080(this,*(int *)((int)this + 0x3b20),0x2f);
  }
  if (param_3 != (void *)0x0) {
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0x22c40) = 0xffffffff;
    }
    else {
      *(undefined4 *)((int)this + 0x22c40) = puVar3[10];
      FUN_00415b10((void *)((int)this + 0x1218),puVar3,
                   (uint)(puVar3[0x12] != *(int *)((int)this + 0x1260)));
      FUN_00415b10((void *)((int)this + 0x17f4),puVar3,
                   (uint)(puVar3[0x12] != *(int *)((int)this + 0x183c)));
      pvVar5 = (void *)((int)this + 0x2988);
      if (*(int *)((int)this + 0x22c40) != *(int *)((int)this + 0x688)) {
        pvVar5 = (void *)((int)this + 0x2f64);
      }
      FUN_00415b10(pvVar5,puVar3,1);
    }
  }
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x22c40) = 0xffffffff;
  }
  else {
    *(undefined4 *)((int)this + 0x22c40) = puVar3[10];
    FUN_00415a60((int)puVar3);
  }
  local_38 = 0;
  if (0 < *(int *)((int)this + 0x1264)) {
    local_30 = (int *)((int)this + 0x12f0);
    do {
      uVar9 = FUN_00525f10((int)(local_30 + -5));
      if (uVar9 != 0) {
        *(undefined4 *)((int)this + 0x4778) = 1;
      }
      if ((*local_30 != 0) &&
         (iVar8 = FUN_0040f4e0((void *)((int)this + 0x4da4),local_30[3]), iVar8 != 0)) {
        iVar18 = 0;
        local_40 = (int *)0xffffffff;
        if (0 < *(int *)((int)this + 0xc88)) {
          piVar7 = (int *)((int)this + 0xd00);
          do {
            uVar9 = FUN_00529140(piVar7);
            if (uVar9 != 0) {
              local_40 = *(int **)((int)this + iVar18 * 0x4c + 0xd20);
              break;
            }
            iVar18 = iVar18 + 1;
            piVar7 = piVar7 + 0x13;
          } while (iVar18 < *(int *)((int)this + 0xc88));
        }
        *(int **)(iVar8 + 0xc) = local_40;
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)((int)this + 0xc84);
      }
      local_38 = local_38 + 1;
      local_30 = local_30 + 0x13;
    } while (local_38 < *(int *)((int)this + 0x1264));
  }
  local_38 = 0;
  if (0 < *(int *)((int)this + 0x1840)) {
    local_30 = (int *)((int)this + 0x18cc);
    do {
      uVar9 = FUN_00525f10((int)(local_30 + -5));
      if (uVar9 != 0) {
        *(undefined4 *)((int)this + 0x477c) = 1;
      }
      if ((*local_30 != 0) &&
         (iVar8 = FUN_0040f4e0((void *)((int)this + 0x4da4),local_30[3]), iVar8 != 0)) {
        iVar18 = 0;
        local_40 = (int *)0xffffffff;
        if (0 < *(int *)((int)this + 0x6ac)) {
          piVar7 = (int *)((int)this + 0x724);
          do {
            uVar9 = FUN_00529140(piVar7);
            if (uVar9 != 0) {
              local_40 = *(int **)((int)this + iVar18 * 0x4c + 0x744);
              break;
            }
            iVar18 = iVar18 + 1;
            piVar7 = piVar7 + 0x13;
          } while (iVar18 < *(int *)((int)this + 0x6ac));
        }
        *(int **)(iVar8 + 0xc) = local_40;
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)((int)this + 0x6a8);
      }
      local_38 = local_38 + 1;
      local_30 = local_30 + 0x13;
    } while (local_38 < *(int *)((int)this + 0x1840));
  }
  iVar8 = *(int *)((int)this + 0x6a8);
  if ((iVar8 < 0) || (0xf < iVar8)) {
    iVar8 = 0;
  }
  else {
    iVar8 = (int)this + iVar8 * 0x1d84 + 0x5068;
  }
  if (iVar8 != 0) {
    *(uint *)(iVar8 + 0x15d8) = *(uint *)(iVar8 + 0x15d8) | 0x40;
  }
  iVar8 = *(int *)((int)this + 0xc84);
  if ((iVar8 < 0) || (0xf < iVar8)) {
    iVar8 = 0;
  }
  else {
    iVar8 = (int)this + iVar8 * 0x1d84 + 0x5068;
  }
  if (iVar8 != 0) {
    *(uint *)(iVar8 + 0x15d8) = *(uint *)(iVar8 + 0x15d8) | 0x40;
  }
  if ((*(int *)((int)this + 0x4778) == 0) && (*(int *)((int)this + 0x4780) != 0)) {
    iVar8 = 0;
    *(undefined4 *)((int)this + 0x4778) = 1;
    if (0 < *(int *)((int)this + 0x6ac)) {
      iVar18 = (int)this + 0x724;
      do {
        uVar9 = FUN_00525f10(iVar18);
        if (uVar9 != 0) {
          *(undefined4 *)((int)this + 0x4778) = 0;
        }
        iVar8 = iVar8 + 1;
        iVar18 = iVar18 + 0x4c;
      } while (iVar8 < *(int *)((int)this + 0x6ac));
    }
    iVar8 = 0;
    if (0 < *(int *)((int)this + 0x1e1c)) {
      iVar18 = (int)this + 0x1e94;
      do {
        uVar9 = FUN_00525f10(iVar18);
        if (uVar9 != 0) {
          *(undefined4 *)((int)this + 0x4778) = 0;
        }
        iVar8 = iVar8 + 1;
        iVar18 = iVar18 + 0x4c;
      } while (iVar8 < *(int *)((int)this + 0x1e1c));
    }
  }
  if ((*(int *)((int)this + 0x477c) == 0) && (*(int *)((int)this + 0x4784) != 0)) {
    iVar8 = 0;
    *(undefined4 *)((int)this + 0x477c) = 1;
    if (0 < *(int *)((int)this + 0xc88)) {
      iVar18 = (int)this + 0xd00;
      do {
        uVar9 = FUN_00525f10(iVar18);
        if (uVar9 != 0) {
          *(undefined4 *)((int)this + 0x477c) = 0;
        }
        iVar8 = iVar8 + 1;
        iVar18 = iVar18 + 0x4c;
      } while (iVar8 < *(int *)((int)this + 0xc88));
    }
    iVar8 = 0;
    if (0 < *(int *)((int)this + 0x23f8)) {
      iVar18 = (int)this + 0x2470;
      do {
        uVar9 = FUN_00525f10(iVar18);
        if (uVar9 != 0) {
          *(undefined4 *)((int)this + 0x477c) = 0;
        }
        iVar8 = iVar8 + 1;
        iVar18 = iVar18 + 0x4c;
      } while (iVar8 < *(int *)((int)this + 0x23f8));
    }
  }
  FUN_0050ba00(this);
  FUN_004d05e0(DAT_005a7b78,DAT_005a7d64,DAT_005a7d68);
  FUN_0045d090(this,piVar13);
  FUN_0045d090(this,(undefined4 *)((int)this + 0xc3c));
  FUN_0045d090(this,(undefined4 *)((int)this + 0x1dd0));
  FUN_0045d090(this,(undefined4 *)((int)this + 0x23ac));
  FUN_0045d090(this,(undefined4 *)((int)this + 0x2988));
  FUN_0045d090(this,(undefined4 *)((int)this + 0x2f64));
  if (param_3 != (void *)0x0) {
    if ((-1 < *(int *)((int)this + 0x688)) && (iVar8 = 0, 0 < *(int *)((int)this + 0x6ac))) {
      pvVar5 = (void *)((int)this + 0x724);
      do {
        FUN_00428720(pvVar5,*(undefined4 *)((int)this + 0x688),iVar8);
        iVar8 = iVar8 + 1;
        pvVar5 = (void *)((int)pvVar5 + 0x4c);
      } while (iVar8 < *(int *)((int)this + 0x6ac));
    }
    if ((-1 < *(int *)((int)this + 0xc64)) && (iVar8 = 0, 0 < *(int *)((int)this + 0xc88))) {
      pvVar5 = (void *)((int)this + 0xd00);
      do {
        FUN_00428720(pvVar5,*(undefined4 *)((int)this + 0xc64),iVar8);
        iVar8 = iVar8 + 1;
        pvVar5 = (void *)((int)pvVar5 + 0x4c);
      } while (iVar8 < *(int *)((int)this + 0xc88));
    }
    if ((-1 < *(int *)((int)this + 0x1df8)) && (iVar8 = 0, 0 < *(int *)((int)this + 0x1e1c))) {
      pvVar5 = (void *)((int)this + 0x1e94);
      do {
        FUN_00428720(pvVar5,*(undefined4 *)((int)this + 0x1df8),iVar8);
        iVar8 = iVar8 + 1;
        pvVar5 = (void *)((int)pvVar5 + 0x4c);
      } while (iVar8 < *(int *)((int)this + 0x1e1c));
    }
    if ((-1 < *(int *)((int)this + 0x23d4)) && (iVar8 = 0, 0 < *(int *)((int)this + 0x23f8))) {
      pvVar5 = (void *)((int)this + 0x2470);
      do {
        FUN_00428720(pvVar5,*(undefined4 *)((int)this + 0x23d4),iVar8);
        iVar8 = iVar8 + 1;
        pvVar5 = (void *)((int)pvVar5 + 0x4c);
      } while (iVar8 < *(int *)((int)this + 0x23f8));
    }
    if ((-1 < *(int *)((int)this + 0x29b0)) && (iVar8 = 0, 0 < *(int *)((int)this + 0x29d4))) {
      pvVar5 = (void *)((int)this + 0x2a4c);
      do {
        FUN_00428720(pvVar5,*(undefined4 *)((int)this + 0x29b0),iVar8);
        iVar8 = iVar8 + 1;
        pvVar5 = (void *)((int)pvVar5 + 0x4c);
      } while (iVar8 < *(int *)((int)this + 0x29d4));
    }
    if ((-1 < *(int *)((int)this + 0x2f8c)) && (iVar8 = 0, 0 < *(int *)((int)this + 0x2fb0))) {
      pvVar5 = (void *)((int)this + 0x3028);
      do {
        FUN_00428720(pvVar5,*(undefined4 *)((int)this + 0x2f8c),iVar8);
        iVar8 = iVar8 + 1;
        pvVar5 = (void *)((int)pvVar5 + 0x4c);
      } while (iVar8 < *(int *)((int)this + 0x2fb0));
    }
  }
  FUN_004fc2a0((int)this + 0x4848);
  pvVar5 = DAT_005a7b78;
  if (*(int *)((int)this + 0x4778) == 0) {
    if (*(int *)((int)this + 0x477c) != 0) goto LAB_0045f041;
  }
  else {
    uVar4 = *(undefined4 *)((int)this + 0x6a8);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar5);
      *(undefined4 *)((int)pvVar5 + 0x90) = 0;
      *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
    }
    else {
      iVar18 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar18;
      iVar8 = *(int *)((int)pvVar5 + 0x50);
      *(undefined4 *)(iVar8 + iVar18 * 8) = 1;
      *(undefined4 *)(iVar8 + 4 + iVar18 * 8) = uVar4;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005a7c4c,DAT_005a7c50);
    if (DAT_005d2ca0 != 0) {
      ExceptionList = pvStack_c;
      return 1;
    }
LAB_0045f041:
    pvVar5 = DAT_005a7b78;
    if (*(int *)((int)this + 0x477c) != 0) {
      uVar4 = *(undefined4 *)((int)this + 0xc84);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar5);
        *(undefined4 *)((int)pvVar5 + 0x90) = 0;
        *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
      }
      else {
        iVar18 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar18;
        iVar8 = *(int *)((int)pvVar5 + 0x50);
        *(undefined4 *)(iVar8 + iVar18 * 8) = 1;
        *(undefined4 *)(iVar8 + 4 + iVar18 * 8) = uVar4;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c4c,DAT_005a7c50);
      if (DAT_005d2ca0 != 0) {
        ExceptionList = pvStack_c;
        return 1;
      }
    }
    if (*(int *)((int)this + 0x47b8) == 2) {
      *(undefined4 *)((int)this + 0x47b8) = 0;
      ExceptionList = pvStack_c;
      return 1;
    }
    if (*(int *)((int)this + 0x47b8) == 1) {
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  pvVar5 = local_24;
  bVar1 = false;
  if (pvVar2 != (void *)0x0) {
    iVar8 = 0;
    psVar10 = (short *)((int)this + 0x23080);
    do {
      if (((-1 < *psVar10) && (*psVar10 != *(short *)((int)this + 0x23094))) && (psVar10[-10] == 0))
      {
        bVar1 = true;
        break;
      }
      iVar8 = iVar8 + 1;
      psVar10 = psVar10 + 1;
    } while (iVar8 < 10);
  }
  iVar8 = *(int *)((int)this + 0xc88) + *(int *)((int)this + 0x2fb0) + *(int *)((int)this + 0x1840)
          + *(int *)((int)this + 0x23f8);
  if (pvVar2 != (void *)0x0) {
    if (0 < iVar8) {
      *(undefined4 *)((int)this + 0x22dac) = 3;
      if (((local_48 != (int *)0x0) || (param_1 == (int *)0x0)) || (bVar1)) {
        iVar8 = FUN_0050c7f0((int)pvVar2);
        if (iVar8 == 0) {
          if (*(int *)((int)this + 0x230c4) == 0) {
            if (((param_1 == (int *)0x0) && (local_48 == (int *)0x0)) &&
               (*(int *)((int)this + 0x1e1c) == 0)) {
              FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x2296c),
                           *(int **)((int)this + 0x22970));
            }
            else {
              FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x2297c),
                           *(int **)((int)this + 0x22980));
            }
          }
          else if ((*(int *)((int)this + 0x6ac) == 0) && (*(int *)((int)this + 0xc88) == 0)) {
            if (*(int *)((int)this + 0x1e1c) == 0) {
              FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x2296c),
                           *(int **)((int)this + 0x22970));
            }
            else {
              FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x2297c),
                           *(int **)((int)this + 0x22980));
            }
          }
          else if (*(int *)((int)this + 0x1e1c) == 0) {
            if ((((*(int *)((int)this + 0x23f8) == 0) || (*(int *)((int)this + 0x2fb0) != 0)) ||
                (*(int *)((int)this + 0x1840) != 0)) || (*(int *)((int)this + 0xc88) != 0)) {
              if ((*(int *)((int)this + 0x6ac) == 0) || (*(int *)((int)this + 0xc88) != 0)) {
                FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x2295c),
                             *(int **)((int)this + 0x22960));
              }
              else {
                FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x22954),
                             *(int **)((int)this + 0x22958));
              }
            }
            else {
              FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x22974),
                           *(int **)((int)this + 0x22978));
            }
          }
          else {
            FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x22964),*(int **)((int)this + 0x22968))
            ;
          }
        }
      }
      else {
        iVar8 = FUN_0050c7f0((int)pvVar2);
        pvVar5 = DAT_005a7b78;
        if (iVar8 == 0) {
          iVar8 = 10;
          *(uint *)((int)pvVar2 + 0x30) = *(uint *)((int)pvVar2 + 0x30) | 4;
          puVar11 = (undefined2 *)((int)this + 0x2306c);
          do {
            if (-1 < (short)puVar11[10]) {
              *puVar11 = 1;
            }
            puVar11 = puVar11 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          iVar8 = 0;
          if (0 < *(short *)((int)pvVar2 + 0x4e)) {
            iVar18 = 0;
            do {
              *(undefined4 *)(iVar18 + 4 + *(int *)((int)pvVar2 + 0x50)) = 1;
              puVar3 = *(undefined4 **)(iVar18 + 8 + *(int *)((int)pvVar2 + 0x50));
              if (puVar3 != (undefined4 *)0x0) {
                (/*IC:0045f1cb*/**(code **)*puVar3)(puVar3,1);
                *(undefined4 *)(iVar18 + 8 + *(int *)((int)pvVar2 + 0x50)) = 0;
              }
              iVar8 = iVar8 + 1;
              iVar18 = iVar18 + 0xc;
            } while (iVar8 < *(short *)((int)pvVar2 + 0x4e));
          }
          *(undefined4 *)((int)pvVar2 + 0x5c) = *(undefined4 *)((int)this + 0x6a8);
          if (((*(int *)((int)this + 0x23f8) == 0) || (*(int *)((int)this + 0x2fb0) != 0)) ||
             ((*(int *)((int)this + 0x1840) != 0 || (*(int *)((int)this + 0xc88) != 0)))) {
            FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x22954),*(int **)((int)this + 0x22958))
            ;
          }
          else {
            FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x22974),*(int **)((int)this + 0x22978))
            ;
          }
        }
        else {
          uVar4 = *(undefined4 *)((int)this + 0x688);
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar5);
            *(undefined4 *)((int)pvVar5 + 0x90) = 0;
            *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
          }
          else {
            iVar18 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar18;
            iVar8 = *(int *)((int)pvVar5 + 0x50);
            *(undefined4 *)(iVar8 + iVar18 * 8) = 1;
            *(undefined4 *)(iVar8 + 4 + iVar18 * 8) = uVar4;
          }
          pvVar5 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar5);
            *(undefined4 *)((int)pvVar5 + 0x90) = 0;
            *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
          }
          else {
            iVar8 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar18 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar18;
            *(undefined4 *)(iVar8 + iVar18 * 8) = 1;
            *(int *)(iVar8 + 4 + iVar18 * 8) = param_2;
          }
          FUN_004d05e0(DAT_005a7b78,DAT_005d2d40,DAT_005d2d44);
          *(undefined4 *)((int)pvVar2 + 0x5c) = *(undefined4 *)((int)this + 0x6a8);
          FUN_0045d090(this,piVar13);
        }
        if ((param_1[0xc] & 0x1c00000U) == 0) {
          FUN_004225a0(param_1,pvVar2,1);
          param_1 = *(int **)((int)pvVar2 + 0x58);
        }
        piVar6 = param_1;
        piVar7 = param_1;
        piVar22 = piVar13;
        for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar22 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar22 = piVar22 + 1;
        }
        *(undefined4 *)((int)this + 0x68c) = 0;
        *(int *)((int)this + 0x6a4) = param_1[0x11];
        *(int *)((int)this + 0x6a8) = param_1[0x12];
        *(int *)((int)this + 0x6ac) = param_1[0x13];
        *(int *)((int)this + 0x6b0) = param_1[0x14];
        *(int *)((int)this + 0x6b4) = param_1[0x15];
        *(int *)((int)this + 0x6b8) = param_1[0x16];
        *(int *)((int)this + 0x6bc) = param_1[0x17];
        *(int *)((int)this + 0x6c0) = param_1[0x18];
        *(int *)((int)this + 0x6c4) = param_1[0x19];
        piVar7 = param_1 + 0x1a;
        piVar22 = (int *)((int)this + 0x6c8);
        for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar22 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar22 = piVar22 + 1;
        }
        local_24 = (void *)((int)param_1 - (int)piVar13);
        *(int *)((int)this + 0x720) = param_1[0x30];
        param_1 = (int *)0xf;
        puVar3 = (undefined4 *)((int)this + 0x724);
        while( true ) {
          puVar17 = (undefined4 *)((int)local_24 + (int)puVar3);
          puVar19 = puVar3;
          for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar19 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar19 = puVar19 + 1;
          }
          param_1 = (int *)((int)param_1 + -1);
          if (param_1 == (int *)0x0) break;
          puVar3 = puVar3 + 0x13;
        }
        *(int *)((int)this + 0xb98) = piVar6[0x14e];
        *(int *)((int)this + 0xb9c) = piVar6[0x14f];
        *(int *)((int)this + 0xba0) = piVar6[0x150];
        *(int *)((int)this + 0xba4) = piVar6[0x151];
        *(int *)((int)this + 0xba8) = piVar6[0x152];
        *(int *)((int)this + 0xbac) = piVar6[0x153];
        *(int *)((int)this + 0xbb0) = piVar6[0x154];
        *(int *)((int)this + 0xbb4) = piVar6[0x155];
        *(int *)((int)this + 3000) = piVar6[0x156];
        *(int *)((int)this + 0xbbc) = piVar6[0x157];
        *(int *)((int)this + 0xbc0) = piVar6[0x158];
        *(int *)((int)this + 0xbc4) = piVar6[0x159];
        piVar13 = piVar6 + 0x15a;
        piVar7 = (int *)((int)this + 0xbc8);
        for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar7 = *piVar13;
          piVar13 = piVar13 + 1;
          piVar7 = piVar7 + 1;
        }
        *(int *)((int)this + 0xbec) = piVar6[0x163];
        *(int *)((int)this + 0xbf0) = piVar6[0x164];
        *(int *)((int)this + 0xbf4) = piVar6[0x165];
        *(int *)((int)this + 0xbf8) = piVar6[0x166];
        *(int *)((int)this + 0xbfc) = piVar6[0x167];
        *(int *)((int)this + 0xc00) = piVar6[0x168];
        *(int *)((int)this + 0xc04) = piVar6[0x169];
        *(int *)((int)this + 0xc08) = piVar6[0x16a];
        *(char *)((int)this + 0xc0c) = (char)piVar6[0x16b];
        *(int *)((int)this + 0xc10) = piVar6[0x16c];
        *(int *)((int)this + 0xc14) = piVar6[0x16d];
        *(int *)((int)this + 0xc18) = piVar6[0x16e];
        *(int *)((int)this + 0xc1c) = piVar6[0x16f];
        *(int *)((int)this + 0xc20) = piVar6[0x170];
        *(int *)((int)this + 0xc24) = piVar6[0x171];
        *(char *)((int)this + 0xc28) = (char)piVar6[0x172];
        *(int *)((int)this + 0xc2c) = piVar6[0x173];
        *(char *)((int)this + 0xc30) = (char)piVar6[0x174];
        *(int *)((int)this + 0xc34) = piVar6[0x175];
        *(char *)((int)this + 0xc38) = (char)piVar6[0x176];
        *(int *)((int)this + 0x3b1c) = piVar6[10];
        *(undefined4 *)((int)this + 0x3b20) = 0xffffffff;
      }
      goto LAB_0045fc89;
    }
    if ((pvVar2 != (void *)0x0) && (iVar8 == 0)) {
      *(undefined4 *)((int)this + 0x22dac) = 3;
      FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x2297c),*(int **)((int)this + 0x22980));
      goto LAB_0045fc89;
    }
  }
  if (local_24 == (void *)0x0) {
    if (piVar6 == (int *)0x0) {
      *(undefined4 *)((int)this + 0x22dac) = 1;
    }
    else {
      *(undefined4 *)((int)this + 0x22dac) = 2;
    }
  }
  else {
    uVar4 = *(undefined4 *)((int)this + 0x688);
    *(undefined4 *)((int)this + 0x22dac) = 4;
    pvVar20 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar20);
      *(undefined4 *)((int)pvVar20 + 0x90) = 0;
      *(undefined4 *)((int)pvVar20 + 0xa4) = 0;
    }
    else {
      iVar18 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar18;
      iVar8 = *(int *)((int)pvVar20 + 0x50);
      *(undefined4 *)(iVar8 + iVar18 * 8) = 1;
      *(undefined4 *)(iVar8 + 4 + iVar18 * 8) = uVar4;
    }
    pvVar20 = DAT_005a7b78;
    uVar4 = *(undefined4 *)((int)pvVar5 + 0x28);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar20);
      *(undefined4 *)((int)pvVar20 + 0x90) = 0;
      *(undefined4 *)((int)pvVar20 + 0xa4) = 0;
    }
    else {
      iVar18 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar18;
      iVar8 = *(int *)((int)pvVar20 + 0x50);
      *(undefined4 *)(iVar8 + iVar18 * 8) = 1;
      *(undefined4 *)(iVar8 + 4 + iVar18 * 8) = uVar4;
    }
    puVar3 = *(undefined4 **)((int)pvVar5 + 0x48);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x22954),*(int **)((int)this + 0x22958));
      pvVar5 = local_24;
      FUN_004225a0(param_1,local_24,1);
      piVar6 = *(int **)((int)pvVar5 + 0x48);
      piVar7 = piVar6;
      piVar22 = piVar13;
      for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar22 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar22 = piVar22 + 1;
      }
      *(undefined4 *)((int)this + 0x68c) = 0;
      *(int *)((int)this + 0x6a4) = piVar6[0x11];
      *(int *)((int)this + 0x6a8) = piVar6[0x12];
      *(int *)((int)this + 0x6ac) = piVar6[0x13];
      *(int *)((int)this + 0x6b0) = piVar6[0x14];
      *(int *)((int)this + 0x6b4) = piVar6[0x15];
      *(int *)((int)this + 0x6b8) = piVar6[0x16];
      *(int *)((int)this + 0x6bc) = piVar6[0x17];
      *(int *)((int)this + 0x6c0) = piVar6[0x18];
      *(int *)((int)this + 0x6c4) = piVar6[0x19];
      piVar7 = piVar6 + 0x1a;
      piVar22 = (int *)((int)this + 0x6c8);
      for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar22 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar22 = piVar22 + 1;
      }
      *(int *)((int)this + 0x720) = piVar6[0x30];
      local_24 = (void *)((int)piVar6 - (int)piVar13);
      param_1 = (int *)0xf;
      puVar3 = (undefined4 *)((int)this + 0x724);
      while( true ) {
        puVar17 = (undefined4 *)((int)local_24 + (int)puVar3);
        puVar19 = puVar3;
        for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar19 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar19 = puVar19 + 1;
        }
        param_1 = (int *)((int)param_1 + -1);
        if (param_1 == (int *)0x0) break;
        puVar3 = puVar3 + 0x13;
      }
      *(int *)((int)this + 0xb98) = piVar6[0x14e];
      *(int *)((int)this + 0xb9c) = piVar6[0x14f];
      *(int *)((int)this + 0xba0) = piVar6[0x150];
      *(int *)((int)this + 0xba4) = piVar6[0x151];
      *(int *)((int)this + 0xba8) = piVar6[0x152];
      *(int *)((int)this + 0xbac) = piVar6[0x153];
      *(int *)((int)this + 0xbb0) = piVar6[0x154];
      *(int *)((int)this + 0xbb4) = piVar6[0x155];
      *(int *)((int)this + 3000) = piVar6[0x156];
      *(int *)((int)this + 0xbbc) = piVar6[0x157];
      *(int *)((int)this + 0xbc0) = piVar6[0x158];
      *(int *)((int)this + 0xbc4) = piVar6[0x159];
      piVar7 = piVar6 + 0x15a;
      piVar22 = (int *)((int)this + 0xbc8);
      for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar22 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar22 = piVar22 + 1;
      }
      *(int *)((int)this + 0xbec) = piVar6[0x163];
      *(int *)((int)this + 0xbf0) = piVar6[0x164];
      *(int *)((int)this + 0xbf4) = piVar6[0x165];
      *(int *)((int)this + 0xbf8) = piVar6[0x166];
      *(int *)((int)this + 0xbfc) = piVar6[0x167];
      *(int *)((int)this + 0xc00) = piVar6[0x168];
      *(int *)((int)this + 0xc04) = piVar6[0x169];
      *(int *)((int)this + 0xc08) = piVar6[0x16a];
      *(char *)((int)this + 0xc0c) = (char)piVar6[0x16b];
      *(int *)((int)this + 0xc10) = piVar6[0x16c];
      *(int *)((int)this + 0xc14) = piVar6[0x16d];
      *(int *)((int)this + 0xc18) = piVar6[0x16e];
      *(int *)((int)this + 0xc1c) = piVar6[0x16f];
      *(int *)((int)this + 0xc20) = piVar6[0x170];
      *(int *)((int)this + 0xc24) = piVar6[0x171];
      *(char *)((int)this + 0xc28) = (char)piVar6[0x172];
      *(int *)((int)this + 0xc2c) = piVar6[0x173];
      *(char *)((int)this + 0xc30) = (char)piVar6[0x174];
      *(int *)((int)this + 0xc34) = piVar6[0x175];
      *(char *)((int)this + 0xc38) = (char)piVar6[0x176];
      *(int *)((int)this + 0x3b1c) = piVar6[10];
      *(undefined4 *)((int)this + 0x3b20) = 0xffffffff;
      FUN_0045d090(this,piVar13);
    }
    else {
      puVar17 = puVar3;
      puVar19 = (undefined4 *)((int)this + 0xc3c);
      for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      *(undefined4 *)((int)this + 0xc68) = 0;
      *(undefined4 *)((int)this + 0xc80) = puVar3[0x11];
      *(undefined4 *)((int)this + 0xc84) = puVar3[0x12];
      *(undefined4 *)((int)this + 0xc88) = puVar3[0x13];
      *(undefined4 *)((int)this + 0xc8c) = puVar3[0x14];
      *(undefined4 *)((int)this + 0xc90) = puVar3[0x15];
      *(undefined4 *)((int)this + 0xc94) = puVar3[0x16];
      *(undefined4 *)((int)this + 0xc98) = puVar3[0x17];
      *(undefined4 *)((int)this + 0xc9c) = puVar3[0x18];
      *(undefined4 *)((int)this + 0xca0) = puVar3[0x19];
      puVar17 = puVar3 + 0x1a;
      puVar19 = (undefined4 *)((int)this + 0xca4);
      for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      *(undefined4 *)((int)this + 0xcfc) = puVar3[0x30];
      iVar8 = 0xf;
      puVar17 = (undefined4 *)((int)this + 0xd00);
      while( true ) {
        iVar8 = iVar8 + -1;
        puVar19 = (undefined4 *)(((int)puVar3 - ((int)this + 0xc3c)) + (int)puVar17);
        puVar21 = puVar17;
        for (iVar18 = 0x13; iVar18 != 0; iVar18 = iVar18 + -1) {
          *puVar21 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar21 = puVar21 + 1;
        }
        if (iVar8 == 0) break;
        puVar17 = puVar17 + 0x13;
      }
      *(undefined4 *)((int)this + 0x1174) = puVar3[0x14e];
      *(undefined4 *)((int)this + 0x1178) = puVar3[0x14f];
      *(undefined4 *)((int)this + 0x117c) = puVar3[0x150];
      *(undefined4 *)((int)this + 0x1180) = puVar3[0x151];
      *(undefined4 *)((int)this + 0x1184) = puVar3[0x152];
      *(undefined4 *)((int)this + 0x1188) = puVar3[0x153];
      *(undefined4 *)((int)this + 0x118c) = puVar3[0x154];
      *(undefined4 *)((int)this + 0x1190) = puVar3[0x155];
      *(undefined4 *)((int)this + 0x1194) = puVar3[0x156];
      *(undefined4 *)((int)this + 0x1198) = puVar3[0x157];
      *(undefined4 *)((int)this + 0x119c) = puVar3[0x158];
      *(undefined4 *)((int)this + 0x11a0) = puVar3[0x159];
      puVar17 = puVar3 + 0x15a;
      puVar19 = (undefined4 *)((int)this + 0x11a4);
      for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      *(undefined4 *)((int)this + 0x11c8) = puVar3[0x163];
      *(undefined4 *)((int)this + 0x11cc) = puVar3[0x164];
      *(undefined4 *)((int)this + 0x11d0) = puVar3[0x165];
      *(undefined4 *)((int)this + 0x11d4) = puVar3[0x166];
      *(undefined4 *)((int)this + 0x11d8) = puVar3[0x167];
      *(undefined4 *)((int)this + 0x11dc) = puVar3[0x168];
      *(undefined4 *)((int)this + 0x11e0) = puVar3[0x169];
      *(undefined4 *)((int)this + 0x11e4) = puVar3[0x16a];
      *(undefined1 *)((int)this + 0x11e8) = *(undefined1 *)(puVar3 + 0x16b);
      *(undefined4 *)((int)this + 0x11ec) = puVar3[0x16c];
      *(undefined4 *)((int)this + 0x11f0) = puVar3[0x16d];
      *(undefined4 *)((int)this + 0x11f4) = puVar3[0x16e];
      *(undefined4 *)((int)this + 0x11f8) = puVar3[0x16f];
      *(undefined4 *)((int)this + 0x11fc) = puVar3[0x170];
      *(undefined4 *)((int)this + 0x1200) = puVar3[0x171];
      *(undefined1 *)((int)this + 0x1204) = *(undefined1 *)(puVar3 + 0x172);
      *(undefined4 *)((int)this + 0x1208) = puVar3[0x173];
      *(undefined1 *)((int)this + 0x120c) = *(undefined1 *)(puVar3 + 0x174);
      *(undefined4 *)((int)this + 0x1210) = puVar3[0x175];
      *(undefined1 *)((int)this + 0x1214) = *(undefined1 *)(puVar3 + 0x176);
      FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x2295c),*(int **)((int)this + 0x22960));
    }
  }
LAB_0045fc89:
  pvVar5 = param_3;
  if ((param_3 != (void *)0x0) || (*(int *)((int)this + 0x230c4) != 0)) {
    FUN_004d05e0(DAT_005a7b78,DAT_005a7c44,DAT_005a7c48);
  }
  if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == *(int *)((int)this + 0x6a8)) {
    FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0xf0),*(int **)((int)this + 0xf4));
  }
  if (-1 < local_2c) {
    iVar8 = -1;
    if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == *(int *)((int)this + 0x6a8)) {
      if (*(int *)((int)this + 0x6ac) < 1) {
        if (0 < *(int *)((int)this + 0x1e1c)) {
          iVar8 = *(int *)((int)this + 0x1df8);
        }
      }
      else {
        iVar8 = *(int *)((int)this + 0x688);
      }
    }
    else if (*(int *)((int)this + 0xc88) < 1) {
      if (0 < *(int *)((int)this + 0x23f8)) {
        iVar8 = *(int *)((int)this + 0x23d4);
      }
    }
    else {
      iVar8 = *(int *)((int)this + 0xc64);
    }
    FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,local_2c,iVar8);
  }
  FUN_004ba870(&DAT_005a9ddc);
  FUN_0053a090(&DAT_00583ff8,s_Combat_outcome__turn__d_player___005576cc,
               *(uint *)((int)this + 0x5004),*(undefined4 *)((int)this + 0x6a8),
               *(undefined4 *)((int)this + 0xc84));
  FUN_0053a090(&DAT_00583ff8,s_Survivors__atk_units__2d_id__3d__00557694,
               *(uint *)((int)this + 0x6ac),*(undefined4 *)((int)this + 0x688),
               *(undefined4 *)((int)this + 0xc88),*(undefined4 *)((int)this + 0xc64));
  FUN_0053a090(&DAT_00583ff8,s_Dead__atk_units__2d_id__3d__def_u_0055765c,
               *(uint *)((int)this + 0x1264),*(undefined4 *)((int)this + 0x1240),
               *(undefined4 *)((int)this + 0x1840),*(undefined4 *)((int)this + 0x181c));
  FUN_0053a090(&DAT_00583ff8,s_Retreated__atk_units__2d_id__3d__00557624,
               *(uint *)((int)this + 0x1e1c),*(undefined4 *)((int)this + 0x1df8),
               *(undefined4 *)((int)this + 0x23f8),*(undefined4 *)((int)this + 0x23d4));
  FUN_0053a090(&DAT_00583ff8,s_Prisoner__atk_units__2d_id__3d__d_005575ec,
               *(uint *)((int)this + 0x29d4),*(undefined4 *)((int)this + 0x29b0),
               *(undefined4 *)((int)this + 0x2fb0),*(undefined4 *)((int)this + 0x2f8c));
  iVar8 = *(int *)((int)this + 0x6a8);
  if ((iVar8 < 0) || (0xf < iVar8)) {
    param_3 = (void *)0x0;
  }
  else {
    param_3 = (void *)((int)this + iVar8 * 0x1d84 + 0x5068);
  }
  iVar8 = *(int *)((int)this + 0xc84);
  if ((iVar8 < 0) || (0xf < iVar8)) {
    pvVar20 = (void *)0x0;
  }
  else {
    pvVar20 = (void *)((int)this + iVar8 * 0x1d84 + 0x5068);
  }
  local_24 = pvVar20;
  FUN_004bbb70(param_3,&iStack_18,&iStack_1c);
  FUN_004bbb70(pvVar20,&iStack_10,&iStack_14);
  FUN_0040b620((void *)((int)this + 0x4d4c),DAT_005a7b78,*(uint *)((int)this + 0x5008),2);
  if (((local_48 == (int *)0x0) && (pvVar5 != (void *)0x0)) && (pvVar2 != (void *)0x0)) {
    iVar8 = *(int *)((int)this + 0x2298c);
    if (iVar8 < 0) {
      *(uint *)((int)pvVar2 + 0x30) = *(uint *)((int)pvVar2 + 0x30) | 0x100;
    }
    else {
      *(uint *)(*(int *)((int)pvVar2 + 0x50) + 4 + iVar8 * 0xc) =
           *(uint *)(*(int *)((int)pvVar2 + 0x50) + 4 + iVar8 * 0xc) | 1;
    }
  }
  if (param_6 != (byte *)0x0) {
    iVar18 = 0;
    iVar8 = 10;
    pbVar12 = param_6;
    do {
      if (*(short *)pbVar12 != -1) {
        iVar18 = iVar18 + 1;
      }
      pbVar12 = pbVar12 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    uVar9 = FUN_00482ac0(this,param_2,1);
    if (uVar9 != 0) {
      iVar8 = *(int *)(uVar9 + 0x50);
      if (iVar8 != 0) {
        FUN_00539eb0(iVar8,0xc,*(int *)(iVar8 + -4),&LAB_00462c80);
        if (iVar8 + -4 != 0) {
          Ordinal_403(iVar8 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
      }
      if (iVar18 < 2) {
        *(undefined4 *)(uVar9 + 0x50) = 0;
      }
      else {
        iVar8 = iVar18 + -1;
        *(short *)(uVar9 + 0x4e) = (short)iVar18 + -1;
        piVar13 = (int *)Ordinal_401(iVar8 * 0xc + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
        uStack_4 = 0;
        if (piVar13 == (int *)0x0) {
          uStack_4 = 0xffffffff;
          *(undefined4 *)(uVar9 + 0x50) = 0;
        }
        else {
          *piVar13 = iVar8;
          FUN_00539ff0(piVar13 + 1,0xc,iVar8,&LAB_00462c60,&LAB_00462c80);
          uStack_4 = 0xffffffff;
          *(int **)(uVar9 + 0x50) = piVar13 + 1;
        }
      }
      pCVar14 = (LPCSTR)FUN_004b9570(0x44,*(short *)param_6);
      piVar13 = (int *)FUN_00539610(pCVar14,&DAT_005572ec);
      if (piVar13 == (int *)0x0) {
        ExceptionList = pvStack_c;
        return 0;
      }
      FUN_005397f0((char *)&param_2,4,1,piVar13);
      if (param_2 < 1) {
        puVar3 = *(undefined4 **)(uVar9 + 0x58);
        if ((puVar3 != (undefined4 *)0x0) && (puVar3[0x12] != *(int *)((int)this + 0x6a8))) {
          if (puVar3 != (undefined4 *)0x0) {
            (/*IC:004600bf*/**(code **)*puVar3)(puVar3,1);
          }
          *(undefined4 *)(uVar9 + 0x58) = 0;
        }
      }
      else {
        FUN_005397f0((char *)&local_28,4,1,piVar13);
        puVar3 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        uStack_4 = 1;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_00411610(puVar3);
        }
        uStack_4 = 0xffffffff;
        *(undefined4 **)(uVar9 + 0x58) = puVar3;
        FUN_004122a0(puVar3,piVar13);
      }
      FUN_005394d0(piVar13);
      FUN_0053a790(pCVar14);
      if ((*param_7 & 1) == 0) {
        uVar16 = *(uint *)(uVar9 + 0x30) & 0xfffffeff;
      }
      else {
        uVar16 = *(uint *)(uVar9 + 0x30) | 0x100;
      }
      *(uint *)(uVar9 + 0x30) = uVar16;
      if (1 < iVar18) {
        iVar8 = 0xc;
        param_1 = (int *)(iVar18 + -1);
        pbVar12 = param_6;
        param_6 = param_7 + -(int)param_6;
        do {
          pbVar12 = pbVar12 + 2;
          *(int *)(iVar8 + -0xc + *(int *)(uVar9 + 0x50)) = (int)*(short *)pbVar12;
          *(undefined4 *)(iVar8 + -4 + *(int *)(uVar9 + 0x50)) = 0;
          *(int *)(iVar8 + -8 + *(int *)(uVar9 + 0x50)) = (int)*(short *)(param_6 + (int)pbVar12);
          if (*(short *)pbVar12 != -1) {
            param_7 = (byte *)FUN_004b9570(0x44,*(short *)pbVar12);
            piVar13 = (int *)FUN_00539610((LPCSTR)param_7,&DAT_005572ec);
            if (piVar13 != (int *)0x0) {
              FUN_005397f0((char *)&param_2,4,1,piVar13);
              if (param_2 == 0) {
                puVar3 = *(undefined4 **)(iVar8 + -4 + *(int *)(uVar9 + 0x50));
                if (puVar3 != (undefined4 *)0x0) {
                  (/*IC:00460230*/**(code **)*puVar3)(puVar3,1);
                }
                *(undefined4 *)(iVar8 + -4 + *(int *)(uVar9 + 0x50)) = 0;
                *(undefined4 *)(iVar8 + -8 + *(int *)(uVar9 + 0x50)) = 1;
              }
              else {
                puVar3 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0)
                ;
                uStack_4 = 2;
                if (puVar3 == (undefined4 *)0x0) {
                  puVar3 = (undefined4 *)0x0;
                }
                else {
                  puVar3 = FUN_00411610(puVar3);
                }
                *(undefined4 **)(iVar8 + -4 + *(int *)(uVar9 + 0x50)) = puVar3;
                uStack_4 = 0xffffffff;
                *(undefined4 *)(*(int *)(iVar8 + -4 + *(int *)(uVar9 + 0x50)) + 0x1c) =
                     *(undefined4 *)(uVar9 + 0x1c);
                *(undefined4 *)(*(int *)(iVar8 + -4 + *(int *)(uVar9 + 0x50)) + 0x28) =
                     *(undefined4 *)(uVar9 + 0x28);
                iVar18 = *(int *)(iVar8 + -4 + *(int *)(uVar9 + 0x50));
                *(uint *)(iVar18 + 0x30) = *(uint *)(iVar18 + 0x30) | 0x1000000;
                FUN_005397f0((char *)&local_28,4,1,piVar13);
                FUN_004122a0(*(void **)(iVar8 + -4 + *(int *)(uVar9 + 0x50)),piVar13);
              }
              FUN_005394d0(piVar13);
              FUN_0053a790((LPCSTR)param_7);
            }
          }
          iVar8 = iVar8 + 0xc;
          param_1 = (int *)((int)param_1 + -1);
        } while (param_1 != (int *)0x0);
      }
    }
  }
  FUN_004c1060(param_3,param_8);
  FUN_004c1060(local_24,param_9);
  ExceptionList = pvStack_c;
  return uStack_20;
}


