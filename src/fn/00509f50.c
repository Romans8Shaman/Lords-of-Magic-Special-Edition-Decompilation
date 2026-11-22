/* Rebuilt from lomse.exe FUN_00509f50 @ 0x00509f50 (100 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_00509f50 1
undefined4 __thiscall rb_00509f50(void *this,int *param_1)

{
  FUN_005397f0(this,4,1,param_1);
  FUN_005397f0((char *)((int)this + 4),4,1,param_1);
  FUN_005397f0((char *)((int)this + 8),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0xc),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x10),4,1,param_1);
  return 1;
}
