/* Rebuilt from lomse.exe FUN_004f6820 @ 0x004f6820 (5 bytes, __thiscall).
 * HAND (2026-11-13): tail-calls this->vtable[0x1c] with this in ECX (orig: mov eax,[ecx]; jmp [eax+0x1c]). */
#include "lom.h"
#define LOM_SELF_004f6820 1
int __thiscall rb_004f6820(void *this)
{
  return (*(int (__thiscall **)(void *))(*(int *)this + 0x1c))(this);
}
