
void __thiscall FUN_00484aa0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + param_1 * 0x1d84 + 0x5068;
  }
  if (iVar1 != 0) {
    if (param_2 != 0) {
      *(uint *)(iVar1 + 0x15d8) = *(uint *)(iVar1 + 0x15d8) | 2;
      return;
    }
    *(uint *)(iVar1 + 0x15d8) = *(uint *)(iVar1 + 0x15d8) & 0xfffffffd;
  }
  return;
}


