
undefined4 __thiscall FUN_00422df0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint auStack_14 [5];
  
  FUN_004fd4b0(param_1);
  uVar4 = 0;
  iVar1 = FUN_004c1cf0((int)this);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    do {
      iVar2 = FUN_00522350(*(uint *)((int)this + 0x28),iVar1,auStack_14);
      if (iVar2 != 0) {
        iVar2 = 5;
        piVar3 = param_1;
        do {
          *piVar3 = *piVar3 + *(int *)(((int)auStack_14 - (int)param_1) + (int)piVar3);
          piVar3 = piVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        uVar4 = 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x4c));
  }
  return uVar4;
}


