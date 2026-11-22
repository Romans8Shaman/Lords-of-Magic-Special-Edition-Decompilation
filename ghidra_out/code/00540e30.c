
int __cdecl FUN_00540e30(int *param_1,byte *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  WCHAR *pWVar12;
  char *pcVar13;
  WCHAR *pWVar14;
  bool bVar15;
  longlong lVar16;
  int *piVar17;
  char local_1cd;
  int local_1cc;
  char local_1c7;
  char local_1c6;
  char local_1c5;
  int local_1c4;
  char local_1c0;
  char local_1bf;
  char local_1be;
  byte local_1bd;
  uint local_1bc;
  WCHAR *local_1b8;
  uint local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  byte local_19e;
  undefined1 local_19d;
  undefined8 local_19c;
  undefined4 local_194;
  WCHAR local_18e;
  undefined4 *local_18c;
  int local_188;
  undefined4 local_184;
  byte local_180 [11];
  undefined1 local_175;
  char local_160;
  char local_15f [351];
  
  local_1bf = '\0';
  local_1cc = 0;
  local_1ac = 0;
  bVar4 = *param_2;
  puVar7 = local_18c;
  if (bVar4 == 0) {
LAB_00541a86:
    if (((puVar7 == (undefined4 *)0xffffffff) && (local_1ac == 0)) && (local_1bf == '\0')) {
      local_1ac = -1;
    }
    return local_1ac;
  }
  do {
    iVar10 = 0;
    if ((int)DAT_00575094 < 2) {
      uVar5 = (byte)PTR_DAT_00574e88[(uint)bVar4 * 2] & 8;
    }
    else {
      uVar5 = FUN_00541d40((uint)bVar4,8);
    }
    if (uVar5 != 0) {
      local_1cc = local_1cc + -1;
      piVar17 = param_1;
      uVar5 = FUN_00541c00(&local_1cc,param_1);
      FUN_00541be0(uVar5,piVar17);
      param_2 = param_2 + 1;
      uVar5 = FUN_0053b6e0((uint)*param_2);
      while (uVar5 != 0) {
        param_2 = param_2 + 1;
        uVar5 = FUN_0053b6e0((uint)*param_2);
      }
    }
    if (*param_2 != 0x25) {
      local_1cc = local_1cc + 1;
      puVar7 = (undefined4 *)FUN_00541bb0(param_1);
      if ((undefined4 *)(uint)*param_2 != puVar7) goto LAB_00541a6d;
      pbVar9 = param_2 + 1;
      if ((PTR_DAT_00574e88[((uint)puVar7 & 0xff) * 2 + 1] & 0x80) != 0) {
        local_1cc = local_1cc + 1;
        uVar5 = FUN_00541bb0(param_1);
        if (param_2[1] != uVar5) {
          local_1cc = local_1cc + -1;
          FUN_00541be0(uVar5,param_1);
          goto LAB_00541a6d;
        }
        local_1cc = local_1cc + -1;
        pbVar9 = param_2 + 2;
      }
      goto LAB_00541a33;
    }
    local_1a4 = 0;
    local_1b4 = local_1b4 & 0xffffff00;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1c4 = 0;
    local_1bd = 0;
    local_1be = '\0';
    local_1c5 = '\0';
    local_1cd = '\0';
    local_1c0 = '\0';
    local_1c7 = '\0';
    local_1c6 = '\x01';
    local_188 = 0;
    do {
      pbVar9 = param_2 + 1;
      bVar4 = *pbVar9;
      uVar5 = (uint)bVar4;
      if ((int)DAT_00575094 < 2) {
        uVar6 = (byte)PTR_DAT_00574e88[uVar5 * 2] & 4;
      }
      else {
        uVar6 = FUN_00541d40(uVar5,4);
      }
      if (uVar6 == 0) {
        switch(bVar4) {
        case 0x2a:
          local_1c5 = local_1c5 + '\x01';
          break;
        default:
switchD_00540fb0_caseD_2b:
          local_1cd = local_1cd + '\x01';
          break;
        case 0x46:
        case 0x4e:
          break;
        case 0x49:
          if ((param_2[2] != 0x36) || (param_2[3] != 0x34)) goto switchD_00540fb0_caseD_2b;
          iVar10 = iVar10 + 1;
          local_19c = 0;
          pbVar9 = param_2 + 3;
          break;
        case 0x4c:
          local_1c6 = local_1c6 + '\x01';
          break;
        case 0x68:
          local_1c6 = local_1c6 + -1;
          local_1c7 = local_1c7 + -1;
          break;
        case 0x6c:
          local_1c6 = local_1c6 + '\x01';
        case 0x77:
          local_1c7 = local_1c7 + '\x01';
        }
      }
      else {
        local_1b0 = local_1b0 + 1;
        local_1c4 = (uVar5 - 0x30) + local_1c4 * 10;
      }
      param_2 = pbVar9;
    } while (local_1cd == '\0');
    if (local_1c5 == '\0') {
      local_18c = param_3;
      local_1b8 = (WCHAR *)*param_3;
      param_3 = param_3 + 1;
    }
    local_1cd = '\0';
    if ((local_1c7 == '\0') && ((*param_2 == 0x53 || (local_1c7 = -1, *param_2 == 0x43)))) {
      local_1c7 = '\x01';
    }
    local_1bc = (uint)(*param_2 | 0x20);
    local_188 = iVar10;
    if (local_1bc != 0x6e) {
      if ((local_1bc == 99) || (local_1bc == 0x7b)) {
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_00541bb0(param_1);
      }
      else {
        puVar7 = (undefined4 *)FUN_00541c00(&local_1cc,param_1);
      }
    }
    pWVar12 = local_1b8;
    uVar5 = local_1bc;
    if ((local_1b0 != 0) && (local_1c4 == 0)) {
LAB_00541a6d:
      local_1cc = local_1cc + -1;
      FUN_00541be0((uint)puVar7,param_1);
      goto LAB_00541a86;
    }
    switch(local_1bc) {
    case 99:
      if (local_1b0 == 0) {
        local_1b0 = 1;
        local_1c4 = local_1c4 + 1;
      }
      if ('\0' < local_1c7) {
        local_1c0 = '\x01';
      }
      pcVar11 = &DAT_00574e84;
      goto LAB_0054112e;
    case 100:
    case 0x6f:
    case 0x75:
      goto switchD_005410c8_caseD_64;
    case 0x65:
    case 0x66:
    case 0x67:
      pcVar11 = &local_160;
      if (puVar7 == (undefined4 *)0x2d) {
        local_160 = '-';
        pcVar11 = local_15f;
LAB_00541773:
        local_1c4 = local_1c4 + -1;
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_00541bb0(param_1);
      }
      else if (puVar7 == (undefined4 *)0x2b) goto LAB_00541773;
      if ((local_1b0 == 0) || (0x15d < local_1c4)) {
        local_1c4 = 0x15d;
      }
      iVar10 = local_1a8;
      while( true ) {
        if ((int)DAT_00575094 < 2) {
          uVar5 = (byte)PTR_DAT_00574e88[(int)puVar7 * 2] & 4;
        }
        else {
          uVar5 = FUN_00541d40((int)puVar7,4);
        }
        if ((uVar5 == 0) ||
           (iVar8 = local_1c4 + -1, bVar15 = local_1c4 == 0, local_1c4 = iVar8, bVar15)) break;
        *pcVar11 = (char)puVar7;
        iVar10 = iVar10 + 1;
        pcVar11 = pcVar11 + 1;
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_00541bb0(param_1);
      }
      if ((DAT_00575098 == (char)puVar7) &&
         (iVar8 = local_1c4 + -1, bVar15 = local_1c4 != 0, local_1c4 = iVar8, bVar15)) {
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_00541bb0(param_1);
        *pcVar11 = DAT_00575098;
        while( true ) {
          pcVar11 = pcVar11 + 1;
          if ((int)DAT_00575094 < 2) {
            uVar5 = (byte)PTR_DAT_00574e88[(int)puVar7 * 2] & 4;
          }
          else {
            uVar5 = FUN_00541d40((int)puVar7,4);
          }
          if ((uVar5 == 0) ||
             (iVar8 = local_1c4 + -1, bVar15 = local_1c4 == 0, local_1c4 = iVar8, bVar15)) break;
          *pcVar11 = (char)puVar7;
          iVar10 = iVar10 + 1;
          local_1cc = local_1cc + 1;
          puVar7 = (undefined4 *)FUN_00541bb0(param_1);
        }
      }
      pcVar13 = pcVar11;
      if ((iVar10 != 0) &&
         (((puVar7 == (undefined4 *)0x65 || (puVar7 == (undefined4 *)0x45)) &&
          (iVar8 = local_1c4 + -1, bVar15 = local_1c4 != 0, local_1c4 = iVar8, bVar15)))) {
        *pcVar11 = 'e';
        pcVar13 = pcVar11 + 1;
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_00541bb0(param_1);
        if (puVar7 == (undefined4 *)0x2d) {
          *pcVar13 = '-';
          pcVar13 = pcVar11 + 2;
LAB_005418ce:
          iVar8 = local_1c4 + -1;
          if (local_1c4 != 0) goto LAB_005418e3;
        }
        else if (puVar7 == (undefined4 *)0x2b) goto LAB_005418ce;
        while( true ) {
          if ((int)DAT_00575094 < 2) {
            uVar5 = (byte)PTR_DAT_00574e88[(int)puVar7 * 2] & 4;
          }
          else {
            uVar5 = FUN_00541d40((int)puVar7,4);
          }
          if (uVar5 == 0) break;
          iVar8 = local_1c4 + -1;
          bVar15 = local_1c4 == 0;
          local_1c4 = iVar8;
          if (bVar15) break;
          iVar10 = iVar10 + 1;
          *pcVar13 = (char)puVar7;
          pcVar13 = pcVar13 + 1;
LAB_005418e3:
          local_1c4 = iVar8;
          local_1cc = local_1cc + 1;
          puVar7 = (undefined4 *)FUN_00541bb0(param_1);
        }
      }
      local_1cc = local_1cc + -1;
      FUN_00541be0((uint)puVar7,param_1);
      if (iVar10 == 0) goto LAB_00541a86;
      if (local_1c5 == '\0') {
        local_1ac = local_1ac + 1;
        *pcVar13 = '\0';
        (/*IC:00541974*/*(code *)PTR_FUN_00574970)();
      }
      break;
    default:
      if ((undefined4 *)(uint)*param_2 != puVar7) goto LAB_00541a6d;
      local_1bf = local_1bf + -1;
      if (local_1c5 == '\0') {
        param_3 = local_18c;
      }
      break;
    case 0x69:
      local_1bc = 100;
    case 0x78:
      uVar5 = local_1bc;
      if (puVar7 == (undefined4 *)0x2d) {
        local_1be = '\x01';
LAB_00541382:
        local_1c4 = local_1c4 + -1;
        if ((local_1c4 == 0) && (local_1b0 != 0)) {
          local_1cd = '\x01';
        }
        else {
          local_1cc = local_1cc + 1;
          puVar7 = (undefined4 *)FUN_00541bb0(param_1);
        }
      }
      else if (puVar7 == (undefined4 *)0x2b) goto LAB_00541382;
      if (puVar7 == (undefined4 *)0x30) {
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_00541bb0(param_1);
        if (((char)puVar7 == 'x') || ((char)puVar7 == 'X')) {
          local_1cc = local_1cc + 1;
          puVar7 = (undefined4 *)FUN_00541bb0(param_1);
          uVar5 = 0x78;
          local_1bc = 0x78;
        }
        else {
          local_1a8 = 1;
          if (uVar5 == 0x78) {
            local_1cc = local_1cc + -1;
            FUN_00541be0((uint)puVar7,param_1);
            puVar7 = (undefined4 *)0x30;
          }
          else {
            uVar5 = 0x6f;
            local_1bc = 0x6f;
          }
        }
      }
      goto LAB_00541464;
    case 0x6e:
      if (local_1c5 != '\0') break;
      iVar8 = local_1cc;
      goto LAB_00541725;
    case 0x70:
      local_1c6 = '\x01';
switchD_005410c8_caseD_64:
      if (puVar7 == (undefined4 *)0x2d) {
        local_1be = '\x01';
LAB_0054143a:
        local_1c4 = local_1c4 + -1;
        if ((local_1c4 == 0) && (local_1b0 != 0)) {
          local_1cd = '\x01';
        }
        else {
          local_1cc = local_1cc + 1;
          puVar7 = (undefined4 *)FUN_00541bb0(param_1);
        }
      }
      else if (puVar7 == (undefined4 *)0x2b) goto LAB_0054143a;
LAB_00541464:
      if (iVar10 == 0) {
        iVar10 = local_1a4;
        if (local_1cd == '\0') {
          do {
            if ((uVar5 == 0x78) || (uVar5 == 0x70)) {
              if ((int)DAT_00575094 < 2) {
                uVar6 = (byte)PTR_DAT_00574e88[(int)puVar7 * 2] & 0x80;
              }
              else {
                uVar6 = FUN_00541d40((int)puVar7,0x80);
              }
              if (uVar6 != 0) {
                iVar10 = iVar10 << 4;
                puVar7 = (undefined4 *)FUN_00541b70((uint)puVar7);
                goto LAB_0054165a;
              }
LAB_00541656:
              local_1cd = local_1cd + '\x01';
            }
            else {
              if ((int)DAT_00575094 < 2) {
                uVar6 = (byte)PTR_DAT_00574e88[(int)puVar7 * 2] & 4;
              }
              else {
                uVar6 = FUN_00541d40((int)puVar7,4);
              }
              if (uVar6 == 0) goto LAB_00541656;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)puVar7) goto LAB_00541656;
                iVar10 = iVar10 << 3;
              }
              else {
                iVar10 = iVar10 * 10;
              }
            }
LAB_0054165a:
            if (local_1cd == '\0') {
              local_1a8 = local_1a8 + 1;
              iVar10 = iVar10 + -0x30 + (int)puVar7;
              if ((local_1b0 == 0) || (local_1c4 = local_1c4 + -1, local_1c4 != 0)) {
                local_1cc = local_1cc + 1;
                puVar7 = (undefined4 *)FUN_00541bb0(param_1);
              }
              else {
                local_1cd = '\x01';
              }
            }
            else {
              local_1cc = local_1cc + -1;
              FUN_00541be0((uint)puVar7,param_1);
            }
          } while (local_1cd == '\0');
          local_1a4 = iVar10;
        }
        if (local_1be != '\0') {
          local_1a4 = -local_1a4;
        }
      }
      else {
        if (local_1cd == '\0') {
          lVar16 = local_19c;
          do {
            iVar10 = (int)((ulonglong)lVar16 >> 0x20);
            if (local_1bc == 0x78) {
              if ((int)DAT_00575094 < 2) {
                uVar5 = (byte)PTR_DAT_00574e88[(int)puVar7 * 2] & 0x80;
              }
              else {
                uVar5 = FUN_00541d40((int)puVar7,0x80);
              }
              if (uVar5 != 0) {
                lVar16 = __allshl(4,iVar10);
                puVar7 = (undefined4 *)FUN_00541b70((uint)puVar7);
                goto LAB_00541531;
              }
LAB_0054152d:
              local_1cd = local_1cd + '\x01';
            }
            else {
              if ((int)DAT_00575094 < 2) {
                uVar5 = (byte)PTR_DAT_00574e88[(int)puVar7 * 2] & 4;
              }
              else {
                uVar5 = FUN_00541d40((int)puVar7,4);
              }
              if (uVar5 == 0) goto LAB_0054152d;
              if (local_1bc == 0x6f) {
                if (0x37 < (int)puVar7) goto LAB_0054152d;
                lVar16 = __allshl(3,iVar10);
              }
              else {
                lVar16 = __allmul((uint)lVar16,iVar10,10,0);
              }
            }
LAB_00541531:
            if (local_1cd == '\0') {
              puVar1 = puVar7 + -0xc;
              local_1a8 = local_1a8 + 1;
              if ((local_1b0 == 0) || (local_1c4 = local_1c4 + -1, local_1c4 != 0)) {
                local_1cc = local_1cc + 1;
                puVar7 = (undefined4 *)FUN_00541bb0(param_1);
                lVar16 = lVar16 + (int)puVar1;
              }
              else {
                local_1cd = '\x01';
                lVar16 = lVar16 + (int)puVar1;
              }
            }
            else {
              local_1cc = local_1cc + -1;
              FUN_00541be0((uint)puVar7,param_1);
            }
          } while (local_1cd == '\0');
          local_19c = lVar16;
        }
        if (local_1be != '\0') {
          local_19c = CONCAT44(-(local_19c._4_4_ + (uint)((int)local_19c != 0)),-(int)local_19c);
        }
      }
      if (local_1bc == 0x46) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_1a8;
      }
      if (iVar10 == 0) goto LAB_00541a86;
      if (local_1c5 == '\0') {
        local_1ac = local_1ac + 1;
        iVar8 = local_1a4;
        iVar10 = local_188;
LAB_00541725:
        if (iVar10 == 0) {
          if (local_1c6 == '\0') {
            *local_1b8 = (WCHAR)iVar8;
          }
          else {
            *(int *)local_1b8 = iVar8;
          }
        }
        else {
          *(int *)local_1b8 = (int)local_19c;
          *(int *)(local_1b8 + 2) = local_19c._4_4_;
        }
      }
      break;
    case 0x73:
      if ('\0' < local_1c7) {
        local_1c0 = '\x01';
      }
      pcVar11 = s_____00574e7c;
