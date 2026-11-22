
undefined4 __thiscall FUN_00486d30(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (*(int *)((int)this + 4) < 1) {
    return 0xffffffff;
  }
  piVar1 = *(int **)((int)this + 8);
  piVar3 = piVar1;
  do {
    if (*piVar3 == param_1) {
      piVar1[iVar2 * 3 + 1] = 1 - piVar1[iVar2 * 3 + 1];
      return *(undefined4 *)(*(int *)((int)this + 8) + 4 + iVar2 * 0xc);
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar2 < *(int *)((int)this + 4));
  return 0xffffffff;
}


