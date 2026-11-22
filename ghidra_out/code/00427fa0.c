
undefined4 __thiscall FUN_00427fa0(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_005397f0(this,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)((int)this + 4),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)((int)this + 0xc),4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  if (DAT_005aa12c < 0x4b) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    uVar2 = FUN_005397f0((char *)((int)this + 8),4,1,param_1);
    if (uVar2 != 1) {
      return 0;
    }
  }
  if (DAT_005aa12c < 0x58) {
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  else {
    uVar2 = FUN_005397f0((char *)((int)this + 0x10),4,1,param_1);
    if (uVar2 != 1) {
      return 0;
    }
  }
  iVar1 = *(int *)((int)this + 0xc) + 1;
  if (DAT_005788c0 <= iVar1) {
    DAT_005788c0 = iVar1;
  }
  return 1;
}


