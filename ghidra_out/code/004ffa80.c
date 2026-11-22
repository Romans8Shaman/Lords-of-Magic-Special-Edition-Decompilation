
void __fastcall FUN_004ffa80(void *param_1)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  int *piVar5;
  tagMSG tStack_1c;
  
  if (*(int *)((int)param_1 + 0x1cdc) == 0) {
    FUN_00482230((void *)((int)param_1 + 0x25644));
    if (DAT_005d2ca0 != 0) {
      return;
    }
    FUN_004b6e80(DAT_00583558);
  }
  if (DAT_005d2ca0 == 0) {
    if ((*(int *)((int)param_1 + 0x25634) != 0) &&
       (DVar1 = GetTickCount(), *(uint *)((int)param_1 + 0x25634) <= DVar1)) {
      uVar2 = FUN_004ffdd0((int)param_1);
      FUN_004fffc0(param_1,uVar2);
    }
    if (*(int *)((int)param_1 + 0x1cdc) != 0) {
      piVar5 = (int *)((int)param_1 + 0x1cd8);
      FUN_00530f00(piVar5);
      iVar3 = Ordinal_32(*piVar5);
      while (iVar3 != 0) {
        iVar3 = Ordinal_32(*piVar5);
      }
      if (*(int *)(*piVar5 + 0x374) == *(int *)(*piVar5 + 0xc) + -1) {
        FUN_00531030(piVar5);
      }
    }
    if ((*(int *)((int)param_1 + 0x1904) != 0) && (*(int *)((int)param_1 + 0x18fc) == 1)) {
      if (*(int *)(*(int *)((int)param_1 + 0x232a4) * 0x400 + 0x23590 + (int)param_1) == 2) {
        FUN_004b40b0((void *)((int)param_1 + 0x920),*(int *)((int)param_1 + 0x232a4));
      }
      else {
        FUN_004b4200((int)param_1 + 0x920);
      }
    }
    if ((*(int *)((int)param_1 + 0x25354) == 1) || (*(int *)((int)param_1 + 0x25354) == 2)) {
      FUN_004739e0((int)param_1 + 0x2531c);
    }
    if (*(int *)((int)param_1 + 0x22ecc) != 0) {
      FUN_004fe1b0((int)param_1);
    }
    piVar5 = (int *)((int)param_1 + 0x257e4);
    iVar3 = 4;
    do {
      if (*piVar5 != 0) {
        FUN_004b2fb0(piVar5);
      }
      piVar5 = piVar5 + 0x32;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)((int)param_1 + 0x25630) < 1) {
      FUN_0048a1b0(param_1);
      if (DAT_005d2ca0 != 0) {
        return;
      }
    }
    else {
      FUN_0048a510();
    }
    iVar3 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,1);
    while (iVar3 != 0) {
      iVar3 = TranslateAcceleratorA
                        (*(HWND *)((int)param_1 + 0x26c),*(HACCEL *)((int)param_1 + 0x274),
                         &tStack_1c);
      if (iVar3 == 0) {
        if (tStack_1c.message == 0x12) {
          OutputDebugStringA(s_Received_WM_QUIT_005735a8);
          DAT_005d2ca0 = 1;
        }
        if ((*(HWND *)((int)param_1 + 0x270) == (HWND)0x0) ||
           (BVar4 = IsDialogMessageA(*(HWND *)((int)param_1 + 0x270),&tStack_1c), BVar4 == 0)) {
          TranslateMessage(&tStack_1c);
          DispatchMessageA(&tStack_1c);
        }
      }
      iVar3 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,1);
    }
  }
  return;
}


