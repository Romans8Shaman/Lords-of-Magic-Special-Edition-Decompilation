
void __cdecl op_defenderlost_q(void *vm)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = FUN_0050b9d0(0x5aa12c);
  bVar3 = iVar1 != DAT_005aadb0;
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
  *(uint *)(iVar1 + 4 + iVar2 * 8) = bVar3 - 1;
  return;
}


