/* Rebuilt from lomse.exe FUN_004c62a0 @ 0x004c62a0 (278 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c60f0 ((uint (__thiscall *)(void *, int, int))0x004c60f0)

#define LOM_SELF_004c62a0 1
int __thiscall rb_004c62a0(void *this,int *param_1,undefined1 param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = 1;
  iVar3 = (int)param_1 * 6;
  *(undefined1 *)(*(int *)this + iVar3) = param_2;
  *(byte *)(*(int *)this + 1 + iVar3) = *(byte *)(*(int *)this + 1 + iVar3) & 1 | 2;
  piVar6 = param_1;
  param_1 = *(int **)((int)this + 0x1b4);
  do {
    piVar7 = (int *)0xffffffff;
    iVar3 = 0;
    do {
      uVar4 = FUN_004c60f0(this,(int)piVar6,iVar3);
      if (uVar4 != 0) {
        piVar5 = (int *)(uVar4 + (int)piVar6);
        if (piVar7 == (int *)0xffffffff) {
          bVar2 = *(byte *)(*(int *)this + 1 + (int)piVar5 * 6);
          if (((bVar2 & 4) != 0) || ((bVar2 & 2) == 0)) {
            piVar7 = piVar5;
          }
        }
        else if ((*(byte *)(*(int *)this + 1 + (int)piVar5 * 6) & 6) == 0) {
          *param_1 = (int)piVar5;
          pbVar1 = (byte *)(*(int *)this + 1 + (int)piVar5 * 6);
          param_1 = param_1 + 1;
          *pbVar1 = *pbVar1 | 4;
        }
      }
      iVar3 = iVar3 + 2;
    } while (iVar3 < 8);
    piVar6 = piVar7;
    if (piVar7 == (int *)0xffffffff) {
      piVar6 = *(int **)((int)this + 0x1b4);
      piVar7 = piVar6;
      for (; piVar6 < param_1; piVar6 = piVar6 + 1) {
        if ((*(byte *)(*(int *)this + 1 + *piVar6 * 6) & 4) != 0) {
          *piVar7 = *piVar6;
          piVar7 = piVar7 + 1;
        }
      }
      if (piVar7 == *(int **)((int)this + 0x1b4)) {
        return local_4;
      }
      piVar6 = (int *)**(int **)((int)this + 0x1b4);
      param_1 = piVar7;
    }
    iVar3 = (int)piVar6 * 6;
    *(byte *)(*(int *)this + 1 + iVar3) = *(byte *)(*(int *)this + 1 + iVar3) & 1 | 2;
    *(undefined1 *)(*(int *)this + iVar3) = param_2;
    local_4 = local_4 + 1;
  } while( true );
#undef local_4
}
