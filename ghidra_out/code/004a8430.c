
undefined4 __thiscall FUN_004a8430(void *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)((int)this + 100) == 0) ||
     (iVar1 = *(int *)(*(int *)((int)this + 100) + param_1 * 8), iVar1 == 0)) {
    return 0;
  }
  while ((*(int *)(iVar1 + 4) < 1 || (3 < *(int *)(iVar1 + 4)))) {
    iVar1 = *(int *)(iVar1 + 0x3c);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


