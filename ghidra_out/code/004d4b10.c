
void __thiscall FUN_004d4b10(void *this,undefined4 *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined *puVar9;
  size_t *psVar10;
  size_t sVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  char *pcVar16;
  byte *pbVar17;
  char *pcVar18;
  undefined4 *puVar19;
  bool bVar20;
  uint *local_400;
  char local_3f9;
  undefined4 local_3f8;
  undefined *local_3f4;
  size_t *local_3f0;
  undefined *local_3ec;
  byte *local_3e8;
  undefined *local_3e4;
  uint *local_3e0;
  undefined *local_3dc;
  char *local_3d8;
  int local_3d4;
  undefined4 local_3d0;
  undefined *local_3cc;
  undefined4 local_3c8 [2];
  char local_3c0 [200];
  char local_2f8 [260];
  char local_1f4 [500];
  
  local_400 = param_2;
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar12 = *(int *)((int)this + 0x50);
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    *(undefined4 *)(iVar12 + iVar3 * 8) = 0;
    *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
  }
  local_3d4 = *(int *)((int)this + 0x54);
  pcVar16 = local_2f8;
  for (iVar12 = 0x41; iVar12 != 0; iVar12 = iVar12 + -1) {
    pcVar16[0] = '\0';
    pcVar16[1] = '\0';
    pcVar16[2] = '\0';
    pcVar16[3] = '\0';
    pcVar16 = pcVar16 + 4;
  }
  if (*(char **)((int)this + 0x874) != (char *)0x0) {
    uVar13 = 0xffffffff;
    pcVar16 = *(char **)((int)this + 0x874);
    do {
      pcVar18 = pcVar16;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar18 = pcVar16 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar18;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    pcVar16 = pcVar18 + -uVar13;
    pcVar18 = local_2f8;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar18 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar18 = pcVar18 + 1;
    }
  }
  if (*(int **)((int)this + 0x868) != (int *)0x0) {
    local_3f9 = '\0';
    FUN_00539660(&local_3f9,1,1,*(int **)((int)this + 0x868));
    FUN_00539660(local_2f8,0x104,1,*(int **)((int)this + 0x868));
  }
  local_3e0 = param_2;
  *(undefined4 *)((int)this + 0x878) = 1;
  *(undefined4 *)((int)this + 0x87c) = 1;
  if (*(int *)((int)this + 0x70) != 0) {
LAB_004d56ed:
    *param_1 = 0;
    param_1[1] = local_3f4;
    return;
  }
  do {
    if (local_3e0 != local_400) {
      *(char **)((int)this + 0x87c) =
           (char *)((int)local_400 + (*(int *)((int)this + 0x87c) - (int)local_3e0));
    }
    cVar1 = (char)*local_400;
    while ((cVar1 != '\0' && (uVar13 = FUN_0053b6e0((int)cVar1), uVar13 != 0))) {
      if ((char)*local_400 == '\n') {
        *(undefined4 *)((int)this + 0x87c) = 1;
        *(int *)((int)this + 0x878) = *(int *)((int)this + 0x878) + 1;
      }
      if ((char)*local_400 == '\t') {
        *(int *)((int)this + 0x87c) =
             (*(int *)((int)this + 0xa68) -
             *(int *)((int)this + 0x87c) % *(int *)((int)this + 0xa68)) + 1 +
             *(int *)((int)this + 0x87c);
      }
      else if ((char)*local_400 == ' ') {
        *(int *)((int)this + 0x87c) = *(int *)((int)this + 0x87c) + 1;
      }
      cVar1 = *(char *)((int)local_400 + 1);
      local_400 = (uint *)((int)local_400 + 1);
    }
    cVar1 = (char)*local_400;
    if (cVar1 == '\0') break;
    local_3e0 = local_400;
    if (0x5b < (int)cVar1 - 0x22U) {
switchD_004d4cc1_caseD_23:
      local_3e4 = (undefined *)_strcspn((char *)local_400,s__________0055e724);
      if (local_3e4 == (undefined *)0x0) {
LAB_004d55f5:
        local_400 = (uint *)((int)local_400 + 1);
      }
      else {
        local_3f9 = local_3e4[(int)local_400];
        local_3d8 = local_3e4 + (int)local_400;
        *local_3d8 = '\0';
        local_3ec = local_3e4;
        puVar7 = FUN_0053ae60(local_400,'.');
        if (puVar7 == (uint *)0x0) {
          cVar1 = (char)*local_400;
          if (((cVar1 == '+') || (cVar1 == '-')) || (uVar13 = FUN_0053b6b0((int)cVar1), uVar13 != 0)
             ) {
            iVar12 = FUN_0053ae00((char *)local_400,(byte *)0x55e714,&local_3e4,&local_3ec);
            if (iVar12 < 1) goto LAB_004d570c;
            local_3f4 = local_3e4;
            if (*(int *)((int)this + 0x54) == 0) goto LAB_004d55c2;
            iVar12 = *(int *)((int)this + 0x50);
            iVar3 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar3;
            *(undefined4 *)(iVar12 + iVar3 * 8) = 1;
            *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3e4;
            *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
                 *(undefined4 *)((int)this + 0x878);
            *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
                 *(undefined4 *)((int)this + 0x87c);
          }
          else {
            pbVar17 = &DAT_0055e3d0;
            puVar7 = local_400;
            do {
              bVar2 = (byte)*puVar7;
              bVar20 = bVar2 < *pbVar17;
              if (bVar2 != *pbVar17) {
LAB_004d51ac:
                iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                goto LAB_004d51b1;
              }
              if (bVar2 == 0) break;
              bVar2 = *(byte *)((int)puVar7 + 1);
              bVar20 = bVar2 < pbVar17[1];
              if (bVar2 != pbVar17[1]) goto LAB_004d51ac;
              puVar7 = (uint *)((int)puVar7 + 2);
              pbVar17 = pbVar17 + 2;
            } while (bVar2 != 0);
            iVar12 = 0;
LAB_004d51b1:
            if (iVar12 == 0) {
              iVar12 = *(int *)((int)this + 0x54);
              uVar15 = 0xe;
              if (iVar12 == 0) {
LAB_004d53ba:
                *(undefined4 *)((int)this + 0x90) = 3;
                FUN_004d4550(this);
                *(undefined4 *)((int)this + 0x90) = 0;
                *(undefined4 *)((int)this + 0xa4) = 0;
              }
              else {
LAB_004d5209:
                iVar3 = *(int *)((int)this + 0x50);
                iVar12 = iVar12 + -1;
                *(int *)((int)this + 0x54) = iVar12;
                *(undefined4 *)(iVar3 + iVar12 * 8) = uVar15;
                *(undefined **)(iVar3 + 4 + iVar12 * 8) = local_3f4;
                *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
                     *(undefined4 *)((int)this + 0x878);
                *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
                     *(undefined4 *)((int)this + 0x87c);
              }
            }
            else {
              pbVar17 = &DAT_0055e3cc;
              puVar7 = local_400;
              do {
                bVar2 = (byte)*puVar7;
                bVar20 = bVar2 < *pbVar17;
                if (bVar2 != *pbVar17) {
LAB_004d51f4:
                  iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                  goto LAB_004d51f9;
                }
                if (bVar2 == 0) break;
                bVar2 = *(byte *)((int)puVar7 + 1);
                bVar20 = bVar2 < pbVar17[1];
                if (bVar2 != pbVar17[1]) goto LAB_004d51f4;
                puVar7 = (uint *)((int)puVar7 + 2);
                pbVar17 = pbVar17 + 2;
              } while (bVar2 != 0);
              iVar12 = 0;
LAB_004d51f9:
              if (iVar12 == 0) {
                iVar12 = *(int *)((int)this + 0x54);
                uVar15 = 0xf;
                if (iVar12 != 0) goto LAB_004d5209;
                *(undefined4 *)((int)this + 0x90) = 3;
                FUN_004d4550(this);
                *(undefined4 *)((int)this + 0x90) = 0;
                *(undefined4 *)((int)this + 0xa4) = 0;
              }
              else {
                if ((char)*local_400 == '/') {
                  local_3f0 = (size_t *)((int)this + 0x74);
                  local_3e8 = (byte *)((int)local_400 + 1);
                  puVar7 = *(uint **)((int)this + 0x74);
                  while (puVar7 != (uint *)0x0) {
                    pbVar17 = (byte *)puVar7[1];
                    pbVar8 = local_3e8;
                    do {
                      bVar2 = *pbVar8;
                      bVar20 = bVar2 < *pbVar17;
                      if (bVar2 != *pbVar17) {
LAB_004d52b6:
                        iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                        goto LAB_004d52bb;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar8[1];
                      bVar20 = bVar2 < pbVar17[1];
                      if (bVar2 != pbVar17[1]) goto LAB_004d52b6;
                      pbVar8 = pbVar8 + 2;
                      pbVar17 = pbVar17 + 2;
                    } while (bVar2 != 0);
                    iVar12 = 0;
LAB_004d52bb:
                    if (iVar12 == 0) {
                      puVar9 = (undefined *)*puVar7;
                      goto code_r0x004d5399;
                    }
                    local_3f0 = puVar7 + 2;
                    if (-1 < iVar12) {
                      local_3f0 = puVar7 + 3;
                    }
                    puVar7 = (uint *)*local_3f0;
                  }
                  puVar7 = (uint *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
                  if (puVar7 == (uint *)0x0) {
                    puVar9 = *(undefined **)((int)this + 0x7c);
                  }
                  else {
                    uVar13 = 0xffffffff;
                    pbVar17 = local_3e8;
                    do {
                      if (uVar13 == 0) break;
                      uVar13 = uVar13 - 1;
                      bVar2 = *pbVar17;
                      pbVar17 = pbVar17 + 1;
                    } while (bVar2 != 0);
                    uVar14 = Ordinal_401(~uVar13,s_C__lomse_source_storm_h_00555130,0x3fa,0);
                    puVar7[1] = uVar14;
                    if (uVar14 == 0) {
                      Ordinal_403(puVar7,s_C__lomse_source_storm_h_00555130,0x3eb,0);
                      puVar9 = (undefined *)0x0;
                    }
                    else {
                      *(uint *)((int)this + 0xa90) = *(int *)((int)this + 0xa90) + ~uVar13 + 0x18;
                      *(uint **)(*(int *)((int)this + 0x80) + *(int *)((int)this + 0x78) * 4) =
                           puVar7;
                      puVar7[2] = 0;
                      puVar7[3] = 0;
                      *puVar7 = *(uint *)((int)this + 0x78);
                      uVar13 = 0xffffffff;
                      *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + 1;
                      puVar7[4] = 0;
                      puVar7[5] = 0;
                      pbVar17 = local_3e8;
                      do {
                        pbVar8 = pbVar17;
                        if (uVar13 == 0) break;
                        uVar13 = uVar13 - 1;
                        pbVar8 = pbVar17 + 1;
                        bVar2 = *pbVar17;
                        pbVar17 = pbVar8;
                      } while (bVar2 != 0);
                      uVar13 = ~uVar13;
                      pbVar17 = pbVar8 + -uVar13;
                      pbVar8 = (byte *)puVar7[1];
                      for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar17;
                        pbVar17 = pbVar17 + 4;
                        pbVar8 = pbVar8 + 4;
                      }
                      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                        *pbVar8 = *pbVar17;
                        pbVar17 = pbVar17 + 1;
                        pbVar8 = pbVar8 + 1;
                      }
                      *local_3f0 = (size_t)puVar7;
                      puVar9 = (undefined *)*puVar7;
                    }
                  }
code_r0x004d5399:
                  if (*(undefined **)((int)this + 0x7c) <= puVar9) {
                    *(undefined4 *)((int)this + 0x90) = 10;
                    goto LAB_004d56ed;
                  }
                  iVar12 = *(int *)((int)this + 0x54);
                  uVar15 = 0x105;
                  local_3f4 = puVar9;
                  if (iVar12 == 0) goto LAB_004d53ba;
                }
                else {
                  local_3f0 = (size_t *)((int)this + 0x74);
                  psVar10 = *(size_t **)((int)this + 0x74);
                  while (psVar10 != (size_t *)0x0) {
                    pbVar17 = (byte *)psVar10[1];
                    puVar7 = local_400;
                    do {
                      bVar2 = (byte)*puVar7;
                      bVar20 = bVar2 < *pbVar17;
                      if (bVar2 != *pbVar17) {
code_r0x004d5415:
                        iVar12 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                        goto code_r0x004d541a;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = *(byte *)((int)puVar7 + 1);
                      bVar20 = bVar2 < pbVar17[1];
                      if (bVar2 != pbVar17[1]) goto code_r0x004d5415;
                      puVar7 = (uint *)((int)puVar7 + 2);
                      pbVar17 = pbVar17 + 2;
                    } while (bVar2 != 0);
                    iVar12 = 0;
code_r0x004d541a:
                    if (iVar12 == 0) {
                      local_3f4 = (undefined *)*psVar10;
                      goto code_r0x004d54fd;
                    }
                    local_3f0 = psVar10 + 2;
                    if (-1 < iVar12) {
                      local_3f0 = psVar10 + 3;
                    }
                    psVar10 = (size_t *)*local_3f0;
                  }
                  psVar10 = (size_t *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
                  if (psVar10 == (size_t *)0x0) {
                    local_3f4 = *(undefined **)((int)this + 0x7c);
                  }
                  else {
                    uVar13 = 0xffffffff;
                    puVar7 = local_400;
                    do {
                      if (uVar13 == 0) break;
                      uVar13 = uVar13 - 1;
                      uVar14 = *puVar7;
                      puVar7 = (uint *)((int)puVar7 + 1);
                    } while ((char)uVar14 != '\0');
                    sVar11 = Ordinal_401(~uVar13,s_C__lomse_source_storm_h_00555130,0x3fa,0);
                    psVar10[1] = sVar11;
                    if (sVar11 == 0) {
                      Ordinal_403(psVar10,s_C__lomse_source_storm_h_00555130,0x3eb,0);
                      local_3f4 = (undefined *)0x0;
                    }
                    else {
                      *(uint *)((int)this + 0xa90) = *(int *)((int)this + 0xa90) + ~uVar13 + 0x18;
                      *(size_t **)(*(int *)((int)this + 0x80) + *(int *)((int)this + 0x78) * 4) =
                           psVar10;
                      psVar10[2] = 0;
                      psVar10[3] = 0;
                      *psVar10 = *(size_t *)((int)this + 0x78);
                      uVar13 = 0xffffffff;
                      *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + 1;
                      psVar10[4] = 0;
                      psVar10[5] = 0;
                      puVar7 = local_400;
                      do {
                        puVar4 = puVar7;
                        if (uVar13 == 0) break;
                        uVar13 = uVar13 - 1;
                        puVar4 = (uint *)((int)puVar7 + 1);
                        uVar14 = *puVar7;
                        puVar7 = puVar4;
                      } while ((char)uVar14 != '\0');
                      uVar13 = ~uVar13;
                      puVar6 = (undefined4 *)((int)puVar4 - uVar13);
                      puVar19 = (undefined4 *)psVar10[1];
                      for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                        *puVar19 = *puVar6;
                        puVar6 = puVar6 + 1;
                        puVar19 = puVar19 + 1;
                      }
                      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                        *(undefined1 *)puVar19 = *(undefined1 *)puVar6;
                        puVar6 = (undefined4 *)((int)puVar6 + 1);
                        puVar19 = (undefined4 *)((int)puVar19 + 1);
                      }
                      *local_3f0 = (size_t)psVar10;
                      local_3f4 = (undefined *)*psVar10;
                    }
                  }
code_r0x004d54fd:
                  iVar12 = *(int *)((int)this + 0x54);
                  uVar15 = 5;
                  if (iVar12 == 0) {
                    FUN_00404ab0(this,3);
                    goto LAB_004d55df;
                  }
                }
                iVar3 = *(int *)((int)this + 0x50);
                iVar12 = iVar12 + -1;
                *(int *)((int)this + 0x54) = iVar12;
                *(undefined4 *)(iVar3 + iVar12 * 8) = uVar15;
                *(undefined **)(iVar3 + 4 + iVar12 * 8) = local_3f4;
                *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
                     *(undefined4 *)((int)this + 0x878);
                *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
                     *(undefined4 *)((int)this + 0x87c);
              }
            }
          }
        }
        else {
          iVar12 = FUN_0053ae00((char *)local_400,&DAT_0055e71c,&local_3dc,&local_3ec);
          if (iVar12 < 1) {
LAB_004d570c:
            *(undefined4 *)((int)this + 0x90) = 9;
            *param_1 = 0;
            param_1[1] = local_3f4;
            return;
          }
          local_3f4 = local_3dc;
          if (*(int *)((int)this + 0x54) == 0) {
LAB_004d55c2:
            *(undefined4 *)((int)this + 0x90) = 3;
            FUN_004d4550(this);
            *(undefined4 *)((int)this + 0x90) = 0;
            *(undefined4 *)((int)this + 0xa4) = 0;
          }
          else {
            iVar12 = *(int *)((int)this + 0x50);
            iVar3 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar3;
            *(undefined4 *)(iVar12 + iVar3 * 8) = 4;
            *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3dc;
            *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
                 *(undefined4 *)((int)this + 0x878);
            *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
                 *(undefined4 *)((int)this + 0x87c);
          }
        }
LAB_004d55df:
        *local_3d8 = local_3f9;
        if ((int)local_3ec < 1) goto LAB_004d55f5;
        local_400 = (uint *)((int)local_400 + (int)local_3ec);
      }
      goto LAB_004d55fa;
    }
    bVar2 = *(byte *)((int)&switchD_004d4cc1::switchdataD_004d573c + cVar1 + 2);
    switch(cVar1) {
    case '\"':
      uVar13 = *(uint *)((int)this + 0x878);
      uVar15 = *(undefined4 *)((int)this + 0x87c);
      puVar7 = (uint *)((int)local_400 + 1);
      cVar1 = *(char *)puVar7;
      local_400 = puVar7;
      do {
        if (cVar1 == '\"') goto LAB_004d4d8b;
        puVar4 = (uint *)((int)local_400 + 1);
        cVar1 = *(char *)puVar4;
        if (cVar1 == '\\') {
          puVar4 = (uint *)((int)local_400 + 2);
          if (*(char *)puVar4 == '\n') {
            *(int *)((int)this + 0x878) = *(int *)((int)this + 0x878) + 1;
            *(undefined4 *)((int)this + 0x87c) = 1;
          }
          if (*(char *)puVar4 != '\0') {
            puVar4 = (uint *)((int)local_400 + 3);
            cVar1 = *(char *)puVar4;
            goto joined_r0x004d4d27;
          }
        }
        else {
joined_r0x004d4d27:
          if (cVar1 == '\n') {
            *(undefined4 *)((int)this + 0x87c) = 1;
            *(int *)((int)this + 0x878) = *(int *)((int)this + 0x878) + 1;
          }
        }
        local_400 = puVar4;
        cVar1 = (char)*local_400;
      } while (cVar1 != '\0');
      if (*(uint *)((int)this + 0x874) == 0) {
        FUN_0053a090(local_3c0,s_unterminated_quote__line__d_colu_0055e778,uVar13);
      }
      else {
        FUN_0053a090(local_3c0,s_unterminated_quote___s___line__d_0055e748,
                     *(uint *)((int)this + 0x874),uVar13,uVar15);
      }
      FUN_004d41c0(this,local_3c0);
LAB_004d4d8b:
      *(char *)local_400 = '\0';
      puVar6 = (undefined4 *)FUN_004d2f40(this,&local_3d0,(char *)puVar7);
      uVar15 = *puVar6;
      local_3f4 = (undefined *)puVar6[1];
      if ((char)uVar15 == '\0') {
        *(undefined4 *)((int)this + 0x90) = 2;
        *param_1 = uVar15;
        param_1[1] = local_3f4;
        return;
      }
      if (*(int *)((int)this + 0x54) == 0) break;
      iVar12 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar12 + iVar3 * 8) = uVar15;
      *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
      *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
           *(undefined4 *)((int)this + 0x878);
      *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
           *(undefined4 *)((int)this + 0x87c);
      local_400 = (uint *)((int)local_400 + 1);
      goto LAB_004d55fa;
    default:
      goto switchD_004d4cc1_caseD_23;
    case '%':
      if (*(int *)((int)this + 0x8c) == 0) {
        local_400 = (uint *)((int)local_400 + 1);
        *(int *)((int)this + 0x87c) = *(int *)((int)this + 0x87c) + 1;
        goto LAB_004d55fa;
      }
    case ';':
      sVar11 = _strcspn((char *)((int)local_400 + 1),&DAT_0055d4bc);
      local_400 = (uint *)((char *)((int)local_400 + 1) + sVar11);
      goto LAB_004d55fa;
    case '*':
      puVar5 = *(undefined1 **)((int)this + 0x874);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00579274;
      }
      FUN_0053a090(local_1f4,s__s_line__d_column__d_0055e730,(uint)puVar5,
                   *(undefined4 *)((int)this + 0x878),*(undefined4 *)((int)this + 0x87c));
      puVar6 = (undefined4 *)FUN_004d2f40(this,local_3c8,local_1f4);
      uVar15 = *puVar6;
      local_3f4 = (undefined *)puVar6[1];
      if ((char)uVar15 == '\0') {
        *(undefined4 *)((int)this + 0x90) = 2;
        *param_1 = uVar15;
        param_1[1] = local_3f4;
        return;
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar12 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar12 + iVar3 * 8) = uVar15;
        *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
