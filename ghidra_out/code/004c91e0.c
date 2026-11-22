
void __cdecl op_getscenarioproperty(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar2 != 4) {
        FUN_00404ab0(this,0xe);
        return;
      }
      lVar4 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar4;
    }
  }
  iVar1 = FUN_004c9030(&DAT_005aec60,(int)fStack_4,(uint *)&vm);
  if (iVar1 == 0) {
    vm = (void *)0x0;
    FUN_004d41c0(this,s_cannot_get_property_0055dac4);
  }
  iVar1 = FUN_004c9090((int)fStack_4);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 0x54) != 0) {
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(void **)(iVar1 + 4 + iVar3 * 8) = vm;
      return;
    }
  }
  else if (*(int *)((int)this + 0x54) != 0) {
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    iVar1 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(uint *)(iVar1 + 4 + iVar3 * 8) = -(uint)(vm != (void *)0x0);
    return;
  }
  *(undefined4 *)((int)this + 0x90) = 3;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


