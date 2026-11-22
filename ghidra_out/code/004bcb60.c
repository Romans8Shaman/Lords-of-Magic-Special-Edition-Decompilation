
undefined4 __thiscall FUN_004bcb60(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + param_1 * 0x88 + 0xd28;
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x14);
}


