
void __cdecl op_isvalidbarterunit_q(void *vm)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041bf10(vm,(int *)&pvStack_4,(int *)&vm);
  if (iVar2 != 0) {
    uVar3 = FUN_00436bd0(pvStack_4,(int)vm);
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar4;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar3;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


