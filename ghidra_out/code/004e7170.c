
undefined4 __fastcall FUN_004e7170(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = &DAT_00584610;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 1;
  }
  iVar2 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar3 = (int *)(param_1 + 0xc4);
    do {
      iVar1 = FUN_004e7150(piVar3);
      if (iVar1 == -1) {
        iVar1 = FUN_00415470(piVar3);
        if (iVar1 == 0) {
          if (((iVar2 == 4) || (iVar2 == 9)) || (iVar2 == 0xe)) {
            iVar2 = iVar2 + 1;
          }
          if (((iVar2 == 0) || (iVar2 == 5)) || (iVar2 == 10)) {
            iVar2 = iVar2 + 1;
          }
          if (0xe < iVar2) goto LAB_004e7220;
        }
        else if (iVar2 < 10) {
          iVar2 = ((4 < iVar2) - 1 & 0xfffffffb) + 9;
        }
        else {
          iVar2 = 0xe;
        }
LAB_004e7218:
        (&DAT_00584610)[iVar2] = iVar5;
        iVar2 = iVar2 + 1;
      }
      else {
        if (iVar2 != 0) {
          iVar2 = ((iVar2 < 6) - 1 & 5) + 5;
          goto LAB_004e7218;
        }
        iVar2 = 1;
        DAT_00584610 = iVar5;
      }
LAB_004e7220:
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 0x13;
    } while (iVar5 < *(int *)(param_1 + 0x4c));
  }
  if (iVar2 < 0xb) {
    return (uint)(5 < iVar2);
  }
  return 2;
}


