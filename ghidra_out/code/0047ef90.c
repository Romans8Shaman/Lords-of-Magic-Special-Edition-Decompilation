
undefined4 __thiscall FUN_0047ef90(void *this,int param_1,undefined4 param_2)

{
  if ((param_1 < 0) || (0xff < param_1)) {
    return 0;
  }
  *(undefined4 *)((int)this + param_1 * 0x1c + 0x10) = param_2;
  if (param_1 == 0x20) {
    *(char *)((int)this + 0x3aa) = (char)param_2;
  }
  return 1;
}


