/* Rebuilt from lomse.exe FUN_004befb0 @ 0x004befb0 (71 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define s_Invalid_access_to_SpellKnowledge_0055d8cc (*(char (*)[])0x0055d8cc)

#define LOM_SELF_004befb0 1
undefined4 __thiscall rb_004befb0(void *this,int param_1)

{
  uint *puVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 4) <= param_1)) {
    FUN_005047d0(s_Invalid_access_to_SpellKnowledge_0055d8cc);
    return 0;
  }
  puVar1 = (uint *)(*(int *)this + (param_1 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  return 1;
}
