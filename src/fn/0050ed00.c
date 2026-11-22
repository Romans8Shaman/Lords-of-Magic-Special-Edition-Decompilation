/* Rebuilt from lomse.exe FUN_0050ed00 @ 0x0050ed00. HAND (2026-11-12): converted from the asm fallback.
 * Returns this->field_0x58's virtual method +0x3c result, or this->field_0x5c if the field is null. */
#include "lom.h"

#define LOM_SELF_0050ed00 1
int __thiscall rb_0050ed00(void *this)
{
  void *o = *(void **)((int)this + 0x58);
  if (o == 0) return *(int *)((int)this + 0x5c);
  return (*(int (__thiscall **)(void *))(*(int *)o + 0x3c))(o);
}
