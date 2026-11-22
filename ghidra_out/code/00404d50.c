
undefined4 FUN_00404d50(int param_1,int param_2)

{
  void *this;
  undefined4 uVar1;
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (this == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_004ee130(this,param_2);
  *(undefined1 *)((int)this + 0xc0) = 8;
  *(undefined1 *)((int)this + 0xc1) = 0;
  *(short *)((int)this + 0xc2) = (short)uVar1;
  return 1;
}


