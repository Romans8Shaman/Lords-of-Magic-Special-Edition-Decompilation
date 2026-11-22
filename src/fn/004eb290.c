/* Rebuilt from lomse.exe FUN_004eb290 @ 0x004eb290 (3 bytes, __thiscall).
 * HAND (2026-11-13): tail-jumps to the function pointer at this+0x58, leaving this in ECX
 * (orig: jmp [ecx+0x58]). hooksafe SAFE: 2 bytes of int3/nop padding before the next fn. */
#include "lom.h"
#define LOM_SELF_004eb290 1
int __thiscall rb_004eb290(void *this)
{
  return ((int (__thiscall *)(void *))(*(int *)((int)this + 0x58)))(this);
}
