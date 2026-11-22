/* Rebuilt from lomse.exe FUN_00406000 @ 0x00406000 (23 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a4c50 ((uint (__thiscall *)(void *, int))0x004a4c50)

#define LOM_SELF_00406000 1
bool __thiscall rb_00406000(void *this,int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004a4c50(this,param_1);
  return (uVar1 & param_2) != 0;
}
