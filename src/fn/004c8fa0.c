/* Rebuilt from lomse.exe FUN_004c8fa0 @ 0x004c8fa0 (27 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_004c8fa0 1
uint __thiscall rb_004c8fa0(void *this,int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_005397f0(this,4,1,param_1);
  return (uint)(uVar1 == 1);
}
