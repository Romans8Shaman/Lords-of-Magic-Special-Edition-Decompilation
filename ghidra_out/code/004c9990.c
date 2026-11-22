
undefined4 __thiscall FUN_004c9990(void *this,LPCSTR param_1)

{
  int *piVar1;
  int iVar2;
  LRESULT LVar3;
  uint uVar4;
  LRESULT LVar5;
  WPARAM wParam;
  CHAR local_3e8 [1000];
  
  piVar1 = (int *)FUN_00539610(param_1,&DAT_005572ec);
  if (piVar1 != (int *)0x0) {
    FUN_005394d0(piVar1);
    FUN_0053a090(local_3e8,s_Do_you_wish_to_overwrite__s__0055db00,(uint)param_1);
    iVar2 = FUN_005047e0(&DAT_00584ae8,local_3e8,s_Saving_Script_Window_0055dae8,4);
    if (iVar2 != 6) {
      return 0;
    }
  }
  piVar1 = (int *)FUN_00539610(param_1,&DAT_00556168);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*(HWND *)this != (HWND)0x0) {
    LVar3 = SendDlgItemMessageA(*(HWND *)this,0x3ea,0x18b,0,0);
    if (LVar3 == -1) {
      FUN_005394d0(piVar1);
      return 0;
    }
    wParam = 0;
    if (0 < LVar3) {
      do {
        uVar4 = SendDlgItemMessageA(*(HWND *)this,0x3ea,0x18a,wParam,0);
        if ((((int)uVar4 < 0) || (999 < uVar4)) ||
           (LVar5 = SendDlgItemMessageA(*(HWND *)this,0x3ea,0x189,wParam,(LPARAM)local_3e8),
           LVar5 == -1)) {
          FUN_005394d0(piVar1);
          return 0;
        }
        FUN_0053b3e0(local_3e8,piVar1);
        FUN_0053b3e0(&DAT_0055d4bc,piVar1);
        wParam = wParam + 1;
      } while ((int)wParam < LVar3);
    }
  }
  FUN_005394d0(piVar1);
  return 1;
}


