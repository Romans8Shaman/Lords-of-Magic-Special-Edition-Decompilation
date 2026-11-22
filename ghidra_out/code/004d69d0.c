
void __cdecl op_isfullstrength_q(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iStack_8;
  int iStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 == 0) {
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)((int)vm + 0x4c)) {
      iVar3 = 0;
      do {
        FUN_00522000((void *)((int)vm + iVar3 + 0xc4),&iStack_8,&iStack_4);
        if (iStack_8 < iStack_4) {
          if (*(int *)((int)pvVar1 + 0x54) != 0) {
            iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
            *(int *)((int)pvVar1 + 0x54) = iVar3;
            iVar2 = *(int *)((int)pvVar1 + 0x50);
            *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
            return;
          }
          goto LAB_004d6a77;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x4c;
      } while (iVar2 < *(int *)((int)vm + 0x4c));
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
  }
LAB_004d6a77:
  *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
}


