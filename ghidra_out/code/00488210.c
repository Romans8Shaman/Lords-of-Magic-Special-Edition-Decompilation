
void __cdecl op_reseteoturn(void *vm)

{
  void *pvVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  FUN_004d05e0(DAT_005a7b78,DAT_005aa160,DAT_005aa164);
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(float *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  puVar4 = &DAT_005af194;
  iVar2 = 0;
  do {
    if ((iVar2 < 0) || (0x1d83f < iVar2)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar4;
    }
    if (((puVar3 != (undefined *)0x0) && ((*(uint *)(puVar3 + 0x15d8) & 1) == 0)) &&
       (((byte)*(uint *)(puVar3 + 0x15d8) & 0x80) != 0x80)) {
      FUN_00487ed0(*(int *)(puVar3 + 0x15b0),uStack_10);
    }
    iVar2 = iVar2 + 0x1d84;
    puVar4 = puVar4 + 0x1d84;
  } while (iVar2 < 0xec20);
  FUN_005007e0(&DAT_00584ae8,1);
  return;
}


