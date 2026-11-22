/* Rebuilt from lomse.exe FUN_00468f70 @ 0x00468f70 (255 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00420600 ((undefined4 (__fastcall *)(int))0x00420600)
#define FUN_00468df0 ((undefined4 (__fastcall *)(int))0x00468df0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)

#define LOM_SELF_00468f70 1
int __fastcall rb_00468f70(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef int _t_iStack_10;
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x0))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x4))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x8))
  
  iVar7 = DAT_005ae998;
  iVar1 = DAT_005ae98c;
  iVar2 = FUN_00420600((int)param_1);
  iStack_18 = -1;
  do {
    if (iVar1 < iVar7) {
      return iStack_18;
    }
    iVar3 = FUN_004f6000(&DAT_005ae974,iVar7);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 4) == 0) {
        iVar4 = FUN_00468df0(iVar3);
        if (*(int *)(iVar3 + 0x48) != *(int *)((int)param_1 + 0x48)) {
          if (-1 < iVar4) {
            if (iVar4 < 5) {
              iVar4 = FUN_00407d50(iVar3);
              if (iVar4 == 0) {
                iVar4 = FUN_00506110(param_1,iVar3);
                if (iVar4 != 0) {
                  iVar4 = FUN_004a8960(&DAT_005ae958,*(int *)(iVar3 + 0x1c),
                                       *(int *)((int)param_1 + 0x1c));
                  if (iVar4 <= iVar2) {
                    if (iStack_18 == -1) {
                      iStack_18 = iVar7;
                      iStack_14 = iVar3;
                      iStack_10 = iVar4;
                    }
                    else {
                      iVar5 = FUN_00468df0(iVar3);
                      iVar6 = FUN_00468df0(iStack_14);
                      if (iVar5 < iVar6) {
LAB_00469046:
                        iStack_18 = iVar7;
                        iStack_14 = iVar3;
                        iStack_10 = iVar4;
                      }
                      else if (iVar5 == iVar6) {
                        if (iVar4 < iStack_10) goto LAB_00469046;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
#undef iStack_18
#undef iStack_14
#undef iStack_10
}
