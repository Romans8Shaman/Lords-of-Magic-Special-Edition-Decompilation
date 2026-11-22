
void __thiscall FUN_004bee20(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  
  this_00 = (void *)((int)this + 0xda4);
  iVar1 = 0x10;
  do {
    FUN_004bee50(this_00,param_1);
    this_00 = (void *)((int)this_00 + 0x88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


