/* Rebuilt from lomse.exe FUN_0053a100 @ 0x0053a100 (13 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053efa0 ((DWORD * (__stdcall *)(void))0x0053efa0)

#define LOM_SELF_0053a100 1
void __cdecl rb_0053a100(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_0053efa0();
  pDVar1[5] = param_1;
  return;
}
