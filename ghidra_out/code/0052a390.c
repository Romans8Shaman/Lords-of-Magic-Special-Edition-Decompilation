
void __cdecl op_ismercenary_q(void *vm)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iStack_4;
  
  pvVar2 = vm;
  iVar3 = FUN_0041bf10(vm,&iStack_4,(int *)&vm);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iStack_4 + 0xe8 + (int)vm * 0x4c);
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(uint *)(iVar3 + 4 + iVar4 * 8) = -(uint)((uVar1 & 1) != 0);
      return;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
}


