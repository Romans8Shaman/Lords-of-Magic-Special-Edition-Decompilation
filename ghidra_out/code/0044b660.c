
undefined4 __thiscall FUN_0044b660(void *this,int *param_1)

{
  int *piVar1;
  char local_8 [8];
  
  piVar1 = param_1;
  FUN_005397f0((char *)((int)this + 8),4,1,param_1);
  if (DAT_0055b1b0 < 0x47) {
    FUN_005397f0((char *)&param_1,4,1,piVar1);
  }
  FUN_005397f0((char *)((int)this + 4),4,1,piVar1);
  if (DAT_005aa12c < 0x65) {
    FUN_005397f0((char *)&DAT_00579278,0x1f,1,piVar1);
  }
  if (DAT_005aa12c < 0x3e) {
    FUN_005397f0(local_8,8,1,piVar1);
  }
  if (0x40 < DAT_005aa12c) {
    if (DAT_0055b1b0 < 0x48) {
      FUN_005397f0((char *)&param_1,4,1,piVar1);
    }
    FUN_005397f0((char *)((int)this + 0x10),4,1,piVar1);
  }
  return 1;
}


