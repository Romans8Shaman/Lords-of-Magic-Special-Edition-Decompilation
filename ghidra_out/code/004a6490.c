
undefined4 __thiscall FUN_004a6490(void *this,int param_1,int param_2)

{
  if ((param_1 < 0) || (param_2 < 0)) {
    return 0;
  }
  FUN_004a5cb0(this,param_1 % *(int *)((int)this + 0x5c),param_1 / *(int *)((int)this + 0x5c),
               param_2);
  return 1;
}


