/* Rebuilt from lomse.exe FUN_004abe50 @ 0x004abe50 (33 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004abe50 1
uint __thiscall rb_004abe50(void *this,int param_1,byte param_2)

{
  return (uint)((byte)((byte)*(undefined4 *)(*(int *)((int)this + 100) + 4 + param_1 * 8) &
                      (byte)(1 << (param_2 & 0x1f))) != 0);
}
