
undefined4 __thiscall FUN_00415770(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = 0;
  if (((param_1 == 0) || ((void *)param_1 == this)) ||
     (*(int *)(param_1 + 0x48) != *(int *)((int)this + 0x48))) {
    return 0;
  }
  iVar1 = FUN_004c1cf0((int)this);
  if (iVar1 == 0) {
    iVar1 = FUN_004c1cf0(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_004154a0((int)this);
      iVar2 = FUN_004154a0(param_1);
      iVar1 = iVar1 + iVar2;
      if (3 < iVar1) {
        return 3;
      }
      iVar2 = FUN_00415430(param_1);
      iVar3 = FUN_00415430((int)this);
      iVar2 = iVar2 + iVar3;
      if (3 < iVar2) {
        return 4;
      }
      if (9 < ((*(int *)((int)this + 0x4c) - iVar2) - iVar1) + *(int *)(param_1 + 0x4c)) {
        return 5;
      }
      if ((0 < iVar1) && (iVar1 < iVar2)) {
        return 6;
      }
      uVar4 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x5b4),0);
      uVar5 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5b4),0);
      if (uVar4 != 0) {
        iVar6 = *(int *)(uVar4 + 0x4c);
      }
      if (uVar5 != 0) {
        iVar6 = iVar6 + *(int *)(uVar5 + 0x4c);
      }
      if (3 < iVar6) {
        return 10;
      }
      if (((uVar4 != 0) && (uVar5 != 0)) && (*(int *)(uVar4 + 0x5b8) != *(int *)(uVar5 + 0x5b8))) {
        return 7;
      }
      if ((0 < iVar1) &&
         (iVar1 * 3 <
          ((iVar6 - iVar2) - iVar1) + *(int *)((int)this + 0x4c) + *(int *)(param_1 + 0x4c))) {
        return 8;
      }
      iVar6 = FUN_004155c0((int)this);
      if (iVar6 != 0) {
        iVar6 = FUN_004155c0(param_1);
        if (iVar6 != 0) {
          return 0xffffffff;
        }
      }
      return 9;
    }
  }
  uVar7 = 1;
  iVar6 = FUN_004c1cf0((int)this);
  if (iVar6 != 0) {
    iVar6 = FUN_004c1cf0(param_1);
    if (iVar6 != 0) {
      uVar7 = 2;
    }
  }
  return uVar7;
}


