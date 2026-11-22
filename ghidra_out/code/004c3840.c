
void __cdecl op_instantkillprisoner(void *vm)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    bVar1 = false;
    iVar2 = FUN_00420560((int)vm);
    if (((iVar2 != 0) && ((*(byte *)((int)vm + 0x30) & 0x20) != 0)) &&
       (*(int *)((int)vm + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
      iVar2 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
      if (*(int *)((int)vm + 0x28) == iVar2) {
        bVar1 = true;
      }
    }
    FUN_0041e170(vm,0xffffffff);
    if (bVar1) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
    }
  }
  return;
}


