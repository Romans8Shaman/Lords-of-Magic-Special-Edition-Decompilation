
int __fastcall FUN_0050a4b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  
  if (DAT_005d2cd8 != 0) {
    for (in_EAX = *(int *)(param_1 + 0x84); in_EAX != 0; in_EAX = *(int *)(in_EAX + 0x14)) {
      if (in_EAX == DAT_005d2cd8) {
        DAT_005d2cd8 = 0;
        break;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 != 0) {
    iVar2 = iVar1;
    for (iVar3 = *(int *)(iVar1 + 0x14); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14)) {
      iVar2 = iVar3;
    }
    *(int *)(iVar2 + 0x14) = DAT_005d2cbc;
    in_EAX = DAT_005d2cbc;
    DAT_005d2cbc = iVar1;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  return in_EAX;
}


