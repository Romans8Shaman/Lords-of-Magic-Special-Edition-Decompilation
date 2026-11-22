/* Rebuilt from lomse.exe FUN_00541be0 @ 0x00541be0 (24 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00545f30 ((uint (__cdecl *)(uint, int *))0x00545f30)

#define LOM_SELF_00541be0 1
uint __cdecl rb_00541be0(uint param_1,int *param_2)

{
  if (param_1 != 0xffffffff) {
    param_1 = FUN_00545f30(param_1,param_2);
  }
  return param_1;
}
