
void __cdecl op_canwieldartifact(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  int iStack_14;
  int iStack_10;
  int aiStack_c [2];
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
  if (uVar3 == 1) {
    fVar5 = fStack_4;
  }
  else if (uVar3 == 2) {
    fVar5 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar3 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar6 = __ftol((float10)fStack_4);
    fVar5 = (float)lVar6;
  }
  iVar1 = FUN_0041bf10(this,(int *)&vm,&iStack_10);
  if (iVar1 == 0) {
    return;
  }
  this_00 = (void *)FUN_00429560(vm,(int)fVar5,&iStack_14);
  if ((this_00 == (void *)0x0) &&
     (this_00 = (void *)FUN_004298a0(&DAT_005aa12c,(int)fVar5,aiStack_c,&iStack_14),
     this_00 == (void *)0x0)) {
    FUN_004d41c0(this,s_artifact_not_found_00555de4);
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
    iVar1 = FUN_0042c460(this_00,*(int *)((int)vm + 0x28),iStack_10);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar2 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar4 * 8) = -(uint)(iVar1 != 0);
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


