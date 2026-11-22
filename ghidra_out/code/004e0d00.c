
void __cdecl op_getmodescale(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar3 != 4) {
        FUN_00404ab0(this,0xe);
        return;
      }
      lVar4 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar4;
    }
  }
  iVar1 = FUN_00505a00(&DAT_00584ae8,(int)fStack_4,&vm);
  if (iVar1 == 0) {
    FUN_004d41c0(this,s_getmodescale_failed_005729b4);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
      return;
    }
  }
  else if (*(int *)((int)this + 0x54) != 0) {
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
    *(void **)(iVar1 + 4 + iVar2 * 8) = vm;
    return;
  }
  *(undefined4 *)((int)this + 0x90) = 3;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


