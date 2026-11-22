
void __cdecl op_canwieldartifactwithhand(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  void *pvStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  float fStack_14;
  float fStack_10;
  int iStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_14);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_14,&fStack_10);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar1 = FUN_0041bf10(this,(int *)&pvStack_24,&iStack_18);
  if (iVar1 != 0) {
    this_00 = (int *)FUN_00429560(pvStack_24,(int)vm,&iStack_20);
    if (this_00 == (int *)0x0) {
      this_00 = (int *)FUN_004298a0(&DAT_005aa12c,(int)vm,&iStack_c,&iStack_20);
      if (this_00 == (int *)0x0) {
        FUN_004d41c0(this,s_artifact_not_found_00555de4);
        if (*(int *)((int)this + 0x54) == 0) {
          FUN_00404ab0(this,3);
          return;
        }
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        return;
      }
    }
    iVar1 = FUN_00427b80(*this_00);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        return;
      }
    }
    else if ((uStack_1c & *(uint *)(iVar1 + 0x18)) == 0) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        return;
      }
    }
    else {
      iVar1 = FUN_0042c460(this_00,*(int *)((int)pvStack_24 + 0x28),iStack_18);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(uint *)(iVar2 + 4 + iVar3 * 8) = -(uint)(iVar1 != 0);
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


