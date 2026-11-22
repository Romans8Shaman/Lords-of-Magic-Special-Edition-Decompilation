
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall FUN_00478570(void *this,int param_1,undefined4 *param_2)

{
  LPCSTR pCVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint uStack_10068;
  uint uStack_10064;
  undefined4 uStack_10060;
  uint uStack_1005c;
  undefined4 uStack_10058;
  undefined4 *puStack_10054;
  undefined2 uStack_10050;
  undefined2 uStack_1004e;
  int iStack_1004c;
  int iStack_10048;
  undefined4 uStack_10044;
  undefined4 uStack_10040;
  undefined4 uStack_1003c;
  uint uStack_10038;
  undefined4 uStack_10034;
  undefined2 *puStack_10030;
  uint uStack_1002c;
  void *pvStack_10028;
  int iStack_10024;
  int aiStack_10020 [2];
  uint uStack_10018;
  undefined1 auStack_1000c [65532];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_0054a16b;
  local_c = ExceptionList;
  uStack_10 = 0x47858f;
  uStack_10060 = 0;
  puStack_10054 = (undefined4 *)0x0;
  if (*(int *)((int)this + 0x13b4) == 0) {
    uVar2 = 0;
  }
  else {
    pCVar1 = *(LPCSTR *)(*(int *)((int)this + 0xfbc) + param_1 * 4);
    if (pCVar1 == (LPCSTR)0x0) {
      uVar2 = 0;
    }
    else if (*pCVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      ExceptionList = &local_c;
      pvStack_10028 = this;
      FUN_004fe720(aiStack_10020,pCVar1,0,(int)auStack_1000c,0x10000,
                   (-(uint)(DAT_00584af0 != 0) & 0xfffffffd) + 3);
      local_4 = 0;
      if (aiStack_10020[0] == 0) {
        local_4 = 0xffffffff;
        FUN_004fe9c0(aiStack_10020);
        uVar2 = 0;
      }
      else {
        uVar6 = 0xc;
        uStack_10064 = uStack_10018;
        if (uStack_10018 < 0xd) {
          uVar3 = uStack_1005c;
        }
        else {
          uVar3 = uStack_10018 + 4;
          uStack_1005c = uVar3;
          do {
            if (uStack_1005c < uVar6) break;
            uStack_10058 = *(undefined4 *)(uVar6 + aiStack_10020[0]);
            if (uStack_1005c < uVar6 + 4) break;
            uVar5 = *(uint *)(uVar6 + 4 + aiStack_10020[0]);
            uVar7 = uVar6 + 8;
            iVar4 = _strncmp((char *)&uStack_10058,&DAT_0055aef8,3);
            if (iVar4 != 0) {
              iVar4 = _strncmp((char *)&uStack_10058,&DAT_0055aef0,4);
              if (iVar4 != 0) goto LAB_004786d3;
              if (uStack_10064 + uVar5 < uVar7) {
                local_4 = 0xffffffff;
                FUN_004fe9c0(aiStack_10020);
                ExceptionList = local_c;
                return 0;
              }
              uStack_10068 = uVar5;
              puStack_10054 =
                   (undefined4 *)Ordinal_401(uVar5,s_C__lomse_source_storm_h_00555130,0x3fa,0);
              if (puStack_10054 == (undefined4 *)0x0) {
                local_4 = 0xffffffff;
                FUN_004fe9c0(aiStack_10020);
                ExceptionList = local_c;
                return 0;
              }
              puVar8 = (undefined4 *)(uVar7 + aiStack_10020[0]);
              puVar9 = puStack_10054;
              for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar9 = puVar9 + 1;
              }
              for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              break;
            }
            if (uStack_10064 + 0x10 < uVar7) break;
            uStack_1002c = CONCAT22(uStack_1002c._2_2_,
                                    *(undefined2 *)(uVar6 + 10 + aiStack_10020[0]));
            iStack_10024 = *(int *)(uVar6 + 0xc + aiStack_10020[0]);
            uVar3 = (uint)*(ushort *)(uVar6 + 0x16 + aiStack_10020[0]);
LAB_004786d3:
            uVar6 = uVar6 + 8 + uVar5;
          } while (uVar6 < uStack_10064);
        }
        puVar8 = puStack_10054;
        if (puStack_10054 == (undefined4 *)0x0) {
          local_4 = 0xffffffff;
          FUN_004fe9c0(aiStack_10020);
          uVar2 = 0;
        }
        else {
          uVar6 = (int)((uVar3 & 0xffff) * (uStack_1002c & 0xffff)) >> 3;
          uStack_10044 = CONCAT22((short)uVar3,(short)uVar6);
          iStack_1004c = iStack_10024;
          iStack_10048 = iStack_10024 * (uVar6 & 0xffff);
          uStack_10038 = uStack_10068;
          uStack_10034 = 0;
          puStack_10030 = &uStack_10050;
          _uStack_10050 = CONCAT22((short)uStack_1002c,1);
          uStack_10040 = 0x14;
          uStack_1003c = 0xe2;
          iVar4 = (/*IC:00478827*/**(code **)(**(int **)((int)pvStack_10028 + 0x13b4) + 0xc))
                            (*(int **)((int)pvStack_10028 + 0x13b4),&uStack_10040,param_2,0);
          if (iVar4 == 0) {
            puVar12 = (undefined4 *)0x0;
            puVar11 = &uStack_10068;
            DAT_005832ec = DAT_005832ec + uStack_10038;
            (/*IC:00478889*/**(code **)(*(int *)*param_2 + 0x2c))
                      ((int *)*param_2,0,uStack_10068,&uStack_10060,puVar11,0,0,0);
            puVar9 = puVar8;
            puVar10 = puVar12;
            for (uVar6 = (uint)puVar11 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar6 = (uint)puVar11 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            (/*IC:004788b7*/**(code **)(*(int *)*param_2 + 0x4c))((int *)*param_2,puVar12,puVar11,0,0);
            Ordinal_403(puVar8,s_C__lomse_source_storm_h_00555130,0x3f6,0);
            local_4 = 0xffffffff;
            FUN_004fe9c0(aiStack_10020);
            uVar2 = 1;
          }
          else {
            Ordinal_403(puVar8,s_C__lomse_source_storm_h_00555130,0x3eb,0);
            local_4 = 0xffffffff;
            FUN_004fe9c0(aiStack_10020);
            uVar2 = 0;
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar2;
}


