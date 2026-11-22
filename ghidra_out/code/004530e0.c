
void __cdecl FUN_004530e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x348);
    if (iVar1 != 0) {
      iVar2 = iVar1;
      for (iVar3 = *(int *)(iVar1 + 0x24); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x24)) {
        iVar2 = iVar3;
      }
      *(int *)(iVar2 + 0x24) = DAT_005792c4;
      DAT_005792c4 = iVar1;
    }
    *(undefined4 *)(param_1 + 0x348) = 0;
  }
  return;
}


