
void __cdecl op_attackfacingvalue(void *vm)

{
  int iVar1;
  undefined *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_005787ac;
  if ((DAT_005787b0 == 0) || (DAT_005787ac == 0)) {
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
      return;
    }
  }
  else {
    iVar2 = *(int *)(DAT_005787b0 + 0x1c);
    iVar4 = *(int *)(DAT_005787ac + 0x1c);
    this = FUN_004c6fc0();
    iVar2 = FUN_004a8b50(this,iVar4,iVar2);
    uVar3 = iVar2 - *(int *)(iVar1 + 0x44) & 7;
    if (4 < uVar3) {
      uVar3 = 8 - uVar3;
    }
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar2 * 8) = uVar3;
      return;
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


