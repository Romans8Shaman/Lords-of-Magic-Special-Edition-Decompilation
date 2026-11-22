
undefined4 __thiscall FUN_0052d710(void *this,int param_1)

{
  int iVar1;
  int *this_00;
  int *this_01;
  int *this_02;
  int *this_03;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  
  iVar1 = FUN_004f6000(&DAT_005ae974,param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,2);
  this_02 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,3);
  this_03 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,1);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1,7);
  if (uVar2 != 0) {
    this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,*(int *)(uVar2 + 0x44),0);
  }
  puVar3 = FUN_0052d240((int)this);
  bVar6 = puVar3 == (undefined4 *)0x0;
  if (this_00 == (int *)0x0) {
    if (this_01 == (int *)0x0) {
      if (this_02 == (int *)0x0) {
        if (this_03 == (int *)0x0) {
          return DAT_005a9dd8;
        }
        if (this_03[0x15] < 0) {
          return 0xffffffff;
        }
        iVar1 = (/*IC:0052d924*/**(code **)(*this_03 + 0x3c))(this_03);
        if ((iVar1 < 0) || (0xf < iVar1)) {
          puVar5 = (undefined *)0x0;
        }
        else {
          puVar5 = &DAT_005af194 + iVar1 * 0x1d84;
        }
        if (puVar5 == (undefined *)0x0) {
          return DAT_005a9dd4;
        }
        if (bVar6) {
          return *(undefined4 *)(puVar5 + 0x24);
        }
        iVar1 = *this_03;
        iVar4 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
      }
      else {
        iVar1 = (/*IC:0052d8a8*/**(code **)(*this_02 + 0x3c))(this_02);
        if ((iVar1 < 0) || (0xf < iVar1)) {
          puVar5 = (undefined *)0x0;
        }
        else {
          puVar5 = &DAT_005af194 + iVar1 * 0x1d84;
        }
        if (puVar5 == (undefined *)0x0) {
          return DAT_005a9dd4;
        }
        if (bVar6) {
          return *(undefined4 *)(puVar5 + 0x24);
        }
        iVar1 = *this_02;
        iVar4 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
      }
      iVar1 = (/*IC:0052d980*/**(code **)(iVar1 + 0x3c))();
      if (iVar1 == iVar4) {
        return *(undefined4 *)(puVar5 + 0x24);
      }
    }
    else {
      iVar1 = (/*IC:0052d82b*/**(code **)(*this_01 + 0x3c))(this_01);
      if ((iVar1 < 0) || (0xf < iVar1)) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = &DAT_005af194 + iVar1 * 0x1d84;
      }
      if (puVar5 == (undefined *)0x0) {
        return DAT_005a9dd4;
      }
      if (bVar6) {
        return *(undefined4 *)(puVar5 + 0x24);
      }
      iVar1 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
      iVar4 = (/*IC:0052d886*/**(code **)(*this_01 + 0x3c))(this_01);
      if (iVar4 == iVar1) {
        return *(undefined4 *)(puVar5 + 0x24);
      }
    }
  }
  else {
    iVar1 = (/*IC:0052d7b2*/**(code **)(*this_00 + 0x3c))(this_00);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = &DAT_005af194 + iVar1 * 0x1d84;
    }
    if (puVar5 == (undefined *)0x0) {
      return DAT_005a9dd4;
    }
    if (bVar6) {
      return *(undefined4 *)(puVar5 + 0x24);
    }
    iVar1 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
    iVar4 = (/*IC:0052d80d*/**(code **)(*this_00 + 0x3c))(this_00);
    if (iVar4 == iVar1) {
      return *(undefined4 *)(puVar5 + 0x24);
    }
  }
  return DAT_005a9dd4;
}


