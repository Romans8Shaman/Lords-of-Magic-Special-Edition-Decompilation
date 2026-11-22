
undefined4 __thiscall FUN_004287c0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)this + 0x1c);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  while (((piVar1 = (int *)FUN_00427b80(*piVar2), piVar1 == (int *)0x0 || (piVar1[2] != param_1)) ||
         (*piVar1 != 0))) {
    piVar2 = (int *)piVar2[5];
    if (piVar2 == (int *)0x0) {
      return 0;
    }
  }
  return 1;
}


