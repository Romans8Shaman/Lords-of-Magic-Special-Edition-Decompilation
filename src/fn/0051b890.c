/* Rebuilt from lomse.exe FUN_0051b890 @ 0x0051b890 (26 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0051b820 ((undefined4 (__fastcall *)(int))0x0051b820)
#define FUN_0051b8b0 ((undefined4 (__fastcall *)(int))0x0051b8b0)

#define LOM_SELF_0051b890 1
void __thiscall rb_0051b890(void *this,undefined4 param_1)

{
  FUN_0051b820((int)this);
  *(undefined4 *)((int)this + 0x68) = param_1;
  FUN_0051b8b0((int)this);
  return;
}
