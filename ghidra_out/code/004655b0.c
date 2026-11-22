
void __cdecl op_getcombatselectnewplay(void *vm)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar3 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar4 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
  }
  else {
    if (((int)vm < 0) || (0xf < (int)vm)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = &DAT_005af194 + (int)vm * 0x1d84;
    }
    if (puVar5 == (undefined *)0x0) {
      return;
    }
    if (puVar5 == (undefined *)0xffffea20) {
      return;
    }
    uVar1 = *(undefined4 *)(puVar5 + 0x1a84);
    uVar2 = *(undefined4 *)(puVar5 + 0x1a88);
    if (*(int *)((int)pvVar3 + 0x54) != 0) {
      iVar6 = *(int *)((int)pvVar3 + 0x54) + -1;
      *(int *)((int)pvVar3 + 0x54) = iVar6;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar6 * 8) = uVar1;
      *(undefined4 *)(iVar4 + 4 + iVar6 * 8) = uVar2;
      return;
    }
    *(undefined4 *)((int)pvVar3 + 0x90) = 3;
  }
  FUN_004d4550(pvVar3);
  *(undefined4 *)((int)pvVar3 + 0x90) = 0;
  *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  return;
}


