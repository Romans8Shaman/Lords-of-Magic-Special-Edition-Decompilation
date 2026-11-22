/* Rebuilt from lomse.exe FUN_00480f50 @ 0x00480f50 (25 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeef4 (*(undefined4 *)0x005aeef4)
#define FUN_00480f70 ((undefined4 (__thiscall *)(void *, int))0x00480f70)

#define LOM_SELF_00480f50 1
void __thiscall rb_00480f50(void *this,int *param_1)

{
  DAT_005aeef4 = 1;
  FUN_00480f70(this,*param_1);
  return;
}
