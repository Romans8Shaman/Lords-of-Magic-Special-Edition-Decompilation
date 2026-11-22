/* Rebuilt from lomse.exe FUN_00506110 @ 0x00506110 (47 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00506100 ((uint (__fastcall *)(int))0x00506100)

#define LOM_SELF_00506110 1
uint __thiscall rb_00506110(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00506100(param_1);
  uVar2 = 1;
  if (uVar1 != 0) {
    uVar2 = (uint)((1 << ((byte)*(undefined4 *)((int)this + 0x48) & 0x1f) &
                   *(uint *)(param_1 + 0x5cc)) == 0);
  }
  return uVar2;
}
