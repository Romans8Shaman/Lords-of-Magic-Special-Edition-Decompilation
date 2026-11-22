
undefined4 __fastcall FUN_00416a30(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x4c) < 1) {
    return 0;
  }
  iVar3 = param_1 + 0xc4;
  do {
    uVar1 = FUN_00525f10(iVar3);
    if (uVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x4c;
  } while (iVar2 < *(int *)(param_1 + 0x4c));
  return 0;
}


