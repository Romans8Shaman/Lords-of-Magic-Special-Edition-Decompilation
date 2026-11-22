
void __cdecl op_getplayerindicatoraura(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = vm;
  iVar3 = FUN_004bdce0(vm,&vm);
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)((int)vm + 8);
    if (*(int *)((int)pvVar2 + 0x54) == 0) {
      *(undefined4 *)((int)pvVar2 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
    }
    uVar1 = *(undefined4 *)vm;
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
      return;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
}


