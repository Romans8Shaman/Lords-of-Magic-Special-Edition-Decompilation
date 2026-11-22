/* Rebuilt from lomse.exe FUN_0052d140 @ 0x0052d140 (17 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0052d240 ((undefined4 * (__fastcall *)(int))0x0052d240)

#define LOM_SELF_0052d140 1
undefined4 __fastcall rb_0052d140(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0052d240(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  return puVar1[10];
}
