
void __fastcall FUN_00462d80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_005ae998;
  iVar1 = DAT_005ae98c;
  *(undefined4 *)(param_1 + 0x494) = 0;
  for (; iVar3 <= iVar1; iVar3 = iVar3 + 1) {
    iVar2 = FUN_004f6000(&DAT_005ae974,iVar3);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) {
      *(undefined4 *)(param_1 + 0x14 + *(int *)(param_1 + 0x494) * 4) =
           *(undefined4 *)(iVar2 + 0x28);
      *(int *)(param_1 + 0x494) = *(int *)(param_1 + 0x494) + 1;
    }
  }
  return;
}


