
void __cdecl FUN_004b6e80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_0048c550();
  iVar2 = DAT_00583560;
  iVar1 = DAT_0055b574;
  if (iVar3 != 0) {
    iVar3 = DAT_0055b578;
    if (DAT_0055b578 < 5) {
      iVar3 = 5;
    }
    iVar4 = FUN_0048c340();
    if (iVar4 != 0) {
      FUN_0048c5e0();
      return;
    }
    if (((param_1 != 0) && (iVar1 < 0)) && (iVar2 < param_1 - iVar3)) {
      FUN_004b6ef0(s__PULSED__0055d35c,param_1 - iVar3);
    }
  }
  return;
}


