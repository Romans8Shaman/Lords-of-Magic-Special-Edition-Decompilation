
undefined4 __thiscall FUN_00431a60(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  void *pvVar8;
  int *piVar9;
  void *this_00;
  int *piVar10;
  bool bVar11;
  void *local_120;
  void *local_11c;
  int local_118;
  int local_10c [4];
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  int local_e8 [5];
  int local_d4;
  int local_d0;
  int local_c4;
  int local_c0;
  int local_bc [11];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88 [31];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005496d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0051b760(local_bc);
  iVar6 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  iVar5 = param_1[4];
  if ((iVar5 < 0) || (0xf < iVar5)) {
    local_11c = (void *)0x0;
  }
  else {
    local_11c = (void *)((int)this + iVar5 * 0x1d84 + 0x5068);
  }
  iVar5 = param_1[5];
  if ((iVar5 < 0) || (0xf < iVar5)) {
    local_120 = (void *)0x0;
  }
  else {
    local_120 = (void *)((int)this + iVar5 * 0x1d84 + 0x5068);
  }
  if ((DAT_00584cdc < 0) || (0xf < DAT_00584cdc)) {
    local_118 = 0;
  }
  else {
    local_118 = (int)this + DAT_00584cdc * 0x1d84 + 0x5068;
  }
  puVar1 = FUN_00485080(this,*param_1,0x2f);
  puVar2 = FUN_00485080(this,param_1[1],0x2f);
  if ((((local_120 == (void *)0x0) || (local_118 == 0)) || (local_11c == (void *)0x0)) ||
     ((puVar1 == (undefined4 *)0x0 || (puVar2 == (undefined4 *)0x0)))) {
    DAT_00584cec = 7;
    FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
LAB_0043216b:
    uVar4 = 0;
  }
  else {
    if (param_1[6] == 5) {
      local_bc[0] = 0xf;
    }
    else {
      local_bc[0] = (-(uint)(param_1[6] != 2) & 0xfffffffd) + 0x10;
    }
    iVar5 = *(int *)((int)local_120 + 0x15dc);
    if (DAT_005d1e84 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = FUN_004b7dd0(DAT_005d1e84);
    }
    bVar11 = iVar5 == iVar3;
    FUN_0050b770((int)local_10c);
    local_4 = 0;
    FUN_0050b770((int)local_e8);
    local_10c[0] = 2;
    local_10c[1] = *(undefined4 *)((int)local_120 + 0x15a8);
    local_fc = *(undefined4 *)((int)this + 0x5004);
    local_10c[3] = *(undefined4 *)((int)this + 0x5004);
    local_f0 = 1;
    piVar9 = local_10c;
    piVar10 = local_e8;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar10 = piVar10 + 1;
    }
    local_4._0_1_ = 1;
    local_e8[1] = *(undefined4 *)((int)local_11c + 0x15a8);
    iVar5 = param_1[6];
    switch(iVar5) {
    case 1:
      param_1[9] = param_1[9] + 1;
      if (bVar11) {
        piVar9 = param_1;
        piVar10 = &DAT_00584cd4;
        for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar10 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar10 = piVar10 + 1;
        }
        if ((*(byte *)((int)local_120 + 0x15d8) & 2) == 0) {
          if (iVar6 != param_1[5]) {
            FUN_0052cef0(&DAT_00584ae8,param_1[5],1);
          }
        }
        else {
          FUN_0051f4f0((void *)((int)local_120 + 0x1c64),param_1[6]);
        }
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
      break;
    case 2:
    case 3:
      if ((*(byte *)((int)local_120 + 0x15d8) & 2) != 0) {
        FUN_0051f4f0((void *)((int)local_120 + 0x1c64),iVar5);
      }
      piVar9 = &DAT_00584cd4;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *param_1;
        param_1 = param_1 + 1;
        piVar9 = piVar9 + 1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
      break;
    case 4:
      local_c4 = FUN_004348c0(param_1,*(undefined4 *)((int)local_11c + 0x15a8),0);
      local_c0 = FUN_004348c0(param_1,*(undefined4 *)((int)local_120 + 0x15a8),0);
      if (bVar11) {
        if ((*(byte *)((int)local_120 + 0x15d8) & 2) == 0) {
          if (iVar6 != param_1[5]) {
            FUN_0052cef0(&DAT_00584ae8,param_1[5],1);
          }
        }
        else {
          FUN_0051f4f0((void *)((int)local_120 + 0x1c64),param_1[6]);
        }
      }
      piVar9 = param_1;
      piVar10 = &DAT_00584cd4;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar10 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar10 = piVar10 + 1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
      puVar1 = &DAT_00584cd4;
      puVar2 = local_88;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar2 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      pvVar8 = (void *)((int)this + 0x5068);
      iVar6 = 0;
      this_00 = pvVar8;
      do {
        if ((iVar6 != 0xf) && ((*(byte *)((int)this_00 + 0x15d8) & 1) != 0)) {
          FUN_004bcb40(this_00,param_1);
        }
        iVar6 = iVar6 + 1;
        this_00 = (void *)((int)this_00 + 0x1d84);
      } while (iVar6 < 0x10);
      iVar6 = FUN_00431310(&DAT_00584cd4);
      local_90 = 1;
      iVar5 = 0x10;
      do {
        if (((*(byte *)((int)pvVar8 + 0x15d8) & 2) != 0) &&
           (iVar3 = FUN_004bb560((int)pvVar8), iVar3 != 0)) {
          FUN_0051fe70((void *)((int)pvVar8 + 0x1c64),local_bc);
        }
        pvVar8 = (void *)((int)pvVar8 + 0x1d84);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (((*(byte *)(local_118 + 0x15d8) & 2) == 0) &&
         (*(int *)(local_118 + 0x15a8) != *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
        FUN_0052cef0(&DAT_00584ae8,DAT_00584cdc,1);
      }
      if (iVar6 == 0) {
        puVar1 = local_88;
        puVar2 = &DAT_00584cd4;
        for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar2 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        goto switchD_00431c44_default;
      }
      local_f8 = local_c4 - local_c0;
      local_d4 = local_c0 - local_c4;
      local_f4 = local_c0 + local_c4;
      DAT_00584cec = 7;
      if (local_c0 < local_c4) {
        local_10c[2] = 0;
        local_e8[2] = 1;
      }
      else if (local_c4 < local_c0) {
        local_10c[2] = 1;
        local_e8[2] = 0;
      }
      else {
        local_10c[2] = 2;
        local_e8[2] = 2;
      }
      local_d0 = local_f4;
      FUN_004bc9c0(local_11c,local_10c);
      FUN_004bc9c0(local_120,local_e8);
      FUN_004869d0(this,*(undefined4 *)((int)local_11c + 0x15a8));
      FUN_004869d0(this,*(undefined4 *)((int)local_120 + 0x15a8));
      break;
    case 5:
      if (bVar11) {
        if ((*(byte *)((int)local_120 + 0x15d8) & 2) == 0) {
          if (iVar6 != param_1[5]) {
            FUN_0052cef0(&DAT_00584ae8,param_1[5],1);
          }
        }
        else {
          FUN_0051f4f0((void *)((int)local_120 + 0x1c64),iVar5);
        }
      }
      piVar9 = &DAT_00584cd4;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *param_1;
        param_1 = param_1 + 1;
        piVar9 = piVar9 + 1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
      if (((*(byte *)(local_118 + 0x15d8) & 2) == 0) &&
         (*(int *)(local_118 + 0x15a8) != *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
        FUN_0052cef0(&DAT_00584ae8,DAT_00584cdc,1);
      }
      local_8c = 1;
      iVar6 = 0;
      puVar7 = (uint *)((int)this + 0x6640);
      do {
        if ((((iVar6 != 0xf) && ((*puVar7 & 1) != 0)) && ((*puVar7 & 2) != 0)) &&
           (iVar5 = FUN_004bb560((int)(puVar7 + -0x576)), iVar5 != 0)) {
          FUN_0051fe70(puVar7 + 0x1a3,local_bc);
        }
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 0x761;
      } while (iVar6 < 0x10);
      local_10c[2] = 2;
      local_e8[2] = 2;
      DAT_00584cec = 7;
      local_f8 = 0;
      local_f4 = 0;
      local_d4 = 0;
      local_d0 = 0;
      FUN_004bc9c0(local_11c,local_10c);
      FUN_004bc9c0(local_120,local_e8);
      FUN_004bcb90(local_11c,*(int *)((int)local_120 + 0x15a8));
      FUN_004bcb90(local_120,*(int *)((int)local_11c + 0x15a8));
      break;
    case 6:
      if ((*(byte *)((int)local_120 + 0x15d8) & 2) != 0) {
        FUN_0051f4f0((void *)((int)local_120 + 0x1c64),iVar5);
      }
      piVar9 = &DAT_00584cd4;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *param_1;
        param_1 = param_1 + 1;
        piVar9 = piVar9 + 1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
      DAT_00584cec = 7;
      break;
    case 7:
      local_f8 = 0;
      local_f4 = 0;
      local_d4 = 0;
      local_d0 = 0;
      local_10c[2] = 2;
      local_e8[2] = 2;
      FUN_004bc9c0(local_11c,local_10c);
      FUN_004bc9c0(local_120,local_e8);
      FUN_004bcb90(local_11c,*(int *)((int)local_120 + 0x15a8));
      FUN_004bcb90(local_120,*(int *)((int)local_11c + 0x15a8));
      break;
    default:
switchD_00431c44_default:
      local_4 = (uint)local_4._1_3_ << 8;
      op_sunlight();
      local_4 = 0xffffffff;
      op_sunlight();
      goto LAB_0043216b;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    op_sunlight();
    local_4 = 0xffffffff;
    op_sunlight();
    uVar4 = 1;
  }
  ExceptionList = local_c;
  return uVar4;
}


