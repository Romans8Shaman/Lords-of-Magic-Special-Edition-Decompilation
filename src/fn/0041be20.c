/* Rebuilt from lomse.exe FUN_0041be20 @ 0x0041be20 (31 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005781c4 (*(byte *)0x005781c4)
#define DAT_005781d0 (*(undefined *)0x005781d0)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)

#define LOM_SELF_0041be20 1
void __cdecl rb_0041be20(void)

{
  if ((DAT_005781c4 & 1) == 0) {
    DAT_005781c4 = DAT_005781c4 | 1;
    FUN_00411910((undefined4 *)&DAT_005781d0);
    return;
  }
  return;
}
