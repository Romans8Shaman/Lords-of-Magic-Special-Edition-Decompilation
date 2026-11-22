/* Rebuilt from lomse.exe FUN_00540100 @ 0x00540100 (40 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)

#define LOM_SELF_00540100 1
void __cdecl rb_00540100(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_0053b4c0();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_0053b4c0();
    *pDVar1 = 0x22;
    return;
  }
  return;
}
