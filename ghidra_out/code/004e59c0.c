
void __cdecl op_getlocationatscreenxy(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uStack_14;
  uint uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_c = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_10 = 0;
    fStack_c = fStack_4;
  }
  iVar2 = FUN_004026a0(&uStack_10,(uint *)&fStack_4,&uStack_14,(float *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uVar3 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      fStack_c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uVar3 = 0;
      fStack_c = fStack_4;
    }
    uVar3 = uVar3 & 0xff;
    if (uVar3 == 1) {
      fStack_8 = fStack_c;
    }
    else if (uVar3 == 2) {
      fStack_8 = (float)((int)fStack_c >> 8);
    }
    else {
      if (uVar3 != 4) {
        FUN_00404ab0(this,0xe);
        return;
      }
      lVar5 = __ftol((float10)fStack_c);
      fStack_8 = (float)lVar5;
    }
    iVar2 = FUN_004a6180(&DAT_005ae958,(int)fStack_8,(int)fStack_4);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


