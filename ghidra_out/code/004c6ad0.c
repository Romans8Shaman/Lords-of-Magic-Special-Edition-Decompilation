
void __fastcall FUN_004c6ad0(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_208;
  int local_204;
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  byte local_1ec [40];
  byte local_1c4 [40];
  int local_19c [20];
  int local_14c [40];
  int aiStack_ac [40];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b72e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  iVar12 = 0;
  iVar5 = FUN_004fbe60(&DAT_005ae974,0,3);
  if (iVar5 != 0) {
    piVar8 = local_14c;
    iVar11 = iVar12;
    do {
      if (0x13 < iVar11) {
        FUN_005047d0(s_Too_many_capitol_cities__0055da24);
        goto LAB_004c6f2f;
      }
      uVar3 = *(undefined4 *)(iVar5 + 0x80);
      uVar4 = *(undefined4 *)(iVar5 + 0x74);
      local_19c[iVar11] = iVar5;
      aiStack_ac[iVar11] = 1;
      local_1c4[iVar11] = '\x01' << ((byte)uVar3 & 0x1f);
      iVar12 = iVar11 + 1;
      *piVar8 = *(int *)(iVar5 + 0x1c);
      local_1ec[iVar11] = '\x01' << ((byte)uVar4 & 0x1f);
      iVar5 = FUN_004fbe60(&DAT_005ae974,iVar5,3);
      piVar8 = piVar8 + 1;
      iVar11 = iVar12;
    } while (iVar5 != 0);
  }
  local_208 = 0;
  iVar5 = FUN_004fbe60(&DAT_005ae974,0,2);
  if (iVar5 != 0) {
    piVar8 = local_19c;
    do {
      if (*(int *)(iVar5 + 0x58) == 0xd) {
        if (0x13 < local_208) {
          FUN_005047d0(s_Too_many_satellite_villages__0055da40);
          goto LAB_004c6f2f;
        }
        local_208 = local_208 + 1;
        *piVar8 = iVar5;
        piVar8 = piVar8 + 1;
        local_1ec[iVar12] = 0;
        pbVar1 = local_1c4 + iVar12;
        *pbVar1 = 0;
        uVar6 = FUN_0043dbb0(iVar5);
        if (uVar6 != 0) {
          uVar3 = *(undefined4 *)(uVar6 + 0x74);
          *pbVar1 = '\x01' << ((byte)*(undefined4 *)(uVar6 + 0x80) & 0x1f);
          local_1ec[iVar12] = '\x01' << ((byte)uVar3 & 0x1f);
        }
        uVar6 = FUN_0043dbd0(iVar5);
        if (uVar6 != 0) {
          *pbVar1 = *pbVar1 | '\x01' << ((byte)*(undefined4 *)(uVar6 + 0x80) & 0x1f);
          local_1ec[iVar12] =
               local_1ec[iVar12] | '\x01' << ((byte)*(undefined4 *)(uVar6 + 0x74) & 0x1f);
        }
        iVar11 = *(int *)(iVar5 + 0x1c);
        aiStack_ac[iVar12] = 0;
        local_14c[iVar12] = iVar11;
        iVar12 = iVar12 + 1;
      }
      iVar5 = FUN_004fbe60(&DAT_005ae974,iVar5,2);
    } while (iVar5 != 0);
  }
  local_208 = 0;
  if (0 < param_1[3]) {
    local_200 = 0;
    do {
      iVar11 = 0;
      *(undefined1 *)(*param_1 + 1 + local_200) = 0;
      iVar5 = 99999;
      local_204 = 0;
      local_204._0_1_ = 0;
      if (0 < iVar12) {
        do {
          iVar7 = FUN_004a8960(&DAT_005ae958,local_208,local_14c[iVar11]);
          if (aiStack_ac[iVar11] == 0) {
            iVar7 = iVar7 * 3;
          }
          if (iVar7 < iVar5) {
            iVar5 = iVar7;
            local_204 = iVar11;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar12);
      }
      *(undefined1 *)(*param_1 + local_200) = (undefined1)local_204;
      local_208 = local_208 + 1;
      local_200 = local_200 + 6;
    } while (local_208 < param_1[3]);
  }
  iVar5 = param_1[0x6b];
  if ((iVar5 != 0) && (param_1[0x6c] != iVar12)) {
    if (iVar5 != 0) {
      FUN_00539eb0(iVar5,0x19c,*(int *)(iVar5 + -4),FUN_004c5210);
      if (iVar5 + -4 != 0) {
        Ordinal_403(iVar5 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    param_1[0x6b] = 0;
  }
  if (param_1[0x6b] == 0) {
    piVar8 = (int *)Ordinal_401(iVar12 * 0x19c + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    uStack_4 = 0;
    if (piVar8 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = piVar8 + 1;
      *piVar8 = iVar12;
      FUN_00539ff0(piVar10,0x19c,iVar12,FUN_004c5200,FUN_004c5210);
    }
    uStack_4 = 0xffffffff;
    param_1[0x6b] = (int)piVar10;
    if (piVar10 == (int *)0x0) goto LAB_004c6f2f;
  }
  iVar5 = 0;
  param_1[0x6c] = iVar12;
  if (0 < iVar12) {
    iVar12 = 0;
    do {
      iVar11 = iVar12 + param_1[0x6b];
      iVar12 = iVar12 + 0x19c;
      *(int *)(iVar11 + 0x14) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[0x6c]);
  }
  uVar6 = 0;
  if (0 < param_1[0x6c]) {
    local_204 = 0;
    do {
      iVar5 = 0;
      iVar12 = 0;
      iStack_1fc = 0;
      local_200 = 0;
      if (0 < param_1[3]) {
        local_208 = 0;
        do {
          if (*(byte *)(*param_1 + local_208) == uVar6) {
            iVar5 = iVar5 + 1;
            iStack_1f8 = 0;
            local_200 = local_200 + iVar12 % param_1[1];
            iStack_1fc = iStack_1fc + iVar12 / param_1[1];
            do {
              iVar11 = FUN_004c61c0(param_1,iVar12,iStack_1f8);
              uVar9 = (uint)*(byte *)(*param_1 + iVar11 * 6);
              if (uVar9 != uVar6) {
                FUN_004c72e0((void *)(local_204 + param_1[0x6b]),iVar12,uVar9);
                if ((int)uVar6 < (int)(uint)*(byte *)(iVar11 * 6 + *param_1)) {
                  pbVar1 = (byte *)(local_208 + 1 + *param_1);
                  *pbVar1 = *pbVar1 | 1;
                }
              }
              iStack_1f8 = iStack_1f8 + 1;
            } while (iStack_1f8 < 8);
          }
          iVar12 = iVar12 + 1;
          local_208 = local_208 + 6;
        } while (iVar12 < param_1[3]);
      }
      if (iVar5 != 0) {
        *(int *)(local_204 + param_1[0x6b]) = (iStack_1fc / iVar5) * param_1[1] + local_200 / iVar5;
      }
      bVar2 = local_1c4[uVar6];
      *(int *)(local_204 + 4 + param_1[0x6b]) = iVar5;
      *(byte *)(local_204 + param_1[0x6b] + 8) = local_1ec[uVar6];
      uVar6 = uVar6 + 1;
      *(byte *)(local_204 + param_1[0x6b] + 9) = bVar2;
      local_204 = local_204 + 0x19c;
    } while ((int)uVar6 < param_1[0x6c]);
  }
LAB_004c6f2f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  ExceptionList = pvStack_c;
  return;
}


