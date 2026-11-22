
int __cdecl FUN_00548530(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  LPWSTR lpLCData;
  
  if (DAT_005d57e0 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_005d57e0 = 2;
    }
    else {
      DAT_005d57e0 = 1;
    }
  }
  if (DAT_005d57e0 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_005d57e0 != 1) {
    return DAT_005d57e0;
  }
  if (param_5 == 0) {
    param_5 = DAT_005d5320;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpLCData = (LPWSTR)FUN_0053c1f0(iVar1 * 2);
  if (lpLCData == (LPWSTR)0x0) {
    return 0;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,lpLCData,iVar1);
  if (iVar1 != 0) {
    if (param_4 == 0) {
      iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar1 != 0) {
        FUN_0053bce0((undefined *)lpLCData);
        return iVar1;
      }
    }
    else {
      iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,param_3,param_4,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      if (iVar1 != 0) {
        FUN_0053bce0((undefined *)lpLCData);
        return iVar1;
      }
    }
  }
  FUN_0053bce0((undefined *)lpLCData);
  return 0;
}


