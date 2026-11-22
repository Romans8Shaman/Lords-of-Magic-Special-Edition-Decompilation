/* Rebuilt from lomse.exe FUN_0053ac20 @ 0x0053ac20 (40 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053ac50 ((DWORD (__cdecl *)(undefined4 *))0x0053ac50)
#define FUN_0053cc50 ((undefined4 (__cdecl *)(uint))0x0053cc50)
#define FUN_0053ccc0 ((undefined4 (__cdecl *)(uint))0x0053ccc0)

#define LOM_SELF_0053ac20 1
DWORD __cdecl rb_0053ac20(undefined4 *param_1)

{
  DWORD DVar1;
  
  FUN_0053cc50((uint)param_1);
  DVar1 = FUN_0053ac50(param_1);
  FUN_0053ccc0((uint)param_1);
  return DVar1;
}
