
void __cdecl op_knownanywhere_q(void *vm)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar4 = 0;
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  iVar1 = *(int *)((int)vm + 0x60);
  if (iVar1 < *(int *)((int)vm + 100)) {
    do {
      puVar2 = FUN_004d31b0(vm,*(int **)(*(int *)((int)vm + 0x5c) + iVar1 * 4),uVar4,uStack_4);
      if (puVar2 != (uint *)0x0) goto LAB_004cc8a1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)vm + 100));
  }
  puVar2 = (uint *)0x0;
LAB_004cc8a1:
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
  *(uint *)(iVar1 + 4 + iVar3 * 8) = -(uint)(puVar2 != (uint *)0x0);
  return;
}


