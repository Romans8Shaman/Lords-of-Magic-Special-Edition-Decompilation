
undefined4 __thiscall FUN_00508190(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    return 0;
  }
  iVar2 = 0;
  do {
    iVar1 = *(int *)((int)this + (iVar2 + param_1 * 0x32) * 4 + 0x68);
    if (iVar2 < 3) {
      if (0 < iVar1) {
        return 1;
      }
    }
    else if (iVar1 != -1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x32);
  return 0;
}


