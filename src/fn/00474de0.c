/* Rebuilt from lomse.exe FUN_00474de0 @ 0x00474de0 (31 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)

#define LOM_SELF_00474de0 1
void __thiscall rb_00474de0(void *this)

{
  DAT_00583650 = DAT_00583650 + 0x10;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  return;
}
