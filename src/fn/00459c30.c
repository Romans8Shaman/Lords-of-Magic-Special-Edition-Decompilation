/* Rebuilt from lomse.exe op_preparedefendingcity @ 0x00459c30 (533 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005ae918 (*(int *)0x005ae918)
#define DAT_005ae91c (*(undefined1 *)0x005ae91c)
#define DAT_005ae924 (*(int *)0x005ae924)
#define DAT_005ae928 (*(int *)0x005ae928)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_0045a1c0 ((undefined4 (__cdecl *)(int, undefined4, int *, int *))0x0045a1c0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_004b02a0 ((undefined4 (__fastcall *)(int *))0x004b02a0)
#define FUN_004c2330 ((int (__fastcall *)(int))0x004c2330)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00459c30 1
void __cdecl rb_00459c30(void *vm)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_24;
  typedef int _t_iStack_20;
  typedef int _t_iStack_1c;
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef int _t_iStack_10;
  typedef int _t_iStack_c;
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define iStack_24 (*(_t_iStack_24 *)(_fr + 0x4))
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x8))
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0xc))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x10))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x14))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x18))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x1c))
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x20))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x24))
  
  if (0 < DAT_005ae918) {
    switch(DAT_005ae91c) {
    case 0:
      iStack_18 = DAT_005ae924;
      iVar7 = DAT_005ae924 + -3;
      iStack_14 = DAT_005ae928 + 5;
      iVar5 = DAT_005ae928 + 1;
      iStack_20 = DAT_005ae924 + 3;
      iStack_24 = iVar5;
      break;
    default:
      iVar5 = iStack_4;
      iVar7 = iStack_4;
      break;
    case 2:
      iStack_18 = DAT_005ae924 + -5;
      iVar7 = DAT_005ae924 + -1;
      iStack_14 = DAT_005ae928;
      iVar5 = DAT_005ae928 + -3;
      iStack_24 = DAT_005ae928 + 3;
      iStack_20 = iVar7;
      break;
    case 4:
      iStack_18 = DAT_005ae924;
      iVar7 = DAT_005ae924 + -3;
      iStack_14 = DAT_005ae928 + -5;
      iVar5 = DAT_005ae928 + -1;
      iStack_24 = iVar5;
      iStack_20 = DAT_005ae924 + 3;
      break;
    case 6:
      iStack_18 = DAT_005ae924 + 5;
      iVar7 = DAT_005ae924 + 1;
      iStack_14 = DAT_005ae928;
      iVar5 = DAT_005ae928 + -3;
      iStack_24 = DAT_005ae928 + 3;
      iStack_20 = iVar7;
    }
    iStack_1c = 0;
    iStack_10 = 0;
    iStack_4 = DAT_005ae98c;
    iVar6 = DAT_005ae998;
    if (DAT_005ae998 <= DAT_005ae98c) {
      do {
        piVar1 = (int *)FUN_004f6000(&DAT_005ae974,iVar6);
        if (((piVar1 != (int *)0x0) && (piVar1[1] == 0)) && (piVar1[0x12] == DAT_005aadb0)) {
          if (((iStack_1c < 2) && (iVar2 = FUN_004205e0((int)piVar1), iVar2 != 0)) &&
             ((iVar2 = FUN_004c2330((int)piVar1), iVar2 < 1 &&
              (iVar2 = FUN_004b02a0(piVar1 + 0x157), iVar2 == 0)))) {
            if (iStack_1c == 0) {
              iVar2 = iVar7;
              iVar4 = iVar5;
LAB_004580b3:
              puVar3 = FUN_004c6fc0();
              iVar4 = FUN_004a51c0(puVar3,iVar2,iVar4);
              iVar2 = piVar1[7];
              puVar3 = FUN_004c6fc0();
              FUN_004a6dd0(puVar3,piVar1,iVar2,iVar4);
            }
            else if (iStack_1c == 1) {
              iVar2 = iStack_20;
              iVar4 = iStack_24;
              goto LAB_004580b3;
            }
            iStack_1c = iStack_1c + 1;
          }
          else {
            iStack_8 = iStack_18;
            iStack_c = iStack_14;
            FUN_0045a1c0(iStack_10,piVar1[0x11],&iStack_8,&iStack_c);
            iVar2 = iStack_8;
            iVar4 = iStack_c;
            puVar3 = FUN_004c6fc0();
            iVar4 = FUN_004a51c0(puVar3,iVar2,iVar4);
            iVar2 = piVar1[7];
            puVar3 = FUN_004c6fc0();
            FUN_004a6dd0(puVar3,piVar1,iVar2,iVar4);
            iStack_10 = iStack_10 + 1;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 <= iStack_4);
    }
  }
  return;
#undef iStack_24
#undef iStack_20
#undef iStack_1c
#undef iStack_18
#undef iStack_14
#undef iStack_10
#undef iStack_c
#undef iStack_8
#undef iStack_4
}
