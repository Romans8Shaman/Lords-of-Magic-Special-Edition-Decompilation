/* Rebuilt from lomse.exe op_lomlighttables @ 0x0051b010 (10 bytes, __cdecl). HAND (2026-11-12):
 * the original is `mov ecx, 0x5876d0; jmp FUN_00511ad0` (tail call of the map-view object's light-table method,
 * which takes no stack args and returns with plain ret). */
#include "lom.h"

#define FUN_00511ad0 ((void (__thiscall *)(void *))0x00511ad0)

#define LOM_SELF_0051b010 1
void __cdecl rb_0051b010(void * vm)

{
  FUN_00511ad0((void *)0x5876d0);
  return;
}