LAB_0054112e:
      local_1bd = 0xff;
      pbVar9 = param_2;
LAB_00541133:
      param_2 = pbVar9;
      pbVar9 = local_180;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        pbVar9[0] = 0;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
        pbVar9 = pbVar9 + 4;
      }
      if ((local_1bc == 0x7b) && (*pcVar11 == 0x5d)) {
        local_1b4 = CONCAT31(local_1b4._1_3_,0x5d);
        pcVar11 = pcVar11 + 1;
        local_175 = 0x20;
      }
      bVar4 = *pcVar11;
      uVar5 = local_1b4;
      while (bVar4 != 0x5d) {
        pbVar9 = (byte *)(pcVar11 + 1);
        uVar6 = (uint)local_184 >> 8;
        local_184 = CONCAT31((int3)uVar6,bVar4);
        local_1b4._1_3_ = (undefined3)(uVar5 >> 8);
        if (bVar4 == 0x2d) {
          local_1b4._0_1_ = (byte)uVar5;
          bVar3 = (byte)local_1b4;
          if (((byte)local_1b4 == 0) || (bVar2 = *pbVar9, bVar2 == 0x5d)) goto LAB_005411d9;
          pbVar9 = (byte *)(pcVar11 + 2);
          uVar6 = (uint)local_194 >> 8;
          bVar4 = (byte)local_1b4;
          if (bVar2 <= (byte)local_1b4) {
            local_1b4 = CONCAT31(local_1b4._1_3_,bVar2);
            bVar4 = bVar2;
            uVar5 = local_1b4;
            bVar2 = bVar3;
          }
          local_1b4 = uVar5;
          local_194 = CONCAT31((int3)uVar6,bVar2);
          if (bVar4 <= bVar2) {
            uVar5 = local_1b4 & 0xff;
            iVar10 = (bVar2 - uVar5) + 1;
            do {
              uVar6 = uVar5 >> 3;
              bVar4 = (byte)uVar5;
              uVar5 = uVar5 + 1;
              iVar10 = iVar10 + -1;
              local_180[uVar6] = local_180[uVar6] | '\x01' << (bVar4 & 7);
            } while (iVar10 != 0);
          }
          local_1b4 = local_1b4 & 0xffffff00;
        }
        else {
LAB_005411d9:
          local_1b4 = CONCAT31(local_1b4._1_3_,bVar4);
          local_180[bVar4 >> 3] = local_180[bVar4 >> 3] | '\x01' << (bVar4 & 7);
        }
        pcVar11 = (char *)pbVar9;
        uVar5 = local_1b4;
        bVar4 = *pbVar9;
      }
      if (*pcVar11 == 0) goto LAB_00541a86;
      if (local_1bc == 0x7b) {
        param_2 = (byte *)pcVar11;
      }
      local_1cc = local_1cc + -1;
      local_1b4 = uVar5;
      FUN_00541be0((uint)puVar7,param_1);
      pWVar14 = pWVar12;
      while( true ) {
        if ((local_1b0 != 0) &&
           (iVar10 = local_1c4 + -1, bVar15 = local_1c4 == 0, local_1c4 = iVar10, bVar15)) {
          local_1b8 = pWVar14;
          goto LAB_0054131c;
        }
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_00541bb0(param_1);
        if ((puVar7 == (undefined4 *)0xffffffff) ||
           (bVar4 = (byte)puVar7,
           ((int)(char)(local_180[(int)puVar7 >> 3] ^ local_1bd) & 1 << (bVar4 & 7)) == 0)) break;
        if (local_1c5 == '\0') {
          if (local_1c0 == '\0') {
            *(byte *)pWVar14 = bVar4;
            pWVar14 = (WCHAR *)((int)pWVar14 + 1);
          }
          else {
            local_19e = bVar4;
            if ((PTR_DAT_00574e88[((uint)puVar7 & 0xff) * 2 + 1] & 0x80) != 0) {
              local_1cc = local_1cc + 1;
              uVar5 = FUN_00541bb0(param_1);
              local_19d = (undefined1)uVar5;
            }
            FUN_00545d90(&local_18e,&local_19e,DAT_00575094);
            *pWVar14 = local_18e;
            pWVar14 = pWVar14 + 1;
          }
        }
        else {
          pWVar12 = (WCHAR *)((int)pWVar12 + 1);
        }
      }
      local_1cc = local_1cc + -1;
      local_1b8 = pWVar14;
      FUN_00541be0((uint)puVar7,param_1);
LAB_0054131c:
      if (pWVar12 == pWVar14) goto LAB_00541a86;
      if ((local_1c5 == '\0') && (local_1ac = local_1ac + 1, local_1bc != 99)) {
        if (local_1c0 == '\0') {
          *(byte *)local_1b8 = 0;
        }
        else {
          *local_1b8 = L'\0';
        }
      }
      break;
    case 0x7b:
      if ('\0' < local_1c7) {
        local_1c0 = '\x01';
      }
      pbVar9 = param_2 + 1;
      pcVar11 = (char *)pbVar9;
      if (*pbVar9 == 0x5e) {
        pcVar11 = (char *)(param_2 + 2);
        param_2 = pbVar9;
        goto LAB_0054112e;
      }
      goto LAB_00541133;
    }
    local_1bf = local_1bf + '\x01';
    pbVar9 = param_2 + 1;
LAB_00541a33:
    param_2 = pbVar9;
    if (((puVar7 == (undefined4 *)0xffffffff) && ((*param_2 != 0x25 || (param_2[1] != 0x6e)))) ||
       (bVar4 = *param_2, bVar4 == 0)) goto LAB_00541a86;
  } while( true );
}


