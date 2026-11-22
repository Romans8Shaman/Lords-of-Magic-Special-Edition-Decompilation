
void __cdecl op_getcitycombatscale(void *vm)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_c [2];
  undefined4 uStack_4;
  
  iVar1 = FUN_00505a50(&DAT_00584ae8,auStack_c);
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_failed_005729c8);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
      return;
    }
  }
  else {
    uStack_4 = auStack_c[0];
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar1 = *(int *)((int)vm + 0x50);
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = auStack_c[0];
      return;
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


