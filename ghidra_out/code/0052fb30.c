
void __cdecl op_getunitindex(void *vm)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = vm;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    iVar3 = FUN_0041be40(vm,&vm);
    if (iVar3 != 0) {
      cVar1 = *(char *)((int)vm + 0x5ac);
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(int *)(iVar3 + 4 + iVar4 * 8) = (int)cVar1;
        return;
      }
      goto LAB_0052fbb9;
    }
  }
  else {
    FUN_004d41c0(vm,s_not_in_combat_005743c4);
  }
  if (*(int *)((int)pvVar2 + 0x54) != 0) {
    iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
    *(int *)((int)pvVar2 + 0x54) = iVar4;
    iVar3 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
    return;
  }
LAB_0052fbb9:
  *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


