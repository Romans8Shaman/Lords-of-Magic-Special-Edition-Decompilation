
int __thiscall FUN_00486d90(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (*(int *)((int)this + 4) < 1) {
    return -1;
  }
  piVar2 = *(int **)((int)this + 8);
  do {
    if (*piVar2 == param_1) {
      return (*(int **)((int)this + 8))[iVar1 * 3 + 1];
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 3;
  } while (iVar1 < *(int *)((int)this + 4));
  return -1;
}


