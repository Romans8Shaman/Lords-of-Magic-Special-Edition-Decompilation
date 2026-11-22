
void __cdecl op_enumunitartifacts(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  int *piStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piVar4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar3 = 0;
    piVar4 = piStack_4;
  }
  iVar1 = FUN_0041da00((int)this);
  if (iVar1 == 0) {
    if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) goto LAB_0042a17d;
    *(undefined4 *)((int)this + 0x90) = 0x12;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  uVar3 = 0;
LAB_0042a17d:
  if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        piStack_4 = (int *)((int)piStack_4 >> 8);
      }
      else {
        if (uVar2 != 4) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          return;
        }
        lVar5 = __ftol((float10)(float)piStack_4);
        piStack_4 = (int *)lVar5;
      }
    }
    iVar1 = FUN_0041be40(this,&vm);
    if (iVar1 != 0) {
      if ((-1 < (int)piStack_4) && ((int)piStack_4 < *(int *)((int)vm + 0x4c))) {
        DAT_00555d74 = *(undefined4 *)((int)vm + 0x28);
        DAT_00555d70 = piStack_4;
        FUN_00428a30((void *)((int)vm + (int)piStack_4 * 0x4c + 0xc4),this,uVar3,piVar4);
        return;
      }
      FUN_004d41c0(this,s_no_such_unit_00555df8);
    }
  }
  return;
}


