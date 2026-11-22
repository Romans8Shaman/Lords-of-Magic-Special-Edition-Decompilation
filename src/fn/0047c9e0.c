/* Rebuilt from lomse.exe FUN_0047c9e0 @ 0x0047c9e0 (64 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0047c9e0 1
uint __thiscall rb_0047c9e0(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + param_1 * 0x1d84 + 0x5068;
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(uint *)(iVar1 + 0x15d8) >> 1 & 1;
}
