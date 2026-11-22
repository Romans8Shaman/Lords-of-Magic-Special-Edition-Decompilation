
void __cdecl op_setbarterslot(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  void *this_00;
  float fVar4;
  longlong lVar5;
  undefined1 auStack_20 [4];
  short asStack_1c [2];
  short asStack_18 [2];
  undefined1 auStack_14 [4];
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
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
  fVar4 = fStack_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar1 != 4) goto LAB_00433029;
      lVar5 = __ftol((float10)fStack_4);
      fVar4 = (float)lVar5;
    }
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
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
    fVar3 = fStack_4;
  }
  else if (uVar1 == 2) {
    fVar3 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar1 != 4) {
LAB_00433029:
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar5 = __ftol((float10)fStack_4);
    fVar3 = (float)lVar5;
  }
  this_00 = (void *)FUN_00432a60(&DAT_00584cd4,(int)fVar3,(int)vm);
  if (this_00 == (void *)0x0) {
    FUN_004d41c0(this,s_setbarterslot___no_such_slot_00556038);
    return;
  }
  FUN_00432b30((uint)fVar4,(int *)auStack_14,(uint *)asStack_18,(uint *)asStack_1c,
               (uint *)auStack_20);
  FUN_00432d40(this_00,auStack_14[0],asStack_18[0],asStack_1c[0],auStack_20[0]);
  return;
}


