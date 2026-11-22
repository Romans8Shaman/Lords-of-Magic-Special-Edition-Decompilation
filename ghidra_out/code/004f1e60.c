
undefined4 __fastcall FUN_004f1e60(int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *this;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar3 = FUN_004efe80(&DAT_005aee6c,*param_1);
  FUN_004f1df0((int)param_1);
  this = FUN_00485080(&DAT_005aa12c,param_1[9],0x2f);
  if ((this == (undefined4 *)0x0) || (iVar3 == 0)) {
    return 0;
  }
  iVar4 = param_1[10];
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  this[iVar4 * 0x13 + 0x3a] = this[iVar4 * 0x13 + 0x3a] | 8;
  this[iVar4 * 0x13 + 0x43] = 0xffffffff;
  this[0x18] = *(undefined4 *)(iVar3 + 0x1c);
  FUN_0041efa0(this,*(uint *)(iVar3 + 0x24));
  iVar3 = FUN_00420580((int)this);
  if (iVar3 == 0) goto LAB_004f1ffd;
  if (this[0x12] == DAT_005aa7d4) {
    iVar3 = *param_1;
    iVar4 = 0;
LAB_004f1f0a:
    FUN_004a1950(&DAT_005ccffc,iVar4,iVar3);
  }
  else if (this[0x12] == DAT_005aadb0) {
    iVar3 = *param_1;
    iVar4 = 1;
    goto LAB_004f1f0a;
  }
  FUN_00506140((int)this);
  puVar5 = FUN_00485080(&DAT_005aa12c,param_1[3],0x2f);
  if ((puVar5 != (undefined4 *)0x0) && (puVar5[0x12] != this[0x12])) {
    *(byte *)(this + 0x1e) = *(byte *)(this + 0x1e) | 1;
    *(byte *)(puVar5 + 0x1e) = *(byte *)(puVar5 + 0x1e) | 4;
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
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
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
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
      *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
      *(int *)(iVar4 + 4 + iVar6 * 8) = iVar3;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d74,DAT_005a7d78,-2);
  }
LAB_004f1ffd:
  if (((this[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
      ((*(byte *)(this + 0xc) & 0x20) != 0)) && (DAT_00584ca0 == 0)) {
    FUN_00503040(&DAT_00584ae8,1);
    FUN_00503040(&DAT_00584ae8,0);
  }
  return 1;
}


