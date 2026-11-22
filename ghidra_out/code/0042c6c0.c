
void __cdecl op_canuseleftartifact(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iStack_8;
  int iStack_4;
  
  iVar1 = FUN_00530200(&DAT_00584ae8,&iStack_4,&iStack_8);
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_no_current_unit_00555e38);
  }
  else {
    this = (void *)FUN_00428c10(iStack_4 + 0xc4 + iStack_8 * 0x4c);
    if (this != (void *)0x0) {
      iVar1 = FUN_0042c500(this,*(int *)(iStack_4 + 0x28),iStack_8,1);
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar3 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar3;
        iVar2 = *(int *)((int)vm + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(uint *)(iVar2 + 4 + iVar3 * 8) = -(uint)(iVar1 != 0);
        return;
      }
      goto LAB_0042c77c;
    }
  }
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar2 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar2;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
    return;
  }
LAB_0042c77c:
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


