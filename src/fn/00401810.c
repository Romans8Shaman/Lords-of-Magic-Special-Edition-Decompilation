/* Rebuilt from lomse.exe FUN_00401810 @ 0x00401810 (472 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005aef10 (*(int *)0x005aef10)
#define DAT_005af0bc (*(int *)0x005af0bc)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00421960 ((int (__thiscall *)(void *))0x00421960)
#define FUN_004a8a50 ((int (__thiscall *)(void *, int, int))0x004a8a50)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)

#define LOM_SELF_00401810 1
void * __stdcall rb_00401810(void *param_1,undefined4 unused_stack_4,undefined4 unused_stack_8)

{
  uint uVar1;
  int iVar2;
  void *this;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_c;
#define local_c (*(_t_local_c *)(_fr + 0x4))
  
  this = param_1;
  iVar2 = DAT_005ae98c;
  local_c = (void *)0x0;
  pvVar3 = local_c;
  iVar7 = DAT_005ae998;
  do {
    if (iVar2 < iVar7) {
      return pvVar3;
    }
    local_c = (void *)FUN_004f6000(&DAT_005ae974,iVar7);
    if (local_c != (void *)0x0) {
      if (*(int *)((int)local_c + 4) == 0) {
        if (*(int *)((int)this + 0x48) != *(int *)((int)local_c + 0x48)) {
          iVar4 = FUN_00407d50((int)local_c);
          if (iVar4 == 0) {
            iVar4 = FUN_00506110(this,(int)local_c);
            if (iVar4 != 0) {
              uVar1 = *(uint *)((int)this + 0x54);
              iVar4 = *(int *)((int)local_c + 0x1c);
              iVar6 = *(int *)((int)this + 0x1c);
              if ((uVar1 & 0x100000) == 0) {
                if (((uVar1 & 0x40000) == 0) || ((uVar1 & 0x80000) == 0)) {
                  if ((uVar1 & 0x40000) == 0) {
                    if ((uVar1 & 0x80000) != 0) {
                      if (DAT_005af0bc == 0) {
                        FUN_004c6660(&DAT_005aef04);
                      }
                      if ((((-1 < iVar6) && (-1 < iVar4)) && (iVar6 < DAT_005aef10)) &&
                         (iVar4 < DAT_005aef10)) {
                        bVar8 = *(short *)(DAT_005aef04 + 4 + iVar6 * 6) ==
                                *(short *)(DAT_005aef04 + 4 + iVar4 * 6);
                        goto LAB_00401959;
                      }
                    }
                  }
                  else {
                    if (DAT_005af0bc == 0) {
                      FUN_004c6660(&DAT_005aef04);
                    }
                    if (((-1 < iVar6) && (-1 < iVar4)) &&
                       ((iVar6 < DAT_005aef10 && (iVar4 < DAT_005aef10)))) {
                      bVar8 = *(short *)(DAT_005aef04 + 2 + iVar6 * 6) ==
                              *(short *)(DAT_005aef04 + 2 + iVar4 * 6);
                      goto LAB_00401959;
                    }
                  }
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
              }
              else {
                bVar8 = true;
              }
LAB_00401959:
              if (bVar8) {
                if (pvVar3 == (void *)0x0) {
                  param_1 = (void *)FUN_00421960(this);
                  pvVar3 = local_c;
                }
                else {
                  pvVar5 = (void *)FUN_00421960(this);
                  if ((int)param_1 < (int)pvVar5) {
LAB_004019c1:
                    param_1 = pvVar5;
                    pvVar3 = local_c;
                  }
                  else if (pvVar5 == param_1) {
                    iVar4 = FUN_004a8a50(&DAT_005ae958,*(int *)((int)this + 0x1c),
                                         *(int *)((int)local_c + 0x1c));
                    iVar6 = FUN_004a8a50(&DAT_005ae958,*(int *)((int)pvVar3 + 0x1c),
                                         *(int *)((int)local_c + 0x1c));
                    if (iVar4 < iVar6) {
                      local_c = this;
                      goto LAB_004019c1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_c = pvVar3;
    iVar7 = iVar7 + 1;
    pvVar3 = local_c;
  } while( true );
#undef local_c
}
