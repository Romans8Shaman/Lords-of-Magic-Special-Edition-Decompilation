/* Rebuilt from lomse.exe FUN_004eeb00 @ 0x004eeb00 (248 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_004eeb00 1
undefined4 __thiscall rb_004eeb00(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  local_10 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 < *(int *)((int)this + 0x10)) {
    iVar4 = *(int *)((int)this + 0x10) - iVar1;
    piVar5 = (int *)(*(int *)((int)this + 8) + iVar1 * 4);
    do {
      if ((*piVar5 != 0) && (*(int *)(*piVar5 + 4) == 1)) {
        local_10 = local_10 + 1;
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00539660((char *)&local_10,4,1,param_1);
  local_c = *(int *)((int)this + 0x24);
  local_8 = 0;
  if (local_c < *(int *)((int)this + 0x10)) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 8) + local_c * 4);
      if ((iVar1 != 0) && (local_4 = *(int *)(iVar1 + 4), local_4 == 1)) {
        iVar1 = *(int *)(*(int *)((int)this + 8) + local_c * 4);
        uVar2 = *(undefined4 *)(iVar1 + 0x58);
        uVar3 = *(undefined4 *)(iVar1 + 0x54);
        *(undefined4 *)(iVar1 + 0x58) = 0;
        FUN_00539660((char *)&local_4,4,1,param_1);
        piVar5 = *(int **)(*(int *)((int)this + 8) + local_c * 4);
        ((undefined4 (__thiscall *)(__typeof__(piVar5), __typeof__(param_1)))(**(code **)(*piVar5 + 0x20)))(piVar5,param_1);
        *(undefined4 *)(iVar1 + 0x54) = uVar3;
        *(undefined4 *)(iVar1 + 0x58) = uVar2;
        local_8 = local_8 + 1;
        if (local_10 <= local_8) {
          return 1;
        }
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)((int)this + 0x10));
  }
  return 1;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
