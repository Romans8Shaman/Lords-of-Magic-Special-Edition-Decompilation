
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004ff8b0(HINSTANCE param_1,undefined4 param_2,char *param_3,undefined4 unused_stack_12)

{
  undefined1 *puVar1;
  ATOM AVar2;
  int iVar3;
  int nWidth;
  undefined4 unused_reg_1;
  WNDCLASSA *pWVar4;
  HWND pHVar5;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  undefined1 auStack_52 [2];
  WNDCLASSA local_50;
  char local_28 [4];
  char local_24 [8];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0054e8b8;
  puStack_10 = &LAB_0053b9f8;
  local_14 = ExceptionList;
  local_1c = auStack_52 + -0xe;
  local_28 = (char  [4])s_SSCLASS_005735a0._0_4_;
  local_24._0_4_ = s_SSCLASS_005735a0._4_4_;
  if ((*param_3 != '/') ||
     (ExceptionList = &local_14, puVar1 = auStack_52 + -0xe, param_3[1] != '*')) {
    ExceptionList = &local_14;
    iVar3 = FUN_00477dd0();
    if (iVar3 != 0) goto LAB_004ff93a;
    iVar3 = FUN_00477c70(param_3);
    puVar1 = local_1c;
    if (iVar3 != 0) {
      ExceptionList = local_14;
      return 1;
    }
  }
  local_1c = puVar1;
  DAT_005d1e88 = 1;
LAB_004ff93a:
  pWVar4 = &local_50;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pWVar4->style = 0;
    pWVar4 = (WNDCLASSA *)&pWVar4->lpfnWndProc;
  }
  local_50.style = 8;
  local_50.lpfnWndProc = FUN_004ff5e0;
  local_50.cbClsExtra = 0;
  local_50.cbWndExtra = 0;
  local_50.hInstance = param_1;
  local_50.hIcon = LoadIconA(param_1,(LPCSTR)0x65);
  local_50.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_50.hbrBackground = GetStockObject(4);
  local_50.lpszMenuName = (LPCSTR)0x0;
  local_50.lpszClassName = local_28;
  AVar2 = RegisterClassA(&local_50);
  if (AVar2 != 0) {
    lpParam = (LPVOID)0x0;
    hMenu = (HMENU)0x0;
    pHVar5 = (HWND)0x0;
    hInstance = param_1;
    iVar3 = GetSystemMetrics(1);
    nWidth = GetSystemMetrics(0);
    pHVar5 = CreateWindowExA(0,local_28,s_Lords_of_Magic_00557c1c,0x90080000,0,0,nWidth,iVar3,pHVar5
                             ,hMenu,hInstance,lpParam);
    if (pHVar5 != (HWND)0x0) {
      _DAT_00584d5c = LoadAcceleratorsA(param_1,s_ACCEL_KEYS_00573594);
      local_8 = 0;
      iVar3 = FUN_004ff050(&DAT_00584ae8,unused_reg_1,0,param_1,pHVar5,param_3);
      if (iVar3 == 0) {
        DestroyWindow(pHVar5);
      }
      else {
        UpdateWindow(pHVar5);
        OutputDebugStringA(s_Before_WinMain_message_loop_00573574);
        while (DAT_005d2ca0 == 0) {
          FUN_004ffa80(&DAT_00584ae8);
        }
        Ordinal_468(1);
        local_8 = 0xffffffff;
        OutputDebugStringA(s_Past_exception_handler_00573540);
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}


