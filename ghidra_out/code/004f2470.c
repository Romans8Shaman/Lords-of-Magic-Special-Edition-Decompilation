
undefined4 __fastcall FUN_004f2470(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *this;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = FUN_004efe80(&DAT_005aee6c,*param_1);
  local_4 = iVar3;
  this = FUN_00485080(&DAT_005aa12c,param_1[9],0x2f);
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
    iVar1 = param_1[0xd];
    if (-1 < iVar1) {
      if (this != (int *)0x0) {
        if (((param_1[10] < 0) || (this[0x13] <= param_1[10])) ||
           (this[(param_1[5] + 3) * 0x13] != iVar1)) {
          this = (int *)0x0;
        }
        if (this != (int *)0x0) goto LAB_004f2506;
      }
      this = FUN_0044c0c0(iVar1,&local_c);
      if (this != (int *)0x0) {
        param_1[9] = this[10];
        param_1[10] = local_c;
      }
    }
LAB_004f2506:
    puVar4 = FUN_00485080(&DAT_005aa12c,param_1[3],0x2f);
    iVar1 = param_1[6];
    if (-1 < iVar1) {
      if (puVar4 != (undefined4 *)0x0) {
        iVar6 = param_1[5];
        if (((iVar6 < 0) || ((int)puVar4[0x13] <= iVar6)) || (puVar4[(iVar6 + 3) * 0x13] != iVar1))
        {
          puVar4 = (undefined4 *)0x0;
        }
        if (puVar4 != (undefined4 *)0x0) goto LAB_004f2562;
      }
      puVar4 = FUN_0044c0c0(iVar1,&local_8);
      if (puVar4 != (undefined4 *)0x0) {
        param_1[3] = puVar4[10];
        param_1[5] = local_8;
      }
    }
  }
LAB_004f2562:
  iVar1 = local_4;
  if ((this == (int *)0x0) || (iVar3 == 0)) {
    return 0;
  }
  piVar7 = param_1;
  piVar8 = &DAT_00584c1c;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  FUN_004d09a0(DAT_005a7b78,*(uint *)(local_4 + 0x4c),*(int **)(local_4 + 0x50),0);
  if (((this[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
      ((*(byte *)(this + 0xc) & 0x20) != 0)) && (DAT_00584ca0 == 0)) {
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
      FUN_0052bd30(&DAT_005a7d90 + DAT_005a7d8c * 0x400,0);
    }
    FUN_00503040(&DAT_00584ae8,1);
    FUN_00503040(&DAT_00584ae8,0);
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
    }
  }
  piVar7 = this + 0x1a;
  this[0x19] = *(int *)(iVar1 + 0x20);
  iVar3 = *piVar7;
  if (((iVar3 != 0x16) && (iVar3 != 4)) && (iVar3 != 0x18)) {
    if (iVar3 != 0x19) goto LAB_004f26b1;
    puVar4 = FUN_00485080(&DAT_005aa12c,param_1[3],0x2f);
    if (puVar4 != (undefined4 *)0x0) {
      *(byte *)(puVar4 + 0x1e) = *(byte *)(puVar4 + 0x1e) & 0xef;
      uVar5 = FUN_0047c9e0(&DAT_005aa12c,this[0x12]);
      if (uVar5 != 0) {
        iVar3 = FUN_00407d50((int)puVar4);
        if (iVar3 == 0) {
          iVar3 = FUN_00506110(this,(int)puVar4);
          if (iVar3 != 0) {
            this[0x1b] = puVar4[10];
            this[0x1d] = puVar4[10];
            this[0x1c] = puVar4[7];
            *piVar7 = 2;
            goto LAB_004f26b1;
          }
        }
      }
    }
  }
  FUN_004010d0(piVar7,(int)this);
LAB_004f26b1:
  iVar3 = FUN_00420560((int)this);
  if (iVar3 != 0) {
    FUN_0041efa0(this,2);
    (/*IC:004f26c9*/**(code **)(*this + 0x2c))(this);
    return 1;
  }
  if (DAT_005577c8 == this[0x12]) {
    if ((*piVar7 == 0x18) || (*piVar7 == 0x19)) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
    }
    pvVar2 = DAT_005a7b78;
    iVar3 = this[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
      *(undefined4 *)(iVar1 + iVar6 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar6 * 8) = iVar3;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d6c,DAT_005a7d70,-1);
  }
  return 1;
}


