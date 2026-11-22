/* Rebuilt from lomse.exe FUN_005470b0 @ 0x005470b0 (30 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_005470b0 1
int __cdecl rb_005470b0(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (psVar2 = psVar2 + 1, sVar1 != 0) {
    sVar1 = *psVar2;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}
