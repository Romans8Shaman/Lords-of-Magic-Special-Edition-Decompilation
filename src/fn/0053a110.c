/* Rebuilt from lomse.exe FUN_0053a110 @ 0x0053a110 (45 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053efa0 ((DWORD * (__stdcall *)(void))0x0053efa0)

#define LOM_SELF_0053a110 1
uint __stdcall rb_0053a110(void)

{
  uint uVar1;
  DWORD *pDVar2;
  
  pDVar2 = FUN_0053efa0();
  uVar1 = pDVar2[5] * 0x343fd + 0x269ec3;
  pDVar2[5] = uVar1;
  return uVar1 >> 0x10 & 0x7fff;
}
