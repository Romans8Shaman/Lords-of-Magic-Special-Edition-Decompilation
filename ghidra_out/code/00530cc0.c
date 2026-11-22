
int __thiscall FUN_00530cc0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (DAT_005743e4 + *(int *)this * 2) % DAT_005743e8;
  *(int *)this = iVar2;
  iVar1 = (param_2 - param_1) + 1;
  if (iVar1 < 2) {
    return param_1;
  }
  return iVar2 % iVar1 + param_1;
}


