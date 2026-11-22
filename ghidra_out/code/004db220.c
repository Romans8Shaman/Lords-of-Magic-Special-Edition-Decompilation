
void __cdecl op_getpagefilename(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    goto LAB_004db347;
  }
  iVar1 = FUN_00491ec0(&DAT_005a7b50,(int)vm);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_00492de0(&DAT_005a7b50,(int)vm);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
    }
    if (iVar1 != 0) goto LAB_004db2f2;
    FUN_004d41c0(this,s_getpagefilename___unknown_page_0057276c);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
      return;
    }
  }
  else {
LAB_004db2f2:
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
        return;
      }
    }
    else if (*(int *)((int)this + 0x54) != 0) {
      iVar3 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 8;
      *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_004db347:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


