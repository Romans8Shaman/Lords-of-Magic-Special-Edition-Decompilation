/* Rebuilt from lomse.exe FUN_0050a030 @ 0x0050a030 (105 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0050a030 1
undefined4 __thiscall rb_0050a030(void *this,undefined4 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 0:
    *param_2 = *(undefined4 *)this;
    return 1;
  case 1:
    *param_2 = *(undefined4 *)((int)this + 4);
    return 1;
  case 2:
    *param_2 = *(undefined4 *)((int)this + 8);
    return 1;
  case 3:
    *param_2 = *(undefined4 *)((int)this + 0xc);
    return 1;
  case 4:
    *param_2 = *(undefined4 *)((int)this + 0x10);
    return 1;
  default:
    return 0;
  }
}
