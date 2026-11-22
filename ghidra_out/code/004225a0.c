
undefined4 __thiscall FUN_004225a0(void *this,void *param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int *this_00;
  int *this_01;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 *this_02;
  undefined4 *local_8;
  void *local_4;
  
  pvVar2 = param_1;
  local_4 = (void *)0x0;
  local_8 = (undefined4 *)0x0;
  iVar10 = -1;
  iVar4 = FUN_004c1cf0((int)this);
  if (iVar4 != 0) {
    return 0;
  }
  piVar5 = (int *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)param_1 + 0x28),2);
  if (piVar5 != (int *)0x0) {
    iVar10 = (/*IC:004225ef*/**(code **)(*piVar5 + 0x3c))(piVar5);
  }
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)param_1 + 0x28),3);
  if (this_00 != (int *)0x0) {
    iVar10 = (/*IC:00422610*/**(code **)(*this_00 + 0x3c))(this_00);
  }
  this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)param_1 + 0x28),1);
  if ((this_01 != (int *)0x0) && (uVar6 = FUN_0050c980(this_01), uVar6 != 0)) {
    iVar10 = (/*IC:0042263e*/**(code **)(*this_01 + 0x3c))(this_01);
  }
  iVar4 = (/*IC:00422647*/**(code **)(*(int *)this + 0x3c))(this);
  if (((iVar10 != iVar4) && (-1 < iVar10)) && (param_2 == 0)) {
    iVar4 = (/*IC:0042266b*/**(code **)(*(int *)this + 0x3c))(this);
    if ((iVar4 < 0) || (0xf < iVar4)) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = &DAT_005af194 + iVar4 * 0x1d84;
    }
    if ((iVar10 < 0) || (0xf < iVar10)) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = &DAT_005af194 + iVar10 * 0x1d84;
    }
    if (((puVar9[0x15d8] & 2) == 0) && ((puVar7[0x15d8] & 1) != 0)) {
      iVar4 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
      iVar8 = (/*IC:004226e4*/**(code **)(*(int *)this + 0x3c))(this);
      pvVar2 = DAT_005a7b78;
      if (iVar4 != iVar8) {
        return 0;
      }
      uVar1 = *(undefined4 *)((int)this + 0x48);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
        iVar4 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar4 + iVar8 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar8 * 8) = uVar1;
      }
      pvVar2 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
        iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
        *(undefined4 *)(iVar4 + iVar8 * 8) = 1;
        *(int *)(iVar4 + 4 + iVar8 * 8) = iVar10;
      }
      pvVar2 = DAT_005a7b78;
      uVar1 = *(undefined4 *)((int)this + 0x28);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
        iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
        *(undefined4 *)(iVar4 + iVar10 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = uVar1;
      }
      pvVar2 = DAT_005a7b78;
      uVar1 = *(undefined4 *)((int)param_1 + 0x28);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
        iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
        *(undefined4 *)(iVar4 + iVar10 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = uVar1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005aa190,DAT_005aa194);
      return 0;
    }
  }
  if (this_00 != (int *)0x0) {
    FUN_0044ea50(this_00,*(int *)((int)this + 0x48));
    pvVar3 = DAT_005a7b78;
    uVar1 = *(undefined4 *)((int)this + 0x28);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar10 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = uVar1;
    }
    pvVar3 = DAT_005a7b78;
    uVar1 = *(undefined4 *)((int)param_1 + 0x28);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar10 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = uVar1;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005aa198,DAT_005aa19c);
  }
  pvVar3 = DAT_005a7b78;
  if (piVar5 != (int *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 0x28);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar10 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = uVar1;
    }
    pvVar3 = DAT_005a7b78;
    uVar1 = *(undefined4 *)((int)param_1 + 0x28);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar10 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = uVar1;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005aa1a0,DAT_005aa1a4);
  }
  if (this_01 != (int *)0x0) {
    *(byte *)(this_01 + 0x11) =
         *(byte *)(this_01 + 0x11) | '\x01' << ((byte)*(undefined4 *)((int)this + 0x48) & 0x1f);
    pvVar3 = DAT_005a7b78;
    uVar1 = *(undefined4 *)((int)this + 0x28);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar10 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = uVar1;
    }
    pvVar3 = DAT_005a7b78;
    uVar1 = *(undefined4 *)((int)param_1 + 0x28);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar10 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = uVar1;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005aa1a8,DAT_005aa1ac);
  }
  this_02 = (undefined4 *)0x0;
  DAT_005aeef4 = 1;
  iVar4 = FUN_004c1c50((int)this);
  if (iVar4 != 0) {
    local_8 = FUN_00485080(&DAT_005aa12c,*(int *)((int)this + 0x5b4),0x2f);
  }
  if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
    param_1 = *(void **)((int)this + 0x28);
  }
  else {
    param_1 = (void *)0xffffffff;
  }
  iVar4 = *(int *)((int)pvVar2 + 4);
  if (iVar4 == 1) {
    this_02 = *(undefined4 **)((int)pvVar2 + 0x58);
    if (this_02 == (undefined4 *)0x0) {
      FUN_00422d90(this);
      uVar1 = *(undefined4 *)((int)pvVar2 + 0x28);
      *(void **)((int)pvVar2 + 0x58) = this;
      *(undefined4 *)((int)pvVar2 + 0x5c) = *(undefined4 *)((int)this + 0x48);
      *(undefined4 *)((int)this + 0x28) = uVar1;
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)pvVar2 + 0x1c);
      *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0x9fffffff | 0x1000000;
      if (local_8 != (undefined4 *)0x0) {
        local_8[0x16c] = uVar1;
      }
      if (-1 < (int)param_1) {
        FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,(int)param_1,*(int *)((int)this + 0x28));
      }
      pvVar3 = DAT_005a7b78;
      if ((*(uint *)((int)pvVar2 + 0x30) & 0x800) == 0) {
        return 1;
      }
      if (DAT_005aeef0 == 0) {
        return 1;
      }
      uVar1 = *(undefined4 *)((int)pvVar2 + 0x28);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
        iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
        *(undefined4 *)(iVar4 + iVar10 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = uVar1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005d2cf0,DAT_005d2cf4);
      return 1;
    }
  }
  else {
    if (iVar4 == 2) {
      this_02 = *(undefined4 **)((int)pvVar2 + 0x48);
      local_4 = pvVar2;
      if (this_02 == (undefined4 *)0x0) {
        FUN_0043d490(pvVar2,this);
        FUN_00422d90(this);
        uVar1 = *(undefined4 *)((int)pvVar2 + 0x28);
        *(void **)((int)pvVar2 + 0x48) = this;
        *(undefined4 *)((int)pvVar2 + 0x4c) = *(undefined4 *)((int)this + 0x48);
        *(undefined4 *)((int)this + 0x28) = uVar1;
        *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)pvVar2 + 0x1c);
        *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0x9fffffff | 0x800000;
        if (local_8 != (undefined4 *)0x0) {
          local_8[0x16c] = uVar1;
        }
LAB_00422b86:
        if ((int)param_1 < 0) {
          return 1;
        }
        FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,(int)param_1,*(int *)((int)this + 0x28));
        return 1;
      }
      goto LAB_00422bd5;
    }
    if (iVar4 == 3) {
      this_02 = *(undefined4 **)((int)pvVar2 + 0x44);
      if (this_02 == (undefined4 *)0x0) {
        FUN_00422d90(this);
        uVar1 = *(undefined4 *)((int)pvVar2 + 0x28);
        *(void **)((int)pvVar2 + 0x44) = this;
        *(undefined4 *)((int)pvVar2 + 0x68) = *(undefined4 *)((int)this + 0x48);
        *(undefined4 *)((int)this + 0x28) = uVar1;
        *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)pvVar2 + 0x1c);
        *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0x9fffffff | 0x400000;
        if (local_8 != (undefined4 *)0x0) {
          local_8[0x16c] = uVar1;
          if ((int)param_1 < 0) {
            return 1;
          }
          FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,(int)param_1,*(int *)((int)this + 0x28))
          ;
          return 1;
        }
        goto LAB_00422b86;
      }
      goto LAB_00422bd5;
    }
  }
  if (this_02 == (undefined4 *)0x0) {
    return 0;
  }
