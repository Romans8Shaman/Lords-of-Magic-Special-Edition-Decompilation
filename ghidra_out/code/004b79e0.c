
void __thiscall FUN_004b79e0(void *this,int param_1,undefined4 param_2)

{
  void *this_00;
  int iVar1;
  
  this_00 = (void *)((int)this + 0x5068);
  iVar1 = 0x10;
  do {
    if (*(int *)((int)this_00 + 0x15dc) == param_1) {
      FUN_004bbf20(this_00,param_2);
    }
    this_00 = (void *)((int)this_00 + 0x1d84);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


