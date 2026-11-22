/* Rebuilt from lomse.exe FUN_004bf8d0 @ 0x004bf8d0 (178 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004bf8d0 1
undefined4 __thiscall rb_004bf8d0(void *this,undefined4 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 0:
    *param_2 = *(undefined4 *)((int)this + 8);
    return 1;
  case 1:
    *param_2 = *(undefined4 *)((int)this + 0xc);
    return 1;
  case 2:
    *param_2 = *(undefined4 *)((int)this + 0x10);
    return 1;
  case 3:
    *param_2 = *(undefined4 *)((int)this + 0x14);
    return 1;
  case 4:
    *param_2 = *(undefined4 *)((int)this + 0x18);
    return 1;
  case 5:
    *param_2 = *(undefined4 *)((int)this + 0x1c);
    return 1;
  case 6:
    *param_2 = *(undefined4 *)((int)this + 0x20);
    return 1;
  case 7:
    *param_2 = *(undefined4 *)((int)this + 0x24);
    return 1;
  case 8:
    *param_2 = *(undefined4 *)((int)this + 0x28);
    return 1;
  default:
    return 0;
  }
}
