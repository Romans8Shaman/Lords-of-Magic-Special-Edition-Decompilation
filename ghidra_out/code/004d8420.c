
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_enter_barter_callback(void *vm)

{
  int iVar1;
  undefined4 uStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    _DAT_005aa23c = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    _DAT_005aa240 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 6;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  _DAT_005aa23c = 0;
  _DAT_005aa240 = uStack_4;
  return;
}


