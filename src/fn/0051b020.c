/* Rebuilt from lomse.exe FUN_0051b020 @ 0x0051b020 (182 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0051b020 1
void __thiscall rb_0051b020(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar3 = 0;
  *param_1 = 0xff;
  *param_2 = 0;
  local_4 = 0;
  if (0 < *(int *)((int)this + 0x202b0)) {
    do {
      iVar4 = 0;
      if (0 < *(int *)((int)this + 0x202b4)) {
        do {
          iVar1 = *param_1;
          if (*(int *)(*(int *)(*(int *)((int)this + 0x202ac) + iVar3) + 4 + iVar4 * 8) >> 0x10 <=
              iVar1) {
            iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x202ac) + iVar3) + 4 + iVar4 * 8) >>
                    0x10;
          }
          *param_1 = iVar1;
          piVar2 = (int *)(*(int *)((int)this + 0x202ac) + iVar3);
          iVar1 = *param_2;
          if (iVar1 < *(int *)(*piVar2 + 4 + iVar4 * 8) >> 0x10) {
            iVar1 = *(int *)(*piVar2 + 4 + iVar4 * 8) >> 0x10;
          }
          iVar4 = iVar4 + 1;
          *param_2 = iVar1;
        } while (iVar4 < *(int *)((int)this + 0x202b4));
      }
      local_4 = local_4 + 1;
      iVar3 = iVar3 + 4;
    } while (local_4 < *(int *)((int)this + 0x202b0));
  }
  return;
#undef local_4
}
