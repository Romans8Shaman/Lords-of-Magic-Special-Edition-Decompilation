
undefined4 __thiscall FUN_004c9830(void *this,HINSTANCE param_1,HWND param_2)

{
  BOOL BVar1;
  HWND hWnd;
  
  if (*(HWND *)this != (HWND)0x0) {
    BVar1 = IsWindow(*(HWND *)this);
    if (BVar1 != 0) {
      ShowWindow(*(HWND *)this,0);
      ShowWindow(*(HWND *)this,5);
      FUN_004c97d0(this);
      FUN_00504ce0(&DAT_00584ae8,1,0);
      return 0;
    }
  }
  hWnd = CreateDialogParamA(param_1,(LPCSTR)0x66,param_2,(DLGPROC)&LAB_004c9320,0);
  *(HWND *)this = hWnd;
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  ShowWindow(hWnd,5);
  FUN_004c97d0(this);
  return 1;
}


