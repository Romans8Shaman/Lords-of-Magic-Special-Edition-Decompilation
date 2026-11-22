
undefined4 __thiscall FUN_00505970(void *this,int param_1,int param_2)

{
  if (((param_1 < 0) || (8 < param_1)) || (param_2 < 1)) {
    return 0;
  }
  *(int *)((int)this + param_1 * 0xc + 0x22ffc) = param_2;
  return 1;
}


