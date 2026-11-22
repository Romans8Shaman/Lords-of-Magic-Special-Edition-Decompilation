/* Rebuilt from lomse.exe op_isonlywizardleft_q @ 0x004696a0 (192 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_004696a0 1
void __cdecl rb_004696a0(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  iVar3 = DAT_005ae98c;
  iStack_4 = 0;
  for (iVar4 = DAT_005ae998; iVar4 <= iVar3; iVar4 = iVar4 + 1) {
    iVar1 = FUN_004f6000(&DAT_005ae974,iVar4);
    if ((((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0)) && (iVar2 = FUN_00407d50(iVar1), iVar2 == 0))
       && (((iVar2 = FUN_00420620(iVar1), iVar2 == 0 && (*(int *)(iVar1 + 0x48) == DAT_005577c8)) &&
           (iVar1 = FUN_00525fc0((int *)(iVar1 + 0xc4)), iVar1 == 0)))) {
      iStack_4 = iStack_4 + 1;
    }
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)vm + 0x50);
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
  *(int *)(iVar4 + 4 + iVar3 * 8) = iStack_4;
  return;
#undef iStack_4
}
