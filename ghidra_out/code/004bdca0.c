
int __thiscall FUN_004bdca0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = (int)this + 0xce8;
  }
  else if (param_2 == 1) {
    iVar1 = (int)this + 0xcfc;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    iVar1 = (int)this + 0xd10;
  }
  if ((param_1 < 0) || (4 < param_1)) {
    return 0;
  }
  return iVar1 + param_1 * 4;
}


