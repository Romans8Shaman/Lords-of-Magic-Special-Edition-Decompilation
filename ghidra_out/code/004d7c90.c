
void __cdecl op_armyexpense(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_1c;
  int iStack_18;
  uint auStack_14 [2];
  int iStack_c;
  int iStack_8;
  
  pvVar1 = vm;
  iVar6 = 0;
  iVar5 = 0;
  iStack_1c = 0;
  iStack_18 = 0;
  iVar2 = FUN_0041be40(vm,&vm);
  if (((iVar2 != 0) && (iVar2 = FUN_004c1cf0((int)vm), iVar2 == 0)) &&
     (0 < *(int *)((int)vm + 0x4c))) {
    iVar2 = 0;
    do {
      uVar3 = FUN_00525f10((int)vm + iVar2 + 0xc4);
      if ((uVar3 == 0) &&
         (iVar4 = FUN_00522350(*(uint *)((int)vm + 0x28),iVar6,auStack_14), iVar4 != 0)) {
        iStack_1c = iStack_1c + ((int)auStack_14[0] >> 8);
        iVar5 = iVar5 + (iStack_8 >> 8);
        iStack_18 = iStack_18 + (iStack_c >> 8);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x4c;
    } while (iVar6 < *(int *)((int)vm + 0x4c));
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    iVar6 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar6;
    *(undefined4 *)(iVar2 + iVar6 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar6 * 8) = iVar5;
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar5;
    *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar5 * 8) = iStack_1c;
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)pvVar1 + 0x50);
  iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
  *(int *)((int)pvVar1 + 0x54) = iVar5;
  *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
  *(int *)(iVar2 + 4 + iVar5 * 8) = iStack_18;
  return;
}


