/* Rebuilt from lomse.exe op_combat_controltarget @ 0x004e97e0 (333 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_005228b0 ((int (__thiscall *)(void *, undefined4, undefined4))0x005228b0)

#define LOM_SELF_004e97e0 1
void __cdecl rb_004e97e0(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  iVar2 = FUN_0041be40(vm,&iStack_8);
  if (iVar2 != 0) {
    iStack_4 = DAT_005ae98c;
    iVar2 = DAT_005ae98c;
    iVar5 = DAT_005ae998;
    if (DAT_005ae998 <= DAT_005ae98c) {
      do {
        iVar3 = FUN_004f6000(&DAT_005ae974,iVar5);
        if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) {
          iVar4 = FUN_00407d50(iVar3);
          if (iVar4 == 0) {
            iVar2 = FUN_005228b0((void *)(iStack_8 + 0xc4),*(undefined4 *)(iStack_8 + 0x28),0);
            iVar4 = FUN_005228b0((int *)(iVar3 + 0xc4),*(undefined4 *)(iVar3 + 0x28),0);
            if (1 < iVar2 - iVar4) {
              iVar2 = FUN_00521e00((int *)(iVar3 + 0xc4));
              iVar2 = *(int *)(iVar2 + 0x164);
              if (((5 < iVar2) && (iVar2 == 9)) || (3 < iVar2)) {
                uVar1 = *(undefined4 *)(iVar3 + 0x28);
                if (*(int *)((int)vm + 0x54) == 0) {
                  *(undefined4 *)((int)vm + 0x90) = 3;
                  FUN_004d4550(vm);
                  *(undefined4 *)((int)vm + 0x90) = 0;
                  *(undefined4 *)((int)vm + 0xa4) = 0;
                  return;
                }
                iVar2 = *(int *)((int)vm + 0x50);
                iVar5 = *(int *)((int)vm + 0x54) + -1;
                *(int *)((int)vm + 0x54) = iVar5;
                *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
                *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar1;
                return;
              }
            }
            iVar2 = iStack_4;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= iVar2);
    }
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar5 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar5;
      iVar2 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = 0xffffffff;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
#undef iStack_8
#undef iStack_4
}
