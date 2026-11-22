
void __cdecl op_setremapdata(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  longlong lVar6;
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
  fVar5 = fStack_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar5 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar1 != 4) goto LAB_0049449d;
      lVar6 = __ftol((float10)fStack_4);
      fVar5 = (float)lVar6;
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
LAB_0049449d:
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar6 = __ftol((float10)fStack_4);
    fVar3 = (float)lVar6;
  }
  pfVar4 = (float *)FUN_004928e0(&DAT_005a7b50,(int)fVar3);
  if (pfVar4 == (float *)0x0) {
    FUN_004d41c0(this,s_no_remap_object_0055c5c4);
    return;
  }
  iVar2 = FUN_00491c20(&DAT_005a7b50,(int)vm);
  if (iVar2 == 0) {
    FUN_004d41c0(this,s_no_object_to_remap_0055c5b0);
    return;
  }
  iVar2 = FUN_004b9e00(&DAT_005cd34c,(int)fVar5);
  if (iVar2 == 0) {
    FUN_004d41c0(this,s_no_palette_0055c5a4);
    return;
  }
  *pfVar4 = fVar5;
  pfVar4[1] = (float)vm;
  return;
}


