
void __cdecl op_locatechampion(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  }
  else {
    puVar4 = FUN_0044c0c0((int)vm,&iStack_14);
    if (puVar4 == (undefined4 *)0x0) {
      if (*(int *)((int)pvVar2 + 0x54) == 0) {
        *(undefined4 *)((int)pvVar2 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar5;
        *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0xffffffff;
      }
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      uVar1 = puVar4[10];
      if (*(int *)((int)pvVar2 + 0x54) == 0) {
        *(undefined4 *)((int)pvVar2 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar5;
        *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
      }
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
        *(int *)(iVar3 + 4 + iVar5 * 8) = iStack_14;
        return;
      }
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  }
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


