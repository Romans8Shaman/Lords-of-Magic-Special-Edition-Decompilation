
undefined4 FUN_005486b0(void)

{
  LPCWSTR lpWideCharStr;
  uint cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_005d52d8;
  piVar2 = DAT_005d52d8;
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  while (((cbMultiByte = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                             (LPBOOL)0x0), cbMultiByte != 0 &&
          (lpMultiByteStr = (uint *)FUN_0053c1f0(cbMultiByte), lpMultiByteStr != (uint *)0x0)) &&
         (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                      (LPCSTR)0x0,(LPBOOL)0x0), iVar1 != 0))) {
    FUN_00548a30(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)piVar2[1];
    piVar2 = piVar2 + 1;
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
  }
  return 0xffffffff;
}


