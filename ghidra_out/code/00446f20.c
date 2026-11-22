
void __cdecl op_getcurrentturnexp(void *vm)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iStack_4;
  
  pvVar3 = vm;
  iVar4 = FUN_004409e0(vm,&vm);
  if (iVar4 != 0) {
    iVar4 = *(int *)((int)vm + 0x44);
    piVar5 = (int *)FUN_00446be0(vm,&iStack_4);
    iVar1 = *piVar5;
    if (*(int *)((int)pvVar3 + 0x54) != 0) {
      iVar2 = *(int *)((int)pvVar3 + 0x50);
      iVar6 = *(int *)((int)pvVar3 + 0x54) + -1;
      *(int *)((int)pvVar3 + 0x54) = iVar6;
      *(undefined4 *)(iVar2 + iVar6 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar6 * 8) = iVar1 + (iVar4 >> 8) * -0x100 >> 8;
      return;
    }
    *(undefined4 *)((int)pvVar3 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  return;
}


