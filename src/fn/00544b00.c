/* Rebuilt from lomse.exe FUN_00544b00 @ 0x00544b00 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define IsBadWritePtr (*(__typeof__(BOOL (__stdcall *)(LPVOID, UINT_PTR)) *)0x0054d118) /* KERNEL32.DLL!IsBadWritePtr via IAT */

#define LOM_SELF_00544b00 1
uint __cdecl rb_00544b00(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return (uint)(BVar1 == 0);
}
