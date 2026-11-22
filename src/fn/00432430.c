/* Rebuilt from lomse.exe FUN_00432430 @ 0x00432430 (53 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584cd4 (*(undefined4 *)0x00584cd4)
#define FUN_00431a10 ((undefined4 (__stdcall *)(undefined4 *))0x00431a10)

#define LOM_SELF_00432430 1
undefined4 __thiscall rb_00432430(void *this,int param_1)

{
  if ((*(int *)((int)this + 8) == param_1) && (*(int *)((int)this + 0x18) == 0)) {
    *(undefined4 *)((int)this + 0x18) = 7;
    FUN_00431a10(&DAT_00584cd4);
    return 1;
  }
  return 0;
}
