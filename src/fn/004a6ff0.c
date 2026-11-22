/* Rebuilt from lomse.exe FUN_004a6ff0 @ 0x004a6ff0 (559 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005aef10 (*(int *)0x005aef10)
#define DAT_005af0bc (*(int *)0x005af0bc)
#define FUN_004a4c50 ((uint (__thiscall *)(void *, int))0x004a4c50)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004acea0 ((undefined4 (__thiscall *)(void *, int, int))0x004acea0)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)

#define LOM_SELF_004a6ff0 1
int __thiscall rb_004a6ff0(void *this,int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar1 = param_3;
  local_8 = 99999;
  local_4 = -1;
  uVar2 = FUN_004a4c50(this,param_1);
  if (((param_2 & uVar2) == 0) || (*(int *)(*(int *)((int)this + 100) + param_1 * 8) != 0))
  goto LAB_004a70cd;
  if ((param_2 & 0x100000) == 0) {
    if (((param_2 & 0x40000) == 0) || ((param_2 & 0x80000) == 0)) {
      if ((param_2 & 0x40000) == 0) {
        if ((param_2 & 0x80000) == 0) goto LAB_004a70bb;
        uVar2 = FUN_004acea0(&DAT_005aef04,param_1,param_3);
      }
      else {
        if (DAT_005af0bc == 0) {
          FUN_004c6660(&DAT_005aef04);
        }
        if ((((param_1 < 0) || (param_3 < 0)) || (DAT_005aef10 <= param_1)) ||
           (DAT_005aef10 <= param_3)) {
LAB_004a70bb:
          uVar2 = 0;
        }
        else {
          uVar2 = (uint)(*(short *)(DAT_005aef04 + 2 + param_1 * 6) ==
                        *(short *)(DAT_005aef04 + 2 + param_3 * 6));
        }
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    return param_1;
  }
LAB_004a70cd:
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    param_3 = 0;
    do {
      if ((*(int *)(*(int *)((int)this + 100) + iVar4 * 8) == 0) &&
         (uVar2 = FUN_004a4c50(this,iVar4), (param_2 & uVar2) != 0)) {
        if ((param_2 & 0x100000) == 0) {
          if (((param_2 & 0x40000) == 0) || ((param_2 & 0x80000) == 0)) {
            if ((param_2 & 0x40000) == 0) {
              if ((param_2 & 0x80000) != 0) {
                if (DAT_005af0bc == 0) {
                  FUN_004c6660(&DAT_005aef04);
                }
                if ((((-1 < iVar4) && (-1 < iVar1)) && (iVar4 < DAT_005aef10)) &&
                   (iVar1 < DAT_005aef10)) {
                  bVar5 = *(short *)(DAT_005aef04 + 4 + param_3) ==
                          *(short *)(DAT_005aef04 + 4 + iVar1 * 6);
                  goto LAB_004a71d4;
                }
              }
            }
            else {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if (((-1 < iVar4) && (-1 < iVar1)) &&
                 ((iVar4 < DAT_005aef10 && (iVar1 < DAT_005aef10)))) {
                bVar5 = *(short *)(DAT_005aef04 + 2 + param_3) ==
                        *(short *)(DAT_005aef04 + 2 + iVar1 * 6);
                goto LAB_004a71d4;
              }
            }
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
        }
        else {
          bVar5 = true;
        }
LAB_004a71d4:
        if ((bVar5) && (iVar3 = FUN_004a8960(this,param_1,iVar4), iVar3 < local_8)) {
          local_8 = iVar3;
          local_4 = iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 6;
    } while (iVar4 < *(int *)((int)this + 0x68));
  }
  return local_4;
#undef local_8
#undef local_4
}
