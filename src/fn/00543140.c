/* Rebuilt from lomse.exe FUN_00543140 @ 0x00543140 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d555c (*(undefined * *)0x005d555c)

#define LOM_SELF_00543140 1
undefined4 __cdecl rb_00543140(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_005d555c != (code *)0x0) {
    iVar1 = ((undefined4 (__cdecl *)(__typeof__(param_1)))(DAT_005d555c))(param_1) /* HAND: call the pointer itself; *DAT read a byte */;
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
