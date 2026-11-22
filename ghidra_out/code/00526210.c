
undefined4 __thiscall FUN_00526210(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)this < 1) {
    return 0;
  }
  piVar1 = *(int **)((int)this + 8);
  while ((*piVar1 != param_1 || (piVar1[1] != param_2))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 2;
    if (*(int *)this <= iVar2) {
      return 0;
    }
  }
  return 1;
}


