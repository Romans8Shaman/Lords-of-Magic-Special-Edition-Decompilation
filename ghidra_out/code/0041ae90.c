
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041ae90(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  float *pfVar12;
  float local_40;
  int local_38;
  int local_34;
  float local_30;
  float local_2c [2];
  float local_24;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar9 = (int *)(param_1 + 0xc4);
    do {
      uVar4 = FUN_00521e30(piVar9);
      if (uVar4 != 0) break;
      iVar10 = iVar10 + 1;
      piVar9 = piVar9 + 0x13;
    } while (iVar10 < *(int *)(param_1 + 0x4c));
  }
  if (iVar10 != *(int *)(param_1 + 0x4c)) {
    iVar10 = *(int *)(param_1 + 0x1c);
    puVar5 = FUN_004c6fc0();
    iVar10 = iVar10 % *(int *)(puVar5 + 0x6c);
    iVar6 = *(int *)(param_1 + 0x1c);
    puVar5 = FUN_004c6fc0();
    iVar6 = iVar6 / *(int *)(puVar5 + 0x6c);
    iVar7 = FUN_00420580(param_1);
    if (iVar7 == 0) {
      pfVar12 = local_2c;
      puVar5 = FUN_004c6fc0();
      FUN_004a6600(puVar5,pfVar12,iVar10,iVar6);
    }
    else {
      pfVar12 = local_2c;
      iVar7 = param_1;
      puVar5 = FUN_004c6fc0();
      FUN_004a6700(puVar5,pfVar12,iVar10,iVar6,iVar7);
    }
    fVar11 = FUN_0041ae30(param_1);
    local_38 = *(int *)(param_1 + 0x538);
    fVar1 = (float)fVar11;
    if (local_38 < 0) {
      fVar1 = fVar1 + local_24;
      fVar2 = fVar1 - _DAT_0054d438;
      *(float *)(param_1 + 0x59c) = fVar1;
      if ((NAN(fVar2) || NAN(*(float *)(param_1 + 0x5a8))) || fVar2 < *(float *)(param_1 + 0x5a8)) {
        fVar2 = *(float *)(param_1 + 0x5a8);
      }
      fVar1 = (fVar1 - *(float *)(param_1 + 0x5a8)) * _DAT_0054d43c;
      *(float *)(param_1 + 0x5a0) = fVar2;
      *(float *)(param_1 + 0x5a4) = fVar1;
      return;
    }
    iVar6 = FUN_00427880(&DAT_005aeefc,&local_38,0);
    local_40 = fVar1 + local_24;
    local_34 = 1;
    iVar10 = *(int *)(DAT_005ae970 + (iVar6 + *(int *)(param_1 + 0x1c) * 8) * 4);
    *(undefined4 *)(param_1 + 0x5a4) = 0xbf000000;
    local_30 = local_40;
    while (iVar6 != 8) {
      puVar5 = FUN_004c6fc0();
      iVar8 = iVar10 % *(int *)(puVar5 + 0x6c);
      puVar5 = FUN_004c6fc0();
      iVar6 = iVar10 / *(int *)(puVar5 + 0x6c);
      iVar7 = FUN_00420580(param_1);
      if (iVar7 == 0) {
        pfVar12 = local_2c;
        puVar5 = FUN_004c6fc0();
        FUN_004a6600(puVar5,pfVar12,iVar8,iVar6);
      }
      else {
        pfVar12 = local_2c;
        iVar7 = param_1;
        puVar5 = FUN_004c6fc0();
        FUN_004a6700(puVar5,pfVar12,iVar8,iVar6,iVar7);
      }
      fVar3 = fVar1 + local_24;
      fVar2 = (fVar3 - *(float *)(param_1 + 0x5a8)) / (float)local_34;
      if ((!NAN(*(float *)(param_1 + 0x5a4)) && !NAN(fVar2)) && fVar2 <= *(float *)(param_1 + 0x5a4)
         ) {
        fVar2 = *(float *)(param_1 + 0x5a4);
      }
      *(float *)(param_1 + 0x5a4) = fVar2;
      if ((NAN(local_40) || NAN(fVar3)) || local_40 < fVar3) {
        local_40 = fVar3;
      }
      if ((!NAN(local_30) && !NAN(fVar3)) && fVar3 <= local_30) {
        local_30 = fVar3;
      }
      if (local_38 < 0) break;
      iVar6 = FUN_00427880(&DAT_005aeefc,&local_38,0);
      iVar10 = *(int *)(DAT_005ae970 + (iVar6 + iVar10 * 8) * 4);
      local_34 = local_34 + 1;
    }
    local_40 = local_40 - _DAT_0054d438;
    if ((!NAN(*(float *)(param_1 + 0x5a8)) && !NAN(local_40)) &&
        local_40 <= *(float *)(param_1 + 0x5a8)) {
      local_40 = *(float *)(param_1 + 0x5a8);
    }
    *(float *)(param_1 + 0x5a0) = local_40;
    *(float *)(param_1 + 0x59c) = local_30;
  }
  return;
}


