
void __cdecl op_interrogateprisoners(void *vm)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    iVar1 = FUN_004c1c50((int)vm);
    if (iVar1 != 0) {
      iVar1 = FUN_004c2330((int)vm);
      if (0 < iVar1) {
        iVar1 = 0;
        if (0 < *(int *)((int)vm + 0x4c)) {
          iVar2 = 0;
          do {
            *(undefined4 *)((int)vm + iVar2 + 0xd0) = 0;
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + 0x4c;
          } while (iVar1 < *(int *)((int)vm + 0x4c));
        }
      }
    }
  }
  return;
}


