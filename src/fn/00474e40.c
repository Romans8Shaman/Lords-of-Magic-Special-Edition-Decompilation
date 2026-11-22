/* Rebuilt from lomse.exe FUN_00474e40 @ 0x00474e40 (33 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)

#define LOM_SELF_00474e40 1
void * __thiscall rb_00474e40(void *this)

{
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(this);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return this;
}
