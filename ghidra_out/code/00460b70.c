
void __cdecl op_getlosingarmy(void *vm)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0050b9d0(0x5aa12c);
  iVar2 = (/*IC:00460b88*/**(code **)(DAT_005aa78c + 0x3c))(&DAT_005aa78c);
  if (iVar1 == iVar2) {
    uVar3 = 0xfffffffa;
  }
  else {
    iVar2 = (/*IC:00460ba6*/**(code **)(DAT_005aad68 + 0x3c))(&DAT_005aad68);
    if (iVar1 != iVar2) {
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar2 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar2;
        iVar1 = *(int *)((int)vm + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
        return;
      }
      goto LAB_00460bf6;
    }
    uVar3 = 0xfffffff9;
  }
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar2 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar2;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar3;
    return;
  }
LAB_00460bf6:
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


