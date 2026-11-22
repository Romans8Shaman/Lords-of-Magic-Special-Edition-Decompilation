/* Rebuilt from lomse.exe op_netlockgame @ 0x004b6020. HAND (2026-11-12): converted from the asm fallback.
 * Calls the net object (0x5d1e84) virtual method +0x58 if present (no stack args). */
#include "lom.h"

#define LOM_SELF_004b6020 1
void __cdecl rb_004b6020(void)
{
  void *o = *(void **)0x5d1e84;
  if (o != 0) (*(void (__thiscall **)(void *))(*(int *)o + 0x58))(o);
}
