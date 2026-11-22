
void __fastcall FUN_00482020(int param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  HDC hdc;
  uint uVar5;
  char *pcVar6;
  tagRECT local_10;
  
  DVar2 = timeGetTime();
  iVar3 = DVar2 - *(int *)(param_1 + 0x5058);
  if ((iVar3 != 0) &&
     ((*(int *)(param_1 + 0x5058) = *(int *)(param_1 + 0x5058) + iVar3,
      *(int *)(param_1 + 0x5060) != 0 || (DAT_005d1f24 != 0)))) {
    *(int *)(param_1 + 0x505c) = *(int *)(param_1 + 0x505c) + iVar3;
  }
  iVar3 = FUN_004b1d40((void *)(param_1 + 0x520));
  uVar5 = (uint)(iVar3 + (*(int *)(param_1 + 0x505c) - *(int *)(param_1 + 0x5058))) / 1000;
  if (uVar5 == 0) {
    iVar3 = *(int *)(param_1 + 0x228a8);
    if ((iVar3 < 0) || (0xf < iVar3)) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + 0x5068 + iVar3 * 0x1d84;
    }
    iVar3 = *(int *)(iVar3 + 0x15dc);
    if (DAT_005d1e84 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_004b7dd0(DAT_005d1e84);
    }
    if (iVar3 == iVar4) {
      iVar3 = FUN_0048c420(0x18);
      if (iVar3 == 0) {
        FUN_004ffed0(0x584ae8);
        FUN_00480060(*(undefined4 *)(param_1 + 0x228a8));
      }
    }
  }
  if ((uVar5 < 0x1f) &&
     (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == *(int *)(param_1 + 0x228a8))) {
    hdc = GetDC(DAT_00584d54);
    local_10.left = 0x32;
    local_10.right = 300;
    local_10.top = 0x1e;
    local_10.bottom = 0x50;
    FUN_0053a090(&DAT_00583ff8,s_Time_left____d_Seconds_0055b230,uVar5);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_00583ff8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    DrawTextA(hdc,&DAT_00583ff8,~uVar5 - 1,&local_10,0);
  }
  return;
}


