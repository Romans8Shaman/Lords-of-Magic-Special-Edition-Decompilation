
void __cdecl op_destroyartifacttype(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  int iStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
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
    fVar4 = fStack_4;
  }
  else if (uVar3 == 2) {
    fVar4 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar3 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar5 = __ftol((float10)fStack_4);
    fVar4 = (float)lVar5;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar1 = FUN_0041be40(this,&iStack_14);
  if (iVar1 != 0) {
    if ((-1 < (int)vm) && ((int)vm < *(int *)(iStack_14 + 0x4c))) {
      piVar2 = FUN_0042aec0((void *)(iStack_14 + 0xc4 + (int)vm * 0x4c),(int)fVar4);
      if (piVar2 == (int *)0x0) {
        FUN_004d41c0(this,s_no_such_artifact_00555da0);
        return;
      }
      if ((*(byte *)(piVar2 + 4) & 0x1f) != 0) {
        FUN_004282a0((void *)(iStack_14 + 0xc4 + (int)vm * 0x4c),*(undefined4 *)(iStack_14 + 0x28),
                     vm,piVar2[3],0);
      }
      FUN_00428110((void *)(iStack_14 + 0xc4 + (int)vm * 0x4c),piVar2[3]);
      return;
    }
    FUN_004d41c0(this,s_no_such_unit_00555df8);
  }
  return;
}


