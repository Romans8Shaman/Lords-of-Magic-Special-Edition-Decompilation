
void __cdecl op_enumunitmodifiers(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iStack_8;
  int *piStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar3 = 0;
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  iVar2 = FUN_0041bf10(pvVar1,&iStack_8,(int *)&vm);
  if (iVar2 != 0) {
    FUN_005280f0((void *)(iStack_8 + 0xc4 + (int)vm * 0x4c),pvVar1,uVar3,piStack_4);
  }
  return;
}


