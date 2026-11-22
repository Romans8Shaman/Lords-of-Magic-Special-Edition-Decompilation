
undefined4 __thiscall FUN_004c3fa0(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  FUN_005397f0((char *)&param_1,4,1,param_1);
  if (param_1 != *(int **)this) {
    FUN_004c3c90(this);
    FUN_004c3ce0(this,*(int *)this);
  }
  FUN_005397f0((char *)((int)this + 4),4,1,piVar1);
  FUN_005397f0(*(char **)((int)this + 8),*(int *)this << 2,1,piVar1);
  return 1;
}


