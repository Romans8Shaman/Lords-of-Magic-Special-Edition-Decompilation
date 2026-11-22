
void __cdecl op_setdiplomaticlevel(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  int iStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
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
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar4 = __ftol((float10)fStack_4);
    fVar3 = (float)lVar4;
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
  iVar1 = FUN_004bdce0(this,&iStack_14);
  if (iVar1 != 0) {
    if (((int)vm < 0) || (0xf < (int)vm)) {
      iVar1 = 0;
    }
    else {
      iVar1 = iStack_14 + 0xd28 + (int)vm * 0x88;
    }
    if (iVar1 == 0) {
      FUN_004d41c0(this,s_no__p2__player_0057398c);
      return;
    }
    *(float *)(iVar1 + 0xc) = fVar3;
    if ((int)fVar3 < 0xb5) {
      FUN_0049f410((void *)(iVar1 + 0x18),0x32);
      return;
    }
    if ((int)fVar3 < 0xbf) {
      FUN_0049f410((void *)(iVar1 + 0x18),0x37);
      return;
    }
    if ((int)fVar3 < 0xd3) {
      FUN_0049f410((void *)(iVar1 + 0x18),0x3c);
      return;
    }
    FUN_0049f410((void *)(iVar1 + 0x18),((0xdc < (int)fVar3) - 1 & 0xfffffffb) + 0x46);
  }
  return;
}


