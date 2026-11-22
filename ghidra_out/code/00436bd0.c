
undefined4 __thiscall FUN_00436bd0(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)((int)this + param_1 * 0x4c + 0xc4);
  uVar2 = FUN_00525f10((int)piVar1);
  if (uVar2 != 0) {
    return 0;
  }
  if ((*(byte *)((int)this + param_1 * 0x4c + 0xe8) & 1) != 0) {
    return 0;
  }
  iVar3 = FUN_004c1c50((int)this);
  if (iVar3 == 1) {
    if (*(int *)((int)this + 0x4c) == 1) {
      return 0;
    }
    iVar3 = FUN_00415430((int)this);
    if (iVar3 == 0) {
      if (param_1 == 0) {
        return 0;
      }
    }
    else {
      iVar3 = FUN_00436b50(this,param_1);
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
  iVar3 = FUN_004154a0((int)this);
  if (0 < iVar3) {
    iVar3 = FUN_00415470(piVar1);
    if (iVar3 == 0) {
      uVar2 = FUN_00521e50(piVar1);
      if (uVar2 != 0) {
        return 0;
      }
    }
    else {
      iVar3 = FUN_00436bb0(this,param_1);
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
  return 1;
}


