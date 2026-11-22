
void __cdecl op_isheir_q(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041bf10(vm,&iStack_4,(int *)&vm);
  if (iVar2 != 0) {
    uVar3 = FUN_00525f20(iStack_4 + 0xc4 + (int)vm * 0x4c);
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar4;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar4 * 8) = -(uint)(uVar3 != 0);
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


