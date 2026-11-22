/* Rebuilt from lomse.exe FUN_004f2f90 @ 0x004f2f90 (45 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f2f70 ((undefined4 (__thiscall *)(void *, uint))0x004f2f70)

#define LOM_SELF_004f2f90 1
void __thiscall rb_004f2f90(void *this,uint param_1,ushort param_2)

{
  if (*(int *)((int)this + 0x40) != 0) {
    FUN_004f2f70(this,param_1);
    *(float *)((int)this + 0x48) = (float)param_2;
  }
  return;
}
