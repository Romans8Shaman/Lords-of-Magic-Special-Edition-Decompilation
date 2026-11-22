/* Rebuilt from lomse.exe FUN_0048ec90 @ 0x0048ec90 (220 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_0048eb70 ((undefined4 (__thiscall *)(void *, int *))0x0048eb70)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)

#define LOM_SELF_0048ec90 1
int * __thiscall rb_0048ec90(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_24;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_10[4];
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define local_14 (*(_t_local_14 *)(_fr + 0x14))
#define local_10 (*(_t_local_10 *)(_fr + 0x18))
  
  iVar1 = FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 8));
  iVar4 = 0;
  if (iVar1 == 0) {
    iVar3 = 0x280;
    local_1c = 0x1e0;
    local_14 = -1;
    local_18 = -1;
  }
  else {
    iVar3 = *(int *)((int)this + 0x3c);
    local_1c = *(int *)((int)this + 0x40);
    local_18 = *(int *)(iVar1 + 0xc) + -1 + iVar3;
    local_14 = *(int *)(iVar1 + 0x10) + -1 + local_1c;
  }
  local_24 = 0;
  if (0 < *(int *)((int)this + 0x50)) {
    do {
      piVar2 = (int *)FUN_0048eb70((void *)(*(int *)((int)this + 0x4c) + iVar4),local_10);
      if (*piVar2 <= iVar3) {
        iVar3 = *piVar2;
      }
      if (piVar2[1] <= local_1c) {
        local_1c = piVar2[1];
      }
      if (local_18 < piVar2[2]) {
        local_18 = piVar2[2];
      }
      if (local_14 < piVar2[3]) {
        local_14 = piVar2[3];
      }
      local_24 = local_24 + 1;
      iVar4 = iVar4 + 0x2c;
    } while (local_24 < *(int *)((int)this + 0x50));
  }
  *param_1 = iVar3;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return param_1;
#undef local_24
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
