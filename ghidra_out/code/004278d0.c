
undefined4 __thiscall FUN_004278d0(void *this,int param_1)

{
  if (param_1 < 0) {
    return 1;
  }
  return *(byte *)(param_1 + *(int *)this) >> 3 & 1;
}


