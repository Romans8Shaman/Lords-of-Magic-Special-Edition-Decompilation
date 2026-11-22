
void __cdecl op_turnstoheal(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041bf10(vm,&iStack_1c,(int *)&vm);
  if (iVar2 != 0) {
    iVar2 = 0;
    FUN_00522000((void *)(iStack_1c + 0xc4 + (int)vm * 0x4c),&iStack_c,&iStack_10);
    if (iStack_c < iStack_10) {
      iVar2 = 1;
      iStack_8 = 0;
      FUN_00527e90((void *)(iStack_1c + 0xc4 + (int)vm * 0x4c),0x2e,&iStack_8);
      iStack_18 = 0;
      iStack_14 = 0;
      iStack_4 = 0;
      FUN_00527e90((void *)(iStack_1c + 0xc4 + (int)vm * 0x4c),0x3d,&iStack_18);
      if ((*(uint *)(iStack_1c + 0x30) & 0x1c00000) != 0) {
        FUN_00527e90((void *)(iStack_1c + 0xc4 + (int)vm * 0x4c),0x3f,&iStack_14);
      }
      iStack_18 = iStack_18 + iStack_14;
      FUN_00527e90((void *)(iStack_1c + 0xc4 + (int)vm * 0x4c),0x3e,&iStack_4);
      iVar3 = iStack_18;
      if (*(int *)(iStack_1c + 0xd0 + (int)vm * 0x4c) != iStack_8) {
        iVar3 = iStack_4;
      }
      iVar3 = (iStack_10 - iStack_c) - iVar3;
      if (iStack_18 < 1) {
        iVar2 = -1;
      }
      else if (0 < iVar3) {
        iVar2 = (iVar3 + -1 + iStack_18) / iStack_18 + 1;
      }
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x50);
      iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


