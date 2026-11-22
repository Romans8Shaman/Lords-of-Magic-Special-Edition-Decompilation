/* Rebuilt from lomse.exe FUN_004c8fc0 @ 0x004c8fc0 (27 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_004c8fc0 1
bool __thiscall rb_004c8fc0(void *this,int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00539660(this,4,1,param_1);
  return (bool)('\x01' - (uVar1 != 1));
}
