/* Rebuilt from lomse.exe FUN_004bcb40 @ 0x004bcb40 (25 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584488 (*(undefined *)0x00584488)
#define FUN_004bf4c0 ((undefined4 (__thiscall *)(void *, undefined *, void *))0x004bf4c0)

#define LOM_SELF_004bcb40 1
void __thiscall rb_004bcb40(void *this,void *param_1)

{
  FUN_004bf4c0(&DAT_00584488,*(undefined **)((int)this + 0x15a8),param_1);
  return;
}
