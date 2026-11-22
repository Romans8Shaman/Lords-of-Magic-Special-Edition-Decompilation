
undefined4 FUN_00404da0(uint param_1,int param_2)

{
  undefined1 uVar1;
  void *this;
  int iVar2;
  uint local_4;
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (this == (void *)0x0) {
    return 0;
  }
  iVar2 = FUN_004ee130(this,param_2);
  FUN_004a9a60(&DAT_005ae958,&param_1,*(int *)((int)this + 0x1c));
  FUN_004a9a60(&DAT_005ae958,&local_4,iVar2);
  if (((param_1 & 0x200000) != 0) || (uVar1 = 8, (local_4 & 0x200000) != 0)) {
    uVar1 = 9;
  }
  *(short *)((int)this + 0xc2) = (short)iVar2;
  *(undefined1 *)((int)this + 0xc0) = uVar1;
  *(undefined1 *)((int)this + 0xc1) = 0;
  return 1;
}


