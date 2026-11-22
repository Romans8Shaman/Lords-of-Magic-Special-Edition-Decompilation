
void __cdecl op_button(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int iStack_c;
  uint uStack_8;
  int iStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    fStack_10 = *(float *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    iStack_c = *(int *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    iStack_c = iStack_4;
    fStack_10 = 0.0;
  }
  iVar1 = FUN_004026a0((uint *)&fStack_10,(uint *)&vm,(uint *)&fStack_14,&fStack_18);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar1 = *(int *)(DAT_005a7b54 + (int)vm * 8);
  if (iVar1 == 2) {
    iVar1 = FUN_00492e10(&DAT_005a7b50,(int)vm);
  }
  else if (iVar1 == 4) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      iStack_4 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_18,(uint *)&fStack_10,&fStack_14);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      goto LAB_004dd6c6;
    }
    iVar1 = FUN_00492ee0(&DAT_005a7b50,(int)fStack_18,(int)vm);
  }
  else {
    if (iVar1 != 5) {
      FUN_004d41c0(this,s_bad_arguments_00572864);
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      cVar4 = (char)*(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      iVar1 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      cVar4 = '\0';
      iVar1 = iStack_4;
    }
    iVar2 = FUN_0041da00((int)this);
    if (iVar2 == 0) {
      if (cVar4 != '\b') {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        iVar1 = 0;
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      iStack_4 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&fStack_18,(uint *)&fStack_14,&fStack_10);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    iVar1 = FUN_00492fd0(&DAT_005a7b50,(int)fStack_18,iVar1,(int)vm);
  }
  if (*(int *)((int)this + 0x54) != 0) {
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    iVar2 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar3 * 8) = iVar1;
    return;
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_004dd6c6:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


