/* Rebuilt from lomse.exe op_can_flank_attack_q @ 0x00469760 (291 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00406e10 ((int (__thiscall *)(void *, int))0x00406e10)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00421840 ((undefined4 (__fastcall *)(void *))0x00421840)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00469760 1
void __cdecl rb_00469760(void *vm)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  iVar2 = FUN_00406e10(&DAT_005ae958,DAT_005577c8);
  iVar1 = DAT_005ae98c;
  iStack_8 = 0;
  iStack_4 = 0;
  iVar4 = 0;
  iVar5 = 0;
  iVar7 = DAT_005ae998;
  if (DAT_005ae998 <= DAT_005ae98c) {
    do {
      pvVar3 = (void *)FUN_004f6000(&DAT_005ae974,iVar7);
      if ((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 4) == 0)) {
        iVar4 = FUN_00407d50((int)pvVar3);
        if (iVar4 == 0) {
          iVar4 = FUN_00420620((int)pvVar3);
          if ((iVar4 == 0) && (*(int *)((int)pvVar3 + 0x48) == DAT_005577c8)) {
            iVar4 = FUN_00421840(pvVar3);
            if (iVar2 < iVar4) {
              iStack_8 = iStack_8 + 1;
            }
            iStack_4 = iStack_4 + 1;
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar1);
    iVar4 = iStack_8;
    iVar5 = iStack_4;
  }
  if (iVar5 < 6) {
    uVar6 = 0;
  }
  else {
    if ((iVar4 * 100) / iVar5 < 0x1a) {
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar4 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar4;
        iVar1 = *(int *)((int)vm + 0x50);
        *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = 0;
        return;
      }
      goto LAB_0046985e;
    }
    uVar6 = 0xffffffff;
  }
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar4 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar4;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar6;
    return;
  }
LAB_0046985e:
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef iStack_8
#undef iStack_4
}
