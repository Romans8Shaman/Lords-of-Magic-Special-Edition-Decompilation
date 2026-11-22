
undefined4 __thiscall FUN_004f6bc0(void *this,int *param_1)

{
  int *a1;
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  a1 = param_1;
  local_4 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x24);
  if (iVar3 < *(int *)((int)this + 0x10)) {
    iVar2 = *(int *)((int)this + 0x10) - iVar3;
    piVar1 = (int *)(*(int *)((int)this + 8) + iVar3 * 4);
    do {
      if (*piVar1 != 0) {
        local_4 = local_4 + 1;
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00539660((char *)&local_4,4,1,param_1);
  iVar3 = *(int *)((int)this + 0x24);
  if (iVar3 < *(int *)((int)this + 0x10)) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 8) + iVar3 * 4);
      if (iVar2 != 0) {
        param_1 = *(int **)(iVar2 + 4);
        FUN_00539660((char *)&param_1,4,1,a1);
        piVar1 = *(int **)(*(int *)((int)this + 8) + iVar3 * 4);
        (/*IC:004f6c47*/**(code **)(*piVar1 + 0x20))(piVar1,a1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x10));
  }
  return 1;
}


