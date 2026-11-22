/* Rebuilt from lomse.exe FUN_00530420 @ 0x00530420 (30 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0052d240 ((undefined4 * (__fastcall *)(int))0x0052d240)
#define FUN_005303b0 ((undefined4 (__stdcall *)(undefined4))0x005303b0)

#define LOM_SELF_00530420 1
undefined4 __fastcall rb_00530420(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0052d240(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_005303b0(puVar1[10]);
  return 1;
}
