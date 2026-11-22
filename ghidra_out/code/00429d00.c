
void __cdecl op_getartifactdata(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  void *this_00;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int aiStack_c [2];
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar3 = fStack_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar3 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar1 != 4) goto LAB_00429e39;
      lVar5 = __ftol((float10)fStack_4);
      fVar3 = (float)lVar5;
    }
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    fVar4 = fStack_4;
  }
  else if (uVar1 == 2) {
    fVar4 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar1 != 4) {
LAB_00429e39:
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    lVar5 = __ftol((float10)fStack_4);
    fVar4 = (float)lVar5;
  }
  iVar2 = FUN_0041bf10(this,aiStack_c,(int *)&vm);
  if (iVar2 != 0) {
    this_00 = (void *)FUN_00428840((void *)(aiStack_c[0] + 0xc4 + (int)vm * 0x4c),(int)fVar4);
    if (this_00 == (void *)0x0) {
      FUN_004d41c0(this,s_artifact_not_found_00555de4);
      return;
    }
    FUN_00428f70(this_00,this,(int)fVar3);
  }
  return;
}


