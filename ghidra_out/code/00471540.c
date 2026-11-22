
int * __thiscall FUN_00471540(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x20) == 0) {
    iVar2 = 0;
    iVar4 = -1;
    iVar3 = 0;
    iVar1 = -1;
  }
  else {
    iVar2 = *(int *)((int)this + 0x28);
    iVar3 = *(int *)((int)this + 0x2c);
    iVar4 = *(int *)((int)this + 0x30) + -1 + iVar2;
    iVar1 = *(int *)((int)this + 0x34) + -1 + iVar3;
  }
  *param_1 = iVar2;
  param_1[1] = iVar3;
  param_1[2] = iVar4;
  param_1[3] = iVar1;
  return param_1;
}


