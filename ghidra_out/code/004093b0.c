
void __cdecl op_getplayerretreatedlocation(void *vm)

{
  void *pvVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
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
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
  }
  else {
    if (((int)vm < 0) || (0xf < (int)vm)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = &DAT_005af194 + (int)vm * 0x1d84;
    }
    if (puVar3 == (undefined *)0x0) {
      if (*(int *)((int)pvVar1 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar4;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      iVar2 = FUN_00407380(&DAT_005ae958,(int)vm);
      if (*(int *)((int)pvVar1 + 0x54) != 0) {
        iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar5;
        iVar4 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
        *(int *)(iVar4 + 4 + iVar5 * 8) = iVar2;
        return;
      }
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  }
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
}


