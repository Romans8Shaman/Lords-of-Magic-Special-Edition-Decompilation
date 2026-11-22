
void __thiscall FUN_00487650(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x10) == 1) {
    iVar1 = ((param_1 * 0x19) / *(int *)((int)this + 8)) * 4;
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    else if (99 < iVar1) {
      iVar1 = 99;
    }
    if (*(int *)((int)this + 0xc) < iVar1) {
      FUN_004876c0(this,iVar1);
      *(int *)((int)this + 0xc) = iVar1;
      if (DAT_005851a0 != 0) {
        FUN_0048a510();
      }
    }
  }
  return;
}


