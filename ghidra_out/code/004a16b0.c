
void __cdecl op_removedeadunits(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    uVar3 = 0;
    iVar1 = 0;
    if (0 < *(int *)((int)vm + 0x4c)) {
      iVar4 = 0;
      do {
        iVar2 = FUN_00521f30((int *)((int)vm + iVar4 + 0xc4));
        if (iVar2 < 1) {
          uVar3 = uVar3 | 1 << ((byte)iVar1 & 0x1f);
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0x4c;
      } while (iVar1 < *(int *)((int)vm + 0x4c));
    }
    if (uVar3 != 0) {
      FUN_0041e1b0(*(undefined4 *)((int)vm + 0x28),uVar3);
    }
  }
  return;
}


