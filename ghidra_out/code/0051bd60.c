
int __thiscall FUN_0051bd60(void *this,int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 unused_reg_1;
  int iVar7;
  int iVar8;
  undefined4 unused_reg_1_00;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  void *pvVar12;
  int local_34;
  uint local_30;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_34 = 1;
  iVar2 = *(int *)((int)this + 0x1c);
  if (iVar2 == param_1) {
    return 0;
  }
  piVar11 = &local_14;
  piVar10 = &local_18;
  iVar7 = param_1;
  puVar1 = FUN_004c6fc0();
  iVar2 = FUN_004a8ac0(puVar1,iVar2,iVar7,piVar10,piVar11);
  if (iVar2 < 2) {
    return 1;
  }
  local_c = iVar2;
  if ((*(int *)((int)this + 0x548) == param_1) && (-1 < *(int *)((int)this + 0x538))) {
    uVar3 = FUN_0041fd40((uint)this);
    local_30 = *(uint *)((int)this + 0x1c);
    local_24 = *(uint *)((int)this + 0x538);
    iVar2 = FUN_00427880(&DAT_005aeefc,(int *)&local_24,0);
    if (iVar2 != 8) {
      param_1 = param_2 + 4;
      uVar4 = local_30;
      do {
        uVar9 = uVar4;
        uVar4 = uVar9;
        puVar1 = FUN_004c6fc0();
        FUN_004a4c30(puVar1,uVar4);
        uVar4 = uVar9;
        pvVar12 = this;
        puVar1 = FUN_004c6fc0();
        uVar4 = FUN_00531fb0(puVar1,uVar4,(int)pvVar12);
        local_1c = FUN_004c2a10((int)this,unused_reg_1,uVar4);
        if ((int)uVar3 < local_1c) {
          uVar3 = FUN_0041fd40((uint)this);
          if (local_34 < param_3) {
            *(uint *)(param_1 + -4) = local_30;
          }
          local_34 = local_34 + 1;
          param_1 = param_1 + 4;
        }
        puVar1 = FUN_004c6fc0();
        uVar4 = *(uint *)(*(int *)(puVar1 + 0x18) + (iVar2 + uVar9 * 8) * 4);
        uVar3 = uVar3 - local_1c;
        iVar2 = FUN_00427880(&DAT_005aeefc,(int *)&local_24,0);
        local_30 = uVar9;
      } while (iVar2 != 8);
    }
    if (local_34 < param_3) {
      *(uint *)(param_2 + -4 + local_34 * 4) = local_30;
      return local_34;
    }
  }
  else {
    iVar7 = *(int *)((int)this + 0x1c);
    puVar1 = FUN_004c6fc0();
    iVar7 = iVar7 % *(int *)(puVar1 + 0x6c);
    iVar5 = *(int *)((int)this + 0x1c);
    local_10 = iVar7;
    puVar1 = FUN_004c6fc0();
    iVar5 = iVar5 / *(int *)(puVar1 + 0x6c);
    puVar1 = FUN_004c6fc0();
    iVar8 = param_1 % *(int *)(puVar1 + 0x6c);
    puVar1 = FUN_004c6fc0();
    iVar6 = param_1 / *(int *)(puVar1 + 0x6c);
    param_1 = iVar8;
    if (local_18 != 0) {
      if (iVar8 < iVar7) {
        puVar1 = FUN_004c6fc0();
        param_1 = iVar8 + *(int *)(puVar1 + 0x6c);
      }
      else {
        puVar1 = FUN_004c6fc0();
        param_1 = iVar8 - *(int *)(puVar1 + 0x6c);
      }
    }
    if (local_14 != 0) {
      if (iVar6 < iVar5) {
        puVar1 = FUN_004c6fc0();
        iVar6 = iVar6 + *(int *)(puVar1 + 0x70);
      }
      else {
        puVar1 = FUN_004c6fc0();
        iVar6 = iVar6 - *(int *)(puVar1 + 0x70);
      }
    }
    local_24 = *(uint *)((int)this + 0x1c);
    local_1c = 1;
    local_30 = FUN_0041fd40((uint)this);
    if (0 < iVar2) {
      local_28 = param_1 - iVar7;
      iVar6 = iVar6 - iVar5;
      param_1 = param_2 + 4;
      local_20 = iVar2;
      local_8 = iVar6;
      local_4 = local_28;
      while( true ) {
        iVar8 = iVar6 / iVar2 + iVar5;
        iVar7 = local_28 / iVar2 + iVar7;
        puVar1 = FUN_004c6fc0();
        uVar4 = FUN_004a51c0(puVar1,iVar7,iVar8);
        uVar3 = uVar4;
        puVar1 = FUN_004c6fc0();
        FUN_004a4c30(puVar1,uVar3);
        uVar3 = uVar4;
        pvVar12 = this;
        puVar1 = FUN_004c6fc0();
        uVar3 = FUN_00531fb0(puVar1,uVar3,(int)pvVar12);
        iVar2 = FUN_004c2a10((int)this,unused_reg_1_00,uVar3);
        iVar7 = FUN_00420890(this,uVar4);
        if (iVar7 == 0) {
          local_1c = 0;
        }
        if ((int)local_30 < iVar2) {
          local_30 = FUN_0041fd40((uint)this);
          if (local_34 < param_3) {
            *(uint *)(param_1 + -4) = local_24;
          }
          local_34 = local_34 + 1;
          param_1 = param_1 + 4;
        }
        local_28 = local_28 + local_4;
        local_30 = local_30 - iVar2;
        iVar6 = iVar6 + local_8;
        local_20 = local_20 + -1;
        local_24 = uVar4;
        if (local_20 == 0) break;
        iVar7 = local_10;
        iVar2 = local_c;
      }
    }
    if (local_1c == 0) {
      local_34 = local_34 + 1;
    }
    if (local_34 < param_3) {
      *(uint *)(param_2 + -4 + local_34 * 4) = local_24;
    }
  }
  return local_34;
}


