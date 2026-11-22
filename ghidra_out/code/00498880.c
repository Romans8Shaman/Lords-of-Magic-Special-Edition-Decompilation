
undefined4 __thiscall FUN_00498880(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((((param_1 < 0) || (9 < param_1)) ||
      (piVar2 = *(int **)(param_1 * 0x10 + 0x5e4 + (int)this), piVar2 == (int *)0x0)) ||
     (piVar2 == (int *)0x0)) {
    return 0;
  }
  do {
    iVar1 = FUN_00406380(*(int *)(*piVar2 + 0x28));
    if (iVar1 != 0) {
      return 1;
    }
    piVar2 = (int *)piVar2[1];
  } while (piVar2 != (int *)0x0);
  return 0;
}


