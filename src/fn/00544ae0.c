/* Rebuilt from lomse.exe FUN_00544ae0 @ 0x00544ae0 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define IsBadReadPtr (*(__typeof__(BOOL (__stdcall *)(void *, UINT_PTR)) *)0x0054d11c) /* KERNEL32.DLL!IsBadReadPtr via IAT */

#define LOM_SELF_00544ae0 1
uint __cdecl rb_00544ae0(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return (uint)(BVar1 == 0);
}
