/* Rebuilt from lomse.exe FUN_004903c0 @ 0x004903c0 (28 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583610 (*(void * *)0x00583610)
#define FUN_0048dfc0 ((undefined4 (__thiscall *)(void *, int))0x0048dfc0)

#define LOM_SELF_004903c0 1
void __stdcall rb_004903c0(void)

{
  if (DAT_00583610 != (void *)0x0) {
    FUN_0048dfc0(DAT_00583610,0);
  }
  DAT_00583610 = (void *)0x0;
  return;
}
