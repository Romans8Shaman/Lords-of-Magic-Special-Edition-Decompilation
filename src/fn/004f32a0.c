/* Rebuilt from lomse.exe FUN_004f32a0 @ 0x004f32a0 (35 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _DAT_0054de1c (*(float *)0x0054de1c)

#define LOM_SELF_004f32a0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall rb_004f32a0(void *this,float param_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = param_1 + *(float *)((int)this + 0x48);
  bVar1 = __LOM_ISNAN(_DAT_0054de1c);
  bVar2 = fVar3 < _DAT_0054de1c;
  *(float *)((int)this + 0x48) = fVar3;
  return (uint)((__LOM_ISNAN(fVar3) || bVar1) || bVar2);
}
