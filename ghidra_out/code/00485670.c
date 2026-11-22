
undefined4 __thiscall FUN_00485670(void *this,int *param_1,int param_2)

{
  short *psVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  LPCSTR pCVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *local_9c;
  int local_98;
  int local_84 [30];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a7d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00539ff0(local_84,0xc,10,&LAB_00462c60,&LAB_00462c80);
  local_4 = 0;
  if ((((param_1 == (int *)0x0) || (uVar4 = FUN_00407d60((int)param_1), uVar4 != 0)) ||
      (iVar5 = FUN_0050c7f0((int)param_1), iVar5 != 0)) ||
     (((param_2 == 0 && ((*(byte *)(param_1 + 0xc) & 0x80) != 0)) &&
      (iVar5 = FUN_0050c7f0((int)param_1), iVar5 == 0)))) {
LAB_00485a39:
    local_4 = 0xffffffff;
    FUN_00539eb0(local_84,0xc,10,&LAB_00462c80);
    uVar9 = 0;
  }
  else {
    psVar1 = (short *)((int)param_1 + 0x4e);
    iVar11 = 0;
    iVar5 = 0;
    do {
      if (iVar11 < *psVar1) {
        puVar10 = (undefined4 *)(param_1[0x14] + iVar5);
        *(undefined4 *)((int)local_84 + iVar5) = *puVar10;
        *(undefined4 *)((int)local_84 + iVar5 + 4) = puVar10[1];
        *(undefined4 *)((int)local_84 + iVar5 + 8) = puVar10[2];
        puVar10[2] = 0;
      }
      else {
        *(undefined4 *)((int)local_84 + iVar5) = 0xffffffff;
        *(undefined4 *)((int)local_84 + iVar5 + 4) = 0;
        *(undefined4 *)((int)local_84 + iVar5 + 8) = 0;
      }
      iVar5 = iVar5 + 0xc;
      iVar11 = iVar11 + 1;
    } while (iVar5 < 0x78);
    if (((param_1[0xc] & 0x100U) == 0) && (param_1[0x16] == 0)) {
      FUN_0050c830((int)param_1);
    }
    iVar5 = FUN_004a6f60((void *)((int)this + 0x482c),param_1[7],0x40000);
    local_9c = local_84 + 1;
    local_98 = 0;
    piVar8 = param_1;
    do {
      pCVar6 = (LPCSTR)FUN_0050c500((int)piVar8);
      if (piVar8 != param_1) {
        FUN_00483be0(this,piVar8);
      }
      piVar7 = (int *)FUN_004fe6e0(&DAT_00584ae8,pCVar6);
      if (piVar7 == (int *)0x0) goto LAB_00485a39;
      FUN_005397f0(this,4,1,piVar7);
      FUN_004a5390(piVar7);
      piVar8 = FUN_004f6e70((void *)((int)this + 0x4848),piVar7);
      FUN_005394d0(piVar7);
      if (piVar8 == (int *)0x0) break;
      bVar3 = false;
      bVar2 = false;
      iVar11 = 0;
      piVar7 = local_84;
      do {
        if (piVar8[0x15] == *piVar7) {
          bVar3 = true;
          if ((*local_9c != 0) || (local_84[iVar11 * 3 + 2] != 0)) {
            bVar2 = true;
          }
          break;
        }
        iVar11 = iVar11 + 1;
        piVar7 = piVar7 + 3;
      } while (iVar11 < 10);
      if (!bVar2) {
        FUN_004a6dd0((void *)((int)this + 0x482c),piVar8,piVar8[7],iVar5);
        FUN_0050c830((int)piVar8);
        if (!bVar3) {
          iVar11 = 0;
          piVar7 = local_84;
          do {
            if (*piVar7 < 0) break;
            iVar11 = iVar11 + 1;
            piVar7 = piVar7 + 3;
          } while (iVar11 < 10);
        }
        if (iVar11 < 10) {
          local_84[iVar11 * 3] = piVar8[0x15];
          local_84[iVar11 * 3 + 2] = piVar8[0x16];
        }
        else {
          puVar10 = (undefined4 *)piVar8[0x16];
          if (puVar10 == (undefined4 *)0x0) goto LAB_004858c1;
          (/*IC:004858bc*/**(code **)*puVar10)(puVar10,1);
        }
        piVar8[0x16] = 0;
      }
LAB_004858c1:
      local_98 = local_98 + 1;
      local_9c = local_9c + 3;
    } while (local_98 < 10);
    param_1[0xc] = param_1[0xc] | 0x400;
    iVar5 = param_1[0x14];
    if (iVar5 != 0) {
      FUN_00539eb0(iVar5,0xc,*(int *)(iVar5 + -4),&LAB_00462c80);
      if (iVar5 + -4 != 0) {
        Ordinal_403(iVar5 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      param_1[0x14] = 0;
    }
    iVar5 = 9;
    piVar8 = local_84 + 0x1b;
    *psVar1 = 0;
    do {
      if (-1 < *piVar8) break;
      iVar5 = iVar5 + -1;
      piVar8 = piVar8 + -3;
    } while (-1 < iVar5);
    if (-1 < iVar5) {
      iVar11 = iVar5 + 1;
      *psVar1 = (short)iVar5 + 1;
      piVar8 = (int *)Ordinal_401(iVar11 * 0xc + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
      local_4._0_1_ = 1;
      if (piVar8 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = piVar8 + 1;
        *piVar8 = iVar11;
        FUN_00539ff0(piVar7,0xc,iVar11,&LAB_00462c60,&LAB_00462c80);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      param_1[0x14] = (int)piVar7;
      iVar5 = 0;
      if (0 < *psVar1) {
        iVar11 = 0;
        do {
          puVar10 = (undefined4 *)(param_1[0x14] + iVar11);
          iVar5 = iVar5 + 1;
          *puVar10 = *(undefined4 *)((int)local_84 + iVar11);
          puVar10[1] = *(undefined4 *)((int)local_84 + iVar11 + 4);
          puVar10[2] = *(undefined4 *)((int)local_84 + iVar11 + 8);
          *(undefined4 *)((int)local_84 + iVar11 + 8) = 0;
          iVar11 = iVar11 + 0xc;
        } while (iVar5 < *psVar1);
      }
    }
    puVar10 = FUN_00485080(this,param_1[10],0x2f);
    if (puVar10 != (undefined4 *)0x0) {
      param_1[0x17] = puVar10[0x12];
    }
    local_4 = 0xffffffff;
    FUN_00539eb0(local_84,0xc,10,&LAB_00462c80);
    uVar9 = 1;
  }
  ExceptionList = local_c;
  return uVar9;
}


