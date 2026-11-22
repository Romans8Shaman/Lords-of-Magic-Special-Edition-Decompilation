
void __cdecl op_moving_q(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = vm;
  iVar3 = FUN_0041be40(vm,&vm);
  if (iVar3 != 0) {
    iVar3 = *(int *)((int)vm + 0x538);
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar4 * 8) = (iVar3 < 0) - 1;
      return;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
}


