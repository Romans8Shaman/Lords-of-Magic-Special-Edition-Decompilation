/* Rebuilt from lomse.exe FUN_00483ba0 @ 0x00483ba0 (53 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define FUN_00481610 ((undefined4 (__thiscall *)(void *, int))0x00481610)
#define FUN_005000f0 ((undefined4 (__thiscall *)(void *, int))0x005000f0)

#define LOM_SELF_00483ba0 1
undefined4 __thiscall rb_00483ba0(void *this,int param_1)

{
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    return 0;
  }
  FUN_00481610(this,param_1);
  FUN_005000f0(&DAT_00584ae8,param_1);
  return 1;
}
