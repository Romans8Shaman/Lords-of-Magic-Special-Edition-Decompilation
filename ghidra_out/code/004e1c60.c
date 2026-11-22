
void __cdecl op_armypercenttogrid(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pvVar2 = vm;
  iVar3 = FUN_0041be40(vm,&vm);
  if (iVar3 != 0) {
    if (((*(byte *)((int)vm + 0x30) & 0x10) == 0) || (iVar3 = *(int *)((int)vm + 0x540), iVar3 < 1))
    {
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 100;
        return;
      }
    }
    else {
      iVar4 = *(int *)((int)vm + 0x53c);
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar1 = *(int *)((int)pvVar2 + 0x50);
        iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar5;
        *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar5 * 8) = (iVar4 * 100) / iVar3;
        return;
      }
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
}


