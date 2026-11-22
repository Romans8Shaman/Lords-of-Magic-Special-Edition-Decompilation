
undefined4 __thiscall FUN_0051fe20(void *this,int param_1,undefined4 param_2)

{
  if ((param_1 < 0) || (0x15 < param_1)) {
    return 0;
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0x10) = param_2;
  return 1;
}


