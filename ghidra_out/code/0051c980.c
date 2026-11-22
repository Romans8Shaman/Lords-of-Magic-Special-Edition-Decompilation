
undefined4 __thiscall FUN_0051c980(void *this,int param_1,int param_2)

{
  if ((((param_1 < 0) || (0xf < param_1)) || (param_2 < 0)) || (0xf < param_2)) {
    return 0;
  }
  *(int *)((int)this + param_1 * 4 + 0x78) = param_2;
  return 1;
}


