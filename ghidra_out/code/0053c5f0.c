
int FUN_0053c5f0(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined4 uVar3;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = (/*IC:0053c611*/*pFVar1)(0);
      return iVar2;
    }
  }
  uVar3 = FUN_0053c5a0();
  return uVar3;
}


