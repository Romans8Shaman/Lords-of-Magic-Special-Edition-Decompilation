
int __thiscall FUN_00531e90(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0xc);
  iVar1 = param_1 % iVar2 - param_2 % iVar2;
  iVar2 = param_1 / iVar2 - param_2 / iVar2;
  return iVar1 * iVar1 + iVar2 * iVar2;
}


