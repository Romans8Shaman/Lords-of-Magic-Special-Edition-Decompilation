
void __cdecl op_getbuildingmaxexp(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iStack_4;
  
  pvVar2 = vm;
  iVar3 = FUN_004409e0(vm,&vm);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00446d50(vm,&iStack_4);
    iVar3 = *piVar4;
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar5;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar5 * 8) = iVar3 >> 8;
      return;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
}


