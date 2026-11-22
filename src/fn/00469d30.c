/* Rebuilt from lomse.exe FUN_00469d30 @ 0x00469d30 (80 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"
/* tools/fpsearch.py: float locals fVar1 = x (v volatile float, x float10) */


#define LOM_SELF_00469d30 1
void __thiscall rb_00469d30(void *this,float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = SQRT(param_3 * param_3 + param_2 * param_2 + param_1 * param_1);
  *(float *)((int)this + 0x58) = param_1 / fVar1;
  *(float *)((int)this + 0x5c) = param_2 / fVar1;
  *(float *)((int)this + 0x60) = param_3 / fVar1;
  return;
}
