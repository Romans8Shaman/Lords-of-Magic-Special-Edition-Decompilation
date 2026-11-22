
undefined4 __thiscall FUN_00427930(void *this,int param_1)

{
  if (param_1 < 0) {
    return 8;
  }
  return *(byte *)(param_1 + *(int *)this) & 7;
}


