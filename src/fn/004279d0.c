/* Rebuilt from lomse.exe FUN_004279d0 @ 0x004279d0 (107 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_004279d0 1
undefined4 __thiscall rb_004279d0(void *this,int param_1,int *param_2)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 4))) {
    iVar1 = param_1;
    do {
      local_4 = local_4 + 1;
      if ((*(byte *)(iVar1 + *(int *)this) & 8) != 0) break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  FUN_00539660((char *)&local_4,4,1,param_2);
  if (0 < (int)local_4) {
    FUN_00539660((char *)(param_1 + *(int *)this),1,local_4,param_2);
  }
  return 1;
#undef local_4
}
