/* Rebuilt from lomse.exe FUN_00531c70 @ 0x00531c70 (535 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae970 (*(int *)0x005ae970)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00531c70 1
void __thiscall rb_00531c70(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  iVar5 = *(int *)((int)this + 0x18);
  if (iVar5 != 0) {
    iVar7 = iVar5;
    for (iVar3 = *(int *)(iVar5 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar7 = iVar3;
    }
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)((int)this + 0x1c);
    *(int *)((int)this + 0x1c) = iVar5;
  }
  iVar5 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      if (*(int *)(*(int *)((int)this + 4) + iVar5 * 4) == 0x7fffffff) {
        *(undefined4 *)(*(int *)this + iVar5 * 4) = 0x7fffffff;
      }
      else {
        *(undefined4 *)(*(int *)this + iVar5 * 4) = 0x7ffffffe;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 8));
  }
  iVar5 = param_1 * 4;
  *(undefined4 *)(*(int *)this + iVar5) = 0;
  piVar6 = *(int **)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)Ordinal_401(8,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  }
  else {
    *(int *)((int)this + 0x1c) = piVar6[1];
    piVar6[1] = 0;
  }
  if (piVar6 != (int *)0x0) {
    *piVar6 = param_1;
    if ((*(int **)((int)this + 0x10) == (int *)0x0) ||
       (*(int *)(iVar5 + *(int *)this) < *(int *)(*(int *)this + **(int **)((int)this + 0x10) * 4)))
    {
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x18);
    }
    if (*(int *)((int)this + 0x10) != 0) {
      do {
        piVar2 = *(int **)((int)this + 0x10);
        if (*(int *)(iVar5 + *(int *)this) <= *(int *)(*(int *)this + *piVar2 * 4)) break;
        *(int **)((int)this + 0x14) = piVar2;
        iVar7 = piVar2[1];
        *(int *)((int)this + 0x10) = iVar7;
      } while (iVar7 != 0);
    }
    if (*(int *)((int)this + 0x14) == 0) {
      *(int **)((int)this + 0x18) = piVar6;
    }
    else {
      *(int **)(*(int *)((int)this + 0x14) + 4) = piVar6;
    }
    piVar6[1] = *(int *)((int)this + 0x10);
    *(int **)((int)this + 0x10) = piVar6;
  }
  do {
    piVar6 = *(int **)((int)this + 0x18);
    if (piVar6 == (int *)0x0) {
      return;
    }
    *(int *)((int)this + 0x18) = piVar6[1];
    iVar5 = *piVar6;
    if ((*(int **)((int)this + 0x10) == piVar6) || (*(int **)((int)this + 0x14) == piVar6)) {
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    piVar6[1] = *(int *)((int)this + 0x1c);
    *(int **)((int)this + 0x1c) = piVar6;
    iVar7 = iVar5 << 5;
    iStack_4 = 8;
    do {
      iVar3 = *(int *)(DAT_005ae970 + iVar7);
      if (iVar3 != iVar5) {
        iVar4 = *(int *)this;
        iVar1 = iVar3 * 4;
        if (*(int *)(iVar1 + iVar4) == 0x7ffffffe) {
          *(int *)(iVar1 + iVar4) =
               *(int *)(iVar4 + iVar5 * 4) + *(int *)(*(int *)((int)this + 4) + iVar1);
          piVar6 = *(int **)((int)this + 0x1c);
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)Ordinal_401(8,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          }
          else {
            *(int *)((int)this + 0x1c) = piVar6[1];
            piVar6[1] = 0;
          }
          if (piVar6 != (int *)0x0) {
            *piVar6 = iVar3;
            if ((*(int **)((int)this + 0x10) == (int *)0x0) ||
               (*(int *)(iVar1 + *(int *)this) <
                *(int *)(*(int *)this + **(int **)((int)this + 0x10) * 4))) {
              *(undefined4 *)((int)this + 0x14) = 0;
              *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x18);
            }
            if (*(int *)((int)this + 0x10) != 0) {
              do {
                piVar2 = *(int **)((int)this + 0x10);
                if (*(int *)(iVar1 + *(int *)this) <= *(int *)(*(int *)this + *piVar2 * 4)) break;
                *(int **)((int)this + 0x14) = piVar2;
                iVar3 = piVar2[1];
                *(int *)((int)this + 0x10) = iVar3;
              } while (iVar3 != 0);
            }
            if (*(int *)((int)this + 0x14) == 0) {
              *(int **)((int)this + 0x18) = piVar6;
            }
            else {
              *(int **)(*(int *)((int)this + 0x14) + 4) = piVar6;
            }
            piVar6[1] = *(int *)((int)this + 0x10);
            *(int **)((int)this + 0x10) = piVar6;
          }
        }
      }
      iVar7 = iVar7 + 4;
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
  } while( true );
#undef iStack_4
}
