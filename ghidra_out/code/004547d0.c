
int __thiscall FUN_004547d0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    piVar2 = (int *)(*(int *)((int)this + 8) + 0x28);
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xe;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  return -1;
}


