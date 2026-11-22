
void __cdecl op_currentplay(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((DAT_005577c8 < 0) || (0xf < DAT_005577c8)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_005af194 + DAT_005577c8 * 0x1d84;
  }
  if ((puVar3 != (undefined *)0x0) && (puVar3 != (undefined *)0xffffea20)) {
    uVar1 = *(undefined4 *)(puVar3 + 0x15f0);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar4 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar4;
      iVar2 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
}


