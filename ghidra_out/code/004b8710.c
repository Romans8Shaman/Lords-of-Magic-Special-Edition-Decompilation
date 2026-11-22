
void __cdecl op_enumnetworkgames(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_005d1e84 != (int *)0x0) {
    (/*IC:004b871d*/**(code **)(*DAT_005d1e84 + 0x1c))(DAT_005d1e84);
    if (DAT_005d1e84 != (int *)0x0) {
      iVar3 = DAT_005d1e84[0xdb];
      goto LAB_004b8737;
    }
  }
  iVar3 = 1;
LAB_004b8737:
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar2;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(int *)(iVar1 + 4 + iVar2 * 8) = iVar3;
  return;
}


