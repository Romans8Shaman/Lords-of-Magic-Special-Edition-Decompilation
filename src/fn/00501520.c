/* Rebuilt from lomse.exe FUN_00501520 @ 0x00501520 (674 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004207b0 ((uint (__thiscall *)(void *, uint))0x004207b0)
#define FUN_004a4c70 ((int (__thiscall *)(void *, int, int, uint))0x004a4c70)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)
#define FUN_0052d190 ((undefined4 (__fastcall *)(int))0x0052d190)

#define LOM_SELF_00501520 1
int __thiscall rb_00501520(void *this,void *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20[8];
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
  
  iVar3 = 0;
  piVar4 = local_20;
  do {
    iVar1 = FUN_004a4c70((void *)((int)this + 0x29e70),*(int *)((int)param_1 + 0x1c),iVar3,0x40000);
    *piVar4 = iVar1;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 8);
  uVar2 = FUN_0052d190(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
  if (uVar2 == 0) {
    uVar2 = *(uint *)((int)param_1 + 0x54);
    iVar3 = *(int *)((int)param_1 + 0x1c);
    piVar4 = (int *)((int)this + 0x2a41c);
    if ((uVar2 & 0x100000) != 0) {
      return 0x4a;
    }
    if (((uVar2 & 0x40000) != 0) && ((uVar2 & 0x80000) != 0)) {
      return 0x4a;
    }
    if ((uVar2 & 0x40000) == 0) {
      if ((uVar2 & 0x80000) != 0) {
        if (*(int *)((int)this + 0x2a5d4) == 0) {
          FUN_004c6660(piVar4);
        }
        if ((((-1 < iVar3) && (-1 < param_2)) && (iVar3 < *(int *)((int)this + 0x2a428))) &&
           (param_2 < *(int *)((int)this + 0x2a428))) {
          return 0x4b - (uint)(*(short *)(*piVar4 + 4 + iVar3 * 6) ==
                              *(short *)(*piVar4 + 4 + param_2 * 6));
        }
      }
    }
    else {
      if (*(int *)((int)this + 0x2a5d4) == 0) {
        FUN_004c6660(piVar4);
      }
      if (((-1 < iVar3) && (-1 < param_2)) &&
         ((iVar3 < *(int *)((int)this + 0x2a428) && (param_2 < *(int *)((int)this + 0x2a428))))) {
        return 0x4b - (uint)(*(short *)(*piVar4 + 2 + iVar3 * 6) ==
                            *(short *)(*piVar4 + 2 + param_2 * 6));
      }
    }
    return 0x4b;
  }
  uVar2 = FUN_004207b0(param_1,uVar2);
  iVar3 = *(int *)((int)param_1 + 0x1c);
  piVar4 = (int *)((int)this + 0x2a41c);
  if ((uVar2 & 0x100000) != 0) {
    return 0x46;
  }
  if (((uVar2 & 0x40000) != 0) && ((uVar2 & 0x80000) != 0)) {
    return 0x46;
  }
  if ((uVar2 & 0x40000) == 0) {
    if ((uVar2 & 0x80000) != 0) {
      if (*(int *)((int)this + 0x2a5d4) == 0) {
        FUN_004c6660(piVar4);
      }
      if ((((-1 < iVar3) && (-1 < param_2)) && (iVar3 < *(int *)((int)this + 0x2a428))) &&
         (param_2 < *(int *)((int)this + 0x2a428))) {
        return 0x47 - (uint)(*(short *)(*piVar4 + 4 + iVar3 * 6) ==
                            *(short *)(*piVar4 + 4 + param_2 * 6));
      }
    }
  }
  else {
    if (*(int *)((int)this + 0x2a5d4) == 0) {
      FUN_004c6660(piVar4);
    }
    if (((-1 < iVar3) && (-1 < param_2)) &&
       ((iVar3 < *(int *)((int)this + 0x2a428) && (param_2 < *(int *)((int)this + 0x2a428))))) {
      return 0x47 - (uint)(*(short *)(*piVar4 + 2 + iVar3 * 6) ==
                          *(short *)(*piVar4 + 2 + param_2 * 6));
    }
  }
  return 0x47;
#undef local_20
}
