
void __cdecl op_setmultiplayerflag(void *vm)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *pvStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      FUN_004b6520((int)pvStack_4 >> 8);
      return;
    }
    if (uVar2 == 4) {
      lVar3 = __ftol((float10)(float)pvStack_4);
      FUN_004b6520((int)lVar3);
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    pvStack_4 = vm;
  }
  FUN_004b6520(pvStack_4);
  return;
}


