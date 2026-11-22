/* Rebuilt from lomse.exe FUN_0044a910 @ 0x0044a910 (16 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define WaitForSingleObject (*(__typeof__(DWORD (__stdcall *)(HANDLE, DWORD)) *)0x0054d0c4) /* KERNEL32.DLL!WaitForSingleObject via IAT */

#define LOM_SELF_0044a910 1
void __thiscall rb_0044a910(void *this)

{
  WaitForSingleObject(*(HANDLE *)((int)this + 0x370),0x21);
  return;
}
