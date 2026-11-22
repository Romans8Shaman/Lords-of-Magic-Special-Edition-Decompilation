/* Rebuilt from lomse.exe FUN_00452f30 @ 0x00452f30 (136 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00452d80 ((undefined4 (__thiscall *)(void *, int *))0x00452d80)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_00452f30 1
undefined4 __cdecl rb_00452f30(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  void *this;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = 0;
  for (iVar2 = *(int *)(param_1 + 0x348); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
    local_4 = local_4 + 1;
  }
  uVar1 = FUN_00539660((char *)&local_4,4,1,param_2);
  if (uVar1 != 1) {
    return 0;
  }
  this = *(void **)(param_1 + 0x348);
  if (this == (void *)0x0) {
    return 1;
  }
  do {
    iVar2 = FUN_00452d80(this,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    this = *(void **)((int)this + 0x24);
    local_4 = local_4 + 1;
  } while (this != (void *)0x0);
  return 1;
#undef local_4
}
