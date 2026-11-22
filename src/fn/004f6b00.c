/* Rebuilt from lomse.exe FUN_004f6b00 @ 0x004f6b00 (131 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_004f6b00 1
undefined4 __thiscall rb_004f6b00(void *this,int *param_1)

{
  FUN_005397f0((char *)((int)this + 4),4,1,param_1);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_005397f0((char *)((int)this + 0x1c),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x20),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x24),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x28),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x30),4,1,param_1);
  return 1;
}
