/* Rebuilt from lomse.exe FUN_00511370 @ 0x00511370. HAND (2026-11-12): converted from the asm fallback.
 * Calls this->field_0x58's virtual method +0x4c (no stack args), or returns 1 if the field is null. */
#include "lom.h"

#define LOM_SELF_00511370 1
int __thiscall rb_00511370(void *this)
{
  void *o = *(void **)((int)this + 0x58);
  if (o == 0) return 1;
  return (*(int (__thiscall **)(void *))(*(int *)o + 0x4c))(o);
}
