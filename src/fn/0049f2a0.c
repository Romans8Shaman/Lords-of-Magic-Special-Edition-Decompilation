/* Rebuilt from lomse.exe FUN_0049f2a0 @ 0x0049f2a0 (83 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_0049f2a0 1
undefined4 __thiscall rb_0049f2a0(void *this,int *param_1)

{
  FUN_00539660(this,0x28,1,param_1);
  FUN_00539660((char *)((int)this + 0x28),0x34,1,param_1);
  FUN_00539660((char *)((int)this + 0x5c),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x60),4,1,param_1);
  return 1;
}
