/* Rebuilt from lomse.exe FUN_00455d70 @ 0x00455d70 (221 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a5170 ((int (__thiscall *)(void *, int, int))0x004a5170)
#define _DAT_0054d6b8 (*(float *)0x0054d6b8)

#define LOM_SELF_00455d70 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall rb_00455d70(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_48;
  typedef int _t_local_44;
  typedef int _t_local_40[16];
#define local_48 (*(_t_local_48 volatile *)(_fr + 0x0)) /* HAND: volatile = fstp dword each iteration (LLVM keeps f32 in 80-bit regs) */
#define local_44 (*(_t_local_44 *)(_fr + 0x4))
#define local_40 (*(_t_local_40 *)(_fr + 0x8))
  
  iVar3 = 0;
  local_40[0] = 0xffffffff; /* HAND: Ghidra dropped the first table entry ([esp+0x18] = -1) */
  local_40[1] = 0xffffffff;
  local_40[2] = 0;
  local_40[3] = 0xffffffff;
  local_40[4] = 1;
  local_40[5] = 0xffffffff;
  local_40[6] = 1;
  local_40[7] = 0;
  local_40[8] = 1;
  local_40[9] = 1;
  local_40[10] = 0;
  local_40[0xb] = 1;
  local_40[0xc] = 0xffffffff;
  local_40[0xd] = 1;
  local_40[0xe] = 0xffffffff;
  local_40[0xf] = 0;
  local_48 = 0.0;
  piVar4 = local_40 + 1;
  local_44 = 8;
  do {
    iVar1 = piVar4[-1] + param_2;
    iVar2 = param_3 + *piVar4;
    if ((((-1 < iVar1) && (iVar1 < *(int *)((int)param_1 + 0x6c))) && (-1 < iVar2)) &&
       (iVar2 < *(int *)((int)param_1 + 0x70))) {
      iVar1 = FUN_004a5170(param_1,iVar1,iVar2);
      iVar3 = iVar3 + 1;
      local_48 = *(float *)(*(int *)((int)param_1 + 0x54) + 4 + iVar1 * 8) + local_48;
    }
    piVar4 = piVar4 + 2;
    local_44 = local_44 + -1;
  } while (local_44 != 0);
  if (iVar3 < 1) {
    return (float10)_DAT_0054d6b8;
  }
  return (float10)local_48 / (float10)iVar3;
#undef local_48
#undef local_44
#undef local_40
}
