
void __cdecl op_scrolling_get_percent_nonthief(void *vm)

{
  int iVar1;
  undefined4 uStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    DAT_005a7c7c = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    DAT_005a7c80 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 6;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  DAT_005a7c7c = 0;
  DAT_005a7c80 = uStack_4;
  return;
}


