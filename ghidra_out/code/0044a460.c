
undefined4 __fastcall FUN_0044a460(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  SIZE_T *pSVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined *a3;
  int iVar4;
  HGLOBAL pvVar5;
  undefined4 *a3_00;
  LPVOID pvVar6;
  uint uVar7;
  undefined4 *arg2;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uStack_44;
  undefined4 *local_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1 + 0x36c) = 0;
  local_3c = param_1;
  a3 = FUN_00505f10();
  if (DAT_005d1e84 != (int *)0x0) {
    (/*IC:0044a498*/**(code **)(*DAT_005d1e84 + 0x2c))(DAT_005d1e84,s_WON_GAME_00556af4,&DAT_005568a8,a3);
  }
  pcVar10 = s_DirectPlayLobbyCreate_NULL___lpD_00556ab4;
  arg2 = (undefined4 *)(param_1 + 0x4a4);
  local_40 = arg2;
  iVar4 = Ordinal_4(0,arg2,0,0,0);
  iVar4 = FUN_004756f0(iVar4,pcVar10);
  if (iVar4 != 1) {
    return 0;
  }
  iVar4 = (/*IC:0044a4e0*/**(code **)(*(int *)*arg2 + 0x20))((int *)*arg2,0,0,&uStack_44);
  if (iVar4 != -0x7788ffe2) {
    return 0;
  }
  pvVar5 = GlobalAlloc(0x42,uStack_44);
  a3_00 = GlobalLock(pvVar5);
  iVar4 = (/*IC:0044a51b*/**(code **)(*(int *)*arg2 + 0x20))((int *)*arg2,0,a3_00,&uStack_44);
  if (iVar4 < 0) {
    return 0;
  }
  *a3_00 = 0x28;
  if ((char)unused_stack_0 == '\0') {
    a3_00[1] = 1;
  }
  else {
    a3_00[1] = 2;
  }
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  if (a3_00[2] == 0) {
    pvVar5 = GlobalAlloc(0x42,4);
    pvVar6 = GlobalLock(pvVar5);
    a3_00[2] = pvVar6;
  }
  puVar3 = local_40;
  puVar8 = (undefined4 *)a3_00[2];
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)a3_00[2] = 0x50;
  *(undefined4 *)(a3_00[2] + 4) = 0x44;
  *(undefined4 *)(a3_00[2] + 0x28) = 4;
  *(char **)(a3_00[2] + 0x30) = s_THE_WON_GAME_00556aa4;
  iVar4 = a3_00[2];
  *(undefined4 *)(iVar4 + 0x18) = DAT_00556898;
  *(undefined4 *)(iVar4 + 0x1c) = DAT_0055689c;
  *(undefined4 *)(iVar4 + 0x20) = DAT_005568a0;
  *(undefined4 *)(iVar4 + 0x24) = DAT_005568a4;
  iVar4 = a3_00[2];
  *(undefined4 *)(iVar4 + 8) = DAT_005568a8;
  *(undefined4 *)(iVar4 + 0xc) = DAT_005568ac;
  *(undefined4 *)(iVar4 + 0x10) = DAT_005568b0;
  *(undefined4 *)(iVar4 + 0x14) = DAT_005568b4;
  puVar8 = *(undefined4 **)(param_1 + 0x394 + *(int *)(param_1 + 0x49c) * 4);
  a3_00[4] = *puVar8;
  a3_00[5] = puVar8[1];
  a3_00[6] = puVar8[2];
  a3_00[7] = puVar8[3];
  *(char **)(a3_00[2] + 0x30) = s_WON_GAME_00556af4;
  *(undefined4 *)(a3_00[2] + 0x40) = DAT_00584604;
  *(undefined4 *)(a3_00[2] + 0x44) = DAT_00584424;
  puVar8 = *(undefined4 **)(param_1 + 0x394 + *(int *)(param_1 + 0x49c) * 4);
  uStack_20 = *puVar8;
  uStack_1c = puVar8[1];
  iStack_18 = puVar8[2];
  uStack_14 = puVar8[3];
  uStack_2c = DAT_0054e814;
  uStack_30 = DAT_0054e810;
  uStack_28 = DAT_0054e818;
  uStack_24 = DAT_0054e81c;
  if ((char)unused_stack_0 == '\0') {
    pSVar1 = a3_00 + 9;
    pcVar11 = s_lpDirectPlayLobbyA_>CreateAddres_00556a1c;
    *pSVar1 = 0;
    pcVar10 = (char *)(local_3c + 0x41c);
    uVar7 = 0xffffffff;
    pcVar9 = pcVar10;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    iVar4 = (/*IC:0044a6d6*/**(code **)(*(int *)*arg2 + 0x10))
                      (*local_40,&uStack_20,&uStack_30,pcVar10,~uVar7,0,pSVar1,
                       s_lpDirectPlayLobbyA_>CreateAddres_00556a1c);
    FUN_004756f0(iVar4);
    pvVar5 = GlobalAlloc(0x42,*pSVar1);
    pvVar6 = GlobalLock(pvVar5);
    iStack_18 = *(int *)*puVar3;
    uVar7 = 0xffffffff;
    pcVar9 = pcVar10;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    iVar4 = (/*IC:0044a724*/**(code **)(iStack_18 + 0x10))
                      ((int *)*puVar3,&local_3c,(int)register0x00000010 + -0x4c,pcVar10,~uVar7,
                       pvVar6,pSVar1,s_lpDirectPlayLobbyA_>CreateAddres_00556a1c);
    FUN_004756f0(iVar4,pcVar11,pvVar6);
    a3_00[8] = uStack_38;
    *(undefined4 *)(a3_00[2] + 0x30) = 0;
    arg2 = local_40;
    param_1 = local_3c;
  }
  pcVar10 = s_lpDirectPlayLobbyA_>SetConnectio_005569d4;
  iVar4 = (/*IC:0044a758*/**(code **)(*(int *)*arg2 + 0x30))((int *)*arg2,0,0,a3_00);
  iVar4 = FUN_004756f0(iVar4,pcVar10);
  if (iVar4 != 1) {
    return 0;
  }
  pcVar10 = s_lpDirectPlayLobbyA_>Connect_0____0055699c;
  iVar4 = (/*IC:0044a788*/**(code **)(*(int *)*arg2 + 0xc))((int *)*arg2,0,&uStack_34,0);
  iVar4 = FUN_004756f0(iVar4,pcVar10);
  if (iVar4 == 1) {
    *(undefined4 *)(param_1 + 0x4a0) = uStack_34;
    return 1;
  }
  return 0;
}


