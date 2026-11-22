
undefined4 __thiscall FUN_004fbb10(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  tagPOINT tStack_8;
  
  FUN_004f5cb0(this,param_2);
  iVar1 = 0;
  if (*(int *)((int)this + 0x24) < 1) {
    return 0;
  }
  pbVar2 = (byte *)(*(int *)((int)this + 0x1c) + 0x30);
  do {
    if ((*pbVar2 & 2) != 0) {
      iVar1 = iVar1 * 0x58;
      FUN_004ba1c0((void *)(*(int *)((int)this + 0x1c) + iVar1),1);
      *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x1c + iVar1) = param_1;
      FUN_004f5a90((void *)(*(int *)((int)this + 0x1c) + iVar1),DAT_0055d648);
      FUN_004f5b30((void *)(*(int *)((int)this + 0x1c) + iVar1),4);
      *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x44 + iVar1) = 4;
      (/*IC:004fbb9d*/**(code **)(*(int *)(*(int *)((int)this + 0x1c) + iVar1) + 0x1c))();
      FUN_004f5b70((void *)(*(int *)((int)this + 0x1c) + iVar1),0);
      (/*IC:004fbbb5*/**(code **)(*(int *)(*(int *)((int)this + 0x1c) + iVar1) + 0x1c))();
      *(int *)(*(int *)((int)this + 0x1c) + 0x4c + iVar1) = param_2;
      *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x48 + iVar1) = DAT_005a9de0;
      *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x50 + iVar1) = 1;
      GetCursorPos(&tStack_8);
      *(LONG *)(*(int *)((int)this + 0x1c) + 0xc + iVar1) = tStack_8.x;
      *(LONG *)(*(int *)((int)this + 0x1c) + 0x10 + iVar1) = tStack_8.y;
      DAT_005a9ddc = 1;
      FUN_004f62f0((int)this);
      return 1;
    }
    iVar1 = iVar1 + 1;
    pbVar2 = pbVar2 + 0x58;
  } while (iVar1 < *(int *)((int)this + 0x24));
  return 0;
}


