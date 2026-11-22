/* Rebuilt from lomse.exe FUN_005470d0 @ 0x005470d0 (143 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d57a4 (*(FARPROC *)0x005d57a4)
#define DAT_005d57a8 (*(FARPROC *)0x005d57a8)
#define DAT_005d57ac (*(FARPROC *)0x005d57ac)
#define GetProcAddress (*(__typeof__(FARPROC (__stdcall *)(HMODULE, LPCSTR)) *)0x0054d094) /* KERNEL32.DLL!GetProcAddress via IAT */
#define LoadLibraryA (*(__typeof__(HMODULE (__stdcall *)(LPCSTR)) *)0x0054d0ec) /* KERNEL32.DLL!LoadLibraryA via IAT */

#define LOM_SELF_005470d0 1
int __cdecl rb_005470d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_005d57a4 != (FARPROC)0x0) {
LAB_00547120:
    if (DAT_005d57a8 != (FARPROC)0x0) {
      iVar1 = ((undefined4 (__stdcall *)(void))(*DAT_005d57a8))();
    }
    if ((iVar1 != 0) && (DAT_005d57ac != (FARPROC)0x0)) {
      iVar1 = ((undefined4 (__stdcall *)(__typeof__(iVar1)))(*DAT_005d57ac))(iVar1);
    }
    iVar1 = ((undefined4 (__stdcall *)(__typeof__(iVar1), __typeof__(param_1), __typeof__(param_2), __typeof__(param_3)))(*DAT_005d57a4))(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA(((char *)0x0054faec));
  if (hModule != (HMODULE)0x0) {
    DAT_005d57a4 = GetProcAddress(hModule,((char *)0x0054fae0));
    if (DAT_005d57a4 != (FARPROC)0x0) {
      DAT_005d57a8 = GetProcAddress(hModule,((char *)0x0054fad0));
      DAT_005d57ac = GetProcAddress(hModule,((char *)0x0054fabc));
      goto LAB_00547120;
    }
  }
  return 0;
}
