/* Rebuilt from lomse.exe thunk_FUN_00530500 @ 0x00530520 (20 bytes). HAND (2026-11-13, was asmfn):
 * `ecx = 0x5a7d90 + ([0x5a7d8c] << 10); jmp 00530500`. 00530500 reads no stack args and ends in a plain `ret`,
 * so the tail jump forwards nothing: a thiscall on the selected 1 KB record. */
#include "lom.h"

#define DAT_005a7d8c (*(volatile int *)0x005a7d8c)
#define FUN_00530500 ((int (__thiscall *)(void *))0x00530500)

#define LOM_SELF_00530520 1
int __cdecl rb_00530520(void)
{
  return FUN_00530500((void *)(0x5a7d90 + (DAT_005a7d8c << 10)));
}
