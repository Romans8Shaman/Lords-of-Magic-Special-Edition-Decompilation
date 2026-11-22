
void __cdecl op_unitexpense(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_18;
  uint auStack_14 [2];
  int iStack_c;
  int iStack_8;
  
  pvVar1 = vm;
  iVar7 = 0;
  iVar5 = 0;
  iVar6 = 0;
  iVar2 = FUN_0041bf10(vm,(int *)&vm,&iStack_18);
  if (iVar2 != 0) {
    iVar2 = FUN_004c1cf0((int)vm);
    if (iVar2 == 0) {
      uVar3 = FUN_00525f10((int)vm + iStack_18 * 0x4c + 0xc4);
      if (uVar3 == 0) {
        iVar2 = FUN_00522350(*(uint *)((int)vm + 0x28),iStack_18,auStack_14);
        if (iVar2 != 0) {
          iVar7 = iStack_8 >> 8;
          iVar5 = (int)auStack_14[0] >> 8;
          iVar6 = iStack_c >> 8;
        }
      }
    }
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar4 * 8) = iVar7;
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    iVar7 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar7;
    *(undefined4 *)(iVar2 + iVar7 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar7 * 8) = iVar5;
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
  *(int *)(iVar2 + 4 + iVar5 * 8) = iVar6;
  return;
}


