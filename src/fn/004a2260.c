/* Rebuilt from lomse.exe thunk_FUN_004a1e10 @ 0x004a2260.
 * HAND-WRITTEN: ecx = &DAT_005a8084[DAT_005a7d8c * 0x400]; jmp FUN_004a1e10 (Ghidra dropped the ecx setup). */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define FUN_004a1e10 ((void (__thiscall *)(void *))0x004a1e10)

#define LOM_SELF_004a2260 1
void __thiscall rb_004a2260(void *this)

{
  FUN_004a1e10((void *)(DAT_005a7d8c * 0x400 + 0x5a8084));
}
