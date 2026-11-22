
void __thiscall FUN_00486e00(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar2 = 0;
    do {
      piVar1 = (int *)(*(int *)((int)this + 8) + iVar2);
      if (*piVar1 == param_1) {
        piVar1[2] = 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)((int)this + 4));
  }
  return;
}


