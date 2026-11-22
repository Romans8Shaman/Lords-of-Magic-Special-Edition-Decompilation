
undefined4 __fastcall FUN_004e7ea0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_005ae98c;
  for (iVar4 = DAT_005ae998; iVar4 <= iVar1; iVar4 = iVar4 + 1) {
    iVar2 = FUN_004f6000(&DAT_005ae974,iVar4);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) &&
       (*(int *)(iVar2 + 0x48) == *(int *)(param_1 + 0x48))) {
      iVar3 = FUN_00525fc0((int *)(iVar2 + 0xc4));
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0xd8 + *(char *)(iVar2 + 0x5ac) * 0x4c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0xd8 + *(char *)(iVar2 + 0x5ac) * 0x4c) =
             *(undefined4 *)(iVar2 + 0xd8);
      }
    }
  }
  return iVar1;
}


