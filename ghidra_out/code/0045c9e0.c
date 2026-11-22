
undefined4 __fastcall FUN_0045c9e0(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LPCSTR pCVar3;
  int iVar4;
  undefined2 extraout_var;
  void *pvVar5;
  int iVar6;
  float10 fVar7;
  int local_8;
  
  FUN_00478a20(&DAT_00585408);
  FUN_00478fb0(0x585408);
  FUN_00478ff0(0x585408);
  for (iVar2 = FUN_004fbe60((void *)((int)param_1 + 0x4848),0,0); iVar2 != 0;
      iVar2 = FUN_004fbe60((void *)((int)param_1 + 0x4848),iVar2,0)) {
    iVar6 = 0;
    if (0 < *(int *)(iVar2 + 0x4c)) {
      pvVar5 = (void *)(iVar2 + 0xc4);
      do {
        FUN_004286d0(pvVar5,*(undefined4 *)(iVar2 + 0x28),iVar6);
        iVar6 = iVar6 + 1;
        pvVar5 = (void *)((int)pvVar5 + 0x4c);
      } while (iVar6 < *(int *)(iVar2 + 0x4c));
    }
  }
  FUN_00461ec0((int)param_1);
  iVar2 = *(int *)((int)param_1 + 0x658);
  if ((iVar2 < 0) || (0xf < iVar2)) {
    local_8 = 0;
  }
  else {
    local_8 = (int)param_1 + iVar2 * 0x1d84 + 0x5068;
  }
  if (local_8 != 0) {
    iVar2 = *(int *)(local_8 + 0x15dc);
    if (DAT_005d1e84 == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = FUN_004b7dd0(DAT_005d1e84);
    }
    if (iVar2 != iVar6) {
      local_8 = 0;
    }
  }
  FUN_004d09a0(DAT_005a7b78,DAT_005a7c64,DAT_005a7c68,0);
  if (local_8 != 0) {
    iVar2 = 0;
    iVar6 = FUN_004fbe60((void *)((int)param_1 + 0x4848),0,0);
    while ((iVar6 != 0 && (*(int *)((int)param_1 + 0x230c0) == 0))) {
      if (((*(uint *)(iVar6 + 0x30) & 0xd00) == 0) && (iVar4 = *(int *)(iVar6 + 0x4c), 0 < iVar4)) {
        do {
          if (*(int *)(iVar6 + 0x48) == *(int *)((int)param_1 + 0x6a8)) {
            iVar2 = iVar2 + 1;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar6 = FUN_004fbe60((void *)((int)param_1 + 0x4848),iVar6,0);
    }
    if (0 < iVar2) {
      *(undefined4 *)((int)param_1 + 0x230c0) = 1;
    }
    FUN_004a85f0((void *)((int)param_1 + 0x482c));
    FUN_004a8640((void *)((int)param_1 + 0x482c),CONCAT22(extraout_var,DAT_005cd1c0));
    FUN_00488660(param_1,DAT_005cd1c0,(ushort)(*(int *)((int)param_1 + 0x230c0) != 0));
  }
  FUN_0051a8c0(&DAT_00584ae8,0,0);
  FUN_00481610(param_1,*(int *)((int)param_1 + 0xa8));
  FUN_00524230(0x5cd2ec);
  FUN_004af530(0x5cd2f8);
  FUN_004b0f10(0x5cd328);
  FUN_0042e1b0(0x5cd334);
  FUN_0043c2e0(0x5cd310);
  FUN_004f1890(&DAT_005aee6c);
  FUN_0050d110(0x5cd304);
  while (puVar1 = DAT_0058340c, puVar1 != (undefined4 *)0x0) {
    DAT_0058340c = (undefined4 *)puVar1[0xf];
    if (puVar1 != (undefined4 *)0x0) {
      (/*IC:0045cc09*/**(code **)*puVar1)(puVar1,1);
    }
  }
  DAT_0058340c = (undefined4 *)0x0;
  puVar1 = DAT_005836f4;
  while (puVar1 != (undefined4 *)0x0) {
    DAT_005836f4 = (undefined4 *)puVar1[0xf];
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (/*IC:0045cc36*/**(code **)*puVar1)(puVar1,0);
    }
    puVar1 = DAT_005836f4;
    if (iVar2 != 0) {
      Ordinal_403(iVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      puVar1 = DAT_005836f4;
    }
  }
  DAT_005836f4 = (undefined4 *)0x0;
  FUN_00519980(0x5876d0);
  FUN_00495590((int *)&DAT_00587954);
  pvVar5 = (void *)((int)param_1 + 0x482c);
  FUN_004a4b00(pvVar5,1);
  FUN_00508b00((undefined4 *)((int)param_1 + 0x4904));
  pCVar3 = (LPCSTR)FUN_00453ab0();
  iVar2 = FUN_00483120(param_1,pCVar3);
  if (iVar2 == 0) {
    FUN_005047e0(&DAT_00584ae8,s_Failed_to_re_load_map_after_comb_005575c8,s_Error__00555f64,0);
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x4838) = 0x3f800000;
  fVar7 = FUN_004a6460((int)pvVar5);
  FUN_004a6400(pvVar5,(float)((float10)*(float *)((int)param_1 + 0xac) - fVar7));
  FUN_00469e80(&DAT_005876d0,*(float *)((int)param_1 + 0xac));
  FUN_00469bf0(0x5876d0);
  FUN_00519a10(&DAT_005876d0);
  *(undefined4 *)((int)param_1 + 0x4840) = 1;
  FUN_005000f0(&DAT_00584ae8,*(int *)((int)param_1 + 0xa8));
  DAT_00587874 = DAT_005878f4;
  DAT_00587878 = DAT_005878f8;
  FUN_0051ab90(0x5876d0);
  FUN_004a6470((int)pvVar5);
  FUN_00504ce0(&DAT_00584ae8,1,0);
  FUN_0048a340(0x584ae8);
  if (local_8 != 0) {
    FUN_004b7410(&DAT_005cd358,'S',0,-1);
    FUN_0045cdd0((int)param_1);
  }
  *(undefined4 *)((int)param_1 + 0x658) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x65c) = 0xffffffff;
  return 1;
}


