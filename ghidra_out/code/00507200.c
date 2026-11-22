
int __fastcall FUN_00507200(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar1 = 99999;
  if (0 < iVar3) {
    piVar4 = (int *)(param_1 + 0xc4);
    do {
      iVar2 = *piVar4;
      if (((iVar2 < 0) || (DAT_005cd2f0 <= iVar2)) || (DAT_005cd2f4 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = DAT_005cd2f4 + iVar2 * 1000;
      }
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0xe8) < iVar1)) {
        iVar1 = *(int *)(iVar2 + 0xe8);
      }
      piVar4 = piVar4 + 0x13;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}


