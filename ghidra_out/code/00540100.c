
void __cdecl FUN_00540100(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_0053b4c0();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_0053b4c0();
    *pDVar1 = 0x22;
    return;
  }
  return;
}


