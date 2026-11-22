/* Rebuilt from lomse.exe FUN_005401a0 @ 0x005401a0 (57 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_005401a0 1
float10 __cdecl rb_005401a0(undefined4 param_1,undefined4 param_2,short param_3)

{
  return (float10)__BC(double, CONCAT26((*(ushort *)((uchar *)&param_2 + 2)) & 0x800f | (param_3 + 0x3fe) * 0x10,
                                   CONCAT24((undefined2)param_2,param_1)));
}
