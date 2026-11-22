/* HAND-WRITTEN: FUN_005304c0(&DAT_005aa12c, DAT_005a7d90[DAT_005a7d8c * 0x100]); return 1. ecx = 0x5aa12c at the call. */
#include "lom.h"
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define FUN_005304c0 ((void (__thiscall *)(void *, int))0x005304c0)
#define LOM_SELF_00530500 1
int __cdecl rb_00530500(void)
{
  FUN_005304c0((void *)0x5aa12c, *(int *)((DAT_005a7d8c << 10) + 0x5a7d90));
  return 1;
}
