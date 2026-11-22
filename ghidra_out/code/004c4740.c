
void __cdecl op_enumquests(void *vm)

{
  int iVar1;
  int *piStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    FUN_004c4060(&DAT_005aeedc,*(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8),
                 *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8),vm);
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 6;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  FUN_004c4060(&DAT_005aeedc,0,piStack_4,vm);
  return;
}


