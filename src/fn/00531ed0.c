/* Rebuilt from lomse.exe FUN_00531ed0 @ 0x00531ed0 (210 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574404 (*(int *)0x00574404)
#define DAT_005ae970 (*(int *)0x005ae970)
#define FUN_00531e90 ((int (__thiscall *)(void *, int, int))0x00531e90)

#define LOM_SELF_00531ed0 1
int __thiscall rb_00531ed0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  if (0x7ffffffd < *(int *)(*(int *)this + param_1 * 4)) {
    return -1;
  }
  iVar5 = -1;
  local_8 = 0;
  local_4 = param_1 << 5;
  local_10 = 0x7ffffffe;
  do {
    iVar1 = *(int *)(DAT_005ae970 + local_4);
    if (iVar1 != param_1) {
      iVar2 = *(int *)(*(int *)this + iVar1 * 4);
      if (iVar2 == 0) {
        return iVar1;
      }
      if (iVar2 < local_10) {
        iVar5 = iVar1;
        local_10 = iVar2;
      }
      else if (iVar2 == local_10) {
        iVar3 = FUN_00531e90(this,DAT_00574404,iVar5);
        iVar4 = FUN_00531e90(this,DAT_00574404,iVar1);
        if (iVar4 < iVar3) {
          iVar5 = iVar1;
          local_10 = iVar2;
        }
      }
    }
    local_8 = local_8 + 1;
    local_4 = local_4 + 4;
  } while (local_8 < 8);
  return iVar5;
#undef local_10
#undef local_8
#undef local_4
}
