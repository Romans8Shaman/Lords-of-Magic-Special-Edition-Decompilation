
void __fastcall FUN_0047c520(int param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x228b4) = pvVar1;
  pvVar1 = FUN_0053aaa0(0x47c800,0,param_1);
  *(HANDLE *)(param_1 + 0x228b8) = pvVar1;
  FUN_0047be20((void *)(param_1 + 0x228bc),*(undefined4 *)(param_1 + 0x228b4),pvVar1);
  return;
}


