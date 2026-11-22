
void __thiscall FUN_004f00b0(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  
  FUN_004efd70(&DAT_005aee6c,param_1);
  this_00 = (void *)((int)this + 0x5068);
  iVar1 = 0x10;
  do {
    FUN_004bee50((void *)((int)this_00 + 0x34),param_1);
    FUN_004bee20(this_00,param_1);
    this_00 = (void *)((int)this_00 + 0x1d84);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


