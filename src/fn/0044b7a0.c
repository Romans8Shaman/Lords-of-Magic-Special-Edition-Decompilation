/* Rebuilt from lomse.exe FUN_0044b7a0 @ 0x0044b7a0 (109 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0044b610 ((undefined4 (__thiscall *)(void *, int *))0x0044b610)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_0044b7a0 1
undefined4 __thiscall rb_0044b7a0(void *this,int *param_1)

{
  FUN_0044b610(this,param_1);
  FUN_00539660((char *)((int)this + 0x14),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x18),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x1c),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x20),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x24),4,1,param_1);
  return 1;
}