LAB_004d5044:
        *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x878);
        *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x87c);
        local_400 = (uint *)((int)local_400 + 1);
        goto LAB_004d55fa;
      }
      break;
    case '[':
      if (*(int *)((int)this + 0x54) != 0) {
        iVar12 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar12 + iVar3 * 8) = 10;
        *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
        *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x878);
        *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x87c);
        local_400 = (uint *)((int)local_400 + 1);
        goto LAB_004d55fa;
      }
      break;
    case ']':
      if (*(int *)((int)this + 0x54) != 0) {
        iVar12 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar12 + iVar3 * 8) = 0xb;
        *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
        *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x878);
        *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x87c);
        local_400 = (uint *)((int)local_400 + 1);
        goto LAB_004d55fa;
      }
      break;
    case '{':
      if (*(int *)((int)this + 0x54) != 0) {
        iVar12 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar12 + iVar3 * 8) = 0xc;
        *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
        *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x878);
        *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x87c);
        local_400 = (uint *)((int)local_400 + 1);
        goto LAB_004d55fa;
      }
      break;
    case '}':
      *(undefined4 *)((int)this + 0x94) = 0xd;
      *(undefined **)((int)this + 0x98) = local_3f4;
      FUN_004d3930((int)this,(uint)bVar2,0xd,local_3f4);
      if ((*(int *)((int)this + 0x90) != 0) && (*(int *)((int)this + 0xa4) == 0)) {
        FUN_004d4550(this);
      }
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar12 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar12;
        local_3f8 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar12 * 8);
        local_3f4 = *(undefined **)(*(int *)((int)this + 0x50) + -4 + iVar12 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        local_3f8 = 0;
        local_3f4 = local_3cc;
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar12 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar12 + iVar3 * 8) = local_3f8;
        *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
        goto LAB_004d5044;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    local_400 = (uint *)((int)local_400 + 1);
    *(undefined4 *)((int)this + 0xa4) = 0;
LAB_004d55fa:
  } while (*(int *)((int)this + 0x70) == 0);
  if (*(int *)((int)this + 0x70) != 0) {
    *param_1 = 0;
    param_1[1] = local_3f4;
    return;
  }
  pcVar16 = (char *)(*(int *)((int)this + 0x50) + local_3d4 * 8);
  if (*pcVar16 == '\0') {
    pcVar16[0] = '\f';
    pcVar16[1] = '\0';
    pcVar16[2] = '\0';
    pcVar16[3] = '\0';
    FUN_004d57c0(this,0xd,local_3f4);
    iVar12 = *(int *)((int)this + 0x54);
    iVar3 = *(int *)((int)this + 0x50);
    *param_1 = *(undefined4 *)(iVar3 + iVar12 * 8);
    param_1[1] = *(undefined4 *)(iVar3 + 4 + iVar12 * 8);
    return;
  }
  *(undefined4 *)((int)this + 0x90) = 6;
  *param_1 = 0;
  param_1[1] = local_3f4;
  return;
}


