
int __thiscall FUN_0043c310(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    piVar2 = (int *)(*(int *)((int)this + 8) + 0x28);
    do {
      if (((*(short *)((int)piVar2 + -2) == param_2) && (*piVar2 == param_3)) &&
         (piVar2[1] == param_4)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x16;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  return -1;
}


