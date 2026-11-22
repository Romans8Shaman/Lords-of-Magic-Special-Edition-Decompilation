
void __thiscall FUN_00526de0(void *this,int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
  }
  *(int *)(param_1 + 0x1c) = *(int *)this;
  *(int *)this = param_1;
  return;
}


