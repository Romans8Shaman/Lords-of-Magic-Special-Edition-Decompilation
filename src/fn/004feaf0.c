/* Rebuilt from lomse.exe FUN_004feaf0 @ 0x004feaf0 (25 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define VirtualFree (*(__typeof__(BOOL (__stdcall *)(LPVOID, SIZE_T, DWORD)) *)0x0054d0a8) /* KERNEL32.DLL!VirtualFree via IAT */

#define LOM_SELF_004feaf0 1
void __fastcall rb_004feaf0(int param_1)

{
  if (*(LPVOID *)(param_1 + 0x128) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)(param_1 + 0x128),0,0x8000);
  }
  return;
}
