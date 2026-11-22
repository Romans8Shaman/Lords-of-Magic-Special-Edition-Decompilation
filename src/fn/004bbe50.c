/* Rebuilt from lomse.exe FUN_004bbe50 @ 0x004bbe50 (48 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042d4f0 ((undefined4 (__fastcall *)(int))0x0042d4f0)
#define FUN_004bca80 ((undefined4 (__fastcall *)(int))0x004bca80)
#define FUN_0051b820 ((undefined4 (__fastcall *)(int))0x0051b820)

#define LOM_SELF_004bbe50 1
void __fastcall rb_004bbe50(int param_1)

{
  undefined4 *this;
  
  FUN_004bca80(param_1);
  FUN_0051b820(param_1 + 0x1c64);
  this = *(undefined4 **)(param_1 + 0x28);
  if (this != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(1)))(**(code **)*this))(this,1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  FUN_0042d4f0(param_1);
  return;
}
