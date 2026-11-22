
int __thiscall FUN_004aba20(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x6c);
  FUN_004ab950(this,param_1 % iVar1,param_1 / iVar1,param_2 % iVar1,param_2 / iVar1,&param_1,
               &param_2);
  iVar1 = FUN_004a51c0(this,param_1,param_2);
  return iVar1;
}


