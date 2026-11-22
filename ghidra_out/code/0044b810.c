
undefined4 __thiscall FUN_0044b810(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  FUN_0044b660(this,param_1);
  if (DAT_005aa12c < 0x3c) {
    FUN_005397f0((char *)&param_1,4,1,piVar1);
    FUN_005397f0((char *)&param_1,4,1,piVar1);
    FUN_005397f0((char *)&param_1,4,1,piVar1);
    FUN_005397f0((char *)&param_1,4,1,piVar1);
  }
  FUN_005397f0((char *)((int)this + 0x14),4,1,piVar1);
  if (0x4e < DAT_005aa12c) {
    FUN_005397f0((char *)((int)this + 0x18),4,1,piVar1);
    FUN_005397f0((char *)((int)this + 0x1c),4,1,piVar1);
    FUN_005397f0((char *)((int)this + 0x20),4,1,piVar1);
    FUN_005397f0((char *)((int)this + 0x24),4,1,piVar1);
  }
  return 1;
}