LAB_00422bd5:
  iVar4 = FUN_00415610(this,(int)this_02);
  if (iVar4 == 0) {
    return 0;
  }
  if (local_8 != (undefined4 *)0x0) {
    FUN_004c2450((int)local_8);
  }
  FUN_00422d90(this);
  FUN_00415940(this,this_02);
  if (local_8 != (undefined4 *)0x0) {
    piVar5 = FUN_00485080(&DAT_005aa12c,this_02[0x16d],0x2f);
    if (piVar5 == (int *)0x0) {
      FUN_004c1bc0(local_8,this_02);
      FUN_00410af0(local_8,0xffffffff);
      FUN_004c1c20(this_02,(int)local_8);
      FUN_00420630((int)this_02);
    }
    else {
      FUN_004c23b0(piVar5,(int)local_8);
      (/*IC:00422c30*/**(code **)(*piVar5 + 0x2c))(piVar5);
      FUN_00420630((int)piVar5);
      FUN_00416400(&DAT_005aa12c,local_8[10]);
    }
  }
  if (local_4 != (void *)0x0) {
    FUN_004154e0(this_02,*(int *)((int)local_4 + 0x58),1);
  }
  if (-1 < (int)param_1) {
    FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,(int)param_1,this_02[10]);
  }
  FUN_004ba870(&DAT_005a9ddc);
  return 1;
}


