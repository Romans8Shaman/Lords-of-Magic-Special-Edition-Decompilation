/* Rebuilt from lomse.exe FUN_00544b20 @ 0x00544b20 (27 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define IsBadCodePtr (*(__typeof__(BOOL (__stdcall *)(FARPROC)) *)0x0054d114) /* KERNEL32.DLL!IsBadCodePtr via IAT */

#define LOM_SELF_00544b20 1
uint __cdecl rb_00544b20(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return (uint)(BVar1 == 0);
}
