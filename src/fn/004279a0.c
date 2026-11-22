/* Rebuilt from lomse.exe FUN_004279a0 @ 0x004279a0 (40 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00427950 ((undefined4 (__thiscall *)(void *, int *))0x00427950)

#define LOM_SELF_004279a0 1
void __thiscall rb_004279a0(void *this, int volatile param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)(param_1 + *(int *)this);
  bVar2 = *(byte *)(param_1 + *(int *)this);
  if ((bVar2 & 8) == 0) {
    param_1 = param_1 + 1;
    *pbVar1 = bVar2 | 8;
    FUN_00427950(this,&param_1);
  }
  return;
}
