/* Rebuilt from lomse.exe FUN_00542450 @ 0x00542450 (354 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005750c0 (*(int *)0x005750c0)
#define DAT_005d6a04 (*(HANDLE *)0x005d6a04)
#define HeapAlloc (*(__typeof__(LPVOID (__stdcall *)(HANDLE, DWORD, SIZE_T)) *)0x0054d1c0) /* KERNEL32.DLL!HeapAlloc via IAT */
#define HeapFree (*(__typeof__(BOOL (__stdcall *)(HANDLE, DWORD, LPVOID)) *)0x0054d200) /* KERNEL32.DLL!HeapFree via IAT */
#define PTR_LOOP_005750b0 (*(void * *)0x005750b0)
#define PTR_LOOP_005750b4 (*(undefined * *)0x005750b4)
#define VirtualAlloc (*(__typeof__(LPVOID (__stdcall *)(LPVOID, SIZE_T, DWORD, DWORD)) *)0x0054d0ac) /* KERNEL32.DLL!VirtualAlloc via IAT */
#define VirtualFree (*(__typeof__(BOOL (__stdcall *)(LPVOID, SIZE_T, DWORD)) *)0x0054d0a8) /* KERNEL32.DLL!VirtualFree via IAT */

#define LOM_SELF_00542450 1
undefined ** __stdcall rb_00542450(void)

{
  bool bVar1;
  undefined4 *lpAddress;
  LPVOID pvVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **lpMem;
  undefined4 *puVar5;
  
  if (DAT_005750c0 == -1) {
    lpMem = &PTR_LOOP_005750b0;
  }
  else {
    lpMem = HeapAlloc(DAT_005d6a04,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (undefined4 *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_005750b0) {
        if (PTR_LOOP_005750b0 == (undefined *)0x0) {
          PTR_LOOP_005750b0 = (undefined *)&PTR_LOOP_005750b0;
        }
        if (PTR_LOOP_005750b4 == (undefined *)0x0) {
          PTR_LOOP_005750b4 = (undefined *)&PTR_LOOP_005750b0;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_005750b0;
        lpMem[1] = PTR_LOOP_005750b4;
        PTR_LOOP_005750b4 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)(lpMem + 6);
      lpMem[3] = (undefined *)(lpMem + 0x26);
      iVar3 = 0;
      ppuVar4 = lpMem + 6;
      do {
        bVar1 = 0xf < iVar3;
        iVar3 = iVar3 + 1;
        *ppuVar4 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar4[1] = (undefined *)0xf1;
        ppuVar4 = ppuVar4 + 2;
      } while (iVar3 < 0x400);
      puVar5 = lpAddress;
      for (iVar3 = 0x4000; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      if (lpAddress < lpMem[4] + 0x10000) {
        do {
          lpAddress[1] = 0xf0;
          *lpAddress = lpAddress + 2;
          *(undefined1 *)(lpAddress + 0x3e) = 0xff;
          lpAddress = lpAddress + 0x400;
        } while (lpAddress < lpMem[4] + 0x10000);
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_005750b0) {
    HeapFree(DAT_005d6a04,0,lpMem);
  }
  return (undefined **)0x0;
}
