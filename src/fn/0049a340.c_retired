/* Rebuilt from lomse.exe FUN_0049a340 @ 0x0049a340 (156 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049a340 1
uint __thiscall rb_0049a340(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  piVar5 = *(int **)((int)this + 8);
  uVar4 = 0xffffffff;
  local_4 = 0xffffffff;
  if (piVar5 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)this;
  uVar2 = 0;
  uVar3 = 0xffffffff;
  if (0 < iVar1) {
    do {
      if (*piVar5 == *param_1) {
        uVar4 = uVar2;
      }
      if (*piVar5 == -1) {
        local_4 = uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 3;
    } while ((int)uVar2 < iVar1);
    uVar3 = local_4;
  }
  if ((int)uVar4 < 0) {
    if (0x7fffffff < uVar3) {
      uVar3 = *(uint *)((int)this + 4);
    }
  }
  else {
    uVar3 = uVar4;
  }
  if ((int)uVar3 < iVar1) {
    piVar5 = (int *)(*(int *)((int)this + 8) + uVar3 * 0xc);
    *piVar5 = *param_1;
    piVar5[1] = param_1[1];
    piVar5[2] = param_1[2];
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    return uVar3;
  }
  return 0xffffffff;
#undef local_4
}
