
undefined4 __thiscall FUN_0041cdf0(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  
  iVar1 = FUN_004efe80(&DAT_005aee6c,*param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar6 = param_1[10];
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  piVar2 = (int *)FUN_004f1df0((int)param_1);
  this_00 = (int *)((int)this + iVar6 * 0x4c + 0xc4);
  uVar3 = FUN_00529180(this_00);
  iVar4 = FUN_00521e00(this_00);
  iVar6 = 0;
  local_c = *(int *)(iVar1 + 0x18);
  if (piVar2 == (int *)0x0) {
    if (uVar3 == 0) {
      return 0;
    }
    iVar6 = *(int *)(uVar3 + 0x14);
  }
  else {
    iVar5 = FUN_00427b80(*piVar2);
    if ((*(uint *)(iVar5 + 0x18) & 0x60000) == 0) {
      local_c = 0;
    }
    else {
      iVar5 = FUN_00427b80(*piVar2);
      if (((*(uint *)(iVar5 + 0x18) & 0x20000) != 0) && (uVar3 != 0)) {
        iVar6 = *(int *)(uVar3 + 0x14);
      }
      iVar5 = FUN_00427b80(*piVar2);
      if ((*(uint *)(iVar5 + 0x18) & 0x40000) != 0) {
        iVar6 = iVar6 + piVar2[2];
      }
    }
  }
  if (iVar6 < local_c) {
    return 0;
  }
  if (piVar2 == (int *)0x0) {
    if (*(int *)(uVar3 + 0xc) < *(int *)(iVar1 + 0x38)) {
      return 0;
    }
    if (*(int *)(iVar4 + 0x1c) != *(int *)(iVar1 + 8)) {
      iVar1 = FUN_004287c0(this_00,*param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


