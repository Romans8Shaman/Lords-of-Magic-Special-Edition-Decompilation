/* Rebuilt from lomse.exe FUN_004feac0 @ 0x004feac0 (40 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define VirtualAlloc (*(__typeof__(LPVOID (__stdcall *)(LPVOID, SIZE_T, DWORD, DWORD)) *)0x0054d0ac) /* KERNEL32.DLL!VirtualAlloc via IAT */

#define LOM_SELF_004feac0 1
void __thiscall rb_004feac0(void *this,uint param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = VirtualAlloc((LPVOID)0x0,(param_1 & 3) + param_1,0x2000,4);
  *(LPVOID *)((int)this + 0x128) = pvVar1;
  return;
}
