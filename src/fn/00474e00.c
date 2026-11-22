/* Rebuilt from lomse.exe FUN_00474e00 @ 0x00474e00 (50 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)

#define LOM_SELF_00474e00 1
void __thiscall rb_00474e00(void *this,undefined4 *param_1)

{
  DAT_00583650 = DAT_00583650 + 0x10;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return;
}
