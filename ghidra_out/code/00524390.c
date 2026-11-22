
int __thiscall FUN_00524390(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    piVar2 = (int *)(*(int *)((int)this + 8) + 0x1c);
    do {
      if ((piVar2[0x52] == param_2) && (*piVar2 == param_1)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xfa;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  return -1;
}


