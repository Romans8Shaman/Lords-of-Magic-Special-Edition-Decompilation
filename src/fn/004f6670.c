/* Rebuilt from lomse.exe FUN_004f6670 @ 0x004f6670 (47 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491c90 ((undefined4 (__thiscall *)(void *, int))0x00491c90)
#define FUN_004f6630 ((undefined4 (__thiscall *)(void *, undefined4))0x004f6630)
#define _DAT_00583724 (*(undefined4 *)0x00583724)

#define LOM_SELF_004f6670 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_004f6670(void *this,int param_1)

{
  FUN_004f6630((void *)((int)this + 0x29e8c),param_1);
  FUN_00491c90((void *)((int)this + 0x23068),param_1);
  _DAT_00583724 = 0;
  return;
}
