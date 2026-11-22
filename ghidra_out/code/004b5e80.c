
void __cdecl op_ishost(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_005d1e84 == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = *(int *)(DAT_005d1e84 + 0x390);
    iVar2 = FUN_004b7dd0(DAT_005d1e84);
    uVar3 = (uint)(iVar1 == iVar2);
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
  *(uint *)(iVar1 + 4 + iVar2 * 8) = uVar3;
  return;
}


