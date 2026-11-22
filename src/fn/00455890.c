/* Rebuilt from lomse.exe FUN_00455890 @ 0x00455890 (38 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00455890 1
void __thiscall
rb_00455890(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x40) = param_2;
  *(undefined1 *)((int)this + 0x4c) = param_3;
  *(undefined4 *)((int)this + 0x44) = param_4;
  *(undefined4 *)((int)this + 0x48) = param_5;
  return;
}
