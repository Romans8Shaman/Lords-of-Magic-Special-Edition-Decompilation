
int * __thiscall FUN_0042aec0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)this + 0x1c);
  do {
    piVar1 = piVar2;
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar2 = (int *)piVar1[5];
  } while (*piVar1 != param_1);
  return piVar1;
}


