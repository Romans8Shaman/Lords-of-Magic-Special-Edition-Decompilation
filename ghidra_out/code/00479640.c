
void __fastcall FUN_00479640(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x13b4) != 0) && (*(int *)(param_1 + 0xfc0) != 0)) {
    for (iVar4 = *(int *)(param_1 + 0x1368); -2000 < iVar4; iVar4 = iVar4 + -0x14) {
      uVar3 = GetTickCount();
      uVar1 = uVar3 + 0x19;
      while (uVar3 < uVar1) {
        uVar3 = GetTickCount();
      }
      if (DAT_005863c8 == 0) {
        return;
      }
      piVar2 = *(int **)(param_1 + 0xfc0);
      (/*IC:00479691*/**(code **)(*piVar2 + 0x3c))(piVar2,iVar4);
    }
    FUN_004b32c0((int *)(param_1 + 0xfc0));
  }
  return;
}


