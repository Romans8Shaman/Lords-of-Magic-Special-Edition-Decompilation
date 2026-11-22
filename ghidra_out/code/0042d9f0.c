
void __thiscall FUN_0042d9f0(void *this,void *param_1,int param_2,int param_3,int param_4)

{
  void *this_00;
  int iVar1;
  int local_4;
  
  this_00 = param_1;
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & 0xfffffffb;
  if (param_1 != (void *)0x0) {
    local_4 = 0;
    param_1 = (void *)0x0;
    if ((*(int *)((int)this + 4) != 0) &&
       (iVar1 = FUN_0049cb20(this_00,&local_4,(int *)&param_1,*(int *)((int)this + 4),0xffffffff),
       iVar1 == 0)) {
      return;
    }
    FUN_0042d980(this,local_4 + param_2,(int)param_1 + param_3,param_4);
  }
  return;
}


