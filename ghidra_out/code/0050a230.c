
undefined4 __thiscall FUN_0050a230(void *this,int *param_1)

{
  void *this_00;
  int local_8;
  char local_4 [4];
  
  FUN_0050a4b0((int)this);
  FUN_005397f0(this,4,1,param_1);
  FUN_005397f0((char *)((int)this + 4),4,1,param_1);
  FUN_005397f0((char *)((int)this + 8),4,1,param_1);
  if (DAT_005aa12c < 0x6b) {
    FUN_005397f0(local_4,4,1,param_1);
  }
  FUN_005397f0((char *)&local_8,4,1,param_1);
  while (local_8 != 0) {
    local_8 = local_8 + -1;
    this_00 = (void *)FUN_0050bfe0(&DAT_005d2cbc);
    if (this_00 == (void *)0x0) {
      return 0;
    }
    FUN_00509f50(this_00,param_1);
    *(undefined4 *)((int)this_00 + 0x14) = *(undefined4 *)((int)this + 0x84);
    *(void **)((int)this + 0x84) = this_00;
  }
  if (0x4d < DAT_005aa12c) {
    FUN_0049f240((void *)((int)this + 0x18),param_1);
    FUN_004bf100((void *)((int)this + 0x7c),param_1);
  }
  if (0x5a < DAT_005aa12c) {
    FUN_005397f0((char *)((int)this + 0xc),4,1,param_1);
  }
  if (DAT_005aa12c < 0x6b) {
    *(undefined4 *)((int)this + 0x14) = 10;
    return 1;
  }
  FUN_005397f0((char *)((int)this + 0x14),4,1,param_1);
  return 1;
}


