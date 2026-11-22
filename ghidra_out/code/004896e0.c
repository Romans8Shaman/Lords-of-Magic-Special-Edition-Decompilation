
undefined4 __thiscall FUN_004896e0(void *this,undefined4 param_1,int param_2)

{
  if ((param_2 < 0) || (0x31 < param_2)) {
    return 0;
  }
  *(undefined4 *)((int)this + param_2 * 4 + 0x230cc) = param_1;
  return 1;
}


