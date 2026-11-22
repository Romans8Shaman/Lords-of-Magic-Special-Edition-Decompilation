
void __cdecl op_freepow(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&iStack_4);
  if (iVar2 != 0) {
    iVar2 = FUN_0041be40(pvVar1,&vm);
    if (iVar2 != 0) {
      iVar2 = FUN_004c1cf0((int)vm);
      if (iVar2 != 0) {
        FUN_004c1320(*(int *)((int)vm + 0x28),0xffffffff,*(undefined4 *)(iStack_4 + 0x28),2);
      }
    }
  }
  return;
}


