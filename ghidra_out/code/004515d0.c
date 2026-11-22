
void __fastcall FUN_004515d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 0xd4);
  do {
    iVar1 = FUN_0043c310(&DAT_005cd310,*(undefined4 *)(param_1 + 0x74),*(int *)(param_1 + 0x80),
                         iVar2,*piVar3);
    if (iVar1 < 0) {
      *piVar3 = 0;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x11;
  } while (iVar2 < 9);
  return;
}


