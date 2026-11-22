/* Rebuilt from lomse.exe FUN_0053b4c0 @ 0x0053b4c0 (9 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053efa0 ((DWORD * (__stdcall *)(void))0x0053efa0)

#define LOM_SELF_0053b4c0 1
DWORD * __stdcall rb_0053b4c0(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_0053efa0();
  return pDVar1 + 2;
}
