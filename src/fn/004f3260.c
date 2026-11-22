/* Rebuilt from lomse.exe FUN_004f3260 @ 0x004f3260 (50 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f3260 1
uint __thiscall rb_004f3260(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 + *(float *)((int)this + 0x48);
  *(float *)((int)this + 0x48) = fVar1;
  fVar2 = (float)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  return (uint)((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN(fVar2)) && fVar2 <= fVar1);
}
