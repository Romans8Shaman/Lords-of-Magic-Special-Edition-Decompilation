
undefined4 __fastcall FUN_0052d160(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x18);
  do {
    iVar1 = FUN_004f6000(&DAT_005ae974,*piVar2);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 0x28);
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 3;
  } while (iVar3 < 0x1e);
  return 0xffffffff;
}


