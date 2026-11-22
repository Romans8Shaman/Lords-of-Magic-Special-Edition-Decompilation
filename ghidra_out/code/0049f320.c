
void __thiscall FUN_0049f320(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 < 0) || (100 < param_3)) {
    param_3 = 0x32;
  }
  if ((-1 < param_1) && (param_1 < 10)) {
    iVar1 = *(int *)((int)this + param_1 * 4) + param_2;
    *(int *)((int)this + param_1 * 4) = iVar1;
    if (iVar1 < param_3) {
      *(int *)((int)this + param_1 * 4) = param_3;
      return;
    }
    if (100 < iVar1) {
      *(undefined4 *)((int)this + param_1 * 4) = 100;
    }
  }
  return;
}


