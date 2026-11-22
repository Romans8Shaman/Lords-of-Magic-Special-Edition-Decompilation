
void __thiscall FUN_0049dd20(void *this,int *param_1)

{
  int iVar1;
  
  *(int **)this = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 4) = 0;
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = param_1[iVar1]) {
    iVar1 = *(int *)((int)this + 4) + 1;
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}


