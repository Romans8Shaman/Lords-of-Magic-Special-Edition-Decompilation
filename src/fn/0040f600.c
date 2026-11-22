/* Rebuilt from lomse.exe FUN_0040f600 @ 0x0040f600 (125 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040ec50 ((undefined4 (__thiscall *)(void *, int *))0x0040ec50)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_0040f600 1
undefined4 __thiscall rb_0040f600(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  void *this_00;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = 0;
  for (iVar2 = *(int *)this; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x4c)) {
    local_4 = local_4 + 1;
  }
  uVar1 = FUN_00539660((char *)&local_4,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  this_00 = *(void **)this;
  if (this_00 == (void *)0x0) {
    return 1;
  }
  do {
    iVar2 = FUN_0040ec50(this_00,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    this_00 = *(void **)((int)this_00 + 0x4c);
  } while (this_00 != (void *)0x0);
  return 1;
#undef local_4
}
