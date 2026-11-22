
void __cdecl op_enumarmiesnotuseinplay(void *vm)

{
  int iVar1;
  uint uVar2;
  int *piStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar2 = 0;
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  FUN_00406c00(&DAT_005ae958,DAT_005577c8,uVar2,piStack_4,vm);
  return;
}


