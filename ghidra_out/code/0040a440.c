
void __cdecl op_enumconetargetarmies(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_28;
  uint uStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  int *piStack_c;
  uint uStack_8;
  int *piStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_10 = 0;
    piStack_c = piStack_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_1c,&fStack_20);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_28,(uint *)&fStack_20,&fStack_1c);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_24,(uint *)&fStack_20,&fStack_1c);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar2 = 0;
  do {
    iVar3 = FUN_00409f70(&DAT_005ae958,uStack_28,(int)vm,iVar2,&iStack_14,&iStack_18);
    if ((((iVar3 != -1) && (iVar3 = FUN_004a8330(&DAT_005ae958,iVar3,0), iVar3 != 0)) &&
        (iVar4 = FUN_00407d50(iVar3), iVar4 == 0)) && (*(uint *)(iVar3 + 0x48) != uStack_24)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x28);
      if (*(int *)((int)this + 0x54) == 0) {
        *(undefined4 *)((int)this + 0x90) = 3;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 0x50);
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
      }
      FUN_004d05e0(this,uStack_10,piStack_c);
      iVar3 = *(int *)((int)this + 0x6c);
      *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
      if (iVar3 != 0) {
        return;
      }
    }
    iVar2 = iVar2 + 1;
    if (0x18 < iVar2) {
      return;
    }
  } while( true );
}


