
undefined4 __thiscall FUN_0048a080(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 != *(int *)((int)this + 0x228a8)) {
    return 0;
  }
  if ((param_1 < 0) || (0xf < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + param_1 * 0x1d84 + 0x5068;
  }
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x15d8) = *(uint *)(iVar1 + 0x15d8) | 0x10000;
  return 1;
}


