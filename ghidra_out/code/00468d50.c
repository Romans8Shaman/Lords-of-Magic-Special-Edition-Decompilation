
void __cdecl op_magicattackorder(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&iStack_4);
  if (iVar2 != 0) {
    iVar2 = FUN_0041be40(pvVar1,&vm);
    if (iVar2 != 0) {
      uVar3 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)vm + 0x48));
      if ((uVar3 == 0) || ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) {
        FUN_00405260((int)vm,iStack_4,&DAT_00584c1c);
      }
      else {
        iVar2 = *(int *)((int)vm + 0x68);
        if (((iVar2 != 0x11) && (iVar2 != 0x30)) && (iVar2 != 0x32)) {
          FUN_00405260((int)vm,iStack_4,&DAT_00584c1c);
          return;
        }
      }
    }
  }
  return;
}


