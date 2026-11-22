
void __cdecl op_getcombatselectionbits(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
    FUN_004d41c0(vm,s_not_in_combat_005743c4);
    return;
  }
  uVar4 = 0;
  for (iVar2 = FUN_004fbe60(&DAT_005ae974,0,0); iVar2 != 0;
      iVar2 = FUN_004fbe60(&DAT_005ae974,iVar2,0)) {
    iVar3 = FUN_00407d50(iVar2);
    if (((iVar3 == 0) && (*(int *)(iVar2 + 0x48) == iVar1)) &&
       ((*(byte *)(iVar2 + 0x30) & 0x20) != 0)) {
      uVar4 = uVar4 | 1 << (*(byte *)(iVar2 + 0x5ac) & 0x1f);
    }
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)vm + 0x50);
  iVar2 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar2;
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(uint *)(iVar1 + 4 + iVar2 * 8) = uVar4;
  return;
}


