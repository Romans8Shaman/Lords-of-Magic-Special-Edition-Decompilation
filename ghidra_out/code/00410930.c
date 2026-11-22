
void __cdecl op_getarmybrainname(void *vm)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  int iVar4;
  int iStack_4;
  
  this = vm;
  iVar3 = FUN_0041be40(vm,&vm);
  if (iVar3 != 0) {
    iVar3 = FUN_004102e0(vm,&iStack_4);
    if (iVar3 == 0) {
      FUN_004d41c0(this,s_no_such_brain_005557b8);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar3 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
        return;
      }
    }
    else {
      uVar1 = *(undefined4 *)(iVar3 + 0x14);
      uVar2 = *(undefined4 *)(iVar3 + 0x18);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar3 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = uVar1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar2;
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
}


