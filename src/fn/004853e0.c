/* Rebuilt from lomse.exe FUN_004853e0 @ 0x004853e0 (31 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583430 (*(byte *)0x00583430)
#define DAT_00583440 (*(undefined *)0x00583440)
#define FUN_0043ba50 ((undefined4 (__fastcall *)(undefined4 *))0x0043ba50)

#define LOM_SELF_004853e0 1
void __cdecl rb_004853e0(void)

{
  if ((DAT_00583430 & 1) == 0) {
    DAT_00583430 = DAT_00583430 | 1;
    FUN_0043ba50((undefined4 *)&DAT_00583440);
    return;
  }
  return;
}
