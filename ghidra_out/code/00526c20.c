
undefined4 __thiscall FUN_00526c20(void *this,int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_005397f0(this,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_005397f0((char *)((int)this + 4),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_005397f0((char *)((int)this + 0xc),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_005397f0((char *)((int)this + 0x10),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  if (0x42 < DAT_005aa12c) {
    uVar1 = FUN_005397f0((char *)((int)this + 0x14),4,1,param_1);
    if (uVar1 != 1) {
      return 0;
    }
    uVar1 = FUN_005397f0((char *)((int)this + 0x18),4,1,param_1);
    if (uVar1 != 1) {
      return 0;
    }
  }
  if (0x50 < DAT_005aa12c) {
    uVar1 = FUN_005397f0((char *)((int)this + 8),4,1,param_1);
    if (uVar1 != 1) {
      return 0;
    }
  }
  return 1;
}


