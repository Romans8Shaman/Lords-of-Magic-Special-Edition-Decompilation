
void __cdecl op_specifycurrentartifact(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  int aiStack_c [2];
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
  if (uVar2 == 1) {
    fVar3 = fStack_4;
  }
  else if (uVar2 == 2) {
    fVar3 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar2 != 4) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    lVar4 = __ftol((float10)fStack_4);
    fVar3 = (float)lVar4;
  }
  iVar1 = FUN_0041bf10(this,(int *)&vm,aiStack_c);
  if (iVar1 != 0) {
    iVar1 = FUN_00428840((void *)((int)vm + aiStack_c[0] * 0x4c + 0xc4),(int)fVar3);
    if (iVar1 == 0) {
      FUN_004d41c0(this,s_artifact_not_found_00555de4);
      return;
    }
    DAT_00555d74 = *(undefined4 *)((int)vm + 0x28);
    DAT_00555d70 = aiStack_c[0];
    DAT_00555d6c = fVar3;
    DAT_005788c4 = iVar1;
  }
  return;
}


