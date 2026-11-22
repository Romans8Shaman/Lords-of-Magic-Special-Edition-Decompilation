/* Rebuilt from lomse.exe FUN_00541b70 @ 0x00541b70 (57 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00575094 (*(int *)0x00575094)
#define FUN_00541d40 ((uint (__cdecl *)(int, uint))0x00541d40)
#define PTR_DAT_00574e88 (*(undefined * *)0x00574e88)

#define LOM_SELF_00541b70 1
uint __cdecl rb_00541b70(uint param_1)

{
  uint uVar1;
  
  if (DAT_00575094 < 2) {
    uVar1 = (byte)PTR_DAT_00574e88[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_00541d40(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}
