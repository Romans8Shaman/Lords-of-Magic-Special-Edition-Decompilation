/* Rebuilt from lomse.exe FUN_0053b6b0 @ 0x0053b6b0 (42 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00575094 (*(int *)0x00575094)
#define FUN_00541d40 ((uint (__cdecl *)(int, uint))0x00541d40)
#define PTR_DAT_00574e88 (*(undefined * *)0x00574e88)

#define LOM_SELF_0053b6b0 1
uint __cdecl rb_0053b6b0(int param_1)

{
  uint uVar1;
  
  if (DAT_00575094 < 2) {
    return (byte)PTR_DAT_00574e88[param_1 * 2] & 4;
  }
  uVar1 = FUN_00541d40(param_1,4);
  return uVar1;
}
