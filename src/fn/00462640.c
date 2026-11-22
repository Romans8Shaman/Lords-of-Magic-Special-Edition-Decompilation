/* Rebuilt from lomse.exe op_resetcombat @ 0x00462640 (10 bytes, __cdecl). HAND (2026-11-12):
 * the original is `mov ecx, 0x5aa12c; jmp FUN_00461f60` (tail call of the combat object's reset method, which takes
 * no stack args and returns with plain ret, so the VM argument stays with the caller). */
#include "lom.h"

#define FUN_00461f60 ((void (__thiscall *)(void *))0x00461f60)

#define LOM_SELF_00462640 1
void __cdecl rb_00462640(void * vm)

{
  FUN_00461f60((void *)0x5aa12c);
  return;
}
