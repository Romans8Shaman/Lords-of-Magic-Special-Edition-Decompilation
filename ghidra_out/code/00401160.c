
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00401160(void *this,uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float local_10;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  uVar4 = param_1;
  if (-1 < *(int *)(param_1 + 0x78)) {
    FUN_0041dbd0(this,*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x74),-1);
    FUN_0041dc10(this,1);
  }
  if (DAT_005a7d54 == 0) {
    return;
  }
  DAT_00583ac0 = uVar4;
  uVar5 = FUN_00482ac0(&DAT_005aa12c,*(int *)(uVar4 + 0x50),0);
  pvVar3 = DAT_005a7b78;
  if (-1 < *(int *)(uVar4 + 0x84)) {
    DAT_00584c20 = 0xffffffff;
    _DAT_00584c24 = 0xffffffff;
    _DAT_00584c2c = 0xffffffff;
    _DAT_00584c34 = 0xffffffff;
    _DAT_00584c38 = 0xffffffff;
    _DAT_00584c3c = 0xffffffff;
    _DAT_00584c48 = 0xffffffff;
    _DAT_00584c4c = 0xffffffff;
    _DAT_00584c50 = 0xffffffff;
    _DAT_00584c54 = 0xffffffff;
    DAT_00584c1c = *(undefined4 *)(uVar4 + 0x84);
    _DAT_00584c40 = *(undefined4 *)(uVar4 + 0x50);
    _DAT_00584c44 = *(undefined4 *)(uVar4 + 0x54);
    _DAT_00584c28 = *(undefined4 *)(uVar4 + 0x5c);
    _DAT_00584c30 = *(undefined4 *)(uVar4 + 0x60);
  }
  param_1 = 0;
  DAT_005787ac = this;
  DAT_005787b0 = uVar5;
  if ((*(uint *)((int)this + 0x30) & 0x10000c00) == 0) {
    uVar2 = *(undefined4 *)(uVar4 + 0x50);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
      *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
      *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar2;
    }
    pvVar3 = DAT_005a7b78;
    uVar2 = *(undefined4 *)((int)this + 0x28);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
      iVar7 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
      *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar2;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d54,DAT_005a7d58,-1);
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      local_8 = *(uint *)(*piVar1 + -8 + iVar7 * 8);
      local_4 = *(undefined4 *)(*piVar1 + -4 + iVar7 * 8);
    }
    else {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      local_8 = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    iVar7 = FUN_004026a0(&local_8,&param_1,&local_c,&local_10);
    if (iVar7 == 0) {
      *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
  }
  if (param_1 == 0) {
    FUN_0041efa0(this,6);
  }
  else {
    FUN_00421590(this);
    if (uVar5 == 0) goto LAB_004013cb;
    *(byte *)(uVar5 + 0x78) = *(byte *)(uVar5 + 0x78) | 2;
  }
  if (uVar5 != 0) {
    *(byte *)(uVar5 + 0x78) = *(byte *)(uVar5 + 0x78) | 1;
  }
LAB_004013cb:
  if (DAT_005787ac != (void *)0x0) {
    *(byte *)(uVar5 + 0x78) = *(byte *)(uVar5 + 0x78) | 4;
  }
  if (((~*(uint *)((int)this + 0x30) & 0x100) != 0) && (iVar7 = FUN_0040a9a0((int)this), iVar7 != 0)
     ) {
    FUN_0040a9d0(this,DAT_005787b0);
  }
  DAT_00583ac0 = 0;
  DAT_005787b0 = 0;
  DAT_005787ac = (void *)0x0;
  return;
}


