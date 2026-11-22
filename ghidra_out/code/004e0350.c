
void __cdecl op_enumplayerbuildings(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int *this_00;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  float fStack_18;
  uint uStack_14;
  uint uStack_10;
  int *piStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  FUN_0040adb0(vm,&uStack_10);
  iVar2 = FUN_0041da00((int)this);
  if (iVar2 == 0) {
    if (((char)uStack_10 == '\x06') && ((uStack_10 & 0x100) == 0)) goto LAB_004e0391;
    FUN_00404ab0(this,0x12);
  }
  uStack_10 = 0;
LAB_004e0391:
  uVar5 = uStack_10;
  if (((char)uStack_10 == '\x06') && ((uStack_10 & 0x100) == 0)) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_14,&fStack_18);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    for (this_00 = (int *)FUN_004fbe60(&DAT_005ae974,0,2); this_00 != (int *)0x0;
        this_00 = (int *)FUN_004fbe60(&DAT_005ae974,(int)this_00,2)) {
      pvVar3 = (void *)(/*IC:004e0439*/**(code **)(*this_00 + 0x3c))(this_00);
      if (pvVar3 == vm) {
        iVar2 = this_00[10];
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 0x50);
          iVar4 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar4;
          *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
          uVar5 = uStack_10;
        }
        FUN_004d05e0(this,uVar5,piStack_c);
        iVar2 = *(int *)((int)this + 0x6c);
        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
        if (iVar2 != 0) {
          return;
        }
      }
    }
  }
  return;
}


