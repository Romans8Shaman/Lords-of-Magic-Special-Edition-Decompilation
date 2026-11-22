
void __cdecl op_mountimp(void *vm)

{
  int iVar1;
  int iVar2;
  void *this;
  int iVar3;
  char cVar4;
  undefined4 unused_reg_1;
  undefined1 auStack_c [4];
  int iStack_8;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    cVar4 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    iStack_8 = *(int *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar4 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  iVar2 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar2 == 0) {
    if (cVar4 == '\b') {
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      iStack_8 = 0;
    }
  }
  else {
    iStack_8 = 0;
  }
  FUN_0049dd20(auStack_c,(int *)&PTR_DAT_0055cd50);
  if (iStack_8 != 0) {
    iVar2 = FUN_004923e0(&DAT_005a7b50,unused_reg_1,iStack_8,auStack_c);
    this = (void *)FUN_00492850(&DAT_005a7b50,iVar2);
    if (this != (void *)0x0) {
      FUN_0049ab90(this,1);
    }
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar1 = *(int *)((int)vm + 0x50);
      iVar3 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
}


