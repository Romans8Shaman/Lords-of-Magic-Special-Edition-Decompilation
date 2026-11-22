/* Rebuilt from lomse.exe FUN_004c9070 @ 0x004c9070 (28 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c9030 ((undefined4 (__thiscall *)(void *, int, uint *))0x004c9030)

#define LOM_SELF_004c9070 1
uint __thiscall rb_004c9070(void *this, uint volatile param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c9030(this,param_1,&param_1);
  return -(uint)(iVar1 != 0) & param_1;
}
