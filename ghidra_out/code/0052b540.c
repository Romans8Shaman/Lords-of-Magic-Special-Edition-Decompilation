
int * __thiscall FUN_0052b540(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[3];
  }
  return piVar1;
}


