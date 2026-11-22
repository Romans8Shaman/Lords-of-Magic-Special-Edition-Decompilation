/* Rebuilt from lomse.exe FUN_0049aa80 @ 0x0049aa80 (90 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583730 (*(undefined4 * *)0x00583730)
#define DAT_00583734 (*(undefined4 *)0x00583734)
#define DAT_005a7a38 (*(undefined4 *)0x005a7a38)
#define FUN_004f5370 ((undefined4 (__cdecl *)(undefined4, undefined4, undefined4))0x004f5370)
#define _DAT_00584ab8 (*(undefined4 *)0x00584ab8)
#define _DAT_00584abc (*(undefined4 *)0x00584abc)
#define _DAT_00584ac0 (*(undefined4 *)0x00584ac0)
#define _DAT_00584ac4 (*(undefined4 *)0x00584ac4)

#define LOM_SELF_0049aa80 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_0049aa80(void *this)

{
  FUN_004f5370((int)this + 0x4d484,*(undefined4 *)((int)this + 0x680),
               *(undefined4 *)((int)this + 0x688));
  _DAT_00584abc = 0;
  _DAT_00584ac4 = 0x17f;
  _DAT_00584ab8 = 0;
  _DAT_00584ac0 = 0x27f;
  DAT_00583730 = &DAT_005a7a38;
  DAT_00583734 = 0;
  return 1;
}
