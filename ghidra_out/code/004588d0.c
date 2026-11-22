
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_setwalkheight(void *vm)

{
  int iVar1;
  uint uVar2;
  int iStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    iStack_4 = *(int *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    _DAT_005ae93c = (float)iStack_4;
    return;
  }
  if (uVar2 == 2) {
    _DAT_005ae93c = (float)iStack_4 * (float)_DAT_0054d6c8;
    return;
  }
  if (uVar2 == 4) {
    _DAT_005ae93c = (float)iStack_4;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


