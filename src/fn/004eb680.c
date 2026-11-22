/* Rebuilt from lomse.exe FUN_004eb680 @ 0x004eb680 (472 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004eb910 ((undefined4 (__fastcall *)(int *))0x004eb910)

#define LOM_SELF_004eb680 1
void __thiscall rb_004eb680(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  *(int *)((int)this + 0x150) = param_1;
  iVar3 = *(int *)this + 1;
  iVar6 = 0;
  iVar5 = 0;
  *(int *)((int)this + 0x154) = param_2;
  if (0 < iVar3) {
    piVar2 = (int *)((int)this + 0x4c);
    iVar4 = iVar5;
    iVar7 = iVar6;
    local_4 = iVar3;
    do {
      iVar1 = *piVar2;
      iVar5 = iVar4;
      iVar6 = iVar7;
      if (iVar1 != 0) {
        iVar6 = *(int *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 0xc) <= iVar7) {
          iVar6 = iVar7;
        }
        iVar5 = *(int *)(iVar1 + 0x10);
        if (*(int *)(iVar1 + 0x10) <= iVar4) {
          iVar5 = iVar4;
        }
      }
      piVar2 = piVar2 + 1;
      local_4 = local_4 + -1;
      iVar4 = iVar5;
      iVar7 = iVar6;
    } while (local_4 != 0);
  }
  *(undefined4 *)((int)this + 0xcc) = 0;
  if (0 < iVar3) {
    piVar2 = (int *)((int)this + 0x14);
    iVar4 = iVar3;
    do {
      iVar7 = *piVar2;
      piVar2 = piVar2 + 1;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + iVar7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)((int)this + 0x30);
  if ((*(byte *)((int)this + 0xd4) & 1) == 0) {
    iVar5 = ((*(int *)((int)this + 0x10) / 2 + *(int *)((int)this + 8)) - *(int *)(iVar4 + 0x10) / 2
            ) + param_2;
    *(int *)((int)this + 0xac) = iVar5;
    *(int *)((int)this + 0xa8) = -(*(int *)(iVar4 + 0xc) / 2);
    iVar4 = 0;
    iVar5 = (iVar5 - iVar6 / 2) + -1;
    if (0 < iVar3) {
      piVar2 = (int *)((int)this + 0x4c);
      do {
        if (*piVar2 == 0) {
          piVar2[0x11] = iVar5;
          piVar2[0xb] = 0;
        }
        else {
          piVar2[0x11] = iVar5 - *(int *)(*piVar2 + 0x10) / 2;
          piVar2[0xb] = -(*(int *)(*piVar2 + 0xc) / 2);
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < *(int *)this + 1);
    }
    iVar3 = *(int *)((int)this + 0xc) - *(int *)(*(int *)((int)this + 0x30) + 0xc) * *(int *)this;
  }
  else {
    iVar7 = ((*(int *)((int)this + 0xc) / 2 + *(int *)((int)this + 4)) - *(int *)(iVar4 + 0xc) / 2)
            + param_1;
    *(int *)((int)this + 0xac) = iVar7;
    *(int *)((int)this + 0xa8) = -(*(int *)(iVar4 + 0x10) / 2);
    iVar6 = 0;
    iVar5 = (iVar7 - iVar5 / 2) + -1;
    if (0 < iVar3) {
      piVar2 = (int *)((int)this + 0x4c);
      do {
        if (*piVar2 == 0) {
          piVar2[0x11] = iVar5;
          piVar2[0xb] = 0;
        }
        else {
          piVar2[0x11] = iVar5 - *(int *)(*piVar2 + 0xc) / 2;
          piVar2[0xb] = -(*(int *)(*piVar2 + 0x10) / 2);
        }
        iVar6 = iVar6 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar6 < *(int *)this + 1);
    }
    iVar3 = *(int *)((int)this + 0x10) - *(int *)(*(int *)((int)this + 0x30) + 0x10) * *(int *)this;
  }
  *(double *)((int)this + 0x70) = (double)iVar3 / (double)*(int *)((int)this + 0xcc);
  FUN_004eb910(this);
  return;
#undef local_4
}
