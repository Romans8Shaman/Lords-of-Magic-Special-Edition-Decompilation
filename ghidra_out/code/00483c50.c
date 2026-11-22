
undefined4 __thiscall FUN_00483c50(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + param_1 * 0x1d84 + 0x5068;
  }
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar1 + 0x15b8);
}


