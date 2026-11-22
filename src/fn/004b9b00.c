/* Rebuilt from lomse.exe FUN_004b9b00 @ 0x004b9b00 (31 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058446c (*(undefined *)0x0058446c)
#define DAT_00584470 (*(byte *)0x00584470)
#define FUN_004b98f0 ((undefined4 (__fastcall *)(int *))0x004b98f0)

#define LOM_SELF_004b9b00 1
void __cdecl rb_004b9b00(void)

{
  if ((DAT_00584470 & 1) == 0) {
    DAT_00584470 = DAT_00584470 | 1;
    FUN_004b98f0((int *)&DAT_0058446c);
    return;
  }
  return;
}
