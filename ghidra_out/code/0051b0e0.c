
void __cdecl op_findlightlevelrange(void *vm)

{
  int iVar1;
  int iVar2;
  int iStack_8;
  int iStack_4;
  
  FUN_0051b020(&DAT_005876d0,&iStack_8,&iStack_4);
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)vm + 0x50);
    iVar2 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(int *)(iVar1 + 4 + iVar2 * 8) = iStack_8;
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar2;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(int *)(iVar1 + 4 + iVar2 * 8) = iStack_4;
  return;
}


