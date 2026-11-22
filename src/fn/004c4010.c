/* Rebuilt from lomse.exe FUN_004c4010 @ 0x004c4010 (70 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_004c4010 1
undefined4 __thiscall rb_004c4010(void *this,int *param_1)

{
  FUN_00539660(this,4,1,param_1);
  FUN_00539660((char *)((int)this + 4),4,1,param_1);
  FUN_00539660(*(char **)((int)this + 8),*(int *)this << 2,1,param_1);
  return 1;
}
