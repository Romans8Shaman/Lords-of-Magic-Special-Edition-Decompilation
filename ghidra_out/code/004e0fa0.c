
void __cdecl op_xprod(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,&fStack_1c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,&fStack_18);
  if (iVar1 != 0) {
    FUN_0040adb0(this,&uStack_8);
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,&fStack_14);
    if (iVar1 != 0) {
      FUN_0040adb0(this,&uStack_8);
      iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,(float *)&vm);
      if (iVar1 != 0) {
        FUN_0040adb0(this,&uStack_8);
        iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,&fStack_20);
        if (iVar1 != 0) {
          FUN_0040adb0(this,&uStack_8);
          iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_10,(uint *)&fStack_c,&fStack_24);
          if (iVar1 != 0) {
            fStack_10 = (float)vm * fStack_14 - fStack_24 * fStack_1c;
            fStack_4 = fStack_20 * fStack_1c - (float)vm * fStack_18;
            fStack_c = fStack_24 * fStack_18 - fStack_20 * fStack_14;
            if (*(int *)((int)this + 0x54) == 0) {
              FUN_00404ab0(this,3);
            }
            else {
              iVar1 = *(int *)((int)this + 0x50);
              iVar2 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar2;
              *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
              *(float *)(iVar1 + 4 + iVar2 * 8) = fStack_4;
            }
            fStack_4 = fStack_10;
            FUN_0041d1d0(this,4,fStack_10);
            fStack_4 = fStack_c;
            FUN_0041d1d0(this,4,fStack_c);
            return;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


