/* Rebuilt from lomse.exe FUN_004ba8d0 @ 0x004ba8d0 (49 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_004ba910 ((undefined4 (__thiscall *)(void *, int))0x004ba910)

#define LOM_SELF_004ba8d0 1
void __thiscall rb_004ba8d0(void *this,int param_1)

{
  if (((*(int *)this != 0) && ((*(byte *)(param_1 + 0x30) & 0x20) != 0)) &&
     (*(int *)(param_1 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
    FUN_004ba910(this,param_1);
  }
  return;
}
