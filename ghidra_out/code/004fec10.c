
undefined4 FUN_004fec10(void)

{
  LSTATUS LVar1;
  HKEY local_10;
  DWORD local_c;
  undefined4 local_8;
  DWORD local_4;
  
  local_c = 4;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_SOFTWARE_Sierra_OnLine_Setup_LOM_00573474,0,0xf003f,
                        &local_10);
  if (LVar1 == 0) {
    RegQueryValueExA(local_10,s_Special_0057346c,(LPDWORD)0x0,&local_4,(LPBYTE)&local_8,&local_c);
    RegCloseKey(local_10);
    return local_8;
  }
  return 0;
}


