
void __thiscall FUN_0049f370(void *this,int param_1,int param_2,int param_3)

{
  if ((param_3 < 0) || (100 < param_3)) {
    param_3 = 0x32;
  }
  if ((-1 < param_1) && (param_1 < 10)) {
    if (param_2 < param_3) {
      *(int *)((int)this + param_1 * 4) = param_3;
      return;
    }
    if (100 < param_2) {
      param_2 = 100;
    }
    *(int *)((int)this + param_1 * 4) = param_2;
  }
  return;
}


