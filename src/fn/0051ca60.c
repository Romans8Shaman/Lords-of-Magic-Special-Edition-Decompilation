/* Rebuilt from lomse.exe FUN_0051ca60 @ 0x0051ca60 (76 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0051c9b0 ((undefined4 (__thiscall *)(void *, int))0x0051c9b0)

#define LOM_SELF_0051ca60 1
int __thiscall rb_0051ca60(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar3 = 0;
  local_4 = 0;
  piVar4 = (int *)(param_1 + 0x58);
  do {
    uVar1 = FUN_0051c9b0(this,iVar3);
    if ((param_2 & uVar1) != 0) {
      if ((iVar3 < 0) || (0xf < iVar3)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar4;
      }
      local_4 = local_4 + iVar2;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0x10);
  return local_4;
#undef local_4
}
