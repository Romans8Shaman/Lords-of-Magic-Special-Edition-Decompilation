
void __cdecl op_getpageheight(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int *piVar3;
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
    *(undefined4 *)((int)this + 0x90) = 0xe;
    goto LAB_004daef0;
  }
  iVar2 = FUN_00491ec0(&DAT_005a7b50,(int)vm);
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_00492de0(&DAT_005a7b50,(int)vm);
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
    }
    if (iVar2 != 0) goto LAB_004daec2;
    FUN_004d41c0(this,s_getpageheight___unknown_page_005726f8);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar2 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
      return;
    }
  }
  else {
LAB_004daec2:
    uVar1 = *(undefined4 *)(iVar2 + 8);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_004daef0:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


