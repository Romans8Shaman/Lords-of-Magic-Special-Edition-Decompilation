/* Rebuilt from lomse.exe FUN_004ab220 @ 0x004ab220 (45 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004ab220 1
uint __thiscall rb_004ab220(void *this,int param_1,int param_2)

{
  return (uint)*(ushort *)
                (**(int **)this +
                ((*(int *)((int)this + 8) + param_2) * ((*(int **)this)[3] >> 1) +
                 *(int *)((int)this + 4) + param_1) * 2);
}
