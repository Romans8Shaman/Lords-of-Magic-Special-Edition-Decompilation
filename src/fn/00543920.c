/* Rebuilt from lomse.exe FUN_00543920 @ 0x00543920 (24 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005438e0 ((uint (__cdecl *)(undefined4, undefined4))0x005438e0)

#define LOM_SELF_00543920 1
void __cdecl rb_00543920(void *param_1,uint param_2)

{
  FUN_005438e0(param_1,param_2 & 0xfff7ffff);
  return;
}
