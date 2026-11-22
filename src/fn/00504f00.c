/* Rebuilt from lomse.exe FUN_00504f00 @ 0x00504f00 (92 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573428 (*(uint *)0x00573428)
#define DAT_0057342c (*(int *)0x0057342c)
#define DAT_00573430 (*(int *)0x00573430)
#define DAT_00573434 (*(int *)0x00573434)
#define DAT_00573438 (*(int *)0x00573438)

#define LOM_SELF_00504f00 1
int __cdecl rb_00504f00(int param_1,int param_2)

{
  uint uVar1;
  
  DAT_00573428 = ((int)DAT_00573428 % DAT_00573434) * DAT_0057342c -
                 ((int)DAT_00573428 / DAT_00573434) * DAT_00573438;
  if ((int)DAT_00573428 < 0) {
    DAT_00573428 = DAT_00573430 + DAT_00573428;
  }
  uVar1 = (param_2 - param_1) + 1;
  if ((int)uVar1 < 2) {
    return param_1;
  }
  return DAT_00573428 % uVar1 + param_1;
}
