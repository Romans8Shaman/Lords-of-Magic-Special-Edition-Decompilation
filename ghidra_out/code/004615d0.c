
void __cdecl op_numdefenderunits(void *vm)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = &DAT_005cce28;
  do {
    if (*piVar2 < 0) break;
    piVar2 = piVar2 + 3;
    iVar4 = iVar4 + 1;
  } while ((int)piVar2 < 0x5ccedc);
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
  *(int *)(iVar1 + 4 + iVar3 * 8) = iVar4;
  return;
}


