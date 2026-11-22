
void __cdecl op_setdialogdict(void *vm)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar3 = 0;
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  if ((char)uVar3 != '\0') {
    iVar2 = FUN_004906d0(pvVar1,(int *)&vm);
    if (iVar2 != 0) {
      *(undefined4 *)((int)vm + 0x34) = uVar3;
      *(undefined4 *)((int)vm + 0x38) = uStack_4;
    }
  }
  return;
}


