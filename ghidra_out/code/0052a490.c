
void __cdecl op_getunithitpointsandmax(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041bf10(vm,&iStack_c,(int *)&vm);
  if (iVar2 != 0) {
    FUN_00522000((void *)(iStack_c + 0xc4 + (int)vm * 0x4c),&iStack_8,&iStack_4);
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
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar3 * 8) = iStack_8;
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar3 * 8) = iStack_4;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


