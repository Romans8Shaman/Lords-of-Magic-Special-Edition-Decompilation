
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_getwallheight(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = _DAT_005ae940;
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)vm + 0x50);
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  *(undefined4 *)(iVar1 + iVar3 * 8) = 4;
  *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar2;
  return;
}


