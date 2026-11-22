
BOOL __cdecl
FUN_00545c50(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  BOOL BVar1;
  int iVar2;
  LPWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPWSTR)0x0;
  if (DAT_005d56e4 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_005d56e4 = 2;
    }
    else {
      DAT_005d56e4 = 1;
    }
  }
  if (DAT_005d56e4 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_005d5310;
    }
    BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    return BVar1;
  }
  param_6 = DAT_005d56e4;
  if (DAT_005d56e4 == 1) {
    param_6 = 0;
    if (param_5 == 0) {
      param_5 = DAT_005d5320;
    }
    iVar2 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar2 != 0) {
      lpWideCharStr = (LPWSTR)FUN_0053c4d0(2,iVar2);
      if (lpWideCharStr != (LPWSTR)0x0) {
        iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
        if (iVar2 != 0) {
          BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
          FUN_0053bce0((undefined *)lpWideCharStr);
          return BVar1;
        }
      }
    }
    FUN_0053bce0((undefined *)lpWideCharStr);
  }
  return param_6;
}


