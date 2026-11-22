/* Rebuilt from lomse.exe op_clearslots @ 0x004324e0 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584d2a (*(undefined1 *)0x00584d2a)

#define LOM_SELF_004324e0 1
void __cdecl rb_004324e0(void *vm)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_00584d2a;
  iVar2 = 7;
  do {
    puVar1[-0x2a] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
