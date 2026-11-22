
void __cdecl op_isshiphaspassenger_q(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041bf10(vm,&iStack_4,(int *)&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_00415470((int *)(iStack_4 + 0xc4 + (int)vm * 0x4c));
    if (iVar2 == 0) {
      if (*(int *)((int)pvVar1 + 0x54) != 0) {
        iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar3;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
        return;
      }
    }
    else {
      iVar2 = FUN_004e7250((int)vm);
      if (iVar2 < 1) {
        if (*(int *)((int)pvVar1 + 0x54) != 0) {
          iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
          *(int *)((int)pvVar1 + 0x54) = iVar3;
          iVar2 = *(int *)((int)pvVar1 + 0x50);
          *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
          *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
          return;
        }
      }
      else if (*(int *)((int)pvVar1 + 0x54) != 0) {
        iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar3;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


