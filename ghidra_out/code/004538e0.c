
void __cdecl op_totalcitymods(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_00451a70(vm,(uint *)&vm);
  if (iVar2 != 0) {
    FUN_00453190((int)vm,&iStack_14);
    if (*(int *)((int)pvVar1 + 0x54) == 0) {
      *(undefined4 *)((int)pvVar1 + 0x90) = 3;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 2;
      *(int *)(iVar2 + 4 + iVar3 * 8) = iStack_14;
    }
    if (*(int *)((int)pvVar1 + 0x54) == 0) {
      *(undefined4 *)((int)pvVar1 + 0x90) = 3;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 2;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uStack_10;
    }
    if (*(int *)((int)pvVar1 + 0x54) == 0) {
      *(undefined4 *)((int)pvVar1 + 0x90) = 3;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 2;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uStack_c;
    }
    if (*(int *)((int)pvVar1 + 0x54) == 0) {
      *(undefined4 *)((int)pvVar1 + 0x90) = 3;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 2;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uStack_8;
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 2;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uStack_4;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


