
void __cdecl FUN_00453120(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x348);
    iVar2 = 0;
    while (iVar1 = iVar3, iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x18) + -1;
      *(int *)(iVar1 + 0x18) = iVar3;
      if (iVar3 < 1) {
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(iVar1 + 0x24);
        }
        else {
          *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
        }
        *(undefined4 *)(iVar1 + 0x24) = 0;
        *(int *)(iVar1 + 0x24) = DAT_005792c4;
        DAT_005792c4 = iVar1;
        if (iVar2 == 0) {
          iVar3 = *(int *)(param_1 + 0x348);
        }
        else {
          iVar3 = *(int *)(iVar2 + 0x24);
        }
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x24);
        iVar2 = iVar1;
      }
    }
  }
  return;
}


