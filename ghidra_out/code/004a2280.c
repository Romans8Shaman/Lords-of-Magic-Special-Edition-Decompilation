
void __cdecl op_getcurrdisplayingarmy(void *vm)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == DAT_005aa7d4) {
      uVar5 = 0xfffffffc;
      iVar3 = *(int *)((int)vm + 0x54);
    }
    else if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == DAT_005aadb0) {
      uVar5 = 0xfffffffb;
      iVar3 = *(int *)((int)vm + 0x54);
    }
    else {
      uVar5 = 0xffffffff;
      iVar3 = *(int *)((int)vm + 0x54);
    }
  }
  else {
    iVar3 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    puVar2 = FUN_00485080(&DAT_005aa12c,iVar3,0x2f);
    if (puVar2 != (undefined4 *)0x0) {
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar1 = *(int *)((int)vm + 0x50);
        iVar4 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar4;
        *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar4 * 8) = iVar3;
        return;
      }
      goto LAB_004a235d;
    }
    uVar5 = 0xffffffff;
    iVar3 = *(int *)((int)vm + 0x54);
  }
  if (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *(int *)((int)vm + 0x54) = iVar3;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar5;
    return;
  }
LAB_004a235d:
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


