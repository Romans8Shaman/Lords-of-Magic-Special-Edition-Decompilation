/* Rebuilt from lomse.exe FUN_0049b180 @ 0x0049b180 (154 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004750b0 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, int))0x004750b0)

#define LOM_SELF_0049b180 1
undefined4 __thiscall rb_0049b180(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uchar _fr[0x78] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_6c[27];
#define local_6c (*(_t_local_6c *)(_fr + 0x4))
  
  piVar3 = local_6c;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_6c[0] = 0x6c;
  piVar3 = *(int **)((int)this + param_1 * 4 + 0x684);
  if (piVar3 == (int *)0x0) {
    local_6c[3] = param_2;
  }
  else {
    ((undefined4 (__stdcall *)(__typeof__(piVar3), __typeof__(local_6c)))(**(code **)(*piVar3 + 0x58)))(piVar3,local_6c);
    if ((param_2 <= local_6c[3]) && (param_3 <= local_6c[2])) {
      return 1;
    }
    if (local_6c[3] < param_2) {
      local_6c[3] = param_2;
    }
    if (param_3 <= local_6c[2]) {
      param_3 = local_6c[2];
    }
  }
  uVar1 = FUN_004750b0(this,param_1,local_6c[3],param_3,param_4);
  return uVar1;
#undef local_6c
}
