
BOOL __cdecl
FUN_00545ac0(DWORD in_stack_4,LPCWSTR in_stack_8,int in_stack_c,LPWORD in_stack_10,UINT in_stack_14,
            LCID in_stack_18)

{
  BOOL BVar1;
  int cbMultiByte;
  int *lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  BOOL local_4;
  
  lpCharType = (LPWORD)0x0;
  if (DAT_005d56e0 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_005d56e0 = 2;
    }
    else {
      DAT_005d56e0 = 1;
    }
  }
  if (DAT_005d56e0 == 1) {
    BVar1 = GetStringTypeW(in_stack_4,in_stack_8,in_stack_c,in_stack_10);
    return BVar1;
  }
  local_4 = DAT_005d56e0;
  if (DAT_005d56e0 == 2) {
    local_4 = 0;
    if (in_stack_14 == 0) {
      in_stack_14 = DAT_005d5320;
    }
    cbMultiByte = WideCharToMultiByte(in_stack_14,0x220,in_stack_8,in_stack_c,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    if (cbMultiByte == 0) {
      return 0;
    }
    lpMultiByteStr = FUN_0053c4d0(1,cbMultiByte);
    if (lpMultiByteStr == (int *)0x0) {
      return 0;
    }
    iVar2 = WideCharToMultiByte(in_stack_14,0x220,in_stack_8,in_stack_c,(LPSTR)lpMultiByteStr,
                                cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((iVar2 != 0) &&
       (lpCharType = (LPWORD)FUN_0053c1f0(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
      if (in_stack_18 == 0) {
        in_stack_18 = DAT_005d5310;
      }
      lpCharType[in_stack_c] = 0xffff;
      lpCharType[in_stack_c + -1] = 0xffff;
      local_4 = GetStringTypeA(in_stack_18,in_stack_4,(LPCSTR)lpMultiByteStr,cbMultiByte,lpCharType)
      ;
      if ((lpCharType[in_stack_c + -1] == 0xffff) || (lpCharType[in_stack_c] != 0xffff)) {
        local_4 = 0;
      }
      else {
        FUN_00544310((undefined4 *)in_stack_10,(undefined4 *)lpCharType,in_stack_c * 2);
      }
    }
    FUN_0053bce0((undefined *)lpMultiByteStr);
    FUN_0053bce0((undefined *)lpCharType);
  }
  return local_4;
}


