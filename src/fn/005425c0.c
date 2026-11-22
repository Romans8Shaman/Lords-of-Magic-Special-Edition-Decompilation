/* Rebuilt from lomse.exe FUN_005425c0 @ 0x005425c0 (91 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005750c0 (*(undefined4 *)0x005750c0)
#define DAT_005d6a04 (*(HANDLE *)0x005d6a04)
#define HeapFree (*(__typeof__(BOOL (__stdcall *)(HANDLE, DWORD, LPVOID)) *)0x0054d200) /* KERNEL32.DLL!HeapFree via IAT */
#define PTR_LOOP_005750b0 (*(void * *)0x005750b0)
#define PTR_LOOP_005770d0 (*(undefined * *)0x005770d0)
#define VirtualFree (*(__typeof__(BOOL (__stdcall *)(LPVOID, SIZE_T, DWORD)) *)0x0054d0a8) /* KERNEL32.DLL!VirtualFree via IAT */

#define LOM_SELF_005425c0 1
void __cdecl rb_005425c0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_005770d0 == param_1) {
    PTR_LOOP_005770d0 = param_1[1];
  }
  if (param_1 == &PTR_LOOP_005750b0) {
    DAT_005750c0 = 0xffffffff;
    return;
  }
  *(undefined **)param_1[1] = *param_1;
  *(undefined **)(*param_1 + 4) = param_1[1];
  HeapFree(DAT_005d6a04,0,param_1);
  return;
}
