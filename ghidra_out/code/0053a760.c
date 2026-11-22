
undefined4 __cdecl FUN_0053a760(LPCSTR param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    return 0;
  }
  FUN_0053b440(uVar2);
  return 0xffffffff;
}


