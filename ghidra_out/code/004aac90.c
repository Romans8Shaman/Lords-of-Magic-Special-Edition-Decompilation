
void __fastcall FUN_004aac90(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b156;
  pvStack_c = ExceptionList;
  iVar3 = 0;
  iVar4 = 0;
  local_20 = 0;
  local_24 = 0;
  local_18 = 0;
  local_1c = 0;
  local_28 = 0;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    puVar5 = (uint *)(*(int *)(param_1 + 100) + 4);
    do {
      if ((*puVar5 & 0x400) != 0) {
        local_20 = local_20 + iVar3 % DAT_005ae9c4;
        local_24 = local_24 + iVar3 / DAT_005ae9c4;
        iVar4 = iVar4 + 1;
      }
      if ((*puVar5 & 0x800) != 0) {
        local_18 = local_18 + iVar3 % DAT_005ae9c4;
        local_1c = local_1c + iVar3 / DAT_005ae9c4;
        local_28 = local_28 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar3 < *(int *)(param_1 + 0x68));
    iVar8 = local_28;
  }
  iVar3 = -1;
  iVar6 = -1;
  ExceptionList = &pvStack_c;
  if (0 < iVar4) {
    ExceptionList = &pvStack_c;
    iVar3 = FUN_004a51c0(&DAT_005ae958,local_20 / iVar4,local_24 / iVar4);
  }
  if (0 < iVar8) {
    iVar6 = FUN_004a51c0(&DAT_005ae958,local_18 / iVar8,local_1c / iVar8);
  }
  if (iVar3 == iVar6) {
    if (iVar3 != -1) {
      iVar6 = iVar6 + 1;
      goto LAB_004aada0;
    }
  }
  else {
LAB_004aada0:
    if (iVar3 != -1) {
      if (DAT_005aa7d4 == 0xf) {
LAB_004aade5:
        iVar8 = 8;
      }
      else {
        if ((DAT_005aa7d4 < 0) || (0xf < DAT_005aa7d4)) {
          puVar2 = (undefined *)0x0;
        }
        else {
          puVar2 = &DAT_005af194 + DAT_005aa7d4 * 0x1d84;
        }
        if (puVar2 == (undefined *)0x0) goto LAB_004aade5;
        iVar8 = *(int *)(puVar2 + 0x15b0);
      }
      puVar1 = (undefined4 *)Ordinal_401(0x44,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      piVar7 = (int *)0x0;
      uStack_4 = 0;
      if (puVar1 != (undefined4 *)0x0) {
        piVar7 = FUN_004f59a0(puVar1);
      }
      uStack_4 = 0xffffffff;
      FUN_004f5960((int)piVar7);
      piVar7[7] = iVar3;
      FUN_004f5a90(piVar7,*(int *)(&DAT_0055cb30 + iVar8 * 4));
      FUN_004f5b30(piVar7,0);
      FUN_004f5b90(piVar7,0);
      piVar7[1] = 10;
      (/*IC:004aae52*/**(code **)(*piVar7 + 0x1c))(piVar7);
      FUN_004f6030((void *)(param_1 + 0x1c),(int)piVar7);
    }
  }
  if (iVar6 == -1) goto LAB_004aaf2a;
  if (DAT_005aadb0 == 0xf) {
LAB_004aaea7:
    iVar8 = 8;
  }
  else {
    if ((DAT_005aadb0 < 0) || (0xf < DAT_005aadb0)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = &DAT_005af194 + DAT_005aadb0 * 0x1d84;
    }
    if (puVar2 == (undefined *)0x0) goto LAB_004aaea7;
    iVar8 = *(int *)(puVar2 + 0x15b0);
  }
  puVar1 = (undefined4 *)Ordinal_401(0x44,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_004f59a0(puVar1);
  }
  uStack_4 = 0xffffffff;
  FUN_004f5960((int)piVar7);
  piVar7[7] = iVar6;
  FUN_004f5a90(piVar7,*(int *)(&DAT_0055cb30 + iVar8 * 4));
  FUN_004f5b30(piVar7,0);
  FUN_004f5b90(piVar7,0);
  piVar7[1] = 10;
  (/*IC:004aaf1a*/**(code **)(*piVar7 + 0x1c))(piVar7);
  FUN_004f6030((void *)(param_1 + 0x1c),(int)piVar7);
LAB_004aaf2a:
  FUN_004f62f0(param_1 + 0x1c);
  ExceptionList = pvStack_c;
  return;
}


