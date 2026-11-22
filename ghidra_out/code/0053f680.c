
int __cdecl
FUN_0053f680(LCID param_1,DWORD param_2,char *param_3,LPWSTR param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  LPWSTR cbMultiByte;
  LPWSTR lpWideCharStr;
  int iVar2;
  
  if (DAT_005d52f8 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_005d52f8 = 2;
    }
    else {
      DAT_005d52f8 = 1;
    }
  }
  if ((int)param_4 < 1) {
    cbMultiByte = param_4;
  }
  else {
    cbMultiByte = (LPWSTR)FUN_00548a00(param_3,(int)param_4);
  }
  if (DAT_005d52f8 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,(int)cbMultiByte,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_005d52f8 != 1) {
    return DAT_005d52f8;
  }
  param_4 = (LPWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_005d5320;
  }
  iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,(int)cbMultiByte,
                              (LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPWSTR)FUN_0053c1f0(iVar1 * 2);
  if (lpWideCharStr == (LPWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPWSTR)FUN_0053c1f0(iVar2 * 2);
      if ((param_4 == (LPWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar2), iVar1 == 0))
      goto LAB_0053f888;
      if (param_6 == 0) {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                   );
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)param_5,param_6,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (param_6 == 0) goto LAB_0053f7ef;
      if (param_6 < iVar2) goto LAB_0053f888;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_0053f7ef:
      FUN_0053bce0((undefined *)lpWideCharStr);
      FUN_0053bce0((undefined *)param_4);
      return iVar2;
    }
  }
LAB_0053f888:
  FUN_0053bce0((undefined *)lpWideCharStr);
  FUN_0053bce0((undefined *)param_4);
  return 0;
}


