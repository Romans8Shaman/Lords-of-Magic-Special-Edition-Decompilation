/* Rebuilt from lomse.exe FUN_0047c520 @ 0x0047c520 (66 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CreateEventA (*(__typeof__(HANDLE (__stdcall *)(LPSECURITY_ATTRIBUTES, BOOL, BOOL, LPCSTR)) *)0x0054d0d4) /* KERNEL32.DLL!CreateEventA via IAT */
#define FUN_0047be20 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0047be20)
#define FUN_0053aaa0 ((HANDLE (__cdecl *)(int, SIZE_T, int))0x0053aaa0)

#define LOM_SELF_0047c520 1
void __fastcall rb_0047c520(int param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x228b4) = pvVar1;
  pvVar1 = FUN_0053aaa0(0x47c800,0,param_1);
  *(HANDLE *)(param_1 + 0x228b8) = pvVar1;
  FUN_0047be20((void *)(param_1 + 0x228bc),*(undefined4 *)(param_1 + 0x228b4),pvVar1);
  return;
}
