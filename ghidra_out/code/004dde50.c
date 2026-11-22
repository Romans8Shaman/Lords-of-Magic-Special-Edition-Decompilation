
void __cdecl op_getxywhdata(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  puVar3 = (undefined4 *)FUN_00492910(&DAT_005a7b50,(int)vm);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_004d41c0(this,s_no_xywh_0057289c);
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar2 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
    }
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar2 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
    }
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar2 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
    }
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
    }
    else {
      iVar2 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
    }
  }
  uVar1 = *puVar3;
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  uVar1 = puVar3[1];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  FUN_0041d1d0(this,1,puVar3[2]);
  FUN_0041d1d0(this,1,puVar3[3]);
  return;
}


