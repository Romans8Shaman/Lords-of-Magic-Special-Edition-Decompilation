
void __fastcall FUN_00447b00(int param_1)

{
  void *pvVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  uint *puVar18;
  int *piVar19;
  uint local_124;
  int local_120;
  float local_11c;
  uint local_118;
  uint local_114;
  int local_110;
  uint local_10c;
  undefined4 local_108;
  uint local_104;
  int local_100;
  uint local_fc;
  uint local_f8;
  undefined4 local_f4;
  char local_f0 [4];
  uint local_ec;
  float local_e8;
  uint local_e4;
  float local_e0;
  uint local_dc;
  uint local_d8 [2];
  uint local_d0;
  uint local_cc [2];
  uint local_c4;
  uint local_c0 [2];
  uint local_b8;
  uint local_b4 [2];
  float local_ac;
  uint local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  char local_98 [32];
  char local_78 [30];
  undefined1 local_5a;
  undefined4 local_58 [5];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549988;
  local_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 0x48);
  if ((iVar6 != 0) && (local_11c = 0.0, ExceptionList = &local_c, 0 < *(int *)(iVar6 + 0x4c))) {
    do {
      fVar16 = local_11c;
      iVar11 = (int)local_11c * 0x4c;
      iVar8 = *(int *)(iVar11 + 0xc4 + iVar6);
      if ((iVar8 < 0) || ((DAT_005cd2f0 <= iVar8 || (DAT_005cd2f4 == 0)))) {
        local_110 = 0;
      }
      else {
        local_110 = DAT_005cd2f4 + iVar8 * 1000;
      }
      if ((((local_110 != 0) && (*(int *)(local_110 + 0x1c) == 2)) &&
          (iVar6 = FUN_0052b0e0((void *)(iVar11 + 0xc4 + iVar6),2), iVar6 == 0)) &&
         ((*(byte *)(iVar11 + 0xe8 + *(int *)(param_1 + 0x48)) & 1) == 0)) {
        FUN_00527e90((void *)(iVar11 + *(int *)(param_1 + 0x48) + 0xc4),0x2e,&local_100);
        iVar6 = *(int *)(param_1 + 0x48) + iVar11;
        if (local_100 <= *(int *)(iVar6 + 0xd0)) {
          uVar7 = FUN_005291a0((int *)(iVar6 + 0xc4));
          if (uVar7 != 0) {
            uVar7 = FUN_00525f10(iVar11 + 0xc4 + *(int *)(param_1 + 0x48));
            uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
            pvVar1 = (void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48));
            if (uVar7 == 0) {
              iVar6 = FUN_005228b0(pvVar1,uVar4,fVar16);
              if (iVar6 < 10) {
                FUN_0052b090((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),2,1);
                piVar19 = &local_120;
                puVar18 = &local_104;
                fVar17 = fVar16;
                uVar7 = FUN_004852e0(*(undefined4 **)(param_1 + 0x48));
                FUN_00529e40((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),uVar7,fVar17,puVar18
                             ,piVar19);
                *(int *)(iVar11 + 0xd4 + *(int *)(param_1 + 0x48)) = (local_120 + 5) * 0x100;
                pvVar1 = DAT_005a7b78;
                if (DAT_005a7d84 != 0) {
                  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = uVar4;
                  }
                  pvVar1 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(float *)(iVar6 + 4 + iVar8 * 8) = fVar16;
                  }
                  pvVar1 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 3;
                  }
                  FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
                  pvVar1 = DAT_005a7b78;
                  FUN_0040adb0(DAT_005a7b78,local_cc);
                  iVar6 = FUN_004026a0(local_cc,&local_118,&local_a8,&local_e0);
                  goto joined_r0x00447e9e;
                }
              }
            }
            else {
              iVar6 = FUN_005228b0(pvVar1,uVar4,fVar16);
              if (iVar6 < 0xc) {
                FUN_0052b090((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),2,1);
                piVar19 = &local_120;
                puVar18 = &local_104;
                fVar17 = fVar16;
                uVar7 = FUN_004852e0(*(undefined4 **)(param_1 + 0x48));
                FUN_00529e40((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),uVar7,fVar17,puVar18
                             ,piVar19);
                *(int *)(iVar11 + 0xd4 + *(int *)(param_1 + 0x48)) = (local_120 + 5) * 0x100;
                pvVar1 = DAT_005a7b78;
                if (DAT_005a7d84 != 0) {
                  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = uVar4;
                  }
                  pvVar1 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(float *)(iVar6 + 4 + iVar8 * 8) = fVar16;
                  }
                  pvVar1 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 3;
                  }
                  FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
                  pvVar1 = DAT_005a7b78;
                  FUN_0040adb0(DAT_005a7b78,local_d8);
                  iVar6 = FUN_004026a0(local_d8,&local_118,&local_e4,&local_ac);
joined_r0x00447e9e:
                  if (iVar6 == 0) {
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
                    FUN_004d4550(pvVar1);
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
                  }
                }
              }
            }
          }
          if (((*(int *)(local_110 + 0x164) == 2) &&
              (iVar6 = FUN_005228b0((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),
                                    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28),fVar16),
              pvVar1 = DAT_005a7b78, iVar6 == 5)) && ((char)DAT_005aa188 != '\0')) {
            uVar7 = 0xffffffff;
            local_124 = 0xffffffff;
            pcVar13 = (char *)(iVar11 + 0xec + *(int *)(param_1 + 0x48));
            do {
              pcVar15 = pcVar13;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar15 = pcVar13 + 1;
              cVar2 = *pcVar13;
              pcVar13 = pcVar15;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7;
            pcVar13 = pcVar15 + -uVar7;
            pcVar15 = local_98;
            for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar15 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar15 = pcVar15 + 1;
            }
            sVar3 = *(short *)(param_1 + 0x56);
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
              iVar6 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
              *(int *)(iVar6 + 4 + iVar8 * 8) = (int)sVar3;
            }
            pvVar1 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
              iVar6 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
              *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0;
            }
            pvVar1 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
              iVar6 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
              *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0;
            }
            pvVar1 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
              iVar6 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
              *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0;
            }
            FUN_004d05e0(DAT_005a7b78,DAT_005aa188,DAT_005aa18c);
            pvVar1 = DAT_005a7b78;
            FUN_0040adb0(DAT_005a7b78,local_c0);
            iVar6 = FUN_004026a0(local_c0,&local_124,&local_dc,&local_9c);
            if (iVar6 == 0) {
              *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
              FUN_004d4550(pvVar1);
              *(undefined4 *)((int)pvVar1 + 0x90) = 0;
              *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
            }
            else {
              if ((((int)local_124 < 0) || (DAT_005cd2f0 <= (int)local_124)) || (DAT_005cd2f4 == 0))
              {
                iVar6 = 0;
              }
              else {
                iVar6 = DAT_005cd2f4 + local_124 * 1000;
              }
              if (iVar6 != 0) {
                FUN_00526e40(local_58);
                local_38 = DAT_005d3340;
                local_4 = 0;
                iVar8 = FUN_00529200(local_58,local_124,
                                     *(uint *)(iVar11 + 0xe8 + *(int *)(param_1 + 0x48)));
                pvVar1 = DAT_005a7b78;
                if (iVar8 != 0) {
                  DAT_005d3340 = DAT_005d3340 + 1;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar9 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar9;
                    iVar8 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar8 + iVar9 * 8) = 1;
                    *(undefined4 *)(iVar8 + 4 + iVar9 * 8) = 6;
                  }
                  pvVar1 = DAT_005a7b78;
                  uVar4 = *(undefined4 *)(iVar6 + 0x14c);
                  uVar5 = *(undefined4 *)(iVar6 + 0x150);
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = uVar4;
                    *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = uVar5;
                  }
                  FUN_004d05e0(DAT_005a7b78,DAT_005d2f48,DAT_005d2f4c);
                  pvVar1 = DAT_005a7b78;
                  local_fc = 0;
                  local_114 = 0;
                  FUN_0040adb0(DAT_005a7b78,local_b4);
                  iVar6 = FUN_004026a0(local_b4,&local_114,&local_d0,&local_e8);
                  if (iVar6 == 0) {
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
                    FUN_004d4550(pvVar1);
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
                  }
                  pvVar1 = DAT_005a7b78;
                  FUN_0040adb0(DAT_005a7b78,&local_f8);
                  iVar6 = FUN_004026a0(&local_f8,&local_fc,&local_c4,&local_a0);
                  if (iVar6 == 0) {
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
                    FUN_004d4550(pvVar1);
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
                  }
                  FUN_00526ea0(iVar11 + 0xc4 + *(int *)(param_1 + 0x48));
                  puVar12 = local_58;
                  puVar14 = (undefined4 *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48));
                  for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar14 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  *(uint *)(iVar11 + 0xd4 + *(int *)(param_1 + 0x48)) = (local_114 + 5) * 0x100;
                  pvVar1 = DAT_005a7b78;
                  local_40 = 0;
                  local_3c = 0;
                  local_44 = 0;
                  if (DAT_005a7d84 != 0) {
                    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = uVar4;
                    }
                    pvVar1 = DAT_005a7b78;
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(float *)(iVar6 + 4 + iVar8 * 8) = local_11c;
                    }
                    pvVar1 = DAT_005a7b78;
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 3;
                    }
                    FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
                    pvVar1 = DAT_005a7b78;
                    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
                      piVar19 = (int *)((int)DAT_005a7b78 + 0x50);
                      iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                      local_10c = *(uint *)(*piVar19 + -8 + iVar6 * 8);
                      local_108 = *(undefined4 *)(*piVar19 + -4 + iVar6 * 8);
                    }
                    else {
                      FUN_00404ab0(DAT_005a7b78,6);
                      local_10c = 0;
                      local_108 = local_f4;
                    }
                    iVar6 = FUN_004026a0(&local_10c,&local_118,&local_b8,&local_a4);
                    if (iVar6 == 0) {
                      FUN_00404ab0(pvVar1,0xe);
                    }
                  }
                  pvVar1 = DAT_005a7b78;
                  uVar7 = 0xffffffff;
                  pcVar13 = local_98;
                  do {
                    if (uVar7 == 0) break;
                    uVar7 = uVar7 - 1;
                    cVar2 = *pcVar13;
                    pcVar13 = pcVar13 + 1;
                  } while (cVar2 != '\0');
                  if (1 < ~uVar7 - 1) {
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0xffffffff;
                    }
                    pvVar1 = DAT_005a7b78;
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0xffffffff;
                    }
                    pvVar1 = DAT_005a7b78;
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0xe;
                    }
                    FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
                    pvVar1 = DAT_005a7b78;
                    FUN_0040adb0(DAT_005a7b78,(undefined4 *)local_f0);
                    iVar6 = FUN_0041da00((int)pvVar1);
                    if (iVar6 == 0) {
                      if (local_f0[0] == '\b') {
                        uVar7 = local_ec;
                      }
                      else {
                        FUN_00404ab0(pvVar1,0xe);
                        uVar7 = 0;
                      }
                    }
                    else {
                      uVar7 = 0;
                    }
                    if (uVar7 == 0) {
                      FUN_0053a090(local_78,s_Sir__s_00556850,(uint)local_98);
                    }
                    else {
                      FUN_0053a090(local_78,s__s__s_00556858,uVar7,local_98);
                    }
                    uVar7 = 0xffffffff;
                    local_5a = 0;
                    pcVar13 = local_78;
                    do {
                      pcVar15 = pcVar13;
                      if (uVar7 == 0) break;
                      uVar7 = uVar7 - 1;
                      pcVar15 = pcVar13 + 1;
                      cVar2 = *pcVar13;
                      pcVar13 = pcVar15;
                    } while (cVar2 != '\0');
                    uVar7 = ~uVar7;
                    pcVar13 = pcVar15 + -uVar7;
                    pcVar15 = (char *)(iVar11 + 0xec + *(int *)(param_1 + 0x48));
                    for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                      pcVar13 = pcVar13 + 4;
                      pcVar15 = pcVar15 + 4;
                    }
                    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *pcVar15 = *pcVar13;
                      pcVar13 = pcVar13 + 1;
                      pcVar15 = pcVar15 + 1;
                    }
                  }
                }
                local_4 = 0xffffffff;
                thunk_FUN_00526ea0((int)local_58);
              }
            }
            FUN_0052b090((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),2,1);
            fVar16 = local_11c;
          }
        }
        *(undefined4 *)(iVar11 + 0xd0 + *(int *)(param_1 + 0x48)) = 0;
        (/*IC:00448512*/**(code **)(**(int **)(param_1 + 0x48) + 0x2c))(*(int **)(param_1 + 0x48));
      }
      iVar6 = *(int *)(param_1 + 0x48);
      local_11c = (float)((int)fVar16 + 1);
    } while ((int)local_11c < *(int *)(iVar6 + 0x4c));
  }
  ExceptionList = local_c;
  return;
}


