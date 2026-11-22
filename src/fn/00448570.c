/* Rebuilt from lomse.exe FUN_00448570 @ 0x00448570. HAND (2026-11-12): converted from the asm fallback.
 * Calls this->field_0x48's virtual method +0x4c (no stack args, plain ret in both paths), or returns 1 if the field is null. */
#include "lom.h"

#define LOM_SELF_00448570 1
int __thiscall rb_00448570(void *this)
{
  void *o = *(void **)((int)this + 0x48);
  if (o == 0) return 1;
  return (*(int (__thiscall **)(void *))(*(int *)o + 0x4c))(o);
}
