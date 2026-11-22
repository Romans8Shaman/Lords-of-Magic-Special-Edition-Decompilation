/* Rebuilt from lomse.exe FUN_0041fa00 @ 0x0041fa00 (36 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005781c0 (*(byte *)0x005781c0)
#define DAT_005787b8 (*(undefined *)0x005787b8)
#define FUN_0041fac0 ((undefined4 (__fastcall *)(int *))0x0041fac0)

#define LOM_SELF_0041fa00 1
void __cdecl rb_0041fa00(void)

{
  if ((DAT_005781c0 & 1) == 0) {
    DAT_005781c0 = DAT_005781c0 | 1;
    FUN_0041fac0((int *)&DAT_005787b8);
    return;
  }
  return;
}
