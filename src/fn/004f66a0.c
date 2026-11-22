/* Rebuilt from lomse.exe FUN_004f66a0 @ 0x004f66a0 (130 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeef4 (*(undefined4 *)0x005aeef4)

#define LOM_SELF_004f66a0 1
uint __thiscall rb_004f66a0(void *this,undefined4 param_1)

{
  uint *puVar1;
  int *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar4 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  local_4 = 0;
  if (-1 < *(int *)((int)this + 0x18)) {
    do {
      this_00 = *(int **)(*(int *)((int)this + 8) + iVar4 * 4);
      if (this_00 != (int *)0x0) {
        if ((*(byte *)(this_00 + 0xc) & 1) == 0) {
          uVar3 = ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(param_1)))(**(code **)(*this_00 + 0x18)))(this_00,param_1);
          local_4 = local_4 | uVar3;
        }
        else {
          DAT_005aeef4 = 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(int *)((int)this + 0x18));
  }
  iVar4 = 0;
  if (-1 < *(int *)((int)this + 0x18)) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 8) + iVar4 * 4);
      if (iVar2 != 0) {
        puVar1 = (uint *)(iVar2 + 0x30);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(int *)((int)this + 0x18));
  }
  return local_4;
#undef local_4
}
