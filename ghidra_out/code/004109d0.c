
void __cdecl op_rerunbrain(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  int iVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  int aiStack_c [2];
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  fVar3 = fStack_4;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fVar3 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        goto LAB_00410a8a;
      }
      lVar5 = __ftol((float10)fStack_4);
      fVar3 = (float)lVar5;
    }
  }
  this_00 = (void *)FUN_0040f4e0(&DAT_005aeed0,(int)fVar3);
  if (this_00 != (void *)0x0) {
    aiStack_c[0] = 0;
    vm = (void *)0xffffffff;
    FUN_0040eec0(this_00,aiStack_c,(int *)&vm);
    FUN_0040eb70(this_00,this,aiStack_c[0],vm);
    return;
  }
  FUN_004d41c0(this,s_no_such_brain_005557b8);
  if (*(int *)((int)this + 0x54) != 0) {
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    iVar1 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
    return;
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_00410a8a:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


