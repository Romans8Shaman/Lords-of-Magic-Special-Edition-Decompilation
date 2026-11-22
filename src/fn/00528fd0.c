/* Rebuilt from lomse.exe FUN_00528fd0 @ 0x00528fd0 (19 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005291e0 ((uint (__fastcall *)(int))0x005291e0)

#define LOM_SELF_00528fd0 1
undefined4 __fastcall rb_00528fd0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_005291e0(param_1);
  if (uVar1 == 0) {
    return 1;
  }
  return *(undefined4 *)(uVar1 + 0x44);
}
