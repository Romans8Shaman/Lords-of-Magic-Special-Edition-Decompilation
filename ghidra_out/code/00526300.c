
void __cdecl FUN_00526300(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  void *pvVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int local_3c;
  int local_38;
  float local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  int local_20;
  int local_1c;
  float local_18;
  uint local_14;
  uint local_10;
  float local_c;
  float local_4;
  
  if ((char)DAT_005d3810 != '\0') {
    FUN_005261a0(&DAT_005d2f20,0x2d);
    iVar14 = 0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      local_20 = param_1 + 0xc4;
      do {
        iVar2 = local_20;
        for (iVar10 = *(int *)(local_20 + 0x18); iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x1c)) {
          if ((*(uint *)(iVar10 + 0x10) & 0x400) != 0) {
            FUN_00526250(&DAT_005d2f20,*(int *)(iVar10 + 0xc),iVar14);
          }
        }
        uVar8 = FUN_005291e0(iVar2);
        if ((uVar8 != 0) && (local_2c = 0, 0 < *(int *)(uVar8 + 0x44))) {
          piVar11 = (int *)(uVar8 + 0x2c);
          do {
            for (iVar10 = *piVar11; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x1c)) {
              if ((*(uint *)(iVar10 + 0x10) & 0x400) != 0) {
                FUN_00526250(&DAT_005d2f20,*(int *)(iVar10 + 0xc),iVar14);
              }
            }
            local_2c = local_2c + 1;
            piVar11 = piVar11 + 1;
          } while (local_2c < *(int *)(uVar8 + 0x44));
        }
        iVar14 = iVar14 + 1;
        local_20 = local_20 + 0x4c;
      } while (iVar14 < *(int *)(param_1 + 0x4c));
    }
    local_1c = FUN_005262b0((undefined4 *)&DAT_005d2f20);
    local_20 = 0;
    if (0 < local_1c) {
      do {
        iVar14 = FUN_005262c0(&DAT_005d2f20,local_20,&local_3c,&local_38);
        if (iVar14 != 0) {
          local_28 = 0;
          iVar14 = param_1 + local_38 * 0x4c;
          for (iVar10 = *(int *)(iVar14 + 0xdc); iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x1c)) {
            if ((*(int *)(iVar10 + 0xc) == local_3c) && ((*(uint *)(iVar10 + 0x10) & 0x400) != 0)) {
              local_28 = *(undefined4 *)(iVar10 + 8);
              break;
            }
          }
          local_24 = FUN_005291e0(iVar14 + 0xc4);
          if (local_24 != 0) {
            iVar14 = *(int *)(local_24 + 0x44);
            bVar6 = false;
            iVar10 = 0;
            local_30 = -1;
            if (0 < iVar14) {
              piVar11 = (int *)(local_24 + 0x2c);
              do {
                bVar5 = true;
                for (iVar2 = *piVar11; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1c)) {
                  if ((*(int *)(iVar2 + 0xc) == local_3c) && ((*(byte *)(iVar2 + 0x11) & 4) != 0)) {
                    local_28 = *(undefined4 *)(iVar2 + 8);
                    bVar5 = false;
                    local_30 = iVar10;
                    break;
                  }
                }
                if (bVar5) {
                  bVar6 = true;
                }
                if ((bVar6) && (-1 < local_30)) break;
                iVar10 = iVar10 + 1;
                piVar11 = piVar11 + 1;
              } while (iVar10 < iVar14);
            }
            if (((bVar6) && (-1 < local_30)) && (local_2c = 0, 0 < iVar14)) {
              piVar11 = (int *)(local_24 + 0x2c);
              do {
                pvVar12 = DAT_005a7b78;
                bVar6 = false;
                for (iVar14 = *piVar11; iVar14 != 0; iVar14 = *(int *)(iVar14 + 0x1c)) {
                  if ((*(int *)(iVar14 + 0xc) == local_3c) &&
                     ((*(uint *)(iVar14 + 0x10) & 0x400) != 0)) {
                    bVar6 = true;
                    break;
                  }
                }
                if (!bVar6) {
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar12);
                    *(undefined4 *)((int)pvVar12 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar12 + 0xa4) = 0;
                  }
                  else {
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    iVar14 = *(int *)((int)pvVar12 + 0x50);
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(int *)(iVar14 + 4 + iVar10 * 8) = local_3c;
                  }
                  pvVar12 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar12);
                    *(undefined4 *)((int)pvVar12 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar12 + 0xa4) = 0;
                  }
                  else {
                    iVar14 = *(int *)((int)DAT_005a7b78 + 0x50);
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(undefined4 *)(iVar14 + 4 + iVar10 * 8) = local_28;
                  }
                  pvVar12 = DAT_005a7b78;
                  uVar3 = *(undefined4 *)(param_1 + 0x28);
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar12);
                    *(undefined4 *)((int)pvVar12 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar12 + 0xa4) = 0;
                  }
                  else {
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    iVar14 = *(int *)((int)pvVar12 + 0x50);
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(undefined4 *)(iVar14 + 4 + iVar10 * 8) = uVar3;
                  }
                  pvVar12 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar12);
                    *(undefined4 *)((int)pvVar12 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar12 + 0xa4) = 0;
                  }
                  else {
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    iVar14 = *(int *)((int)pvVar12 + 0x50);
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(int *)(iVar14 + 4 + iVar10 * 8) = local_38;
                  }
                  pvVar12 = DAT_005a7b78;
                  uVar3 = *(undefined4 *)(param_1 + 0x28);
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar12);
                    *(undefined4 *)((int)pvVar12 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar12 + 0xa4) = 0;
                  }
                  else {
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    iVar14 = *(int *)((int)pvVar12 + 0x50);
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(undefined4 *)(iVar14 + 4 + iVar10 * 8) = uVar3;
                  }
                  pvVar12 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar12);
                    *(undefined4 *)((int)pvVar12 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar12 + 0xa4) = 0;
                  }
                  else {
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    iVar14 = *(int *)((int)pvVar12 + 0x50);
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(int *)(iVar14 + 4 + iVar10 * 8) = local_38;
                  }
                  FUN_004d05e0(DAT_005a7b78,DAT_005d3810,DAT_005d3814);
                  pvVar12 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
                    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
                    iVar14 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar14;
                    local_10 = *(uint *)(*piVar1 + -8 + iVar14 * 8);
                    local_c = *(float *)(*piVar1 + -4 + iVar14 * 8);
                  }
                  else {
                    FUN_00404ab0(DAT_005a7b78,6);
                    local_10 = 0;
                    local_c = local_4;
                  }
                  iVar14 = FUN_004026a0(&local_10,(uint *)&local_34,&local_14,&local_18);
                  if (iVar14 == 0) {
                    *(undefined4 *)((int)pvVar12 + 0x90) = 0xe;
                    FUN_004d4550(pvVar12);
                    *(undefined4 *)((int)pvVar12 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar12 + 0xa4) = 0;
                    local_34 = 0.0;
                  }
                  if (local_34 != 0.0) {
                    for (puVar4 = *(undefined4 **)(local_24 + 0x2c + local_30 * 4);
                        puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[7]) {
                      if (((puVar4[3] == local_3c) && ((puVar4[4] & 0x400) != 0)) &&
                         ((iVar14 = FUN_00526f70(puVar4,(int *)*piVar11), iVar14 == 0 &&
                          (puVar9 = (undefined4 *)FUN_0044c430(&DAT_005d2f50),
                          puVar9 != (undefined4 *)0x0)))) {
                        puVar13 = puVar4;
                        puVar15 = puVar9;
                        for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
                          *puVar15 = *puVar13;
                          puVar13 = puVar13 + 1;
                          puVar15 = puVar15 + 1;
                        }
                        puVar9[7] = *piVar11;
                        *piVar11 = (int)puVar9;
                      }
                    }
                  }
                }
                local_2c = local_2c + 1;
                piVar11 = piVar11 + 1;
              } while (local_2c < *(int *)(local_24 + 0x44));
            }
          }
          local_2c = 0;
          if (0 < *(int *)(param_1 + 0x4c)) {
            pvVar12 = (void *)(param_1 + 0xc4);
            do {
              if (local_38 != local_2c) {
                iVar14 = FUN_00526210(&DAT_005d2f20,local_3c,local_2c);
                pvVar7 = DAT_005a7b78;
                if (iVar14 == 0) {
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar7);
                    *(undefined4 *)((int)pvVar7 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
                  }
                  else {
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    iVar14 = *(int *)((int)pvVar7 + 0x50);
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(int *)(iVar14 + 4 + iVar10 * 8) = local_3c;
                  }
                  pvVar7 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar7);
                    *(undefined4 *)((int)pvVar7 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
                  }
                  else {
                    iVar14 = *(int *)((int)DAT_005a7b78 + 0x50);
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(undefined4 *)(iVar14 + 4 + iVar10 * 8) = local_28;
                  }
                  pvVar7 = DAT_005a7b78;
                  uVar3 = *(undefined4 *)(param_1 + 0x28);
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar7);
                    *(undefined4 *)((int)pvVar7 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
                  }
                  else {
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    iVar14 = *(int *)((int)pvVar7 + 0x50);
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(undefined4 *)(iVar14 + 4 + iVar10 * 8) = uVar3;
                  }
                  pvVar7 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar7);
                    *(undefined4 *)((int)pvVar7 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
                  }
                  else {
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    iVar14 = *(int *)((int)pvVar7 + 0x50);
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(int *)(iVar14 + 4 + iVar10 * 8) = local_38;
                  }
                  pvVar7 = DAT_005a7b78;
                  uVar3 = *(undefined4 *)(param_1 + 0x28);
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar7);
                    *(undefined4 *)((int)pvVar7 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
                  }
                  else {
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    iVar14 = *(int *)((int)pvVar7 + 0x50);
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(undefined4 *)(iVar14 + 4 + iVar10 * 8) = uVar3;
                  }
                  pvVar7 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar7);
                    *(undefined4 *)((int)pvVar7 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
                  }
                  else {
                    iVar14 = *(int *)((int)DAT_005a7b78 + 0x50);
                    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
                    *(undefined4 *)(iVar14 + iVar10 * 8) = 1;
                    *(int *)(iVar14 + 4 + iVar10 * 8) = local_2c;
                  }
                  FUN_004d05e0(DAT_005a7b78,DAT_005d3810,DAT_005d3814);
                  pvVar7 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
                    piVar11 = (int *)((int)DAT_005a7b78 + 0x50);
                    iVar14 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar14;
                    uVar8 = *(uint *)(*piVar11 + -8 + iVar14 * 8);
                    local_4 = *(float *)(*piVar11 + -4 + iVar14 * 8);
                  }
                  else {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
                    FUN_004d4550(pvVar7);
                    *(undefined4 *)((int)pvVar7 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
                    uVar8 = 0;
                  }
                  uVar8 = uVar8 & 0xff;
                  if (uVar8 == 1) {
                    local_34 = local_4;
                  }
                  else if (uVar8 == 2) {
                    local_34 = (float)((int)local_4 >> 8);
                  }
                  else if (uVar8 == 4) {
                    lVar16 = __ftol((float10)local_4);
                    local_34 = (float)lVar16;
                  }
                  else {
                    *(undefined4 *)((int)pvVar7 + 0x90) = 0xe;
                    FUN_004d4550(pvVar7);
                    *(undefined4 *)((int)pvVar7 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
                    local_34 = 0.0;
                  }
                  if (local_34 != 0.0) {
                    iVar14 = local_38;
                    for (puVar4 = *(undefined4 **)(param_1 + 0xdc + local_38 * 0x4c);
                        puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[7]) {
                      if ((puVar4[3] == local_3c) && ((puVar4[4] & 0x400) != 0)) {
                        FUN_00526fe0(pvVar12,puVar4);
                        iVar14 = local_38;
                      }
                    }
                    uVar8 = FUN_005291e0(param_1 + 0xc4 + iVar14 * 0x4c);
                    if ((uVar8 != 0) && (-1 < local_30)) {
                      for (puVar4 = *(undefined4 **)(uVar8 + 0x2c + local_30 * 4);
                          puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[7]) {
                        if ((puVar4[3] == local_3c) && ((puVar4[4] & 0x400) != 0)) {
                          FUN_00526fe0(pvVar12,puVar4);
                        }
                      }
                    }
                  }
                }
              }
              local_2c = local_2c + 1;
              pvVar12 = (void *)((int)pvVar12 + 0x4c);
            } while (local_2c < *(int *)(param_1 + 0x4c));
          }
        }
        local_20 = local_20 + 1;
      } while (local_20 < local_1c);
    }
  }
  return;
}


