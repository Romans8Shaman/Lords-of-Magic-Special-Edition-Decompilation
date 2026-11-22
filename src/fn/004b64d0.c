/* Rebuilt from lomse.exe FUN_004b64d0 @ 0x004b64d0 (71 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005851a0 (*(undefined4 *)0x005851a0)
#define DAT_005cd2c4 (*(undefined *)0x005cd2c4)
#define FUN_004c4d20 ((undefined4 (__fastcall *)(undefined4 *))0x004c4d20)

#define LOM_SELF_004b64d0 1
undefined4 __fastcall rb_004b64d0(int param_1)

{
  int *this;
  undefined4 *this_00;
  
  DAT_005851a0 = 0;
  this = *(int **)(param_1 + 0x4b2c);
  if (this != (int *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x44)))(this);
    this_00 = *(undefined4 **)(param_1 + 0x4b2c);
    if (this_00 != (undefined4 *)0x0) {
      ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(1)))(**(code **)*this_00))(this_00,1);
    }
    *(undefined4 *)(param_1 + 0x4b2c) = 0;
  }
  FUN_004c4d20((undefined4 *)&DAT_005cd2c4);
  return 1;
}
