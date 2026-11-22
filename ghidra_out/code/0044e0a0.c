
void __cdecl op_getvirtualarmyid(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(DAT_005869f4 + 0x28);
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  iVar2 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
  *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
  return;
}


