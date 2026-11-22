
undefined4 __fastcall FUN_004f20e0(int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined4 *this;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 unused_reg_1;
  void *local_4;
  
  iVar3 = FUN_004efe80(&DAT_005aee6c,*param_1);
  piVar4 = (int *)FUN_004f1df0((int)param_1);
  this = FUN_00485080(&DAT_005aa12c,param_1[9],0x2f);
  if ((this == (undefined4 *)0x0) || (iVar3 == 0)) {
    return 0;
  }
  iVar5 = param_1[10];
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  this[iVar5 * 0x13 + 0x3a] = this[iVar5 * 0x13 + 0x3a] | 8;
  this[iVar5 * 0x13 + 0x43] = 0xffffffff;
  local_4 = (void *)FUN_00529180(this + iVar5 * 0x13 + 0x31);
  if (piVar4 == (int *)0x0) {
    if (local_4 == (void *)0x0) {
      return 0;
    }
    FUN_0044bdb0(local_4,*(int *)(iVar3 + 0x18));
  }
  else {
    iVar5 = FUN_00427b80(*piVar4);
    if ((*(uint *)(iVar5 + 0x18) & 0x80000) != 0) {
      if (piVar4[1] < 1) {
        return 0;
      }
      piVar4[1] = piVar4[1] + -1;
    }
    iVar5 = FUN_00427b80(*piVar4);
    if ((*(uint *)(iVar5 + 0x18) & 0x60000) != 0) {
      iVar5 = *(int *)(iVar3 + 0x18) - piVar4[2];
      if (iVar5 < 1) {
        piVar4[2] = piVar4[2] - *(int *)(iVar3 + 0x18);
      }
      else {
        iVar8 = FUN_00427b80(*piVar4);
        if ((*(uint *)(iVar8 + 0x18) & 0x20000) == 0) {
          return 0;
        }
        if (local_4 == (void *)0x0) {
          return 0;
        }
        FUN_0044bdb0(local_4,iVar5);
        piVar4[2] = 0;
      }
    }
  }
  iVar5 = FUN_00420560((int)this);
  if (iVar5 != 0) {
    puVar6 = FUN_00485080(&DAT_005aa12c,param_1[3],0x2f);
    iVar5 = param_1[6];
    if (-1 < iVar5) {
      if (puVar6 != (undefined4 *)0x0) {
        iVar8 = param_1[5];
        if (((iVar8 < 0) || ((int)puVar6[0x13] <= iVar8)) || (puVar6[(iVar8 + 3) * 0x13] != iVar5))
        {
          puVar6 = (undefined4 *)0x0;
        }
        if (puVar6 != (undefined4 *)0x0) goto LAB_004f2272;
      }
      puVar6 = FUN_0044c0c0(iVar5,(int *)&local_4);
      if (puVar6 != (undefined4 *)0x0) {
        param_1[3] = puVar6[10];
        param_1[5] = (int)local_4;
      }
    }
LAB_004f2272:
    iVar5 = this[7];
    if (param_1[1] < 0) {
      if ((puVar6 == (undefined4 *)0x0) &&
         ((uVar7 = FUN_004f6000(&DAT_005ae974,param_1[4]), uVar7 != 0 ||
          (uVar7 = FUN_00482ac0(&DAT_005aa12c,param_1[2],3), uVar7 != 0)))) {
        iVar5 = *(int *)(uVar7 + 0x1c);
      }
    }
    else {
      iVar5 = param_1[1];
    }
    if ((iVar5 != this[7]) &&
       (iVar5 = FUN_004a8b50(&DAT_005ae958,this[7],param_1[1]), this[0x11] != iVar5)) {
      this[0x11] = iVar5;
      FUN_004193e0(this,iVar5);
    }
  }
  this[0x18] = *(undefined4 *)(iVar3 + 0x1c);
  FUN_0041efa0(this,*(uint *)(iVar3 + 0x24));
  iVar3 = FUN_00420580((int)this);
  if (iVar3 == 0) {
    if (0 < (int)this[0x18]) {
      FUN_004ef5b0(0x5ccff4,unused_reg_1,param_1);
    }
    goto LAB_004f2418;
  }
  if (this[0x12] == DAT_005aa7d4) {
    iVar3 = *param_1;
    iVar5 = 0;
LAB_004f2314:
    FUN_004a1950(&DAT_005ccffc,iVar5,iVar3);
  }
  else if (this[0x12] == DAT_005aadb0) {
    iVar3 = *param_1;
    iVar5 = 1;
    goto LAB_004f2314;
  }
  FUN_00506140((int)this);
  puVar6 = FUN_00485080(&DAT_005aa12c,param_1[3],0x2f);
  if ((puVar6 != (undefined4 *)0x0) && (puVar6[0x12] != this[0x12])) {
    *(byte *)(this + 0x1e) = *(byte *)(this + 0x1e) | 1;
    *(byte *)(puVar6 + 0x1e) = *(byte *)(puVar6 + 0x1e) | 0x14;
  }
  pvVar2 = DAT_005a7b78;
  if (DAT_005577c8 == this[0x12]) {
    uVar1 = this[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
    }
    pvVar2 = DAT_005a7b78;
    iVar3 = *param_1;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
      *(undefined4 *)(iVar5 + iVar8 * 8) = 1;
      *(int *)(iVar5 + 4 + iVar8 * 8) = iVar3;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d74,DAT_005a7d78,-2);
  }
LAB_004f2418:
  if (((this[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
      ((*(byte *)(this + 0xc) & 0x20) != 0)) && (DAT_00584ca0 == 0)) {
    FUN_00503040(&DAT_00584ae8,1);
    FUN_00503040(&DAT_00584ae8,0);
  }
  return 1;
}


