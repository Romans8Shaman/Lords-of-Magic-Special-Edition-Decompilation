
void __fastcall FUN_004c6660(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  sVar4 = 1;
  iVar2 = FUN_004c6230((int)param_1);
  if (iVar2 != 0) {
    iVar2 = 0;
    if (0 < param_1[3]) {
      iVar3 = 0;
      do {
        pbVar1 = (byte *)(*param_1 + 1 + iVar3);
        *pbVar1 = *pbVar1 & 1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 6;
        *(undefined2 *)(*param_1 + -4 + iVar3) = 0;
      } while (iVar2 < param_1[3]);
    }
    iVar2 = 0;
    if (0 < param_1[3]) {
      iVar3 = 0;
      do {
        if (*(short *)(*param_1 + 2 + iVar3) == 0) {
          FUN_004c63c0(param_1,iVar2,sVar4);
          sVar4 = sVar4 + 1;
          if (sVar4 < 1) {
            FUN_005047d0(s_too_many_continents__0055da0c);
            sVar4 = 1;
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 6;
      } while (iVar2 < param_1[3]);
    }
    sVar4 = 1;
    iVar2 = 0;
    if (0 < param_1[3]) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(byte *)(*param_1 + 1 + iVar3) = *(byte *)(*param_1 + 1 + iVar3) & 1;
        *(undefined2 *)(*param_1 + 4 + iVar3) = 0;
        iVar3 = iVar3 + 6;
      } while (iVar2 < param_1[3]);
    }
    iVar2 = 0;
    if (0 < param_1[3]) {
      iVar3 = 0;
      do {
        if (*(short *)(*param_1 + 4 + iVar3) == 0) {
          FUN_004c64e0(param_1,iVar2,sVar4);
          sVar4 = sVar4 + 1;
          if (sVar4 < 1) {
            FUN_005047d0(s_too_many_oceans__0055d9f8);
            sVar4 = 1;
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 6;
      } while (iVar2 < param_1[3]);
    }
    FUN_004c6270((int)param_1);
    param_1[0x6e] = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  return;
}


