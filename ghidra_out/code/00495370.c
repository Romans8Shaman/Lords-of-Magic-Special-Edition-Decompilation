
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall FUN_00495370(void *this,byte *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  int iStack_4328;
  uint uStack_4324;
  undefined4 *apuStack_4320 [2];
  byte *pbStack_4318;
  char acStack_430c [768];
  undefined1 auStack_400c [16380];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_0054abdb;
  local_c = ExceptionList;
  uStack_10 = 0x49538f;
  ExceptionList = &local_c;
  FUN_004fe720(apuStack_4320,(LPCSTR)param_1,0,(int)auStack_400c,0x4000,1);
  local_4 = 0;
  if (apuStack_4320[0] == (undefined4 *)0x0) {
    local_4 = 0xffffffff;
    FUN_004fe9c0((int *)apuStack_4320);
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_004a2810(apuStack_4320[0],(int)pbStack_4318,(int *)&uStack_4324,&iStack_4328);
    if (iVar4 == 0) {
      local_4 = 0xffffffff;
      FUN_004fe9c0((int *)apuStack_4320);
      uVar3 = 0;
    }
    else {
      iVar4 = FUN_004952c0(this,uStack_4324,iStack_4328,0);
      if (iVar4 == 0) {
        local_4 = 0xffffffff;
        FUN_004fe9c0((int *)apuStack_4320);
        uVar3 = 0;
      }
      else {
        iVar4 = FUN_004a28f0((int)apuStack_4320[0],(uint)pbStack_4318,*(undefined4 **)this,
                             *(int *)((int)this + 8) * *(int *)((int)this + 0xc));
        if (iVar4 == 0) {
          FUN_00495590(this);
          local_4 = 0xffffffff;
          FUN_004fe9c0((int *)apuStack_4320);
          uVar3 = 0;
        }
        else {
          FUN_004a2ae0((int)apuStack_4320[0],pbStack_4318,(int)acStack_430c);
          iVar4 = 0;
          do {
            acStack_430c[iVar4] = acStack_430c[iVar4] << 2;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x300);
          psVar5 = FUN_0049b2a0(&DAT_00584ae8,acStack_430c,param_1);
          *(short **)((int)this + 0x10) = psVar5;
          uVar7 = 0xffffffff;
          pbVar6 = param_1;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            bVar1 = *pbVar6;
            pbVar6 = pbVar6 + 1;
          } while (bVar1 != 0);
          if (*(char **)((int)this + 0x1c) != (char *)0x0) {
            uVar8 = 0xffffffff;
            pcVar11 = *(char **)((int)this + 0x1c);
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar2 != '\0');
            DAT_00583648 = DAT_00583648 - (~uVar8 - 1);
            if (*(int *)((int)this + 0x1c) != 0) {
              Ordinal_403(*(int *)((int)this + 0x1c),s_C__lomse_source_storm_h_00555130,0x3f6,0);
            }
          }
          pbVar6 = (byte *)Ordinal_401(~uVar7,s_C__lomse_source_storm_h_00555130,0x3fa,0);
          *(byte **)((int)this + 0x1c) = pbVar6;
          if (pbVar6 != (byte *)0x0) {
            uVar8 = 0xffffffff;
            do {
              pbVar10 = param_1;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pbVar10 = param_1 + 1;
              bVar1 = *param_1;
              param_1 = pbVar10;
            } while (bVar1 != 0);
            uVar8 = ~uVar8;
            pbVar10 = pbVar10 + -uVar8;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pbVar6 = *(undefined4 *)pbVar10;
              pbVar10 = pbVar10 + 4;
              pbVar6 = pbVar6 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar6 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              pbVar6 = pbVar6 + 1;
            }
          }
          local_4 = 0xffffffff;
          DAT_00583648 = DAT_00583648 + ~uVar7;
          FUN_004fe9c0((int *)apuStack_4320);
          uVar3 = 1;
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar3;
}


