
void __cdecl op_armythiefdex(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    iVar2 = 0;
    iVar4 = 0;
    if (0 < *(int *)((int)vm + 0x4c)) {
      iVar5 = 0;
      do {
        iVar3 = FUN_00525fc0((int *)((int)vm + iVar5 + 0xc4));
        if (iVar3 == 2) {
          FUN_00527e90((void *)((int)vm + iVar5 + 0xc4),3,&iStack_4);
          if (iVar2 < iStack_4) {
            iVar2 = iStack_4;
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x4c;
      } while (iVar4 < *(int *)((int)vm + 0x4c));
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar1 + 0x50);
      iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar5;
      *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
      *(int *)(iVar4 + 4 + iVar5 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


