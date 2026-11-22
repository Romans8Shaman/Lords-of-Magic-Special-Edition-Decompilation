/* Rebuilt from lomse.exe FUN_004435c0 @ 0x004435c0 (78 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00441350 ((undefined4 (__thiscall *)(void *, uint, undefined4, uint *, int))0x00441350)
#define FUN_00450430 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00450430)

#define LOM_SELF_004435c0 1
undefined4 __thiscall rb_004435c0(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_14[5];
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
  
  iVar1 = FUN_00441350(this,param_1,param_2,local_14,1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00450430(*(undefined4 *)((int)this + 0x28),param_1,param_2,param_3);
  return 1;
#undef local_14
}
