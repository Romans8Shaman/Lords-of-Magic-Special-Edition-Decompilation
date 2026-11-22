
int __cdecl FUN_005470d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_005d57a4 != (FARPROC)0x0) {
LAB_00547120:
    if (DAT_005d57a8 != (FARPROC)0x0) {
      iVar1 = (/*IC:00547129*/*DAT_005d57a8)();
    }
    if ((iVar1 != 0) && (DAT_005d57ac != (FARPROC)0x0)) {
      iVar1 = (/*IC:0054713b*/*DAT_005d57ac)(iVar1);
    }
    iVar1 = (/*IC:0054714f*/*DAT_005d57a4)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_005d57a4 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_005d57a4 != (FARPROC)0x0) {
      DAT_005d57a8 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_005d57ac = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_00547120;
    }
  }
  return 0;
}


