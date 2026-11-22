
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00419f30(int *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined *puVar11;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 uVar12;
  undefined4 unused_reg_1_00;
  int iVar13;
  int *local_4;
  
  local_4 = param_1;
  if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
    uVar4 = FUN_00521e30(param_1 + param_1[0x14] * 0x13 + 0x31);
    if (uVar4 != 0) {
      uVar12 = extraout_EDX;
      if ((void *)param_1[0xb] != (void *)0x0) {
        FUN_0049d9a0((void *)param_1[0xb]);
        uVar12 = extraout_EDX_00;
      }
      FUN_004b0960(param_1 + 0x157,uVar12,unused_stack_0);
      uVar12 = extraout_EDX_01;
      if ((void *)param_1[0x163] != (void *)0x0) {
        thunk_FUN_0049d9a0((void *)param_1[0x163]);
        uVar12 = extraout_EDX_02;
      }
      FUN_0042dbb0((int)(param_1 + 0x15a),uVar12,unused_stack_0);
    }
    _DAT_005867a0 = param_1[10];
    FUN_00478920(&DAT_00585408);
    if (param_1[0x14f] == param_1[0x150]) {
      return 1;
    }
  }
  if ((param_1[0xc] & 0x40000000U) != 0) {
    param_1[0xc] = param_1[0xc] & 0xbfffffff;
  }
  iVar7 = param_1[0x14f];
  if (iVar7 < param_1[0x150]) {
    if ((param_1[0x151] != 8) && (param_1[0x151] != 9)) {
      FUN_0041ebb0(param_1,0);
      uVar4 = FUN_0047d680(0);
      FUN_004b02c0(param_1 + 0x157,uVar4);
      FUN_00411b50(param_1,0);
      param_1[0x151] = 0;
      iVar7 = extraout_EDX_03;
    }
    param_1[0x14f] = param_1[0x14f] + 1;
    DAT_005aeef4 = 1;
    if ((void *)param_1[0xb] != (void *)0x0) {
      FUN_0049d9a0((void *)param_1[0xb]);
      iVar7 = extraout_EDX_04;
    }
    FUN_004b0960(param_1 + 0x157,iVar7,unused_stack_0);
    uVar12 = extraout_EDX_05;
    if ((void *)param_1[0x163] != (void *)0x0) {
      thunk_FUN_0049d9a0((void *)param_1[0x163]);
      uVar12 = extraout_EDX_06;
    }
    FUN_0042dbb0((int)(param_1 + 0x15a),uVar12,unused_stack_0);
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 8) {
      if ((param_1[0x14f] == param_1[0x150]) && (param_1[7] == param_1[0x152])) {
        FUN_0041d220(param_1,3);
        iVar13 = 0;
        iVar7 = DAT_005aa1e4;
        do {
          pvVar3 = DAT_005a7b78;
          if (*(int **)(iVar7 + iVar13) == param_1) {
            if ((param_1[7] % DAT_005ae9b4 == *(int *)(iVar7 + 0x18 + iVar13)) &&
               (param_1[7] / DAT_005ae9b4 == *(int *)(iVar7 + 0x1c + iVar13))) {
              FUN_0041efa0(param_1,3);
            }
            else {
              iVar7 = param_1[10];
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                FUN_004d4550(pvVar3);
                *(undefined4 *)((int)pvVar3 + 0x90) = 0;
                *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
              }
              else {
                iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
                iVar1 = *(int *)((int)pvVar3 + 0x50);
                *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
                *(int *)(iVar1 + 4 + iVar5 * 8) = iVar7;
              }
              FUN_004d05e0(DAT_005a7b78,DAT_00579350,DAT_00579354);
            }
            *(undefined4 *)(DAT_005aa1e4 + 0x34 + iVar13) = 0;
            iVar7 = DAT_005aa1e4;
          }
          iVar13 = iVar13 + 0x38;
        } while (iVar13 < 0x1c0);
        return 1;
      }
      iVar13 = 0;
      iVar7 = DAT_005aa1e4;
      do {
        if (*(int **)(iVar7 + iVar13) == param_1) {
          *(undefined4 *)(iVar7 + 0x34 + iVar13) = 1;
          iVar7 = DAT_005aa1e4;
        }
        iVar13 = iVar13 + 0x38;
      } while (iVar13 < 0x1c0);
    }
    if (param_1[0x14f] != param_1[0x150]) {
      (/*IC:0041a1ad*/**(code **)(*param_1 + 0x1c))(param_1);
      return 1;
    }
    uVar4 = param_1[0xc];
    if ((uVar4 & 8) != 0) {
      return 1;
    }
    if (param_1[7] == param_1[0x152]) {
      param_1[0xc] = uVar4 | 0x2000;
      if ((uVar4 & 0x20000) != 0) {
        iVar7 = param_1[0x12];
        if ((iVar7 < 0) || (0xf < iVar7)) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar11 = &DAT_005af194 + iVar7 * 0x1d84;
        }
        if (puVar11 != (undefined *)0x0) {
          FUN_004bb100(puVar11,(int)param_1);
        }
      }
      if (((param_1[0xc] & 0x200000U) != 0) && ((param_1[0xc] & 2U) == 0)) {
        piVar6 = (int *)FUN_004fbe60(&DAT_005ae974,0,0);
        bVar2 = false;
        for (; piVar6 != (int *)0x0; piVar6 = (int *)FUN_004fbe60(&DAT_005ae974,(int)piVar6,0)) {
          if ((((piVar6 != param_1) && (piVar6[0x12] == param_1[0x12])) &&
              ((piVar6[0xc] & 0x100000U) != 0)) && (piVar6[0x152] == param_1[0x152])) {
            bVar2 = true;
            break;
          }
        }
        if (!bVar2) {
          iVar7 = FUN_004f6000(&DAT_005ae974,param_1[0x153]);
          if (iVar7 == 0) {
            FUN_004176d0(param_1,0);
          }
          else {
            iVar13 = FUN_0041b670((int)param_1);
            if (iVar13 == 0) {
              param_1[0xc] = param_1[0xc] | 2;
            }
            else {
              FUN_00420b80(param_1,*(int *)(iVar7 + 0x1c),0x10040,0xffffffff,param_1[0x153],
                           param_1[0x154],0);
            }
          }
        }
      }
      if ((param_1[0x151] == 0) || (param_1[0x151] == 1)) {
        param_1[9] = 2;
        (/*IC:0041a2fe*/**(code **)(*param_1 + 0x30))(param_1,2,0xffffffff);
        FUN_0041efa0(param_1,2);
        return 1;
      }
      return 1;
    }
  }
  if (param_1[0x14e] < 0) {
    param_1[0xc] = param_1[0xc] & 0xffffffef;
    return 0;
  }
  iVar7 = FUN_004321b0(0x584cd4);
  if (iVar7 != 0) {
    return 1;
  }
  uVar8 = FUN_00427930(&DAT_005aeefc,param_1[0x14e]);
  iVar7 = param_1[7];
  puVar11 = FUN_004c6fc0();
  uVar4 = *(uint *)(*(int *)(puVar11 + 0x18) + (uVar8 + iVar7 * 8) * 4);
  if ((((param_1[0xc] & 0x8000U) != 0) && ((param_1[0xc] & 0x100000U) == 0)) &&
     (puVar9 = FUN_00485080(&DAT_005aa12c,param_1[0x153],0x2f), puVar9 == (undefined4 *)0x0)) {
    FUN_004176d0(param_1,0);
    return 1;
  }
  if (param_1[7] == uVar4) goto LAB_0041a604;
  iVar7 = FUN_00420560((int)param_1);
  if (iVar7 == 0) {
    param_1[0xc] = param_1[0xc] & 0xfffffffb;
    if (((DAT_00583100 != '\x02') ||
        (FUN_004a9a60(&DAT_005ae958,&local_4,uVar4), ((uint)local_4 & 0x400000) == 0)) ||
       (DAT_005ae935 != '\a')) {
      iVar7 = FUN_004a8330(&DAT_005ae958,uVar4,0);
      if (iVar7 == 0) goto LAB_0041a604;
      iVar7 = FUN_004278d0(&DAT_005aeefc,param_1[0x14e]);
      if (iVar7 == 0) {
        iVar7 = FUN_00427930(&DAT_005aeefc,param_1[0x14e] + 1);
        puVar11 = FUN_004c6fc0();
        iVar7 = *(int *)(*(int *)(puVar11 + 0x18) + (iVar7 + uVar4 * 8) * 4);
        iVar13 = FUN_004a8300(&DAT_005ae958,iVar7,0);
        if (iVar13 == -1) {
          if (uVar4 == param_1[0x152]) {
            FUN_004176d0(param_1,0);
            goto LAB_0041a604;
          }
          iVar7 = FUN_00419640(param_1,uVar8,uVar4,iVar7);
          if (iVar7 == 1) {
            return 1;
          }
        }
      }
    }
    FUN_004176d0(param_1,0);
    param_1[0xc] = param_1[0xc] | 4;
    return 1;
  }
  uVar10 = uVar4;
  puVar11 = FUN_004c6fc0();
  FUN_004a4c30(puVar11,uVar10);
  uVar10 = uVar4;
  piVar6 = param_1;
  puVar11 = FUN_004c6fc0();
  uVar10 = FUN_00531fb0(puVar11,uVar10,(int)piVar6);
  iVar7 = FUN_004c2a10((int)param_1,unused_reg_1_00,uVar10);
  uVar10 = FUN_004192c0((int)param_1);
  if (((int)uVar10 < iVar7) || (FUN_00419360(param_1,iVar7), (int)uVar10 < iVar7)) {
    _DAT_005867a0 = param_1[10];
    if ((param_1[0xc] & 0x40U) == 0) {
      FUN_004176d0(param_1,0);
      param_1[0xc] = param_1[0xc] | 0x1000;
    }
    else {
      param_1[0xc] = param_1[0xc] | 0x1000;
      FUN_0041ebb0(param_1,2);
      uVar4 = FUN_0047d680(2);
      FUN_004b02c0(param_1 + 0x157,uVar4);
      FUN_00411b50(param_1,2);
    }
    if (param_1[0x12] != *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
      return 1;
    }
    if ((*(byte *)(param_1 + 0xc) & 0x20) == 0) {
      return 1;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
    return 1;
  }
  iVar7 = FUN_00419ba0(param_1,uVar4);
  if (iVar7 == 1) {
    FUN_00419520(param_1,uVar4);
    return 1;
  }
  if (iVar7 != 3) {
    if (iVar7 != 2) {
LAB_0041a604:
      DAT_005aeef4 = 1;
      if ((((param_1[0xc] & 0x8000U) != 0) && (0 < param_1[0x153])) &&
         (iVar7 = FUN_00420580((int)param_1), iVar7 == 0)) {
        piVar6 = FUN_00485080(&DAT_005aa12c,param_1[0x153],0x2f);
        if (((piVar6 == (int *)0x0) || (piVar6[0x12] != param_1[0x12])) || (piVar6 == param_1)) {
          iVar7 = FUN_004f6000(&DAT_005ae974,param_1[0x153]);
          if (iVar7 == 0) {
            param_1[0x153] = -1;
          }
        }
        else if (((param_1[0x152] != piVar6[7]) && ((param_1[0xc] & 0x100000U) == 0)) &&
                (iVar7 = FUN_00426d20(param_1), iVar7 == 0)) {
          param_1[0x152] = piVar6[7];
          if (-1 < param_1[0x14e]) {
            FUN_00427950(&DAT_005aeefc,param_1 + 0x14e);
          }
          iVar7 = FUN_0041b670((int)param_1);
          if (iVar7 == 0) {
            piVar6[0xc] = piVar6[0xc] | 2;
          }
          else {
            FUN_00420b80(param_1,piVar6[7],param_1[0xc] & 0x3bc0c8,0xffffffff,param_1[0x153],
                         param_1[0x154],0);
          }
        }
      }
      iVar7 = FUN_00427880(&DAT_005aeefc,param_1 + 0x14e,1);
      if (7 < iVar7) {
        return 1;
      }
      FUN_004f5b70(param_1,iVar7);
      param_1[0x11] = iVar7;
      FUN_004b0310(param_1 + 0x157,iVar7);
      if ((void *)param_1[0x163] != (void *)0x0) {
        FUN_0049dcc0((void *)param_1[0x163],iVar7);
      }
      if ((void *)param_1[0x166] != (void *)0x0) {
        FUN_0049dcc0((void *)param_1[0x166],param_1[0x11]);
      }
      FUN_00421180(param_1);
      return 1;
    }
    iVar7 = FUN_004278d0(&DAT_005aeefc,param_1[0x14e]);
    if (iVar7 == 0) {
      iVar7 = FUN_00427930(&DAT_005aeefc,param_1[0x14e] + 1);
      puVar11 = FUN_004c6fc0();
      iVar7 = *(int *)(*(int *)(puVar11 + 0x18) + (iVar7 + uVar4 * 8) * 4);
      iVar13 = FUN_00419ba0(param_1,iVar7);
      if (iVar13 == 0) {
        iVar7 = FUN_00419640(param_1,uVar8,uVar4,iVar7);
        if (iVar7 == 1) {
          return 1;
        }
        goto LAB_0041a604;
      }
    }
  }
  FUN_00419520(param_1,uVar4);
  FUN_004176d0(param_1,0);
  return 1;
}


